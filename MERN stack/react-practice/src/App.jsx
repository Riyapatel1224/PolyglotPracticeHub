import { Header } from "./components/Header"
import { Footer } from "./components/Footer"
import { Content } from "./components/Content"

import { Map1 } from "./components/Mapping/Map1"
import { Map2 } from "./components/Mapping/Map2"
import { Map3 } from "./components/Mapping/Map3"

import { Navbar } from "./components/Navbar"
import { Error404 } from "./components/Error404"
import { Home } from "./components/OTT-Platform/Home"
import { Movies } from "./components/OTT-Platform/Movies"
import { Shows } from "./components/OTT-Platform/Shows"

import { Route, Routes } from 'react-router-dom'

import { PLayContent } from "./components/OTT-Platform/Play-Content"


function App() {
    return (
        <div>
            {/* <Header></Header> */}
            {/* <Content></Content>
            <Footer></Footer>
             */}
            
            {/* <Map1></Map1>
            <Map2></Map2>
            <Map3></Map3> */}

            <Navbar></Navbar>

            <Routes>
                <Route path='/' element={<Home />} />
                <Route path='/movies' element={<Movies />} />
                <Route path='/shows' element={<Shows />} />
                <Route path='/*' element={<Error404 />} />
                <Route path='/playing/:id' element={ <PLayContent/>} />
            </Routes>

        </div>
    )
}

export default App