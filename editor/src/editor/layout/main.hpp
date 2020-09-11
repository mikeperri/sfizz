/* This file is generated by the layout maker tool. */
LogicalGroup* const view__0 = createLogicalGroup(CRect(0, 0, 800, 475), -1, "", kCenterText, 14);
mainView = view__0;
Background* const view__1 = createBackground(CRect(190, 110, 790, 390), -1, "", kCenterText, 14);
view__0->addView(view__1);
enterTheme(darkTheme);
LogicalGroup* const view__2 = createLogicalGroup(CRect(0, 0, 800, 110), -1, "", kCenterText, 14);
view__0->addView(view__2);
RoundedGroup* const view__3 = createRoundedGroup(CRect(5, 4, 180, 105), -1, "", kCenterText, 14);
view__2->addView(view__3);
SfizzMainButton* const view__4 = createSfizzMainButton(CRect(30, 5, 150, 65), kTagFirstChangePanel+kPanelGeneral, "", kCenterText, 14);
view__3->addView(view__4);
HomeButton* const view__5 = createHomeButton(CRect(44, 69, 69, 94), kTagFirstChangePanel+kPanelGeneral, "", kCenterText, 24);
view__3->addView(view__5);
CCButton* const view__6 = createCCButton(CRect(76, 69, 101, 94), kTagFirstChangePanel+kPanelControls, "", kCenterText, 24);
view__3->addView(view__6);
SettingsButton* const view__7 = createSettingsButton(CRect(107, 69, 132, 94), kTagFirstChangePanel+kPanelSettings, "", kCenterText, 24);
view__3->addView(view__7);
RoundedGroup* const view__8 = createRoundedGroup(CRect(185, 5, 565, 105), -1, "", kCenterText, 14);
view__2->addView(view__8);
Label* const view__9 = createLabel(CRect(15, 8, 55, 38), -1, "File:", kCenterText, 16);
view__8->addView(view__9);
Label* const view__10 = createLabel(CRect(15, 40, 55, 70), -1, "KS:", kCenterText, 16);
view__8->addView(view__10);
HLine* const view__11 = createHLine(CRect(10, 36, 370, 41), -1, "", kCenterText, 14);
view__8->addView(view__11);
HLine* const view__12 = createHLine(CRect(10, 68, 370, 73), -1, "", kCenterText, 14);
view__8->addView(view__12);
Label* const view__13 = createLabel(CRect(80, 7, 310, 37), -1, "DefaultInstrument.sfz", kCenterText, 20);
sfzFileLabel_ = view__13;
view__8->addView(view__13);
Label* const view__14 = createLabel(CRect(80, 39, 310, 69), -1, "Key switch", kCenterText, 20);
view__8->addView(view__14);
Label* const view__15 = createLabel(CRect(10, 71, 70, 96), -1, "Voices:", kRightText, 12);
view__8->addView(view__15);
LoadFileButton* const view__16 = createLoadFileButton(CRect(315, 9, 340, 34), kTagLoadSfzFile, "", kCenterText, 24);
view__8->addView(view__16);
EditFileButton* const view__17 = createEditFileButton(CRect(340, 9, 365, 34), kTagEditSfzFile, "", kCenterText, 24);
view__8->addView(view__17);
Label* const view__18 = createLabel(CRect(75, 71, 125, 96), -1, "", kCenterText, 12);
infoVoicesLabel_ = view__18;
view__8->addView(view__18);
Label* const view__19 = createLabel(CRect(130, 71, 190, 96), -1, "Max:", kRightText, 12);
view__8->addView(view__19);
Label* const view__20 = createLabel(CRect(195, 71, 245, 96), -1, "", kCenterText, 12);
numVoicesLabel_ = view__20;
view__8->addView(view__20);
Label* const view__21 = createLabel(CRect(250, 71, 310, 96), -1, "Memory:", kRightText, 12);
view__8->addView(view__21);
Label* const view__22 = createLabel(CRect(315, 71, 365, 96), -1, "", kCenterText, 12);
memoryLabel_ = view__22;
view__8->addView(view__22);
RoundedGroup* const view__23 = createRoundedGroup(CRect(570, 5, 795, 105), -1, "", kCenterText, 14);
view__2->addView(view__23);
Knob48* const view__24 = createKnob48(CRect(45, 15, 93, 63), -1, "", kCenterText, 14);
view__23->addView(view__24);
view__24->setVisible(false);
ValueLabel* const view__25 = createValueLabel(CRect(40, 65, 100, 70), -1, "Center", kCenterText, 12);
view__23->addView(view__25);
view__25->setVisible(false);
Knob48* const view__26 = createKnob48(CRect(110, 15, 158, 63), kTagSetVolume, "", kCenterText, 14);
volumeSlider_ = view__26;
view__23->addView(view__26);
ValueLabel* const view__27 = createValueLabel(CRect(105, 65, 165, 87), -1, "0.0 dB", kCenterText, 12);
volumeLabel_ = view__27;
view__23->addView(view__27);
VMeter* const view__28 = createVMeter(CRect(175, 15, 210, 70), -1, "", kCenterText, 14);
view__23->addView(view__28);
enterTheme(defaultTheme);
LogicalGroup* const view__29 = createLogicalGroup(CRect(5, 110, 796, 395), -1, "", kCenterText, 14);
subPanels_[kPanelGeneral] = view__29;
view__0->addView(view__29);
view__29->setVisible(false);
RoundedGroup* const view__30 = createRoundedGroup(CRect(0, 0, 175, 280), -1, "", kCenterText, 14);
view__29->addView(view__30);
Label* const view__31 = createLabel(CRect(15, 10, 75, 35), -1, "Curves:", kLeftText, 14);
view__30->addView(view__31);
Label* const view__32 = createLabel(CRect(15, 35, 75, 60), -1, "Masters:", kLeftText, 14);
view__30->addView(view__32);
Label* const view__33 = createLabel(CRect(15, 60, 75, 85), -1, "Groups:", kLeftText, 14);
view__30->addView(view__33);
Label* const view__34 = createLabel(CRect(15, 85, 75, 110), -1, "Regions:", kLeftText, 14);
view__30->addView(view__34);
Label* const view__35 = createLabel(CRect(15, 110, 75, 135), -1, "Samples:", kLeftText, 14);
view__30->addView(view__35);
Label* const view__36 = createLabel(CRect(115, 10, 155, 35), -1, "0", kCenterText, 14);
infoCurvesLabel_ = view__36;
view__30->addView(view__36);
Label* const view__37 = createLabel(CRect(115, 35, 155, 60), -1, "0", kCenterText, 14);
infoMastersLabel_ = view__37;
view__30->addView(view__37);
Label* const view__38 = createLabel(CRect(115, 60, 155, 85), -1, "0", kCenterText, 14);
infoGroupsLabel_ = view__38;
view__30->addView(view__38);
Label* const view__39 = createLabel(CRect(115, 85, 155, 110), -1, "0", kCenterText, 14);
infoRegionsLabel_ = view__39;
view__30->addView(view__39);
Label* const view__40 = createLabel(CRect(115, 110, 155, 135), -1, "0", kCenterText, 14);
infoSamplesLabel_ = view__40;
view__30->addView(view__40);
LogicalGroup* const view__41 = createLogicalGroup(CRect(5, 110, 795, 395), -1, "", kCenterText, 14);
subPanels_[kPanelControls] = view__41;
view__0->addView(view__41);
view__41->setVisible(false);
RoundedGroup* const view__42 = createRoundedGroup(CRect(0, 0, 790, 285), -1, "", kCenterText, 14);
view__41->addView(view__42);
Label* const view__43 = createLabel(CRect(0, 0, 790, 285), -1, "Controls not available", kCenterText, 40);
view__42->addView(view__43);
LogicalGroup* const view__44 = createLogicalGroup(CRect(5, 109, 795, 395), -1, "", kCenterText, 14);
subPanels_[kPanelSettings] = view__44;
view__0->addView(view__44);
TitleGroup* const view__45 = createTitleGroup(CRect(255, 26, 535, 126), -1, "Engine", kCenterText, 12);
view__44->addView(view__45);
ValueMenu* const view__46 = createValueMenu(CRect(25, 60, 85, 85), kTagSetNumVoices, "", kCenterText, 12);
numVoicesSlider_ = view__46;
view__45->addView(view__46);
ValueLabel* const view__47 = createValueLabel(CRect(15, 20, 95, 45), -1, "Polyphony", kCenterText, 12);
view__45->addView(view__47);
ValueMenu* const view__48 = createValueMenu(CRect(110, 60, 170, 85), kTagSetOversampling, "", kCenterText, 12);
oversamplingSlider_ = view__48;
view__45->addView(view__48);
ValueLabel* const view__49 = createValueLabel(CRect(100, 20, 180, 45), -1, "Oversampling", kCenterText, 12);
view__45->addView(view__49);
ValueLabel* const view__50 = createValueLabel(CRect(185, 20, 265, 45), -1, "Preload size", kCenterText, 12);
view__45->addView(view__50);
ValueMenu* const view__51 = createValueMenu(CRect(195, 60, 255, 85), kTagSetPreloadSize, "", kCenterText, 12);
preloadSizeSlider_ = view__51;
view__45->addView(view__51);
TitleGroup* const view__52 = createTitleGroup(CRect(200, 161, 590, 261), -1, "Tuning", kCenterText, 12);
view__44->addView(view__52);
ValueLabel* const view__53 = createValueLabel(CRect(125, 20, 205, 45), -1, "Root key", kCenterText, 12);
view__52->addView(view__53);
ValueMenu* const view__54 = createValueMenu(CRect(220, 60, 280, 85), kTagSetTuningFrequency, "", kCenterText, 12);
tuningFrequencySlider_ = view__54;
view__52->addView(view__54);
ValueLabel* const view__55 = createValueLabel(CRect(210, 20, 290, 45), -1, "Frequency", kCenterText, 12);
view__52->addView(view__55);
Knob48* const view__56 = createKnob48(CRect(310, 45, 358, 93), kTagSetStretchedTuning, "", kCenterText, 14);
stretchedTuningSlider_ = view__56;
view__52->addView(view__56);
ValueLabel* const view__57 = createValueLabel(CRect(295, 20, 375, 45), -1, "Stretch", kCenterText, 12);
view__52->addView(view__57);
ValueLabel* const view__58 = createValueLabel(CRect(20, 20, 120, 45), -1, "Scala file", kCenterText, 12);
view__52->addView(view__58);
ValueButton* const view__59 = createValueButton(CRect(20, 60, 120, 85), kTagLoadScalaFile, "DefaultScale", kCenterText, 12);
scalaFileButton_ = view__59;
view__52->addView(view__59);
ValueMenu* const view__60 = createValueMenu(CRect(135, 60, 170, 85), kTagSetScalaRootKey, "", kCenterText, 12);
scalaRootKeySlider_ = view__60;
view__52->addView(view__60);
ValueMenu* const view__61 = createValueMenu(CRect(170, 60, 200, 85), kTagSetScalaRootKey, "", kCenterText, 12);
scalaRootOctaveSlider_ = view__61;
view__52->addView(view__61);
Piano* const view__62 = createPiano(CRect(5, 400, 795, 470), -1, "", kCenterText, 14);
view__0->addView(view__62);
