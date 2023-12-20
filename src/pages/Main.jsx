import React from 'react';
import { useNavigate } from 'react-router-dom';

const Main = () => {
    const navigate = useNavigate();

    return (
        <div>
            Main
            <br/>
            <button onClick={()=>navigate('survey')}>Survey</button>
        </div>
    );
};

export default Main;