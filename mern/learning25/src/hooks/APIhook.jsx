import axios from "axios";
import { useEffect, useState } from "react";

export const useFetchData = (url) => {
    const [data, setdata] = useState({});
    const [isLoading, setisLoading] = useState(false);

    const getAPIcall = async () => {
        setisLoading(true);
        const res = await axios.get(url);
        setdata(res.data);
        setisLoading(false);


    };

    useEffect(() => {
        getAPIcall();
    }, []);

    return data, isLoading;
};