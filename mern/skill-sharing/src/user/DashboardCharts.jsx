import React, { useState } from 'react'
import { Chart as ChartJS, ArcElement, Tooltip, Legend } from 'chart.js';

export const DashboardCharts = () => {

    ChartJS.register(ArcElement, Tooltip, Legend);


    const [data, setdata] = useState({
        labels: ["NEW JOINED", "ACTIVE", "BLOCKED", "BANNED"],
        datasets
    })

    return (
      <>

      </>
  )
}
