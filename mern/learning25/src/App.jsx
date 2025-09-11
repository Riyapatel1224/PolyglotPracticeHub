import { Component, useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import Content from './Components/Content'
import { Header } from './Components/Header'
import { Footer } from './Components/Footer'
import { MapDemo1 } from './Components/MapDemo1'
import { MapDemo2 } from './Components/MapDemo2'
import { MapDemo3 } from './Components/MapDemo3'
import { Route, Routes } from 'react-router-dom'
import { Navbar } from "./Components/Navbar.jsx";
import { Error404 } from "./Components/Error404.jsx";
import { Home } from "./Components/hotstarEgOfRouter/Home.jsx";
import { Movies } from "./Components/hotstarEgOfRouter/Movies.jsx";
import { Series } from "./Components/hotstarEgOfRouter/Series.jsx";
import { PlayContent } from './Components/hotstarEgOfRouter/PlayContent.jsx'
import { UseStateDemo1 } from './Components/UseStateDemo1.jsx'
import { UseStateDemo2Loader } from './Components/UseStateDemo2Loader.jsx'
import { UseStateAddArray } from './Components/UseStateAddArray.jsx'
import { InputDemo1 } from './Components/InputDemo1.jsx'
import { UseForm4 } from './Form/useForm4.jsx'
// import { Form } from './Components/FormFinalPractice/Form.jsx'
import { APIDemo1 } from './Components/API/APIDemo1.jsx'
import { APIDemo11 } from './Components/API/APIDemo11.jsx'
import { APIPost } from './Components/APIPost.jsx'
import { APIDemo111 } from './Components/API/APIDemo111.jsx'
import { UseRefDemo1 } from './Components/UseRefDemo1.jsx'
import { UseRefDemo2 } from './Components/UseRefDemo2.jsx'
import { UseRefDemo3 } from './Components/UseRefDemo3.jsx'


// import './App.css'

function App() {


  return (
    <div>
      {/* <Header></Header> */}
      {/* <Footer></Footer> */}
      {/* <Content></Content> */}
      {/* <MapDemo1></MapDemo1> */}
      {/* <MapDemo2></MapDemo2> */}
      {/* <MapDemo3></MapDemo3> */}
      <Navbar></Navbar>
      <Routes>
        <Route path='/' element={<Home />}> </Route>
        <Route path='/movies' element={<Movies />}> </Route>
        <Route path='/series' element={<Series />}> </Route>
        <Route path='/playing/:id' element={<PlayContent />}></Route>
        <Route path='/*' element={<Error404 />}> </Route>
        <Route path='/UseStateDemo1' element={<UseStateDemo1 />}></Route>
        <Route path='/UseStateDemo2Loader' element={<UseStateDemo2Loader />}></Route>
        <Route path='/UseStateAddArray' element={<UseStateAddArray />}></Route>
        <Route path='/InputDemo1' element={<InputDemo1 />}></Route>
        <Route path='/UseForm4' element={<UseForm4 />}></Route>
        {/* <Route path='/Form' element={<Form />}></Route> */}
        <Route path='/APIDemo111' element={<APIDemo111 />}></Route>
        <Route path='/UseRefDemo1' element={<UseRefDemo1 />}></Route>
        <Route path='/UseRefDemo2' element={<UseRefDemo2 />}></Route>
        <Route path='/UseRefDemo3' element={<UseRefDemo3 />}></Route>
        
      </Routes>

    </div>
  )
}

export default App;
