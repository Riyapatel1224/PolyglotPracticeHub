import { Height } from '@mui/icons-material'
import { Box, CssBaseline, Grid, Typography } from '@mui/material'
import React from 'react'
import { DashboardCharts } from './DashboardCharts'
import { LineChart } from './LineChart'

export const UserDashboard = () => {

  const cardGridStyle = { backgroundColor: "orange", height: "170px" }


  return (
    <Box>

      <Typography variant='h5'>USER DASHBAORD</Typography>
      <CssBaseline></CssBaseline>

      <Grid container spacing={2}>

        <Grid
          size={{ xs: 12, md: 3, sm: 12, lg: 3 }}
          sx={{ ...cardGridStyle, backgroundColor: "#6aa3f7" }}
        ></Grid>

        <Grid
          size={{ xs: 12, md: 3, sm: 12, lg: 3 }}
          sx={{ ...cardGridStyle, backgroundColor: "#71d8bb" }}
        ></Grid>

        <Grid
          size={{ xs: 12, md: 3, sm: 12, lg: 3 }}
          sx={{ ...cardGridStyle, backgroundColor: "#f5c16c" }}
        ></Grid>

        <Grid
          size={{ xs: 12, md: 3, sm: 12, lg: 3 }}
          sx={{ ...cardGridStyle, backgroundColor: "#ed7185" }}
        ></Grid>

        <Grid size={{ xs: 12, md: 9, sm: 12, lg: 9 }}
          sx={{ ...cardGridStyle, backgroundColor: "white", color: "black", border: "1px solid black", height: "350px" }}
        >
          <LineChart/>

        </Grid>
        <Grid size={{ xs: 12, md: 3, sm: 12, lg: 3 }}
          sx={{ ...cardGridStyle, backgroundColor: "white", color: "black", border: "1px solid black", height: "350px" }}
        >
          <DashboardCharts />
        </Grid>

      </Grid>

      

    </Box>
  )
}
