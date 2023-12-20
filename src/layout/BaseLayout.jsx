import React from 'react';
import { Outlet } from 'react-router-dom';

const BaseLayout = () => {
    return (
        <div className='sm:max-w-sm w-full m-auto min-h-screen bg-yellow-300'>
            <Outlet />
        </div>
    );
};

export default BaseLayout;