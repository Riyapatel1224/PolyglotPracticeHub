import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import AppRoutes from './common/router/AppRoutes'
import { Box } from '@mui/material'

// import './App.css'

function App() {
  const [count, setCount] = useState(0)

  return (
    <Box>
      <AppRoutes></AppRoutes>
   </Box>
  )
}

export default App
