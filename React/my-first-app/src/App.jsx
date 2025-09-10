// import { useState } from 'react'
// import reactLogo from './assets/react.svg'
// import viteLogo from '/vite.svg'
import './App.css'
import { Content } from './Components/Content'
import { Header } from './Components/Header'
import { Footer } from './Components/Footer'
import { MapDemo1 } from './Components/MapDemo1'
import { MapDemo2 } from './Components/MapDemo2'
import { MapDemo3 } from './Components/MapDemo3'
import { Navbar } from './Components/Navbar'
import { Home } from './Components/StreamingApp/Home'
import { Movies } from './Components/StreamingApp/Movies'
import { Shows } from './Components/StreamingApp/Shows'
import { Error404 } from './Components/Error404'
import { BrowserRouter as Router, Routes, Route } from "react-router-dom";


function App() {
  // const [count, setCount] = useState(0)

  return (
    <>
      {/* <MapDemo3></MapDemo3>
      <MapDemo2></MapDemo2>
      <MapDemo1></MapDemo1>
      <Header></Header>
      <Content></Content>
      <Footer></Footer> */}

      <Navbar></Navbar>

      <Routes>
        <Route path='/' element={<Home />}></Route>
        <Route path='/movies' element={<Movies />}></Route>
        <Route path='/shows' element={<Shows />}></Route>
        <Route path='/*' element={<Error404 />}></Route>
        
      </Routes>
      
    </>
  )
}

export default App
