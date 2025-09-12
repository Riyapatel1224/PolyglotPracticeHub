import React, { useState } from "react";
import {
  AppBar,
  Toolbar,
  Typography,
  IconButton,
  Drawer,
  List,
  ListItem,
  ListItemIcon,
  ListItemText,
  Box,
  Avatar,
  Button,
  Divider,
} from "@mui/material";
import { Link, Outlet, useLocation } from "react-router-dom";
import MenuIcon from "@mui/icons-material/Menu";
import HomeIcon from "@mui/icons-material/Home";
import PersonIcon from "@mui/icons-material/Person";
import SettingsIcon from "@mui/icons-material/Settings";
import WorkIcon from "@mui/icons-material/Work";
import LogoutIcon from "@mui/icons-material/Logout";

export const UserNavbar = () => {
  const [open, setOpen] = useState(false);
  const location = useLocation();

  const toggleDrawer = (isOpen) => () => {
    setOpen(isOpen);
  };

  const menuItems = [
    { text: "User Dashboard", icon: <HomeIcon />, path: "UserDashboard" },
    { text: "User Profile", icon: <PersonIcon />, path: "UserProfile" },
    { text: "Settings", icon: <SettingsIcon />, path: "/user/settings" },
    { text: "Projects", icon: <WorkIcon />, path: "/user/projects" },
  ];


  return (
    <Box sx={{ height: "100vh", display: "flex", flexDirection: "column" }}>
      {/* Navbar */}
      <AppBar
        position="fixed"
        sx={{
          top: 0,
          left: 0,
          right: 0,
          background: "linear-gradient(90deg, #6a11cb 0%, #2575fc 100%)",
          boxShadow: "0px 4px 12px rgba(0,0,0,0.2)",
          borderBottomLeftRadius: "14px",
          borderBottomRightRadius: "14px",
        }}
      >
        <Toolbar sx={{ minHeight: "64px !important", px: 2 }}>
          {/* Menu button */}
          <IconButton
            color="inherit"
            edge="start"
            onClick={toggleDrawer(true)}
            sx={{ mr: 2 }}
          >
            <MenuIcon />
          </IconButton>

          {/* Title */}
          <Typography
            variant="h6"
            sx={{
              fontWeight: "bold",
              flexGrow: 1,
              letterSpacing: 0.5,
              fontFamily: "Poppins, sans-serif",
            }}
          >
            User Dashboard
          </Typography>

          {/* User actions */}
          <Box sx={{ display: "flex", alignItems: "center", gap: 2 }}>
            <Avatar
              alt="User"
              src="https://i.pravatar.cc/40"
              sx={{
                width: 40,
                height: 40,
                cursor: "pointer",
                border: "2px solid white",
              }}
            />
            <Button
              color="inherit"
              startIcon={<LogoutIcon />}
              sx={{
                textTransform: "none",
                fontWeight: "bold",
                bgcolor: "rgba(255,255,255,0.2)",
                borderRadius: "20px",
                px: 2,
                "&:hover": {
                  bgcolor: "rgba(255,255,255,0.35)",
                },
              }}
            >
              Logout
            </Button>
          </Box>
        </Toolbar>
      </AppBar>

      {/* Drawer */}
      <Drawer anchor="left" open={open} onClose={toggleDrawer(false)}>
        <Box
          sx={{
            width: 260,
            display: "flex",
            flexDirection: "column",
            height: "100%",
            bgcolor: "#fafbfd",
          }}
          role="presentation"
          onClick={toggleDrawer(false)}
          onKeyDown={toggleDrawer(false)}
        >
          {/* Drawer Header */}
          <Box
            sx={{
              p: 2,
              display: "flex",
              alignItems: "center",
              gap: 2,
              bgcolor: "linear-gradient(135deg, #cfd9df 0%, #e2ebf0 100%)",
            }}
          >
            <Avatar
              alt="User"
              src="https://i.pravatar.cc/50"
              sx={{ width: 50, height: 50, border: "2px solid #1976d2" }}
            />
            <Box>
              <Typography variant="subtitle1" sx={{ fontWeight: "bold" }}>
                User
              </Typography>
              <Typography variant="body2" color="text.secondary">
                user@example.com
              </Typography>
            </Box>
          </Box>

          <Divider />

          {/* Navigation Links */}
          <List sx={{ flexGrow: 1, px: 1 }}>
            {menuItems.map((item) => {
              const active = location.pathname === item.path;
              return (
                <ListItem
                  key={item.text}
                  component={Link}
                  to={item.path}
                  sx={{
                    borderRadius: "10px",
                    my: 0.8,
                    px: 2,
                    background: active
                      ? "linear-gradient(90deg, #42a5f5 0%, #478ed1 100%)"
                      : "transparent",
                    color: active ? "white" : "inherit",
                    "&:hover": {
                      background:
                        "linear-gradient(90deg, #e3f2fd 0%, #bbdefb 100%)",
                      color: "#1976d2",
                    },
                  }}
                >
                  <ListItemIcon
                    sx={{
                      color: active ? "white" : "#1976d2",
                      minWidth: "40px",
                    }}
                  >
                    {item.icon}
                  </ListItemIcon>
                  <ListItemText
                    primary={item.text}
                    primaryTypographyProps={{
                      fontWeight: active ? "bold" : "medium",
                      fontFamily: "Poppins, sans-serif",
                    }}
                  />
                </ListItem>
              );
            })}
          </List>

          <Divider />

          {/* Drawer footer */}
          <Box sx={{ p: 2 }}>
            <Button
              variant="contained"
              fullWidth
              startIcon={<LogoutIcon />}
              sx={{
                textTransform: "none",
                borderRadius: "25px",
                bgcolor: "#1976d2",
                "&:hover": { bgcolor: "#1565c0" },
              }}
            >
              Logout
            </Button>
          </Box>
        </Box>
      </Drawer>

      {/* Page Content */}
      <Box
        component="main"
        sx={{
          flexGrow: 1,
          mt: "64px", // offset for AppBar
          p: 3,
          bgcolor: "linear-gradient(180deg, #f9fafc 0%, #f1f5f9 100%)",
          fontFamily: "Poppins, sans-serif",
        }}
      >
        <Outlet />
      </Box>
    </Box>
  );
};
