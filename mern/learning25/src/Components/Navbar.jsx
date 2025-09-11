import React from 'react'
import { Link } from 'react-router-dom'

export const Navbar = () => {
    return (
        <div>
            <nav class="navbar navbar-expand-lg navbar-dark bg-dark">
                <a class="navbar-brand" href="#">Navbar</a>
                <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
                    <span class="navbar-toggler-icon"></span>
                </button>

                <div class="collapse navbar-collapse" id="navbarSupportedContent">
                    <ul class="navbar-nav mr-auto">

                        <li class="nav-item active">
                            <Link class="nav-link" to="/movies">Movies</Link>
                        </li>

                        <li class="nav-item">
                            <Link class="nav-link" to="/series">Series</Link>
                        </li>

                        <li class="nav-item">
                            <Link class="nav-link" to="/UseStateDemo1">UseStateDemo1</Link>
                        </li>

                        <li class="nav-item">
                            <Link class="nav-link" to="/UseStateDemo2Loader">UseStateDemo2Loader</Link>
                        </li>

                        <li class="nav-item">
                            <Link class="nav-link" to="/UseStateAddArray">UseStateAddArray</Link>
                        </li>

                        <li class="nav-item">
                            <Link class="nav-link" to="/InputDemo1">Input1</Link>
                        </li>

                        <li class="nav-item">
                            <Link class="nav-link" to="/UseForm4">use Form 4</Link>
                        </li>

                        {/* <li class="nav-item">
                            <Link class="nav-link" to="/Form">Form Bus Bookings</Link>
                        </li> */}

                        <li class="nav-item">
                            <Link class="nav-link" to="/APIDemo111">API demo 1</Link>
                        </li>

                        <li class="nav-item">
                            <Link class="nav-link" to="/UseRefDemo1">Use Ref Demo1</Link>
                        </li>

                        <li class="nav-item">
                            <Link class="nav-link" to="/UseRefDemo2">Use Ref Demo2</Link>
                        </li>
                        <li class="nav-item">
                            <Link class="nav-link" to="/UseRefDemo3">Use Ref Demo3</Link>
                        </li>


                    </ul>

                </div>
            </nav>

        </div>
    )
}
