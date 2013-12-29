/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.1.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-13 by Raw Material Software Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_F1B68972952BE4__
#define __JUCE_HEADER_F1B68972952BE4__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
#include "PluginParameters.h"
#include "TeragonGuiComponents.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class PluginEditor  : public AudioProcessorEditor
{
public:
    //==============================================================================
    PluginEditor (AudioProcessor *owner, teragon::ConcurrentParameterSet &p, teragon::ResourceCache *r);
    ~PluginEditor();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();

    // Binary resources:
    static const char* background_png;
    static const int background_pngSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    teragon::ConcurrentParameterSet &parameters;
    teragon::ResourceCache *resources;
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<teragon::ImageKnobLarge> frequencyKnob;
    ScopedPointer<teragon::ImageKnobSmall> resonanceKnob;
    ScopedPointer<teragon::ImageKnobSmall> valleySizeKnob;
    ScopedPointer<teragon::StatusBar> statusBar;
    ScopedPointer<teragon::ParameterLabel> versionLabel;
    Image cachedImage_background_png;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PluginEditor)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_F1B68972952BE4__
