/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 4.2.0

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_F7DCD6DE88C48DE0__
#define __JUCE_HEADER_F7DCD6DE88C48DE0__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
#include "pMixAudioEngine.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class PMixPrefsPlugins  : public Component
{
public:
    //==============================================================================
    PMixPrefsPlugins (PMixAudioEngine& audioEngine);
    ~PMixPrefsPlugins();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    PMixAudioEngine& audioEngine;
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<PluginListComponent> pluginListComponent;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PMixPrefsPlugins)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_F7DCD6DE88C48DE0__
