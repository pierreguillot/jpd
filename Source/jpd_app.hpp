/*
 // Copyright (c) 2016 Pierre Guillot.
 // For information on usage and redistribution, and for a DISCLAIMER OF ALL
 // WARRANTIES, see the file, "LICENSE.txt," in this distribution.
*/

#ifndef JPD_APP_INCLUDE_HPP
#define JPD_APP_INCLUDE_HPP

namespace jpd
{
    // ================================================================================ //
    //                                      JPD APP                                     //
    // ================================================================================ //
    
    //! @brief The main application.
    class app : public juce::JUCEApplication
    {
    public:
        
        //! @brief The constructor.
        app() = default;
        
        //! @brief The destrcutor.
        ~app() = default;
        
        //! @brief Called when the application starts.
        void initialise(juce::String const& commandLine) final;
        
        //! @brief Indicates that the user has tried to start up another instance of the app.
        void anotherInstanceStarted(juce::String const& command_line) final;
        
        //! @brief Called to allow the application to clear up before exiting.
        void shutdown() final;
        
        //! @brief Called when the operating system is trying to close the application.
        void systemRequestedQuit() final;
        
        //! @brief Returns the application's name.
        const juce::String getApplicationName() final;
        
        //! @brief Returns the application's version number.
        const juce::String getApplicationVersion() final;
        
        //! @brief Checks whether multiple instances of the app are allowed.
        bool moreThanOneInstanceAllowed() final;
        
        
        //! @brief This must return a complete list of commands that this target can handle.
        void getAllCommands(juce::Array<juce::CommandID>& commands) final;
        
        //! @brief This must provide details about one of the commands that this target can perform.
        void getCommandInfo(juce::CommandID commandID, juce::ApplicationCommandInfo& result) final;
        
        //! @brief This must actually perform the specified command.
        bool perform(InvocationInfo const& info) final;
        
    private:
    
        juce::ScopedPointer<patch::window>                   m_windows;
        juce::ScopedPointer<juce::ApplicationCommandManager> m_command;
    };
}

#endif // JPD_APP_INCLUDE_HPP
