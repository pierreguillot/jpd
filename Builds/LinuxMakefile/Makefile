# Automatically generated makefile, created by the Projucer
# Don't edit this file! Your changes will be overwritten when you re-save the Projucer project!

# (this disables dependency generation if multiple architectures are set)
DEPFLAGS := $(if $(word 2, $(TARGET_ARCH)), , -MMD)

ifndef CONFIG
  CONFIG=Debug
endif

ifeq ($(CONFIG),Debug)
  BINDIR := build
  LIBDIR := build
  OBJDIR := build/intermediate/Debug
  OUTDIR := build

  ifeq ($(TARGET_ARCH),)
    TARGET_ARCH := -march=native
  endif

  CPPFLAGS := $(DEPFLAGS) -DLINUX=1 -DDEBUG=1 -D_DEBUG=1 -DPD=1 -DUSEAPI_DUMMY=1 -DPD_INTERNAL=1 -DTHREAD_LOCKING=0 -DDONT_SET_USING_JUCE_NAMESPACE=1 -DJUCER_LINUX_MAKE_6D53C8B4=1 -DJUCE_APP_VERSION=1.0.0 -DJUCE_APP_VERSION_HEX=0x10000 -I /usr/include -I /usr/include/freetype2 -I ../../JuceLibraryCode -I ../../juce/modules
  CFLAGS += $(CPPFLAGS) $(TARGET_ARCH) -g -ggdb -O0
  CXXFLAGS += $(CFLAGS) -std=c++11
  LDFLAGS += $(TARGET_ARCH) -L$(BINDIR) -L$(LIBDIR) -L/usr/X11R6/lib/ -lX11 -lXext -lXinerama -lasound -ldl -lfreetype -lpthread -lrt 

  TARGET := jPD
  BLDCMD = $(CXX) -o $(OUTDIR)/$(TARGET) $(OBJECTS) $(LDFLAGS) $(RESOURCES) $(TARGET_ARCH)
  CLEANCMD = rm -rf $(OUTDIR)/$(TARGET) $(OBJDIR)
endif

ifeq ($(CONFIG),Release)
  BINDIR := build
  LIBDIR := build
  OBJDIR := build/intermediate/Release
  OUTDIR := build

  ifeq ($(TARGET_ARCH),)
    TARGET_ARCH := -march=native
  endif

  CPPFLAGS := $(DEPFLAGS) -DLINUX=1 -DNDEBUG=1 -DPD=1 -DUSEAPI_DUMMY=1 -DPD_INTERNAL=1 -DTHREAD_LOCKING=0 -DDONT_SET_USING_JUCE_NAMESPACE=1 -DJUCER_LINUX_MAKE_6D53C8B4=1 -DJUCE_APP_VERSION=1.0.0 -DJUCE_APP_VERSION_HEX=0x10000 -I /usr/include -I /usr/include/freetype2 -I ../../JuceLibraryCode -I ../../juce/modules
  CFLAGS += $(CPPFLAGS) $(TARGET_ARCH) -O3
  CXXFLAGS += $(CFLAGS) -std=c++11
  LDFLAGS += $(TARGET_ARCH) -L$(BINDIR) -L$(LIBDIR) -fvisibility=hidden -L/usr/X11R6/lib/ -lX11 -lXext -lXinerama -lasound -ldl -lfreetype -lpthread -lrt 

  TARGET := jPD
  BLDCMD = $(CXX) -o $(OUTDIR)/$(TARGET) $(OBJECTS) $(LDFLAGS) $(RESOURCES) $(TARGET_ARCH)
  CLEANCMD = rm -rf $(OUTDIR)/$(TARGET) $(OBJDIR)
endif

OBJECTS := \
  $(OBJDIR)/Main_90ebc5c2.o \
  $(OBJDIR)/jpd_patch_2c4afaa8.o \
  $(OBJDIR)/xpd_atom_7b7ee85d.o \
  $(OBJDIR)/xpd_console_11d85455.o \
  $(OBJDIR)/xpd_environment_cc4ad691.o \
  $(OBJDIR)/xpd_gui_4ae7bab9.o \
  $(OBJDIR)/xpd_instance_d72c1e21.o \
  $(OBJDIR)/xpd_midi_12aca2d.o \
  $(OBJDIR)/xpd_mutex_4e476abd.o \
  $(OBJDIR)/xpd_object_3345318b.o \
  $(OBJDIR)/xpd_patch_e9320d06.o \
  $(OBJDIR)/xpd_processor_e1d1d7d0.o \
  $(OBJDIR)/xpd_symbol_38b2f64.o \
  $(OBJDIR)/xpd_tie_e5e6378e.o \
  $(OBJDIR)/cpd_dsp_e5a5ce55.o \
  $(OBJDIR)/cpd_environment_845a5f27.o \
  $(OBJDIR)/cpd_gui_e5d0e34f.o \
  $(OBJDIR)/cpd_instance_825a8dcb.o \
  $(OBJDIR)/cpd_message_8359479b.o \
  $(OBJDIR)/cpd_midi_ddde11d7.o \
  $(OBJDIR)/cpd_mutex_f33f06d3.o \
  $(OBJDIR)/cpd_object_4634c635.o \
  $(OBJDIR)/cpd_patch_6fcfa75c.o \
  $(OBJDIR)/cpd_post_e3582396.o \
  $(OBJDIR)/cpd_types_6c25974d.o \
  $(OBJDIR)/thd_1c876a56.o \
  $(OBJDIR)/bob~_ae32becb.o \
  $(OBJDIR)/bonk~_3abe3055.o \
  $(OBJDIR)/choice_c36b12cb.o \
  $(OBJDIR)/fiddle~_3ae3c231.o \
  $(OBJDIR)/loop~_f73f07a1.o \
  $(OBJDIR)/lrshift~_330820eb.o \
  $(OBJDIR)/pique_c124f5bd.o \
  $(OBJDIR)/sigmund~_9ce8838b.o \
  $(OBJDIR)/stdout_94e72f8b.o \
  $(OBJDIR)/d_arithmetic_c470729f.o \
  $(OBJDIR)/d_array_ad887f8e.o \
  $(OBJDIR)/d_ctl_547906d0.o \
  $(OBJDIR)/d_dac_547e597b.o \
  $(OBJDIR)/d_delay_35b7a438.o \
  $(OBJDIR)/d_fft_fftsg_f06d18f2.o \
  $(OBJDIR)/d_fft_549d0e29.o \
  $(OBJDIR)/d_filter_259bc9ed.o \
  $(OBJDIR)/d_global_304ea358.o \
  $(OBJDIR)/d_math_4ab1017d.o \
  $(OBJDIR)/d_misc_4b213661.o \
  $(OBJDIR)/d_osc_55218ab4.o \
  $(OBJDIR)/d_resample_47e93ad2.o \
  $(OBJDIR)/d_soundfile_56aa87c0.o \
  $(OBJDIR)/d_ugen_58a59870.o \
  $(OBJDIR)/g_all_guis_e9103988.o \
  $(OBJDIR)/g_array_6a55cc91.o \
  $(OBJDIR)/g_bang_6f8c7b4a.o \
  $(OBJDIR)/g_canvas_2726cf2a.o \
  $(OBJDIR)/g_clone_c9c08695.o \
  $(OBJDIR)/g_editor_8cfdc9ff.o \
  $(OBJDIR)/g_graph_a6d23246.o \
  $(OBJDIR)/g_guiconnect_98eaa0e1.o \
  $(OBJDIR)/g_hdial_c43e8e50.o \
  $(OBJDIR)/g_hslider_7107d4c1.o \
  $(OBJDIR)/g_io_396721f8.o \
  $(OBJDIR)/g_mycanvas_b2d96d96.o \
  $(OBJDIR)/g_numbox_bd081f17.o \
  $(OBJDIR)/g_readwrite_5fe040c1.o \
  $(OBJDIR)/g_rtext_f05c9d57.o \
  $(OBJDIR)/g_scalar_f84a24be.o \
  $(OBJDIR)/g_template_ef42e28c.o \
  $(OBJDIR)/g_text_8e80d0ff.o \
  $(OBJDIR)/g_toggle_e4f18626.o \
  $(OBJDIR)/g_traversal_878dc436.o \
  $(OBJDIR)/g_vdial_a8d5cbde.o \
  $(OBJDIR)/g_vslider_8cc5e6cf.o \
  $(OBJDIR)/g_vumeter_8b7c9162.o \
  $(OBJDIR)/m_atom_de2af95d.o \
  $(OBJDIR)/m_binbuf_1f1f3398.o \
  $(OBJDIR)/m_class_429851f6.o \
  $(OBJDIR)/m_conf_e14da670.o \
  $(OBJDIR)/m_glob_e7f727c4.o \
  $(OBJDIR)/m_memory_c134774d.o \
  $(OBJDIR)/m_obj_3131fff5.o \
  $(OBJDIR)/m_pd_43a73b00.o \
  $(OBJDIR)/m_sched_81fc7775.o \
  $(OBJDIR)/s_audio_dummy_e989e083.o \
  $(OBJDIR)/s_audio_61e7beda.o \
  $(OBJDIR)/s_file_555dc402.o \
  $(OBJDIR)/s_inter_fe075e60.o \
  $(OBJDIR)/s_loader_eef1499.o \
  $(OBJDIR)/s_main_60ddb8ff.o \
  $(OBJDIR)/s_path_66012c6b.o \
  $(OBJDIR)/s_print_768f7bf1.o \
  $(OBJDIR)/s_utf8_6f8e14b7.o \
  $(OBJDIR)/x_acoustics_9c4c3999.o \
  $(OBJDIR)/x_arithmetic_69c4330b.o \
  $(OBJDIR)/x_array_42e12ba2.o \
  $(OBJDIR)/x_connective_d6afc90f.o \
  $(OBJDIR)/x_gui_76ae6f04.o \
  $(OBJDIR)/x_interface_dca20482.o \
  $(OBJDIR)/x_list_67041eff.o \
  $(OBJDIR)/x_midi_68b1fcc2.o \
  $(OBJDIR)/x_misc_68b8b7cd.o \
  $(OBJDIR)/x_net_7709f6e6.o \
  $(OBJDIR)/x_scalar_312aa7cd.o \
  $(OBJDIR)/x_text_7474cbce.o \
  $(OBJDIR)/x_time_74a7f16e.o \
  $(OBJDIR)/x_vexp_fun_bb66b948.o \
  $(OBJDIR)/x_vexp_if_481d33be.o \
  $(OBJDIR)/x_vexp_77de6e08.o \
  $(OBJDIR)/juce_audio_basics_6b797ca1.o \
  $(OBJDIR)/juce_audio_devices_a742c38b.o \
  $(OBJDIR)/juce_audio_formats_5a29c68a.o \
  $(OBJDIR)/juce_audio_processors_dea3173d.o \
  $(OBJDIR)/juce_core_75b14332.o \
  $(OBJDIR)/juce_data_structures_72d3da2c.o \
  $(OBJDIR)/juce_events_d2be882c.o \
  $(OBJDIR)/juce_graphics_9c18891e.o \
  $(OBJDIR)/juce_gui_basics_8a6da59c.o \
  $(OBJDIR)/juce_gui_extra_4a026f23.o \

.PHONY: clean

$(OUTDIR)/$(TARGET): $(OBJECTS) $(RESOURCES)
	@echo Linking jPD
	-@mkdir -p $(BINDIR)
	-@mkdir -p $(LIBDIR)
	-@mkdir -p $(OUTDIR)
	@$(BLDCMD)

clean:
	@echo Cleaning jPD
	@$(CLEANCMD)

strip:
	@echo Stripping jPD
	-@strip --strip-unneeded $(OUTDIR)/$(TARGET)

$(OBJDIR)/Main_90ebc5c2.o: ../../Source/Main.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling Main.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/jpd_patch_2c4afaa8.o: ../../Source/jpd_patch.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling jpd_patch.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/xpd_atom_7b7ee85d.o: ../../zpd/xpd/xpd_atom.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling xpd_atom.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/xpd_console_11d85455.o: ../../zpd/xpd/xpd_console.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling xpd_console.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/xpd_environment_cc4ad691.o: ../../zpd/xpd/xpd_environment.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling xpd_environment.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/xpd_gui_4ae7bab9.o: ../../zpd/xpd/xpd_gui.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling xpd_gui.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/xpd_instance_d72c1e21.o: ../../zpd/xpd/xpd_instance.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling xpd_instance.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/xpd_midi_12aca2d.o: ../../zpd/xpd/xpd_midi.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling xpd_midi.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/xpd_mutex_4e476abd.o: ../../zpd/xpd/xpd_mutex.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling xpd_mutex.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/xpd_object_3345318b.o: ../../zpd/xpd/xpd_object.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling xpd_object.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/xpd_patch_e9320d06.o: ../../zpd/xpd/xpd_patch.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling xpd_patch.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/xpd_processor_e1d1d7d0.o: ../../zpd/xpd/xpd_processor.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling xpd_processor.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/xpd_symbol_38b2f64.o: ../../zpd/xpd/xpd_symbol.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling xpd_symbol.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/xpd_tie_e5e6378e.o: ../../zpd/xpd/xpd_tie.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling xpd_tie.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/cpd_dsp_e5a5ce55.o: ../../zpd/cpd/cpd_dsp.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling cpd_dsp.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/cpd_environment_845a5f27.o: ../../zpd/cpd/cpd_environment.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling cpd_environment.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/cpd_gui_e5d0e34f.o: ../../zpd/cpd/cpd_gui.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling cpd_gui.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/cpd_instance_825a8dcb.o: ../../zpd/cpd/cpd_instance.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling cpd_instance.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/cpd_message_8359479b.o: ../../zpd/cpd/cpd_message.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling cpd_message.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/cpd_midi_ddde11d7.o: ../../zpd/cpd/cpd_midi.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling cpd_midi.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/cpd_mutex_f33f06d3.o: ../../zpd/cpd/cpd_mutex.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling cpd_mutex.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/cpd_object_4634c635.o: ../../zpd/cpd/cpd_object.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling cpd_object.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/cpd_patch_6fcfa75c.o: ../../zpd/cpd/cpd_patch.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling cpd_patch.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/cpd_post_e3582396.o: ../../zpd/cpd/cpd_post.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling cpd_post.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/cpd_types_6c25974d.o: ../../zpd/cpd/cpd_types.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling cpd_types.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/thd_1c876a56.o: ../../zpd/thread/src/thd.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling thd.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/bob~_ae32becb.o: ../../zpd/pd/extra/bob~/bob~.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling bob~.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/bonk~_3abe3055.o: ../../zpd/pd/extra/bonk~/bonk~.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling bonk~.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/choice_c36b12cb.o: ../../zpd/pd/extra/choice/choice.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling choice.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/fiddle~_3ae3c231.o: ../../zpd/pd/extra/fiddle~/fiddle~.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling fiddle~.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/loop~_f73f07a1.o: ../../zpd/pd/extra/loop~/loop~.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling loop~.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/lrshift~_330820eb.o: ../../zpd/pd/extra/lrshift~/lrshift~.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling lrshift~.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/pique_c124f5bd.o: ../../zpd/pd/extra/pique/pique.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling pique.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/sigmund~_9ce8838b.o: ../../zpd/pd/extra/sigmund~/sigmund~.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling sigmund~.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/stdout_94e72f8b.o: ../../zpd/pd/extra/stdout/stdout.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling stdout.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/d_arithmetic_c470729f.o: ../../zpd/pd/src/d_arithmetic.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling d_arithmetic.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/d_array_ad887f8e.o: ../../zpd/pd/src/d_array.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling d_array.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/d_ctl_547906d0.o: ../../zpd/pd/src/d_ctl.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling d_ctl.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/d_dac_547e597b.o: ../../zpd/pd/src/d_dac.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling d_dac.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/d_delay_35b7a438.o: ../../zpd/pd/src/d_delay.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling d_delay.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/d_fft_fftsg_f06d18f2.o: ../../zpd/pd/src/d_fft_fftsg.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling d_fft_fftsg.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/d_fft_549d0e29.o: ../../zpd/pd/src/d_fft.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling d_fft.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/d_filter_259bc9ed.o: ../../zpd/pd/src/d_filter.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling d_filter.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/d_global_304ea358.o: ../../zpd/pd/src/d_global.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling d_global.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/d_math_4ab1017d.o: ../../zpd/pd/src/d_math.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling d_math.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/d_misc_4b213661.o: ../../zpd/pd/src/d_misc.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling d_misc.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/d_osc_55218ab4.o: ../../zpd/pd/src/d_osc.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling d_osc.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/d_resample_47e93ad2.o: ../../zpd/pd/src/d_resample.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling d_resample.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/d_soundfile_56aa87c0.o: ../../zpd/pd/src/d_soundfile.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling d_soundfile.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/d_ugen_58a59870.o: ../../zpd/pd/src/d_ugen.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling d_ugen.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/g_all_guis_e9103988.o: ../../zpd/pd/src/g_all_guis.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling g_all_guis.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/g_array_6a55cc91.o: ../../zpd/pd/src/g_array.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling g_array.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/g_bang_6f8c7b4a.o: ../../zpd/pd/src/g_bang.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling g_bang.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/g_canvas_2726cf2a.o: ../../zpd/pd/src/g_canvas.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling g_canvas.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/g_clone_c9c08695.o: ../../zpd/pd/src/g_clone.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling g_clone.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/g_editor_8cfdc9ff.o: ../../zpd/pd/src/g_editor.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling g_editor.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/g_graph_a6d23246.o: ../../zpd/pd/src/g_graph.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling g_graph.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/g_guiconnect_98eaa0e1.o: ../../zpd/pd/src/g_guiconnect.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling g_guiconnect.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/g_hdial_c43e8e50.o: ../../zpd/pd/src/g_hdial.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling g_hdial.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/g_hslider_7107d4c1.o: ../../zpd/pd/src/g_hslider.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling g_hslider.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/g_io_396721f8.o: ../../zpd/pd/src/g_io.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling g_io.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/g_mycanvas_b2d96d96.o: ../../zpd/pd/src/g_mycanvas.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling g_mycanvas.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/g_numbox_bd081f17.o: ../../zpd/pd/src/g_numbox.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling g_numbox.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/g_readwrite_5fe040c1.o: ../../zpd/pd/src/g_readwrite.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling g_readwrite.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/g_rtext_f05c9d57.o: ../../zpd/pd/src/g_rtext.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling g_rtext.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/g_scalar_f84a24be.o: ../../zpd/pd/src/g_scalar.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling g_scalar.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/g_template_ef42e28c.o: ../../zpd/pd/src/g_template.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling g_template.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/g_text_8e80d0ff.o: ../../zpd/pd/src/g_text.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling g_text.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/g_toggle_e4f18626.o: ../../zpd/pd/src/g_toggle.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling g_toggle.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/g_traversal_878dc436.o: ../../zpd/pd/src/g_traversal.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling g_traversal.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/g_vdial_a8d5cbde.o: ../../zpd/pd/src/g_vdial.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling g_vdial.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/g_vslider_8cc5e6cf.o: ../../zpd/pd/src/g_vslider.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling g_vslider.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/g_vumeter_8b7c9162.o: ../../zpd/pd/src/g_vumeter.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling g_vumeter.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/m_atom_de2af95d.o: ../../zpd/pd/src/m_atom.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling m_atom.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/m_binbuf_1f1f3398.o: ../../zpd/pd/src/m_binbuf.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling m_binbuf.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/m_class_429851f6.o: ../../zpd/pd/src/m_class.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling m_class.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/m_conf_e14da670.o: ../../zpd/pd/src/m_conf.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling m_conf.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/m_glob_e7f727c4.o: ../../zpd/pd/src/m_glob.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling m_glob.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/m_memory_c134774d.o: ../../zpd/pd/src/m_memory.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling m_memory.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/m_obj_3131fff5.o: ../../zpd/pd/src/m_obj.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling m_obj.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/m_pd_43a73b00.o: ../../zpd/pd/src/m_pd.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling m_pd.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/m_sched_81fc7775.o: ../../zpd/pd/src/m_sched.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling m_sched.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/s_audio_dummy_e989e083.o: ../../zpd/pd/src/s_audio_dummy.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling s_audio_dummy.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/s_audio_61e7beda.o: ../../zpd/pd/src/s_audio.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling s_audio.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/s_file_555dc402.o: ../../zpd/pd/src/s_file.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling s_file.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/s_inter_fe075e60.o: ../../zpd/pd/src/s_inter.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling s_inter.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/s_loader_eef1499.o: ../../zpd/pd/src/s_loader.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling s_loader.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/s_main_60ddb8ff.o: ../../zpd/pd/src/s_main.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling s_main.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/s_path_66012c6b.o: ../../zpd/pd/src/s_path.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling s_path.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/s_print_768f7bf1.o: ../../zpd/pd/src/s_print.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling s_print.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/s_utf8_6f8e14b7.o: ../../zpd/pd/src/s_utf8.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling s_utf8.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/x_acoustics_9c4c3999.o: ../../zpd/pd/src/x_acoustics.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling x_acoustics.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/x_arithmetic_69c4330b.o: ../../zpd/pd/src/x_arithmetic.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling x_arithmetic.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/x_array_42e12ba2.o: ../../zpd/pd/src/x_array.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling x_array.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/x_connective_d6afc90f.o: ../../zpd/pd/src/x_connective.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling x_connective.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/x_gui_76ae6f04.o: ../../zpd/pd/src/x_gui.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling x_gui.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/x_interface_dca20482.o: ../../zpd/pd/src/x_interface.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling x_interface.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/x_list_67041eff.o: ../../zpd/pd/src/x_list.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling x_list.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/x_midi_68b1fcc2.o: ../../zpd/pd/src/x_midi.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling x_midi.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/x_misc_68b8b7cd.o: ../../zpd/pd/src/x_misc.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling x_misc.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/x_net_7709f6e6.o: ../../zpd/pd/src/x_net.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling x_net.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/x_scalar_312aa7cd.o: ../../zpd/pd/src/x_scalar.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling x_scalar.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/x_text_7474cbce.o: ../../zpd/pd/src/x_text.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling x_text.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/x_time_74a7f16e.o: ../../zpd/pd/src/x_time.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling x_time.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/x_vexp_fun_bb66b948.o: ../../zpd/pd/src/x_vexp_fun.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling x_vexp_fun.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/x_vexp_if_481d33be.o: ../../zpd/pd/src/x_vexp_if.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling x_vexp_if.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/x_vexp_77de6e08.o: ../../zpd/pd/src/x_vexp.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling x_vexp.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_audio_basics_6b797ca1.o: ../../JuceLibraryCode/juce_audio_basics.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_audio_basics.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_audio_devices_a742c38b.o: ../../JuceLibraryCode/juce_audio_devices.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_audio_devices.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_audio_formats_5a29c68a.o: ../../JuceLibraryCode/juce_audio_formats.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_audio_formats.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_audio_processors_dea3173d.o: ../../JuceLibraryCode/juce_audio_processors.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_audio_processors.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_core_75b14332.o: ../../JuceLibraryCode/juce_core.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_core.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_data_structures_72d3da2c.o: ../../JuceLibraryCode/juce_data_structures.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_data_structures.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_events_d2be882c.o: ../../JuceLibraryCode/juce_events.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_events.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_graphics_9c18891e.o: ../../JuceLibraryCode/juce_graphics.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_graphics.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_gui_basics_8a6da59c.o: ../../JuceLibraryCode/juce_gui_basics.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_gui_basics.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_gui_extra_4a026f23.o: ../../JuceLibraryCode/juce_gui_extra.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_gui_extra.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

-include $(OBJECTS:%.o=%.d)
