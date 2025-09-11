import React from 'react'
import { Link } from 'react-router-dom';

export const Series = () => {
  const seriesList = [
    {
      id: 101,
      name: "money heist",
      ratings: 9,
    },
    {
      id: 102,
      name: "Braking BAD",
      ratings: 10,
    },
    {
      id: 103,
      name: "Narcos",
      ratings: 9.5,
    },
    {
      id: 104,
      name: "Friends",
      ratings: 8,
    },
  ];
  return (
    <div className="container">
      <h1>SERIES</h1>
      <div className="row">
        <div className="col">
          {seriesList.map((series) => {
            return (
              <div class="card" style={{ width: "18rem" }}>
                <div class="card-body">
                  <h5 class="card-title">{series.name}</h5>
                  <p className="card-text">Ratings:{series.ratings}</p>
                  <Link to={`/playing/${series.id}`} class="btn btn-primary">
                    PLAY
                  </Link>
                </div>
              </div>
            );
            
          })}
        </div>
      </div>
    </div>
  )
}
