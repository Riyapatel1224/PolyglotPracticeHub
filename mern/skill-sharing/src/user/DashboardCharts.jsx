import { Typography } from "@mui/material";
import React, { useState } from "react";
import { Pie } from "react-chartjs-2";
import { Chart as ChartJS, ArcElement, Tooltip, Legend } from 'chart.js';



export const DashboardCharts = () => {

    ChartJS.register(ArcElement, Tooltip, Legend);


    const [data, setdata] = useState({
        labels: ["NEW JOINED", "ACTIVE", "BLOCKED", "BANNED"],
      datasets: [
        {
          label: "# user data",
          data: [100, 1200, 120, 70],
          backgroundColor: [
            "rgba(231, 15, 61, 0.5)",
            "rgba(54, 162, 235, 0.5)",
            "rgba(234, 176, 32, 0.5)",
            "rgba(23, 234, 234, 0.5)",
          ],
          borderWidth: 1,
        }
        
        ]
    })

    return (
      <>
        <Pie data={data}></Pie>
      </>
  )
}
