void ttbar_jet2CSV_logy()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sun Dec 11 15:16:20 2016) by ROOT version6.06/01
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,1200,1416);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.15);
   c1->SetRightMargin(0.05);
   c1->SetTopMargin(0.07);
   c1->SetBottomMargin(0.13);
   c1->SetFrameFillStyle(0);
   c1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-0.1875,-3.307952,1.0625,2.06277);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetLogy();
   pad1->SetTickx(1);
   pad1->SetTicky(1);
   pad1->SetLeftMargin(0.15);
   pad1->SetRightMargin(0.05);
   pad1->SetTopMargin(0.07);
   pad1->SetBottomMargin(0);
   pad1->SetFrameFillStyle(0);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameFillStyle(0);
   pad1->SetFrameBorderMode(0);
   
   THStack *h = new THStack();
   h->SetName("h");
   h->SetTitle("");
   h->SetMinimum(0.001533992);
   h->SetMaximum(26.32535);
   
   TH1F *h_stack_26 = new TH1F("h_stack_26","",10,0,1);
   h_stack_26->SetMinimum(0.0004920938);
   h_stack_26->SetMaximum(48.62055);
   h_stack_26->SetDirectory(0);
   h_stack_26->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h_stack_26->SetLineColor(ci);
   h_stack_26->GetXaxis()->SetLabelFont(42);
   h_stack_26->GetXaxis()->SetLabelOffset(0.007);
   h_stack_26->GetXaxis()->SetTitleSize(0.05);
   h_stack_26->GetXaxis()->SetTickLength(0.025);
   h_stack_26->GetXaxis()->SetTitleFont(42);
   h_stack_26->GetYaxis()->SetTitle("a.u.");
   h_stack_26->GetYaxis()->SetLabelFont(42);
   h_stack_26->GetYaxis()->SetLabelOffset(0.007);
   h_stack_26->GetYaxis()->SetTitleSize(0.05);
   h_stack_26->GetYaxis()->SetTickLength(0.025);
   h_stack_26->GetYaxis()->SetTitleOffset(1.5);
   h_stack_26->GetYaxis()->SetTitleFont(42);
   h_stack_26->GetZaxis()->SetLabelFont(42);
   h_stack_26->GetZaxis()->SetLabelOffset(0.007);
   h_stack_26->GetZaxis()->SetTitleSize(0.05);
   h_stack_26->GetZaxis()->SetTickLength(0.025);
   h_stack_26->GetZaxis()->SetTitleFont(42);
   h->SetHistogram(h_stack_26);
   
   
   TH1D *h_jet2CSV_QCD__301 = new TH1D("h_jet2CSV_QCD__301","",10,0,1);
   h_jet2CSV_QCD__301->SetBinContent(1,0.004042845);
   h_jet2CSV_QCD__301->SetBinContent(2,0.001396245);
   h_jet2CSV_QCD__301->SetBinContent(3,0.0016643);
   h_jet2CSV_QCD__301->SetBinContent(4,0.0005158117);
   h_jet2CSV_QCD__301->SetBinContent(6,0.0005745276);
   h_jet2CSV_QCD__301->SetBinContent(7,0.0002095089);
   h_jet2CSV_QCD__301->SetBinContent(9,0.00180212);
   h_jet2CSV_QCD__301->SetBinContent(10,0.001380201);
   h_jet2CSV_QCD__301->SetBinError(1,0.001980132);
   h_jet2CSV_QCD__301->SetBinError(2,0.0007621706);
   h_jet2CSV_QCD__301->SetBinError(3,0.00129889);
   h_jet2CSV_QCD__301->SetBinError(4,0.0005079247);
   h_jet2CSV_QCD__301->SetBinError(6,0.0005745276);
   h_jet2CSV_QCD__301->SetBinError(7,0.0002095089);
   h_jet2CSV_QCD__301->SetBinError(9,0.001414545);
   h_jet2CSV_QCD__301->SetBinError(10,0.0009073313);
   h_jet2CSV_QCD__301->SetEntries(25);
   h_jet2CSV_QCD__301->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_jet2CSV_QCD__301->SetFillColor(ci);
   h_jet2CSV_QCD__301->GetXaxis()->SetTitle("jet 2 CSV");
   h_jet2CSV_QCD__301->GetXaxis()->SetLabelFont(42);
   h_jet2CSV_QCD__301->GetXaxis()->SetLabelOffset(0.007);
   h_jet2CSV_QCD__301->GetXaxis()->SetTitleSize(0.05);
   h_jet2CSV_QCD__301->GetXaxis()->SetTickLength(0.025);
   h_jet2CSV_QCD__301->GetXaxis()->SetTitleFont(42);
   h_jet2CSV_QCD__301->GetYaxis()->SetTitle("a.u.");
   h_jet2CSV_QCD__301->GetYaxis()->SetLabelFont(42);
   h_jet2CSV_QCD__301->GetYaxis()->SetLabelOffset(0.007);
   h_jet2CSV_QCD__301->GetYaxis()->SetTitleSize(0.05);
   h_jet2CSV_QCD__301->GetYaxis()->SetTickLength(0.025);
   h_jet2CSV_QCD__301->GetYaxis()->SetTitleFont(42);
   h_jet2CSV_QCD__301->GetZaxis()->SetLabelFont(42);
   h_jet2CSV_QCD__301->GetZaxis()->SetLabelOffset(0.007);
   h_jet2CSV_QCD__301->GetZaxis()->SetTitleSize(0.05);
   h_jet2CSV_QCD__301->GetZaxis()->SetTickLength(0.025);
   h_jet2CSV_QCD__301->GetZaxis()->SetTitleFont(42);
   h->Add(h_jet2CSV_QCD,"");
   
   TH1D *h_jet2CSV_Diboson__302 = new TH1D("h_jet2CSV_Diboson__302","",10,0,1);
   h_jet2CSV_Diboson__302->SetBinContent(1,0.01691046);
   h_jet2CSV_Diboson__302->SetBinContent(2,0.009295677);
   h_jet2CSV_Diboson__302->SetBinContent(3,0.004691052);
   h_jet2CSV_Diboson__302->SetBinContent(4,0.001447753);
   h_jet2CSV_Diboson__302->SetBinContent(5,0.001219864);
   h_jet2CSV_Diboson__302->SetBinContent(6,0.0005219856);
   h_jet2CSV_Diboson__302->SetBinContent(7,0.0007204086);
   h_jet2CSV_Diboson__302->SetBinContent(8,0.0006070389);
   h_jet2CSV_Diboson__302->SetBinContent(9,0.0004174182);
   h_jet2CSV_Diboson__302->SetBinContent(10,0.0009615269);
   h_jet2CSV_Diboson__302->SetBinError(1,0.001822389);
   h_jet2CSV_Diboson__302->SetBinError(2,0.001372576);
   h_jet2CSV_Diboson__302->SetBinError(3,0.0009835467);
   h_jet2CSV_Diboson__302->SetBinError(4,0.0005177586);
   h_jet2CSV_Diboson__302->SetBinError(5,0.0004859373);
   h_jet2CSV_Diboson__302->SetBinError(6,0.0003172404);
   h_jet2CSV_Diboson__302->SetBinError(7,0.0004144498);
   h_jet2CSV_Diboson__302->SetBinError(8,0.0003261611);
   h_jet2CSV_Diboson__302->SetBinError(9,0.0002112314);
   h_jet2CSV_Diboson__302->SetBinError(10,0.0004072501);
   h_jet2CSV_Diboson__302->SetEntries(227);
   h_jet2CSV_Diboson__302->SetStats(0);

   ci = TColor::GetColor("#9966cc");
   h_jet2CSV_Diboson__302->SetFillColor(ci);
   h_jet2CSV_Diboson__302->GetXaxis()->SetTitle("jet 2 CSV");
   h_jet2CSV_Diboson__302->GetXaxis()->SetLabelFont(42);
   h_jet2CSV_Diboson__302->GetXaxis()->SetLabelOffset(0.007);
   h_jet2CSV_Diboson__302->GetXaxis()->SetTitleSize(0.05);
   h_jet2CSV_Diboson__302->GetXaxis()->SetTickLength(0.025);
   h_jet2CSV_Diboson__302->GetXaxis()->SetTitleFont(42);
   h_jet2CSV_Diboson__302->GetYaxis()->SetTitle("a.u.");
   h_jet2CSV_Diboson__302->GetYaxis()->SetLabelFont(42);
   h_jet2CSV_Diboson__302->GetYaxis()->SetLabelOffset(0.007);
   h_jet2CSV_Diboson__302->GetYaxis()->SetTitleSize(0.05);
   h_jet2CSV_Diboson__302->GetYaxis()->SetTickLength(0.025);
   h_jet2CSV_Diboson__302->GetYaxis()->SetTitleFont(42);
   h_jet2CSV_Diboson__302->GetZaxis()->SetLabelFont(42);
   h_jet2CSV_Diboson__302->GetZaxis()->SetLabelOffset(0.007);
   h_jet2CSV_Diboson__302->GetZaxis()->SetTitleSize(0.05);
   h_jet2CSV_Diboson__302->GetZaxis()->SetTickLength(0.025);
   h_jet2CSV_Diboson__302->GetZaxis()->SetTitleFont(42);
   h->Add(h_jet2CSV_Diboson,"");
   
   TH1D *h_jet2CSV_ZpLjets__303 = new TH1D("h_jet2CSV_ZpLjets__303","",10,0,1);
   h_jet2CSV_ZpLjets__303->SetBinContent(1,0.01938397);
   h_jet2CSV_ZpLjets__303->SetBinContent(2,0.01173228);
   h_jet2CSV_ZpLjets__303->SetBinContent(3,0.005353481);
   h_jet2CSV_ZpLjets__303->SetBinContent(4,0.003083062);
   h_jet2CSV_ZpLjets__303->SetBinContent(5,0.002125068);
   h_jet2CSV_ZpLjets__303->SetBinContent(6,0.001807083);
   h_jet2CSV_ZpLjets__303->SetBinContent(7,0.001051029);
   h_jet2CSV_ZpLjets__303->SetBinContent(8,0.001069167);
   h_jet2CSV_ZpLjets__303->SetBinContent(9,0.0008395713);
   h_jet2CSV_ZpLjets__303->SetBinContent(10,0.000969095);
   h_jet2CSV_ZpLjets__303->SetBinError(1,0.0004769165);
   h_jet2CSV_ZpLjets__303->SetBinError(2,0.0002864723);
   h_jet2CSV_ZpLjets__303->SetBinError(3,0.0002090813);
   h_jet2CSV_ZpLjets__303->SetBinError(4,0.0001523319);
   h_jet2CSV_ZpLjets__303->SetBinError(5,0.0001173285);
   h_jet2CSV_ZpLjets__303->SetBinError(6,0.0001185691);
   h_jet2CSV_ZpLjets__303->SetBinError(7,7.618958e-05);
   h_jet2CSV_ZpLjets__303->SetBinError(8,9.44621e-05);
   h_jet2CSV_ZpLjets__303->SetBinError(9,7.530197e-05);
   h_jet2CSV_ZpLjets__303->SetBinError(10,8.074389e-05);
   h_jet2CSV_ZpLjets__303->SetEntries(24915);
   h_jet2CSV_ZpLjets__303->SetStats(0);

   ci = TColor::GetColor("#3399cc");
   h_jet2CSV_ZpLjets__303->SetFillColor(ci);
   h_jet2CSV_ZpLjets__303->GetXaxis()->SetTitle("jet 2 CSV");
   h_jet2CSV_ZpLjets__303->GetXaxis()->SetLabelFont(42);
   h_jet2CSV_ZpLjets__303->GetXaxis()->SetLabelOffset(0.007);
   h_jet2CSV_ZpLjets__303->GetXaxis()->SetTitleSize(0.05);
   h_jet2CSV_ZpLjets__303->GetXaxis()->SetTickLength(0.025);
   h_jet2CSV_ZpLjets__303->GetXaxis()->SetTitleFont(42);
   h_jet2CSV_ZpLjets__303->GetYaxis()->SetTitle("a.u.");
   h_jet2CSV_ZpLjets__303->GetYaxis()->SetLabelFont(42);
   h_jet2CSV_ZpLjets__303->GetYaxis()->SetLabelOffset(0.007);
   h_jet2CSV_ZpLjets__303->GetYaxis()->SetTitleSize(0.05);
   h_jet2CSV_ZpLjets__303->GetYaxis()->SetTickLength(0.025);
   h_jet2CSV_ZpLjets__303->GetYaxis()->SetTitleFont(42);
   h_jet2CSV_ZpLjets__303->GetZaxis()->SetLabelFont(42);
   h_jet2CSV_ZpLjets__303->GetZaxis()->SetLabelOffset(0.007);
   h_jet2CSV_ZpLjets__303->GetZaxis()->SetTitleSize(0.05);
   h_jet2CSV_ZpLjets__303->GetZaxis()->SetTickLength(0.025);
   h_jet2CSV_ZpLjets__303->GetZaxis()->SetTitleFont(42);
   h->Add(h_jet2CSV_Z+jets,"");
   
   TH1D *h_jet2CSV_WpLjets__304 = new TH1D("h_jet2CSV_WpLjets__304","",10,0,1);
   h_jet2CSV_WpLjets__304->SetBinContent(1,0.02117649);
   h_jet2CSV_WpLjets__304->SetBinContent(2,0.01034319);
   h_jet2CSV_WpLjets__304->SetBinContent(3,0.005332434);
   h_jet2CSV_WpLjets__304->SetBinContent(4,0.002176535);
   h_jet2CSV_WpLjets__304->SetBinContent(5,0.001373088);
   h_jet2CSV_WpLjets__304->SetBinContent(6,0.001037922);
   h_jet2CSV_WpLjets__304->SetBinContent(7,0.001053131);
   h_jet2CSV_WpLjets__304->SetBinContent(8,0.0007298317);
   h_jet2CSV_WpLjets__304->SetBinContent(9,0.001124591);
   h_jet2CSV_WpLjets__304->SetBinContent(10,0.00133556);
   h_jet2CSV_WpLjets__304->SetBinError(1,0.001225679);
   h_jet2CSV_WpLjets__304->SetBinError(2,0.0007600965);
   h_jet2CSV_WpLjets__304->SetBinError(3,0.0005287877);
   h_jet2CSV_WpLjets__304->SetBinError(4,0.0003419408);
   h_jet2CSV_WpLjets__304->SetBinError(5,0.0002501467);
   h_jet2CSV_WpLjets__304->SetBinError(6,0.0002167305);
   h_jet2CSV_WpLjets__304->SetBinError(7,0.0002131361);
   h_jet2CSV_WpLjets__304->SetBinError(8,0.0001845227);
   h_jet2CSV_WpLjets__304->SetBinError(9,0.0002697908);
   h_jet2CSV_WpLjets__304->SetBinError(10,0.0002889042);
   h_jet2CSV_WpLjets__304->SetEntries(3309);
   h_jet2CSV_WpLjets__304->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   h_jet2CSV_WpLjets__304->SetFillColor(ci);
   h_jet2CSV_WpLjets__304->GetXaxis()->SetTitle("jet 2 CSV");
   h_jet2CSV_WpLjets__304->GetXaxis()->SetLabelFont(42);
   h_jet2CSV_WpLjets__304->GetXaxis()->SetLabelOffset(0.007);
   h_jet2CSV_WpLjets__304->GetXaxis()->SetTitleSize(0.05);
   h_jet2CSV_WpLjets__304->GetXaxis()->SetTickLength(0.025);
   h_jet2CSV_WpLjets__304->GetXaxis()->SetTitleFont(42);
   h_jet2CSV_WpLjets__304->GetYaxis()->SetTitle("a.u.");
   h_jet2CSV_WpLjets__304->GetYaxis()->SetLabelFont(42);
   h_jet2CSV_WpLjets__304->GetYaxis()->SetLabelOffset(0.007);
   h_jet2CSV_WpLjets__304->GetYaxis()->SetTitleSize(0.05);
   h_jet2CSV_WpLjets__304->GetYaxis()->SetTickLength(0.025);
   h_jet2CSV_WpLjets__304->GetYaxis()->SetTitleFont(42);
   h_jet2CSV_WpLjets__304->GetZaxis()->SetLabelFont(42);
   h_jet2CSV_WpLjets__304->GetZaxis()->SetLabelOffset(0.007);
   h_jet2CSV_WpLjets__304->GetZaxis()->SetTitleSize(0.05);
   h_jet2CSV_WpLjets__304->GetZaxis()->SetTickLength(0.025);
   h_jet2CSV_WpLjets__304->GetZaxis()->SetTitleFont(42);
   h->Add(h_jet2CSV_W+jets,"");
   
   TH1D *h_jet2CSV_TopsPoPLFcP__305 = new TH1D("h_jet2CSV_TopsPoPLFcP__305","",10,0,1);
   h_jet2CSV_TopsPoPLFcP__305->SetBinContent(1,0.0601164);
   h_jet2CSV_TopsPoPLFcP__305->SetBinContent(2,0.06340444);
   h_jet2CSV_TopsPoPLFcP__305->SetBinContent(3,0.02994075);
   h_jet2CSV_TopsPoPLFcP__305->SetBinContent(4,0.01942964);
   h_jet2CSV_TopsPoPLFcP__305->SetBinContent(5,0.01400916);
   h_jet2CSV_TopsPoPLFcP__305->SetBinContent(6,0.01153685);
   h_jet2CSV_TopsPoPLFcP__305->SetBinContent(7,0.01124396);
   h_jet2CSV_TopsPoPLFcP__305->SetBinContent(8,0.01299963);
   h_jet2CSV_TopsPoPLFcP__305->SetBinContent(9,0.02198185);
   h_jet2CSV_TopsPoPLFcP__305->SetBinContent(10,0.08341644);
   h_jet2CSV_TopsPoPLFcP__305->SetBinError(1,0.0008653795);
   h_jet2CSV_TopsPoPLFcP__305->SetBinError(2,0.0008504764);
   h_jet2CSV_TopsPoPLFcP__305->SetBinError(3,0.0005741534);
   h_jet2CSV_TopsPoPLFcP__305->SetBinError(4,0.0004672378);
   h_jet2CSV_TopsPoPLFcP__305->SetBinError(5,0.0003883776);
   h_jet2CSV_TopsPoPLFcP__305->SetBinError(6,0.0003407437);
   h_jet2CSV_TopsPoPLFcP__305->SetBinError(7,0.0003553133);
   h_jet2CSV_TopsPoPLFcP__305->SetBinError(8,0.0003861221);
   h_jet2CSV_TopsPoPLFcP__305->SetBinError(9,0.0005278244);
   h_jet2CSV_TopsPoPLFcP__305->SetBinError(10,0.0009796516);
   h_jet2CSV_TopsPoPLFcP__305->SetEntries(45754);
   h_jet2CSV_TopsPoPLFcP__305->SetStats(0);

   ci = TColor::GetColor("#cc33cc");
   h_jet2CSV_TopsPoPLFcP__305->SetFillColor(ci);
   h_jet2CSV_TopsPoPLFcP__305->GetXaxis()->SetTitle("jet 2 CSV");
   h_jet2CSV_TopsPoPLFcP__305->GetXaxis()->SetLabelFont(42);
   h_jet2CSV_TopsPoPLFcP__305->GetXaxis()->SetLabelOffset(0.007);
   h_jet2CSV_TopsPoPLFcP__305->GetXaxis()->SetTitleSize(0.05);
   h_jet2CSV_TopsPoPLFcP__305->GetXaxis()->SetTickLength(0.025);
   h_jet2CSV_TopsPoPLFcP__305->GetXaxis()->SetTitleFont(42);
   h_jet2CSV_TopsPoPLFcP__305->GetYaxis()->SetTitle("a.u.");
   h_jet2CSV_TopsPoPLFcP__305->GetYaxis()->SetLabelFont(42);
   h_jet2CSV_TopsPoPLFcP__305->GetYaxis()->SetLabelOffset(0.007);
   h_jet2CSV_TopsPoPLFcP__305->GetYaxis()->SetTitleSize(0.05);
   h_jet2CSV_TopsPoPLFcP__305->GetYaxis()->SetTickLength(0.025);
   h_jet2CSV_TopsPoPLFcP__305->GetYaxis()->SetTitleFont(42);
   h_jet2CSV_TopsPoPLFcP__305->GetZaxis()->SetLabelFont(42);
   h_jet2CSV_TopsPoPLFcP__305->GetZaxis()->SetLabelOffset(0.007);
   h_jet2CSV_TopsPoPLFcP__305->GetZaxis()->SetTitleSize(0.05);
   h_jet2CSV_TopsPoPLFcP__305->GetZaxis()->SetTickLength(0.025);
   h_jet2CSV_TopsPoPLFcP__305->GetZaxis()->SetTitleFont(42);
   h->Add(h_jet2CSV_Top (LF),"");
   
   TH1D *h_jet2CSV_TopsPoPHFcP__306 = new TH1D("h_jet2CSV_TopsPoPHFcP__306","",10,0,1);
   h_jet2CSV_TopsPoPHFcP__306->SetBinContent(1,0.1416233);
   h_jet2CSV_TopsPoPHFcP__306->SetBinContent(2,0.07901154);
   h_jet2CSV_TopsPoPHFcP__306->SetBinContent(3,0.03897981);
   h_jet2CSV_TopsPoPHFcP__306->SetBinContent(4,0.02420022);
   h_jet2CSV_TopsPoPHFcP__306->SetBinContent(5,0.01727929);
   h_jet2CSV_TopsPoPHFcP__306->SetBinContent(6,0.01657941);
   h_jet2CSV_TopsPoPHFcP__306->SetBinContent(7,0.0164018);
   h_jet2CSV_TopsPoPHFcP__306->SetBinContent(8,0.0201354);
   h_jet2CSV_TopsPoPHFcP__306->SetBinContent(9,0.03622408);
   h_jet2CSV_TopsPoPHFcP__306->SetBinContent(10,0.1400107);
   h_jet2CSV_TopsPoPHFcP__306->SetBinError(1,0.001387993);
   h_jet2CSV_TopsPoPHFcP__306->SetBinError(2,0.0009861683);
   h_jet2CSV_TopsPoPHFcP__306->SetBinError(3,0.000670408);
   h_jet2CSV_TopsPoPHFcP__306->SetBinError(4,0.0005136483);
   h_jet2CSV_TopsPoPHFcP__306->SetBinError(5,0.0004064128);
   h_jet2CSV_TopsPoPHFcP__306->SetBinError(6,0.0004774176);
   h_jet2CSV_TopsPoPHFcP__306->SetBinError(7,0.0004249852);
   h_jet2CSV_TopsPoPHFcP__306->SetBinError(8,0.0004928572);
   h_jet2CSV_TopsPoPHFcP__306->SetBinError(9,0.0006376267);
   h_jet2CSV_TopsPoPHFcP__306->SetBinError(10,0.001254269);
   h_jet2CSV_TopsPoPHFcP__306->SetEntries(77950);
   h_jet2CSV_TopsPoPHFcP__306->SetStats(0);

   ci = TColor::GetColor("#ff9900");
   h_jet2CSV_TopsPoPHFcP__306->SetFillColor(ci);
   h_jet2CSV_TopsPoPHFcP__306->GetXaxis()->SetTitle("jet 2 CSV");
   h_jet2CSV_TopsPoPHFcP__306->GetXaxis()->SetLabelFont(42);
   h_jet2CSV_TopsPoPHFcP__306->GetXaxis()->SetLabelOffset(0.007);
   h_jet2CSV_TopsPoPHFcP__306->GetXaxis()->SetTitleSize(0.05);
   h_jet2CSV_TopsPoPHFcP__306->GetXaxis()->SetTickLength(0.025);
   h_jet2CSV_TopsPoPHFcP__306->GetXaxis()->SetTitleFont(42);
   h_jet2CSV_TopsPoPHFcP__306->GetYaxis()->SetTitle("a.u.");
   h_jet2CSV_TopsPoPHFcP__306->GetYaxis()->SetLabelFont(42);
   h_jet2CSV_TopsPoPHFcP__306->GetYaxis()->SetLabelOffset(0.007);
   h_jet2CSV_TopsPoPHFcP__306->GetYaxis()->SetTitleSize(0.05);
   h_jet2CSV_TopsPoPHFcP__306->GetYaxis()->SetTickLength(0.025);
   h_jet2CSV_TopsPoPHFcP__306->GetYaxis()->SetTitleFont(42);
   h_jet2CSV_TopsPoPHFcP__306->GetZaxis()->SetLabelFont(42);
   h_jet2CSV_TopsPoPHFcP__306->GetZaxis()->SetLabelOffset(0.007);
   h_jet2CSV_TopsPoPHFcP__306->GetZaxis()->SetTitleSize(0.05);
   h_jet2CSV_TopsPoPHFcP__306->GetZaxis()->SetTickLength(0.025);
   h_jet2CSV_TopsPoPHFcP__306->GetZaxis()->SetTitleFont(42);
   h->Add(h_jet2CSV_Top (HF),"");
   h->Draw("hist");
   
   TH1D *hsum__307 = new TH1D("hsum__307","",10,0,1);
   hsum__307->SetBinContent(1,0.2632535);
   hsum__307->SetBinContent(2,0.1751834);
   hsum__307->SetBinContent(3,0.08596183);
   hsum__307->SetBinContent(4,0.05085303);
   hsum__307->SetBinContent(5,0.03600648);
   hsum__307->SetBinContent(6,0.03205778);
   hsum__307->SetBinContent(7,0.03067984);
   hsum__307->SetBinContent(8,0.03554107);
   hsum__307->SetBinContent(9,0.06238964);
   hsum__307->SetBinContent(10,0.2280735);
   hsum__307->SetBinError(1,0.003412795);
   hsum__307->SetBinError(2,0.002195568);
   hsum__307->SetBinError(3,0.001938275);
   hsum__307->SetBinError(4,0.001071604);
   hsum__307->SetBinError(5,0.0007927691);
   hsum__307->SetBinError(6,0.0009142144);
   hsum__307->SetBinError(7,0.0007574658);
   hsum__307->SetBinError(8,0.0007357658);
   hsum__307->SetBinError(9,0.001676061);
   hsum__307->SetBinError(10,0.001900525);
   hsum__307->SetEntries(45);
   hsum__307->SetStats(0);

   ci = 1205;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   hsum__307->SetFillColor(ci);
   hsum__307->SetFillStyle(3003);
   hsum__307->SetLineWidth(0);
   hsum__307->GetXaxis()->SetTitle("jet 2 CSV");
   hsum__307->GetXaxis()->SetLabelFont(42);
   hsum__307->GetXaxis()->SetLabelOffset(0.007);
   hsum__307->GetXaxis()->SetTitleSize(0.05);
   hsum__307->GetXaxis()->SetTickLength(0.025);
   hsum__307->GetXaxis()->SetTitleFont(42);
   hsum__307->GetYaxis()->SetTitle("a.u.");
   hsum__307->GetYaxis()->SetLabelFont(42);
   hsum__307->GetYaxis()->SetLabelOffset(0.007);
   hsum__307->GetYaxis()->SetTitleSize(0.05);
   hsum__307->GetYaxis()->SetTickLength(0.025);
   hsum__307->GetYaxis()->SetTitleFont(42);
   hsum__307->GetZaxis()->SetLabelFont(42);
   hsum__307->GetZaxis()->SetLabelOffset(0.007);
   hsum__307->GetZaxis()->SetTitleSize(0.05);
   hsum__307->GetZaxis()->SetTickLength(0.025);
   hsum__307->GetZaxis()->SetTitleFont(42);
   hsum__307->Draw("e2 same");
   
   TH1D *h_jet2CSV_Data__308 = new TH1D("h_jet2CSV_Data__308","",10,0,1);
   h_jet2CSV_Data__308->SetBinContent(1,0.2433808);
   h_jet2CSV_Data__308->SetBinContent(2,0.1576369);
   h_jet2CSV_Data__308->SetBinContent(3,0.08461321);
   h_jet2CSV_Data__308->SetBinContent(4,0.05620465);
   h_jet2CSV_Data__308->SetBinContent(5,0.04075191);
   h_jet2CSV_Data__308->SetBinContent(6,0.03783096);
   h_jet2CSV_Data__308->SetBinContent(7,0.03594648);
   h_jet2CSV_Data__308->SetBinContent(8,0.0407048);
   h_jet2CSV_Data__308->SetBinContent(9,0.06944314);
   h_jet2CSV_Data__308->SetBinContent(10,0.2334872);
   h_jet2CSV_Data__308->SetBinError(1,0.003386172);
   h_jet2CSV_Data__308->SetBinError(2,0.002725178);
   h_jet2CSV_Data__308->SetBinError(3,0.001996572);
   h_jet2CSV_Data__308->SetBinError(4,0.001627242);
   h_jet2CSV_Data__308->SetBinError(5,0.001385606);
   h_jet2CSV_Data__308->SetBinError(6,0.001335026);
   h_jet2CSV_Data__308->SetBinError(7,0.00130135);
   h_jet2CSV_Data__308->SetBinError(8,0.001384805);
   h_jet2CSV_Data__308->SetBinError(9,0.001808758);
   h_jet2CSV_Data__308->SetBinError(10,0.003316634);
   h_jet2CSV_Data__308->SetEntries(21226);
   h_jet2CSV_Data__308->SetStats(0);
   h_jet2CSV_Data__308->SetLineWidth(3);
   h_jet2CSV_Data__308->SetMarkerStyle(20);
   h_jet2CSV_Data__308->SetMarkerSize(2);
   h_jet2CSV_Data__308->GetXaxis()->SetTitle("jet 2 CSV");
   h_jet2CSV_Data__308->GetXaxis()->SetLabelFont(42);
   h_jet2CSV_Data__308->GetXaxis()->SetLabelOffset(0.007);
   h_jet2CSV_Data__308->GetXaxis()->SetTitleSize(0.05);
   h_jet2CSV_Data__308->GetXaxis()->SetTickLength(0.025);
   h_jet2CSV_Data__308->GetXaxis()->SetTitleFont(42);
   h_jet2CSV_Data__308->GetYaxis()->SetTitle("a.u.");
   h_jet2CSV_Data__308->GetYaxis()->SetLabelFont(42);
   h_jet2CSV_Data__308->GetYaxis()->SetLabelOffset(0.007);
   h_jet2CSV_Data__308->GetYaxis()->SetTitleSize(0.05);
   h_jet2CSV_Data__308->GetYaxis()->SetTickLength(0.025);
   h_jet2CSV_Data__308->GetYaxis()->SetTitleFont(42);
   h_jet2CSV_Data__308->GetZaxis()->SetLabelFont(42);
   h_jet2CSV_Data__308->GetZaxis()->SetLabelOffset(0.007);
   h_jet2CSV_Data__308->GetZaxis()->SetTitleSize(0.05);
   h_jet2CSV_Data__308->GetZaxis()->SetTickLength(0.025);
   h_jet2CSV_Data__308->GetZaxis()->SetTitleFont(42);
   h_jet2CSV_Data__308->Draw("elp same");
   
   TLegend *leg = new TLegend(0.6,0.55,0.88,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("h_jet2CSV_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_jet2CSV_Top (HF)","Top (HF)","F");

   ci = TColor::GetColor("#ff9900");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_jet2CSV_Top (LF)","Top (LF)","F");

   ci = TColor::GetColor("#cc33cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_jet2CSV_W+jets","W+jets","F");

   ci = TColor::GetColor("#66cc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_jet2CSV_Z+jets","Z+jets","F");

   ci = TColor::GetColor("#3399cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_jet2CSV_Diboson","Diboson","F");

   ci = TColor::GetColor("#9966cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_jet2CSV_QCD","QCD","F");

   ci = TColor::GetColor("#cccccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   leg = new TLegend(0.6,0.55,0.88,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("h_jet2CSV_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_jet2CSV_Top (HF)","Top (HF)","F");

   ci = TColor::GetColor("#ff9900");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_jet2CSV_Top (LF)","Top (LF)","F");

   ci = TColor::GetColor("#cc33cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_jet2CSV_W+jets","W+jets","F");

   ci = TColor::GetColor("#66cc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_jet2CSV_Z+jets","Z+jets","F");

   ci = TColor::GetColor("#3399cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_jet2CSV_Diboson","Diboson","F");

   ci = TColor::GetColor("#9966cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_jet2CSV_QCD","QCD","F");

   ci = TColor::GetColor("#cccccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.18,0.85,"CMS");
tex->SetNDC();
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.28,0.85,"Preliminary");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.9,0.94,"36.6 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   pad1->Modified();
   c1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "pad2",0,0.05,1,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-0.1875,-0.8914286,1.0625,0.48);
   pad2->SetFillColor(0);
   pad2->SetBorderMode(0);
   pad2->SetBorderSize(2);
   pad2->SetGridy();
   pad2->SetTickx(1);
   pad2->SetTicky(1);
   pad2->SetLeftMargin(0.15);
   pad2->SetRightMargin(0.05);
   pad2->SetTopMargin(0);
   pad2->SetBottomMargin(0.3);
   pad2->SetFrameFillStyle(0);
   pad2->SetFrameBorderMode(0);
   pad2->SetFrameFillStyle(0);
   pad2->SetFrameBorderMode(0);
   
   TH1D *ratio__309 = new TH1D("ratio__309","",10,0,1);
   ratio__309->SetBinContent(1,-0.07548881);
   ratio__309->SetBinContent(2,-0.1001608);
   ratio__309->SetBinContent(3,-0.0156886);
   ratio__309->SetBinContent(4,0.1052371);
   ratio__309->SetBinContent(5,0.1317939);
   ratio__309->SetBinContent(6,0.1800869);
   ratio__309->SetBinContent(7,0.1716647);
   ratio__309->SetBinContent(8,0.1452891);
   ratio__309->SetBinContent(9,0.1130556);
   ratio__309->SetBinContent(10,0.02373672);
   ratio__309->SetBinError(1,0.0001);
   ratio__309->SetBinError(2,0.0001);
   ratio__309->SetBinError(3,0.0001);
   ratio__309->SetBinError(4,0.0001);
   ratio__309->SetBinError(5,0.0001);
   ratio__309->SetBinError(6,0.0001);
   ratio__309->SetBinError(7,0.0001);
   ratio__309->SetBinError(8,0.0001);
   ratio__309->SetBinError(9,0.0001);
   ratio__309->SetBinError(10,0.0001);
   ratio__309->SetMinimum(-0.48);
   ratio__309->SetMaximum(0.48);
   ratio__309->SetEntries(21236);
   ratio__309->SetStats(0);
   ratio__309->SetLineWidth(3);
   ratio__309->SetMarkerStyle(20);
   ratio__309->SetMarkerSize(2);
   ratio__309->GetXaxis()->SetTitle("jet 2 CSV");
   ratio__309->GetXaxis()->SetLabelFont(43);
   ratio__309->GetXaxis()->SetLabelOffset(0.007);
   ratio__309->GetXaxis()->SetLabelSize(30);
   ratio__309->GetXaxis()->SetTitleSize(40);
   ratio__309->GetXaxis()->SetTickLength(0.025);
   ratio__309->GetXaxis()->SetTitleOffset(5);
   ratio__309->GetXaxis()->SetTitleFont(43);
   ratio__309->GetYaxis()->SetTitle("#frac{Data-Exp}{Exp}");
   ratio__309->GetYaxis()->SetNdivisions(5);
   ratio__309->GetYaxis()->SetLabelFont(43);
   ratio__309->GetYaxis()->SetLabelOffset(0.007);
   ratio__309->GetYaxis()->SetLabelSize(30);
   ratio__309->GetYaxis()->SetTitleSize(40);
   ratio__309->GetYaxis()->SetTickLength(0.025);
   ratio__309->GetYaxis()->SetTitleOffset(2.5);
   ratio__309->GetYaxis()->SetTitleFont(43);
   ratio__309->GetZaxis()->SetLabelFont(42);
   ratio__309->GetZaxis()->SetLabelOffset(0.007);
   ratio__309->GetZaxis()->SetTitleSize(0.05);
   ratio__309->GetZaxis()->SetTickLength(0.025);
   ratio__309->GetZaxis()->SetTitleFont(42);
   ratio__309->Draw("elp");
   
   TH1D *zero__310 = new TH1D("zero__310","",10,0,1);
   zero__310->SetBinError(1,0.003386172);
   zero__310->SetBinError(2,0.002725178);
   zero__310->SetBinError(3,0.001996572);
   zero__310->SetBinError(4,0.001627242);
   zero__310->SetBinError(5,0.001385606);
   zero__310->SetBinError(6,0.001335026);
   zero__310->SetBinError(7,0.00130135);
   zero__310->SetBinError(8,0.001384805);
   zero__310->SetBinError(9,0.001808758);
   zero__310->SetBinError(10,0.003316634);
   zero__310->SetEntries(21236);
   zero__310->SetStats(0);
   zero__310->SetLineWidth(3);
   zero__310->SetMarkerStyle(20);
   zero__310->SetMarkerSize(2);
   zero__310->GetXaxis()->SetTitle("jet 2 CSV");
   zero__310->GetXaxis()->SetLabelFont(42);
   zero__310->GetXaxis()->SetLabelOffset(0.007);
   zero__310->GetXaxis()->SetTitleSize(0.05);
   zero__310->GetXaxis()->SetTickLength(0.025);
   zero__310->GetXaxis()->SetTitleFont(42);
   zero__310->GetYaxis()->SetTitle("a.u.");
   zero__310->GetYaxis()->SetLabelFont(42);
   zero__310->GetYaxis()->SetLabelOffset(0.007);
   zero__310->GetYaxis()->SetTitleSize(0.05);
   zero__310->GetYaxis()->SetTickLength(0.025);
   zero__310->GetYaxis()->SetTitleFont(42);
   zero__310->GetZaxis()->SetLabelFont(42);
   zero__310->GetZaxis()->SetLabelOffset(0.007);
   zero__310->GetZaxis()->SetTitleSize(0.05);
   zero__310->GetZaxis()->SetTickLength(0.025);
   zero__310->GetZaxis()->SetTitleFont(42);
   zero__310->Draw("hist same");
   
   TH1D *sumratioup__311 = new TH1D("sumratioup__311","",10,0,1);
   sumratioup__311->SetBinContent(1,0.01296391);
   sumratioup__311->SetBinContent(2,0.01253297);
   sumratioup__311->SetBinContent(3,0.02254809);
   sumratioup__311->SetBinContent(4,0.02107258);
   sumratioup__311->SetBinContent(5,0.0220174);
   sumratioup__311->SetBinContent(6,0.02851771);
   sumratioup__311->SetBinContent(7,0.02468937);
   sumratioup__311->SetBinContent(8,0.02070185);
   sumratioup__311->SetBinContent(9,0.02686441);
   sumratioup__311->SetBinContent(10,0.00833295);
   sumratioup__311->SetBinError(1,0.003412795);
   sumratioup__311->SetBinError(2,0.002195568);
   sumratioup__311->SetBinError(3,0.001938275);
   sumratioup__311->SetBinError(4,0.001071604);
   sumratioup__311->SetBinError(5,0.0007927691);
   sumratioup__311->SetBinError(6,0.0009142144);
   sumratioup__311->SetBinError(7,0.0007574658);
   sumratioup__311->SetBinError(8,0.0007357658);
   sumratioup__311->SetBinError(9,0.001676061);
   sumratioup__311->SetBinError(10,0.001900525);
   sumratioup__311->SetEntries(55);
   sumratioup__311->SetStats(0);

   ci = 1205;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratioup__311->SetFillColor(ci);
   sumratioup__311->SetFillStyle(3003);
   sumratioup__311->GetXaxis()->SetTitle("jet 2 CSV");
   sumratioup__311->GetXaxis()->SetLabelFont(42);
   sumratioup__311->GetXaxis()->SetLabelOffset(0.007);
   sumratioup__311->GetXaxis()->SetTitleSize(0.05);
   sumratioup__311->GetXaxis()->SetTickLength(0.025);
   sumratioup__311->GetXaxis()->SetTitleFont(42);
   sumratioup__311->GetYaxis()->SetTitle("a.u.");
   sumratioup__311->GetYaxis()->SetLabelFont(42);
   sumratioup__311->GetYaxis()->SetLabelOffset(0.007);
   sumratioup__311->GetYaxis()->SetTitleSize(0.05);
   sumratioup__311->GetYaxis()->SetTickLength(0.025);
   sumratioup__311->GetYaxis()->SetTitleFont(42);
   sumratioup__311->GetZaxis()->SetLabelFont(42);
   sumratioup__311->GetZaxis()->SetLabelOffset(0.007);
   sumratioup__311->GetZaxis()->SetTitleSize(0.05);
   sumratioup__311->GetZaxis()->SetTickLength(0.025);
   sumratioup__311->GetZaxis()->SetTitleFont(42);
   sumratioup__311->Draw("hist same");
   
   TH1D *sumratiodown__312 = new TH1D("sumratiodown__312","",10,0,1);
   sumratiodown__312->SetBinContent(1,-0.01296391);
   sumratiodown__312->SetBinContent(2,-0.01253297);
   sumratiodown__312->SetBinContent(3,-0.02254809);
   sumratiodown__312->SetBinContent(4,-0.02107258);
   sumratiodown__312->SetBinContent(5,-0.0220174);
   sumratiodown__312->SetBinContent(6,-0.02851771);
   sumratiodown__312->SetBinContent(7,-0.02468937);
   sumratiodown__312->SetBinContent(8,-0.02070185);
   sumratiodown__312->SetBinContent(9,-0.02686441);
   sumratiodown__312->SetBinContent(10,-0.00833295);
   sumratiodown__312->SetBinError(1,0.003412795);
   sumratiodown__312->SetBinError(2,0.002195568);
   sumratiodown__312->SetBinError(3,0.001938275);
   sumratiodown__312->SetBinError(4,0.001071604);
   sumratiodown__312->SetBinError(5,0.0007927691);
   sumratiodown__312->SetBinError(6,0.0009142144);
   sumratiodown__312->SetBinError(7,0.0007574658);
   sumratiodown__312->SetBinError(8,0.0007357658);
   sumratiodown__312->SetBinError(9,0.001676061);
   sumratiodown__312->SetBinError(10,0.001900525);
   sumratiodown__312->SetEntries(55);
   sumratiodown__312->SetStats(0);

   ci = 1205;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratiodown__312->SetFillColor(ci);
   sumratiodown__312->SetFillStyle(3003);
   sumratiodown__312->GetXaxis()->SetTitle("jet 2 CSV");
   sumratiodown__312->GetXaxis()->SetLabelFont(42);
   sumratiodown__312->GetXaxis()->SetLabelOffset(0.007);
   sumratiodown__312->GetXaxis()->SetTitleSize(0.05);
   sumratiodown__312->GetXaxis()->SetTickLength(0.025);
   sumratiodown__312->GetXaxis()->SetTitleFont(42);
   sumratiodown__312->GetYaxis()->SetTitle("a.u.");
   sumratiodown__312->GetYaxis()->SetLabelFont(42);
   sumratiodown__312->GetYaxis()->SetLabelOffset(0.007);
   sumratiodown__312->GetYaxis()->SetTitleSize(0.05);
   sumratiodown__312->GetYaxis()->SetTickLength(0.025);
   sumratiodown__312->GetYaxis()->SetTitleFont(42);
   sumratiodown__312->GetZaxis()->SetLabelFont(42);
   sumratiodown__312->GetZaxis()->SetLabelOffset(0.007);
   sumratiodown__312->GetZaxis()->SetTitleSize(0.05);
   sumratiodown__312->GetZaxis()->SetTickLength(0.025);
   sumratiodown__312->GetZaxis()->SetTitleFont(42);
   sumratiodown__312->Draw("hist same");
   
   Double_t Graph0_fx1026[10] = {
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t Graph0_fy1026[10] = {
   -0.07548881,
   -0.1001608,
   -0.0156886,
   0.1052371,
   0.1317939,
   0.1800869,
   0.1716647,
   0.1452891,
   0.1130556,
   0.02373672};
   Double_t Graph0_fex1026[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1026[10] = {
   0.01286278,
   0.01555614,
   0.02322626,
   0.03199892,
   0.03848214,
   0.04164436,
   0.04241711,
   0.03896353,
   0.02899133,
   0.01454195};
   TGraphErrors *gre = new TGraphErrors(10,Graph0_fx1026,Graph0_fy1026,Graph0_fex1026,Graph0_fey1026);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1026 = new TH1F("Graph_Graph1026","Graph",100,0,1.04);
   Graph_Graph1026->SetMinimum(-0.1494617);
   Graph_Graph1026->SetMaximum(0.255476);
   Graph_Graph1026->SetDirectory(0);
   Graph_Graph1026->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1026->SetLineColor(ci);
   Graph_Graph1026->GetXaxis()->SetLabelFont(42);
   Graph_Graph1026->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1026->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1026->GetXaxis()->SetTickLength(0.025);
   Graph_Graph1026->GetXaxis()->SetTitleFont(42);
   Graph_Graph1026->GetYaxis()->SetLabelFont(42);
   Graph_Graph1026->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1026->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1026->GetYaxis()->SetTickLength(0.025);
   Graph_Graph1026->GetYaxis()->SetTitleFont(42);
   Graph_Graph1026->GetZaxis()->SetLabelFont(42);
   Graph_Graph1026->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1026->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph1026->GetZaxis()->SetTickLength(0.025);
   Graph_Graph1026->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1026);
   
   gre->Draw("pe0");
   pad2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
