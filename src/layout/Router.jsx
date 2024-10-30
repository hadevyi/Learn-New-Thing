import React from 'react';
import { BrowserRouter, Route, Routes } from 'react-router-dom';
import Main from '../pages/Main';
import Survey from '../pages/Survey';
import BaseLayout from './BaseLayout';

const Router = () => {
    return (
        <BrowserRouter>
            <Routes>
                <Route path='/' element={<BaseLayout />}>
                    <Route path='/' element={<Main/>}></Route>
                    <Route path='/survey' element={<Survey/>}></Route>
                </Route>
            </Routes>
        </BrowserRouter>
    );
};

export default Router;