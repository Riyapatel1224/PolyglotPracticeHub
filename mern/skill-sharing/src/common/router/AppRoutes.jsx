import { createBrowserRouter, RouterProvider } from "react-router-dom";
import { UserNavbar } from "../../user/UserNavbar";
import { UserProfile } from "../../user/UserProfile";
import { UserDashboard } from "../../user/UserDashboard";
import { Login } from "../auth/Login";
import { AdminNavbar } from "../../admin/AdminNavbar";


const router = createBrowserRouter([
    {
        path: "/",
        element: <Login/>
    },
    {
        path: "/user",
        element: <UserNavbar />,
        errorElement: <h1>"UserNavbar Error"</h1>,
        children: [
            {
                path: "userProfile",
                element: <UserProfile/>
            },
            {
                path: "userDashboard",
                element: <UserDashboard/>
            }

        ]

    },
    {
        path: "/admin",
        element:<AdminNavbar/>
    }
])

const AppRoutes = () => <RouterProvider router={router}></RouterProvider>
export default AppRoutes 