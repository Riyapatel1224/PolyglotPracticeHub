import React from "react";
import { Link } from "react-router-dom";

export const Navbar = () => {
    return (
        <nav className="navbar navbar-expand-lg navbar-dark bg-dark shadow w-100 py-2">
            <div className="container-fluid">
                <Link className="navbar-brand fw-bold fs-3" to="/">
                    MyApp
                </Link>
                <button
                    className="navbar-toggler"
                    type="button"
                    data-bs-toggle="collapse"
                    data-bs-target="#navbarNav"
                    aria-controls="navbarNav"
                    aria-expanded="false"
                    aria-label="Toggle navigation"
                >
                    <span className="navbar-toggler-icon"></span>
                </button>

                <div className="collapse navbar-collapse" id="navbarNav">
                    <ul className="navbar-nav ms-auto">
                        <li className="nav-item">
                            <Link className="nav-link fs-5" to="/">Home</Link>
                        </li>
                        <li className="nav-item">
                            <Link className="nav-link fs-5" to="/map">Map Demo</Link>
                        </li>
                        <li className="nav-item">
                            <Link className="nav-link fs-5" to="/about">About</Link>
                        </li>
                        <li className="nav-item">
                            <Link className="nav-link fs-5" to="/contact">Contact</Link>
                        </li>
                    </ul>
                </div>
            </div>
        </nav>

    );
};
