#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    addAndMakeVisible(toggleButton);
    setSize (600, 400);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setFont (juce::Font (48.0f));
    g.setColour (juce::Colours::red);
    g.drawText ("Hello, whats up student!", getLocalBounds(), juce::Justification::centred, true);
}//stopped following tutorial from 34:15 

void MainComponent::resized()
{
    // This is called when the MainComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
    toggleButton.setBounds(10, 10, 30, 30);

}
