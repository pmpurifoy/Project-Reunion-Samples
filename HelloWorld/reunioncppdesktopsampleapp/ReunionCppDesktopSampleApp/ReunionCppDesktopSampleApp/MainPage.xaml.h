// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.

#pragma once

#pragma push_macro("GetCurrentTime")
#undef GetCurrentTime

#include "MainPage.g.h"

#pragma pop_macro("GetCurrentTime")

namespace winrt::ReunionCppDesktopSampleApp::implementation
{
    struct MainPage : MainPageT<MainPage>
    {
        MainPage();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void CallAPIButton_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::ReunionCppDesktopSampleApp::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}