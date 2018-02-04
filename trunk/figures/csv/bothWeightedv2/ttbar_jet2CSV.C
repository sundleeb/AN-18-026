void ttbar_jet2CSV()
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
   pad1->Range(-0.1875,0,1.0625,0.5944433);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
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
   h->SetMinimum(0);
   h->SetMaximum(0.5265069);
   
   TH1F *h_stack_25 = new TH1F("h_stack_25","",10,0,1);
   h_stack_25->SetMinimum(0);
   h_stack_25->SetMaximum(0.5528322);
   h_stack_25->SetDirectory(0);
   h_stack_25->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h_stack_25->SetLineColor(ci);
   h_stack_25->GetXaxis()->SetLabelFont(42);
   h_stack_25->GetXaxis()->SetLabelOffset(0.007);
   h_stack_25->GetXaxis()->SetTitleSize(0.05);
   h_stack_25->GetXaxis()->SetTickLength(0.025);
   h_stack_25->GetXaxis()->SetTitleFont(42);
   h_stack_25->GetYaxis()->SetTitle("a.u.");
   h_stack_25->GetYaxis()->SetLabelFont(42);
   h_stack_25->GetYaxis()->SetLabelOffset(0.007);
   h_stack_25->GetYaxis()->SetTitleSize(0.05);
   h_stack_25->GetYaxis()->SetTickLength(0.025);
   h_stack_25->GetYaxis()->SetTitleOffset(1.5);
   h_stack_25->GetYaxis()->SetTitleFont(42);
   h_stack_25->GetZaxis()->SetLabelFont(42);
   h_stack_25->GetZaxis()->SetLabelOffset(0.007);
   h_stack_25->GetZaxis()->SetTitleSize(0.05);
   h_stack_25->GetZaxis()->SetTickLength(0.025);
   h_stack_25->GetZaxis()->SetTitleFont(42);
   h->SetHistogram(h_stack_25);
   
   
   TH1D *h_jet2CSV_QCD__289 = new TH1D("h_jet2CSV_QCD__289","",10,0,1);
   h_jet2CSV_QCD__289->SetBinContent(1,0.004042845);
   h_jet2CSV_QCD__289->SetBinContent(2,0.001396245);
   h_jet2CSV_QCD__289->SetBinContent(3,0.0016643);
   h_jet2CSV_QCD__289->SetBinContent(4,0.0005158117);
   h_jet2CSV_QCD__289->SetBinContent(6,0.0005745276);
   h_jet2CSV_QCD__289->SetBinContent(7,0.0002095089);
   h_jet2CSV_QCD__289->SetBinContent(9,0.00180212);
   h_jet2CSV_QCD__289->SetBinContent(10,0.001380201);
   h_jet2CSV_QCD__289->SetBinError(1,0.001980132);
   h_jet2CSV_QCD__289->SetBinError(2,0.0007621706);
   h_jet2CSV_QCD__289->SetBinError(3,0.00129889);
   h_jet2CSV_QCD__289->SetBinError(4,0.0005079247);
   h_jet2CSV_QCD__289->SetBinError(6,0.0005745276);
   h_jet2CSV_QCD__289->SetBinError(7,0.0002095089);
   h_jet2CSV_QCD__289->SetBinError(9,0.001414545);
   h_jet2CSV_QCD__289->SetBinError(10,0.0009073313);
   h_jet2CSV_QCD__289->SetEntries(25);
   h_jet2CSV_QCD__289->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_jet2CSV_QCD__289->SetFillColor(ci);
   h_jet2CSV_QCD__289->GetXaxis()->SetTitle("jet 2 CSV");
   h_jet2CSV_QCD__289->GetXaxis()->SetLabelFont(42);
   h_jet2CSV_QCD__289->GetXaxis()->SetLabelOffset(0.007);
   h_jet2CSV_QCD__289->GetXaxis()->SetTitleSize(0.05);
   h_jet2CSV_QCD__289->GetXaxis()->SetTickLength(0.025);
   h_jet2CSV_QCD__289->GetXaxis()->SetTitleFont(42);
   h_jet2CSV_QCD__289->GetYaxis()->SetTitle("a.u.");
   h_jet2CSV_QCD__289->GetYaxis()->SetLabelFont(42);
   h_jet2CSV_QCD__289->GetYaxis()->SetLabelOffset(0.007);
   h_jet2CSV_QCD__289->GetYaxis()->SetTitleSize(0.05);
   h_jet2CSV_QCD__289->GetYaxis()->SetTickLength(0.025);
   h_jet2CSV_QCD__289->GetYaxis()->SetTitleFont(42);
   h_jet2CSV_QCD__289->GetZaxis()->SetLabelFont(42);
   h_jet2CSV_QCD__289->GetZaxis()->SetLabelOffset(0.007);
   h_jet2CSV_QCD__289->GetZaxis()->SetTitleSize(0.05);
   h_jet2CSV_QCD__289->GetZaxis()->SetTickLength(0.025);
   h_jet2CSV_QCD__289->GetZaxis()->SetTitleFont(42);
   h->Add(h_jet2CSV_QCD,"");
   
   TH1D *h_jet2CSV_Diboson__290 = new TH1D("h_jet2CSV_Diboson__290","",10,0,1);
   h_jet2CSV_Diboson__290->SetBinContent(1,0.01691046);
   h_jet2CSV_Diboson__290->SetBinContent(2,0.009295677);
   h_jet2CSV_Diboson__290->SetBinContent(3,0.004691052);
   h_jet2CSV_Diboson__290->SetBinContent(4,0.001447753);
   h_jet2CSV_Diboson__290->SetBinContent(5,0.001219864);
   h_jet2CSV_Diboson__290->SetBinContent(6,0.0005219856);
   h_jet2CSV_Diboson__290->SetBinContent(7,0.0007204086);
   h_jet2CSV_Diboson__290->SetBinContent(8,0.0006070389);
   h_jet2CSV_Diboson__290->SetBinContent(9,0.0004174182);
   h_jet2CSV_Diboson__290->SetBinContent(10,0.0009615269);
   h_jet2CSV_Diboson__290->SetBinError(1,0.001822389);
   h_jet2CSV_Diboson__290->SetBinError(2,0.001372576);
   h_jet2CSV_Diboson__290->SetBinError(3,0.0009835467);
   h_jet2CSV_Diboson__290->SetBinError(4,0.0005177586);
   h_jet2CSV_Diboson__290->SetBinError(5,0.0004859373);
   h_jet2CSV_Diboson__290->SetBinError(6,0.0003172404);
   h_jet2CSV_Diboson__290->SetBinError(7,0.0004144498);
   h_jet2CSV_Diboson__290->SetBinError(8,0.0003261611);
   h_jet2CSV_Diboson__290->SetBinError(9,0.0002112314);
   h_jet2CSV_Diboson__290->SetBinError(10,0.0004072501);
   h_jet2CSV_Diboson__290->SetEntries(227);
   h_jet2CSV_Diboson__290->SetStats(0);

   ci = TColor::GetColor("#9966cc");
   h_jet2CSV_Diboson__290->SetFillColor(ci);
   h_jet2CSV_Diboson__290->GetXaxis()->SetTitle("jet 2 CSV");
   h_jet2CSV_Diboson__290->GetXaxis()->SetLabelFont(42);
   h_jet2CSV_Diboson__290->GetXaxis()->SetLabelOffset(0.007);
   h_jet2CSV_Diboson__290->GetXaxis()->SetTitleSize(0.05);
   h_jet2CSV_Diboson__290->GetXaxis()->SetTickLength(0.025);
   h_jet2CSV_Diboson__290->GetXaxis()->SetTitleFont(42);
   h_jet2CSV_Diboson__290->GetYaxis()->SetTitle("a.u.");
   h_jet2CSV_Diboson__290->GetYaxis()->SetLabelFont(42);
   h_jet2CSV_Diboson__290->GetYaxis()->SetLabelOffset(0.007);
   h_jet2CSV_Diboson__290->GetYaxis()->SetTitleSize(0.05);
   h_jet2CSV_Diboson__290->GetYaxis()->SetTickLength(0.025);
   h_jet2CSV_Diboson__290->GetYaxis()->SetTitleFont(42);
   h_jet2CSV_Diboson__290->GetZaxis()->SetLabelFont(42);
   h_jet2CSV_Diboson__290->GetZaxis()->SetLabelOffset(0.007);
   h_jet2CSV_Diboson__290->GetZaxis()->SetTitleSize(0.05);
   h_jet2CSV_Diboson__290->GetZaxis()->SetTickLength(0.025);
   h_jet2CSV_Diboson__290->GetZaxis()->SetTitleFont(42);
   h->Add(h_jet2CSV_Diboson,"");
   
   TH1D *h_jet2CSV_ZpLjets__291 = new TH1D("h_jet2CSV_ZpLjets__291","",10,0,1);
   h_jet2CSV_ZpLjets__291->SetBinContent(1,0.01938397);
   h_jet2CSV_ZpLjets__291->SetBinContent(2,0.01173228);
   h_jet2CSV_ZpLjets__291->SetBinContent(3,0.005353481);
   h_jet2CSV_ZpLjets__291->SetBinContent(4,0.003083062);
   h_jet2CSV_ZpLjets__291->SetBinContent(5,0.002125068);
   h_jet2CSV_ZpLjets__291->SetBinContent(6,0.001807083);
   h_jet2CSV_ZpLjets__291->SetBinContent(7,0.001051029);
   h_jet2CSV_ZpLjets__291->SetBinContent(8,0.001069167);
   h_jet2CSV_ZpLjets__291->SetBinContent(9,0.0008395713);
   h_jet2CSV_ZpLjets__291->SetBinContent(10,0.000969095);
   h_jet2CSV_ZpLjets__291->SetBinError(1,0.0004769165);
   h_jet2CSV_ZpLjets__291->SetBinError(2,0.0002864723);
   h_jet2CSV_ZpLjets__291->SetBinError(3,0.0002090813);
   h_jet2CSV_ZpLjets__291->SetBinError(4,0.0001523319);
   h_jet2CSV_ZpLjets__291->SetBinError(5,0.0001173285);
   h_jet2CSV_ZpLjets__291->SetBinError(6,0.0001185691);
   h_jet2CSV_ZpLjets__291->SetBinError(7,7.618958e-05);
   h_jet2CSV_ZpLjets__291->SetBinError(8,9.44621e-05);
   h_jet2CSV_ZpLjets__291->SetBinError(9,7.530197e-05);
   h_jet2CSV_ZpLjets__291->SetBinError(10,8.074389e-05);
   h_jet2CSV_ZpLjets__291->SetEntries(24915);
   h_jet2CSV_ZpLjets__291->SetStats(0);

   ci = TColor::GetColor("#3399cc");
   h_jet2CSV_ZpLjets__291->SetFillColor(ci);
   h_jet2CSV_ZpLjets__291->GetXaxis()->SetTitle("jet 2 CSV");
   h_jet2CSV_ZpLjets__291->GetXaxis()->SetLabelFont(42);
   h_jet2CSV_ZpLjets__291->GetXaxis()->SetLabelOffset(0.007);
   h_jet2CSV_ZpLjets__291->GetXaxis()->SetTitleSize(0.05);
   h_jet2CSV_ZpLjets__291->GetXaxis()->SetTickLength(0.025);
   h_jet2CSV_ZpLjets__291->GetXaxis()->SetTitleFont(42);
   h_jet2CSV_ZpLjets__291->GetYaxis()->SetTitle("a.u.");
   h_jet2CSV_ZpLjets__291->GetYaxis()->SetLabelFont(42);
   h_jet2CSV_ZpLjets__291->GetYaxis()->SetLabelOffset(0.007);
   h_jet2CSV_ZpLjets__291->GetYaxis()->SetTitleSize(0.05);
   h_jet2CSV_ZpLjets__291->GetYaxis()->SetTickLength(0.025);
   h_jet2CSV_ZpLjets__291->GetYaxis()->SetTitleFont(42);
   h_jet2CSV_ZpLjets__291->GetZaxis()->SetLabelFont(42);
   h_jet2CSV_ZpLjets__291->GetZaxis()->SetLabelOffset(0.007);
   h_jet2CSV_ZpLjets__291->GetZaxis()->SetTitleSize(0.05);
   h_jet2CSV_ZpLjets__291->GetZaxis()->SetTickLength(0.025);
   h_jet2CSV_ZpLjets__291->GetZaxis()->SetTitleFont(42);
   h->Add(h_jet2CSV_Z+jets,"");
   
   TH1D *h_jet2CSV_WpLjets__292 = new TH1D("h_jet2CSV_WpLjets__292","",10,0,1);
   h_jet2CSV_WpLjets__292->SetBinContent(1,0.02117649);
   h_jet2CSV_WpLjets__292->SetBinContent(2,0.01034319);
   h_jet2CSV_WpLjets__292->SetBinContent(3,0.005332434);
   h_jet2CSV_WpLjets__292->SetBinContent(4,0.002176535);
   h_jet2CSV_WpLjets__292->SetBinContent(5,0.001373088);
   h_jet2CSV_WpLjets__292->SetBinContent(6,0.001037922);
   h_jet2CSV_WpLjets__292->SetBinContent(7,0.001053131);
   h_jet2CSV_WpLjets__292->SetBinContent(8,0.0007298317);
   h_jet2CSV_WpLjets__292->SetBinContent(9,0.001124591);
   h_jet2CSV_WpLjets__292->SetBinContent(10,0.00133556);
   h_jet2CSV_WpLjets__292->SetBinError(1,0.001225679);
   h_jet2CSV_WpLjets__292->SetBinError(2,0.0007600965);
   h_jet2CSV_WpLjets__292->SetBinError(3,0.0005287877);
   h_jet2CSV_WpLjets__292->SetBinError(4,0.0003419408);
   h_jet2CSV_WpLjets__292->SetBinError(5,0.0002501467);
   h_jet2CSV_WpLjets__292->SetBinError(6,0.0002167305);
   h_jet2CSV_WpLjets__292->SetBinError(7,0.0002131361);
   h_jet2CSV_WpLjets__292->SetBinError(8,0.0001845227);
   h_jet2CSV_WpLjets__292->SetBinError(9,0.0002697908);
   h_jet2CSV_WpLjets__292->SetBinError(10,0.0002889042);
   h_jet2CSV_WpLjets__292->SetEntries(3309);
   h_jet2CSV_WpLjets__292->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   h_jet2CSV_WpLjets__292->SetFillColor(ci);
   h_jet2CSV_WpLjets__292->GetXaxis()->SetTitle("jet 2 CSV");
   h_jet2CSV_WpLjets__292->GetXaxis()->SetLabelFont(42);
   h_jet2CSV_WpLjets__292->GetXaxis()->SetLabelOffset(0.007);
   h_jet2CSV_WpLjets__292->GetXaxis()->SetTitleSize(0.05);
   h_jet2CSV_WpLjets__292->GetXaxis()->SetTickLength(0.025);
   h_jet2CSV_WpLjets__292->GetXaxis()->SetTitleFont(42);
   h_jet2CSV_WpLjets__292->GetYaxis()->SetTitle("a.u.");
   h_jet2CSV_WpLjets__292->GetYaxis()->SetLabelFont(42);
   h_jet2CSV_WpLjets__292->GetYaxis()->SetLabelOffset(0.007);
   h_jet2CSV_WpLjets__292->GetYaxis()->SetTitleSize(0.05);
   h_jet2CSV_WpLjets__292->GetYaxis()->SetTickLength(0.025);
   h_jet2CSV_WpLjets__292->GetYaxis()->SetTitleFont(42);
   h_jet2CSV_WpLjets__292->GetZaxis()->SetLabelFont(42);
   h_jet2CSV_WpLjets__292->GetZaxis()->SetLabelOffset(0.007);
   h_jet2CSV_WpLjets__292->GetZaxis()->SetTitleSize(0.05);
   h_jet2CSV_WpLjets__292->GetZaxis()->SetTickLength(0.025);
   h_jet2CSV_WpLjets__292->GetZaxis()->SetTitleFont(42);
   h->Add(h_jet2CSV_W+jets,"");
   
   TH1D *h_jet2CSV_TopsPoPLFcP__293 = new TH1D("h_jet2CSV_TopsPoPLFcP__293","",10,0,1);
   h_jet2CSV_TopsPoPLFcP__293->SetBinContent(1,0.0601164);
   h_jet2CSV_TopsPoPLFcP__293->SetBinContent(2,0.06340444);
   h_jet2CSV_TopsPoPLFcP__293->SetBinContent(3,0.02994075);
   h_jet2CSV_TopsPoPLFcP__293->SetBinContent(4,0.01942964);
   h_jet2CSV_TopsPoPLFcP__293->SetBinContent(5,0.01400916);
   h_jet2CSV_TopsPoPLFcP__293->SetBinContent(6,0.01153685);
   h_jet2CSV_TopsPoPLFcP__293->SetBinContent(7,0.01124396);
   h_jet2CSV_TopsPoPLFcP__293->SetBinContent(8,0.01299963);
   h_jet2CSV_TopsPoPLFcP__293->SetBinContent(9,0.02198185);
   h_jet2CSV_TopsPoPLFcP__293->SetBinContent(10,0.08341644);
   h_jet2CSV_TopsPoPLFcP__293->SetBinError(1,0.0008653795);
   h_jet2CSV_TopsPoPLFcP__293->SetBinError(2,0.0008504764);
   h_jet2CSV_TopsPoPLFcP__293->SetBinError(3,0.0005741534);
   h_jet2CSV_TopsPoPLFcP__293->SetBinError(4,0.0004672378);
   h_jet2CSV_TopsPoPLFcP__293->SetBinError(5,0.0003883776);
   h_jet2CSV_TopsPoPLFcP__293->SetBinError(6,0.0003407437);
   h_jet2CSV_TopsPoPLFcP__293->SetBinError(7,0.0003553133);
   h_jet2CSV_TopsPoPLFcP__293->SetBinError(8,0.0003861221);
   h_jet2CSV_TopsPoPLFcP__293->SetBinError(9,0.0005278244);
   h_jet2CSV_TopsPoPLFcP__293->SetBinError(10,0.0009796516);
   h_jet2CSV_TopsPoPLFcP__293->SetEntries(45754);
   h_jet2CSV_TopsPoPLFcP__293->SetStats(0);

   ci = TColor::GetColor("#cc33cc");
   h_jet2CSV_TopsPoPLFcP__293->SetFillColor(ci);
   h_jet2CSV_TopsPoPLFcP__293->GetXaxis()->SetTitle("jet 2 CSV");
   h_jet2CSV_TopsPoPLFcP__293->GetXaxis()->SetLabelFont(42);
   h_jet2CSV_TopsPoPLFcP__293->GetXaxis()->SetLabelOffset(0.007);
   h_jet2CSV_TopsPoPLFcP__293->GetXaxis()->SetTitleSize(0.05);
   h_jet2CSV_TopsPoPLFcP__293->GetXaxis()->SetTickLength(0.025);
   h_jet2CSV_TopsPoPLFcP__293->GetXaxis()->SetTitleFont(42);
   h_jet2CSV_TopsPoPLFcP__293->GetYaxis()->SetTitle("a.u.");
   h_jet2CSV_TopsPoPLFcP__293->GetYaxis()->SetLabelFont(42);
   h_jet2CSV_TopsPoPLFcP__293->GetYaxis()->SetLabelOffset(0.007);
   h_jet2CSV_TopsPoPLFcP__293->GetYaxis()->SetTitleSize(0.05);
   h_jet2CSV_TopsPoPLFcP__293->GetYaxis()->SetTickLength(0.025);
   h_jet2CSV_TopsPoPLFcP__293->GetYaxis()->SetTitleFont(42);
   h_jet2CSV_TopsPoPLFcP__293->GetZaxis()->SetLabelFont(42);
   h_jet2CSV_TopsPoPLFcP__293->GetZaxis()->SetLabelOffset(0.007);
   h_jet2CSV_TopsPoPLFcP__293->GetZaxis()->SetTitleSize(0.05);
   h_jet2CSV_TopsPoPLFcP__293->GetZaxis()->SetTickLength(0.025);
   h_jet2CSV_TopsPoPLFcP__293->GetZaxis()->SetTitleFont(42);
   h->Add(h_jet2CSV_Top (LF),"");
   
   TH1D *h_jet2CSV_TopsPoPHFcP__294 = new TH1D("h_jet2CSV_TopsPoPHFcP__294","",10,0,1);
   h_jet2CSV_TopsPoPHFcP__294->SetBinContent(1,0.1416233);
   h_jet2CSV_TopsPoPHFcP__294->SetBinContent(2,0.07901154);
   h_jet2CSV_TopsPoPHFcP__294->SetBinContent(3,0.03897981);
   h_jet2CSV_TopsPoPHFcP__294->SetBinContent(4,0.02420022);
   h_jet2CSV_TopsPoPHFcP__294->SetBinContent(5,0.01727929);
   h_jet2CSV_TopsPoPHFcP__294->SetBinContent(6,0.01657941);
   h_jet2CSV_TopsPoPHFcP__294->SetBinContent(7,0.0164018);
   h_jet2CSV_TopsPoPHFcP__294->SetBinContent(8,0.0201354);
   h_jet2CSV_TopsPoPHFcP__294->SetBinContent(9,0.03622408);
   h_jet2CSV_TopsPoPHFcP__294->SetBinContent(10,0.1400107);
   h_jet2CSV_TopsPoPHFcP__294->SetBinError(1,0.001387993);
   h_jet2CSV_TopsPoPHFcP__294->SetBinError(2,0.0009861683);
   h_jet2CSV_TopsPoPHFcP__294->SetBinError(3,0.000670408);
   h_jet2CSV_TopsPoPHFcP__294->SetBinError(4,0.0005136483);
   h_jet2CSV_TopsPoPHFcP__294->SetBinError(5,0.0004064128);
   h_jet2CSV_TopsPoPHFcP__294->SetBinError(6,0.0004774176);
   h_jet2CSV_TopsPoPHFcP__294->SetBinError(7,0.0004249852);
   h_jet2CSV_TopsPoPHFcP__294->SetBinError(8,0.0004928572);
   h_jet2CSV_TopsPoPHFcP__294->SetBinError(9,0.0006376267);
   h_jet2CSV_TopsPoPHFcP__294->SetBinError(10,0.001254269);
   h_jet2CSV_TopsPoPHFcP__294->SetEntries(77950);
   h_jet2CSV_TopsPoPHFcP__294->SetStats(0);

   ci = TColor::GetColor("#ff9900");
   h_jet2CSV_TopsPoPHFcP__294->SetFillColor(ci);
   h_jet2CSV_TopsPoPHFcP__294->GetXaxis()->SetTitle("jet 2 CSV");
   h_jet2CSV_TopsPoPHFcP__294->GetXaxis()->SetLabelFont(42);
   h_jet2CSV_TopsPoPHFcP__294->GetXaxis()->SetLabelOffset(0.007);
   h_jet2CSV_TopsPoPHFcP__294->GetXaxis()->SetTitleSize(0.05);
   h_jet2CSV_TopsPoPHFcP__294->GetXaxis()->SetTickLength(0.025);
   h_jet2CSV_TopsPoPHFcP__294->GetXaxis()->SetTitleFont(42);
   h_jet2CSV_TopsPoPHFcP__294->GetYaxis()->SetTitle("a.u.");
   h_jet2CSV_TopsPoPHFcP__294->GetYaxis()->SetLabelFont(42);
   h_jet2CSV_TopsPoPHFcP__294->GetYaxis()->SetLabelOffset(0.007);
   h_jet2CSV_TopsPoPHFcP__294->GetYaxis()->SetTitleSize(0.05);
   h_jet2CSV_TopsPoPHFcP__294->GetYaxis()->SetTickLength(0.025);
   h_jet2CSV_TopsPoPHFcP__294->GetYaxis()->SetTitleFont(42);
   h_jet2CSV_TopsPoPHFcP__294->GetZaxis()->SetLabelFont(42);
   h_jet2CSV_TopsPoPHFcP__294->GetZaxis()->SetLabelOffset(0.007);
   h_jet2CSV_TopsPoPHFcP__294->GetZaxis()->SetTitleSize(0.05);
   h_jet2CSV_TopsPoPHFcP__294->GetZaxis()->SetTickLength(0.025);
   h_jet2CSV_TopsPoPHFcP__294->GetZaxis()->SetTitleFont(42);
   h->Add(h_jet2CSV_Top (HF),"");
   h->Draw("hist");
   
   TH1D *hsum__295 = new TH1D("hsum__295","",10,0,1);
   hsum__295->SetBinContent(1,0.2632535);
   hsum__295->SetBinContent(2,0.1751834);
   hsum__295->SetBinContent(3,0.08596183);
   hsum__295->SetBinContent(4,0.05085303);
   hsum__295->SetBinContent(5,0.03600648);
   hsum__295->SetBinContent(6,0.03205778);
   hsum__295->SetBinContent(7,0.03067984);
   hsum__295->SetBinContent(8,0.03554107);
   hsum__295->SetBinContent(9,0.06238964);
   hsum__295->SetBinContent(10,0.2280735);
   hsum__295->SetBinError(1,0.003412795);
   hsum__295->SetBinError(2,0.002195568);
   hsum__295->SetBinError(3,0.001938275);
   hsum__295->SetBinError(4,0.001071604);
   hsum__295->SetBinError(5,0.0007927691);
   hsum__295->SetBinError(6,0.0009142144);
   hsum__295->SetBinError(7,0.0007574658);
   hsum__295->SetBinError(8,0.0007357658);
   hsum__295->SetBinError(9,0.001676061);
   hsum__295->SetBinError(10,0.001900525);
   hsum__295->SetEntries(45);
   hsum__295->SetStats(0);

   ci = 1204;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   hsum__295->SetFillColor(ci);
   hsum__295->SetFillStyle(3003);
   hsum__295->SetLineWidth(0);
   hsum__295->GetXaxis()->SetTitle("jet 2 CSV");
   hsum__295->GetXaxis()->SetLabelFont(42);
   hsum__295->GetXaxis()->SetLabelOffset(0.007);
   hsum__295->GetXaxis()->SetTitleSize(0.05);
   hsum__295->GetXaxis()->SetTickLength(0.025);
   hsum__295->GetXaxis()->SetTitleFont(42);
   hsum__295->GetYaxis()->SetTitle("a.u.");
   hsum__295->GetYaxis()->SetLabelFont(42);
   hsum__295->GetYaxis()->SetLabelOffset(0.007);
   hsum__295->GetYaxis()->SetTitleSize(0.05);
   hsum__295->GetYaxis()->SetTickLength(0.025);
   hsum__295->GetYaxis()->SetTitleFont(42);
   hsum__295->GetZaxis()->SetLabelFont(42);
   hsum__295->GetZaxis()->SetLabelOffset(0.007);
   hsum__295->GetZaxis()->SetTitleSize(0.05);
   hsum__295->GetZaxis()->SetTickLength(0.025);
   hsum__295->GetZaxis()->SetTitleFont(42);
   hsum__295->Draw("e2 same");
   
   TH1D *h_jet2CSV_Data__296 = new TH1D("h_jet2CSV_Data__296","",10,0,1);
   h_jet2CSV_Data__296->SetBinContent(1,0.2433808);
   h_jet2CSV_Data__296->SetBinContent(2,0.1576369);
   h_jet2CSV_Data__296->SetBinContent(3,0.08461321);
   h_jet2CSV_Data__296->SetBinContent(4,0.05620465);
   h_jet2CSV_Data__296->SetBinContent(5,0.04075191);
   h_jet2CSV_Data__296->SetBinContent(6,0.03783096);
   h_jet2CSV_Data__296->SetBinContent(7,0.03594648);
   h_jet2CSV_Data__296->SetBinContent(8,0.0407048);
   h_jet2CSV_Data__296->SetBinContent(9,0.06944314);
   h_jet2CSV_Data__296->SetBinContent(10,0.2334872);
   h_jet2CSV_Data__296->SetBinError(1,0.003386172);
   h_jet2CSV_Data__296->SetBinError(2,0.002725178);
   h_jet2CSV_Data__296->SetBinError(3,0.001996572);
   h_jet2CSV_Data__296->SetBinError(4,0.001627242);
   h_jet2CSV_Data__296->SetBinError(5,0.001385606);
   h_jet2CSV_Data__296->SetBinError(6,0.001335026);
   h_jet2CSV_Data__296->SetBinError(7,0.00130135);
   h_jet2CSV_Data__296->SetBinError(8,0.001384805);
   h_jet2CSV_Data__296->SetBinError(9,0.001808758);
   h_jet2CSV_Data__296->SetBinError(10,0.003316634);
   h_jet2CSV_Data__296->SetEntries(21226);
   h_jet2CSV_Data__296->SetStats(0);
   h_jet2CSV_Data__296->SetLineWidth(3);
   h_jet2CSV_Data__296->SetMarkerStyle(20);
   h_jet2CSV_Data__296->SetMarkerSize(2);
   h_jet2CSV_Data__296->GetXaxis()->SetTitle("jet 2 CSV");
   h_jet2CSV_Data__296->GetXaxis()->SetLabelFont(42);
   h_jet2CSV_Data__296->GetXaxis()->SetLabelOffset(0.007);
   h_jet2CSV_Data__296->GetXaxis()->SetTitleSize(0.05);
   h_jet2CSV_Data__296->GetXaxis()->SetTickLength(0.025);
   h_jet2CSV_Data__296->GetXaxis()->SetTitleFont(42);
   h_jet2CSV_Data__296->GetYaxis()->SetTitle("a.u.");
   h_jet2CSV_Data__296->GetYaxis()->SetLabelFont(42);
   h_jet2CSV_Data__296->GetYaxis()->SetLabelOffset(0.007);
   h_jet2CSV_Data__296->GetYaxis()->SetTitleSize(0.05);
   h_jet2CSV_Data__296->GetYaxis()->SetTickLength(0.025);
   h_jet2CSV_Data__296->GetYaxis()->SetTitleFont(42);
   h_jet2CSV_Data__296->GetZaxis()->SetLabelFont(42);
   h_jet2CSV_Data__296->GetZaxis()->SetLabelOffset(0.007);
   h_jet2CSV_Data__296->GetZaxis()->SetTitleSize(0.05);
   h_jet2CSV_Data__296->GetZaxis()->SetTickLength(0.025);
   h_jet2CSV_Data__296->GetZaxis()->SetTitleFont(42);
   h_jet2CSV_Data__296->Draw("elp same");
   
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
   
   TH1D *ratio__297 = new TH1D("ratio__297","",10,0,1);
   ratio__297->SetBinContent(1,-0.07548881);
   ratio__297->SetBinContent(2,-0.1001608);
   ratio__297->SetBinContent(3,-0.0156886);
   ratio__297->SetBinContent(4,0.1052371);
   ratio__297->SetBinContent(5,0.1317939);
   ratio__297->SetBinContent(6,0.1800869);
   ratio__297->SetBinContent(7,0.1716647);
   ratio__297->SetBinContent(8,0.1452891);
   ratio__297->SetBinContent(9,0.1130556);
   ratio__297->SetBinContent(10,0.02373672);
   ratio__297->SetBinError(1,0.0001);
   ratio__297->SetBinError(2,0.0001);
   ratio__297->SetBinError(3,0.0001);
   ratio__297->SetBinError(4,0.0001);
   ratio__297->SetBinError(5,0.0001);
   ratio__297->SetBinError(6,0.0001);
   ratio__297->SetBinError(7,0.0001);
   ratio__297->SetBinError(8,0.0001);
   ratio__297->SetBinError(9,0.0001);
   ratio__297->SetBinError(10,0.0001);
   ratio__297->SetMinimum(-0.48);
   ratio__297->SetMaximum(0.48);
   ratio__297->SetEntries(21236);
   ratio__297->SetStats(0);
   ratio__297->SetLineWidth(3);
   ratio__297->SetMarkerStyle(20);
   ratio__297->SetMarkerSize(2);
   ratio__297->GetXaxis()->SetTitle("jet 2 CSV");
   ratio__297->GetXaxis()->SetLabelFont(43);
   ratio__297->GetXaxis()->SetLabelOffset(0.007);
   ratio__297->GetXaxis()->SetLabelSize(30);
   ratio__297->GetXaxis()->SetTitleSize(40);
   ratio__297->GetXaxis()->SetTickLength(0.025);
   ratio__297->GetXaxis()->SetTitleOffset(5);
   ratio__297->GetXaxis()->SetTitleFont(43);
   ratio__297->GetYaxis()->SetTitle("#frac{Data-Exp}{Exp}");
   ratio__297->GetYaxis()->SetNdivisions(5);
   ratio__297->GetYaxis()->SetLabelFont(43);
   ratio__297->GetYaxis()->SetLabelOffset(0.007);
   ratio__297->GetYaxis()->SetLabelSize(30);
   ratio__297->GetYaxis()->SetTitleSize(40);
   ratio__297->GetYaxis()->SetTickLength(0.025);
   ratio__297->GetYaxis()->SetTitleOffset(2.5);
   ratio__297->GetYaxis()->SetTitleFont(43);
   ratio__297->GetZaxis()->SetLabelFont(42);
   ratio__297->GetZaxis()->SetLabelOffset(0.007);
   ratio__297->GetZaxis()->SetTitleSize(0.05);
   ratio__297->GetZaxis()->SetTickLength(0.025);
   ratio__297->GetZaxis()->SetTitleFont(42);
   ratio__297->Draw("elp");
   
   TH1D *zero__298 = new TH1D("zero__298","",10,0,1);
   zero__298->SetBinError(1,0.003386172);
   zero__298->SetBinError(2,0.002725178);
   zero__298->SetBinError(3,0.001996572);
   zero__298->SetBinError(4,0.001627242);
   zero__298->SetBinError(5,0.001385606);
   zero__298->SetBinError(6,0.001335026);
   zero__298->SetBinError(7,0.00130135);
   zero__298->SetBinError(8,0.001384805);
   zero__298->SetBinError(9,0.001808758);
   zero__298->SetBinError(10,0.003316634);
   zero__298->SetEntries(21236);
   zero__298->SetStats(0);
   zero__298->SetLineWidth(3);
   zero__298->SetMarkerStyle(20);
   zero__298->SetMarkerSize(2);
   zero__298->GetXaxis()->SetTitle("jet 2 CSV");
   zero__298->GetXaxis()->SetLabelFont(42);
   zero__298->GetXaxis()->SetLabelOffset(0.007);
   zero__298->GetXaxis()->SetTitleSize(0.05);
   zero__298->GetXaxis()->SetTickLength(0.025);
   zero__298->GetXaxis()->SetTitleFont(42);
   zero__298->GetYaxis()->SetTitle("a.u.");
   zero__298->GetYaxis()->SetLabelFont(42);
   zero__298->GetYaxis()->SetLabelOffset(0.007);
   zero__298->GetYaxis()->SetTitleSize(0.05);
   zero__298->GetYaxis()->SetTickLength(0.025);
   zero__298->GetYaxis()->SetTitleFont(42);
   zero__298->GetZaxis()->SetLabelFont(42);
   zero__298->GetZaxis()->SetLabelOffset(0.007);
   zero__298->GetZaxis()->SetTitleSize(0.05);
   zero__298->GetZaxis()->SetTickLength(0.025);
   zero__298->GetZaxis()->SetTitleFont(42);
   zero__298->Draw("hist same");
   
   TH1D *sumratioup__299 = new TH1D("sumratioup__299","",10,0,1);
   sumratioup__299->SetBinContent(1,0.01296391);
   sumratioup__299->SetBinContent(2,0.01253297);
   sumratioup__299->SetBinContent(3,0.02254809);
   sumratioup__299->SetBinContent(4,0.02107258);
   sumratioup__299->SetBinContent(5,0.0220174);
   sumratioup__299->SetBinContent(6,0.02851771);
   sumratioup__299->SetBinContent(7,0.02468937);
   sumratioup__299->SetBinContent(8,0.02070185);
   sumratioup__299->SetBinContent(9,0.02686441);
   sumratioup__299->SetBinContent(10,0.00833295);
   sumratioup__299->SetBinError(1,0.003412795);
   sumratioup__299->SetBinError(2,0.002195568);
   sumratioup__299->SetBinError(3,0.001938275);
   sumratioup__299->SetBinError(4,0.001071604);
   sumratioup__299->SetBinError(5,0.0007927691);
   sumratioup__299->SetBinError(6,0.0009142144);
   sumratioup__299->SetBinError(7,0.0007574658);
   sumratioup__299->SetBinError(8,0.0007357658);
   sumratioup__299->SetBinError(9,0.001676061);
   sumratioup__299->SetBinError(10,0.001900525);
   sumratioup__299->SetEntries(55);
   sumratioup__299->SetStats(0);

   ci = 1204;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratioup__299->SetFillColor(ci);
   sumratioup__299->SetFillStyle(3003);
   sumratioup__299->GetXaxis()->SetTitle("jet 2 CSV");
   sumratioup__299->GetXaxis()->SetLabelFont(42);
   sumratioup__299->GetXaxis()->SetLabelOffset(0.007);
   sumratioup__299->GetXaxis()->SetTitleSize(0.05);
   sumratioup__299->GetXaxis()->SetTickLength(0.025);
   sumratioup__299->GetXaxis()->SetTitleFont(42);
   sumratioup__299->GetYaxis()->SetTitle("a.u.");
   sumratioup__299->GetYaxis()->SetLabelFont(42);
   sumratioup__299->GetYaxis()->SetLabelOffset(0.007);
   sumratioup__299->GetYaxis()->SetTitleSize(0.05);
   sumratioup__299->GetYaxis()->SetTickLength(0.025);
   sumratioup__299->GetYaxis()->SetTitleFont(42);
   sumratioup__299->GetZaxis()->SetLabelFont(42);
   sumratioup__299->GetZaxis()->SetLabelOffset(0.007);
   sumratioup__299->GetZaxis()->SetTitleSize(0.05);
   sumratioup__299->GetZaxis()->SetTickLength(0.025);
   sumratioup__299->GetZaxis()->SetTitleFont(42);
   sumratioup__299->Draw("hist same");
   
   TH1D *sumratiodown__300 = new TH1D("sumratiodown__300","",10,0,1);
   sumratiodown__300->SetBinContent(1,-0.01296391);
   sumratiodown__300->SetBinContent(2,-0.01253297);
   sumratiodown__300->SetBinContent(3,-0.02254809);
   sumratiodown__300->SetBinContent(4,-0.02107258);
   sumratiodown__300->SetBinContent(5,-0.0220174);
   sumratiodown__300->SetBinContent(6,-0.02851771);
   sumratiodown__300->SetBinContent(7,-0.02468937);
   sumratiodown__300->SetBinContent(8,-0.02070185);
   sumratiodown__300->SetBinContent(9,-0.02686441);
   sumratiodown__300->SetBinContent(10,-0.00833295);
   sumratiodown__300->SetBinError(1,0.003412795);
   sumratiodown__300->SetBinError(2,0.002195568);
   sumratiodown__300->SetBinError(3,0.001938275);
   sumratiodown__300->SetBinError(4,0.001071604);
   sumratiodown__300->SetBinError(5,0.0007927691);
   sumratiodown__300->SetBinError(6,0.0009142144);
   sumratiodown__300->SetBinError(7,0.0007574658);
   sumratiodown__300->SetBinError(8,0.0007357658);
   sumratiodown__300->SetBinError(9,0.001676061);
   sumratiodown__300->SetBinError(10,0.001900525);
   sumratiodown__300->SetEntries(55);
   sumratiodown__300->SetStats(0);

   ci = 1204;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratiodown__300->SetFillColor(ci);
   sumratiodown__300->SetFillStyle(3003);
   sumratiodown__300->GetXaxis()->SetTitle("jet 2 CSV");
   sumratiodown__300->GetXaxis()->SetLabelFont(42);
   sumratiodown__300->GetXaxis()->SetLabelOffset(0.007);
   sumratiodown__300->GetXaxis()->SetTitleSize(0.05);
   sumratiodown__300->GetXaxis()->SetTickLength(0.025);
   sumratiodown__300->GetXaxis()->SetTitleFont(42);
   sumratiodown__300->GetYaxis()->SetTitle("a.u.");
   sumratiodown__300->GetYaxis()->SetLabelFont(42);
   sumratiodown__300->GetYaxis()->SetLabelOffset(0.007);
   sumratiodown__300->GetYaxis()->SetTitleSize(0.05);
   sumratiodown__300->GetYaxis()->SetTickLength(0.025);
   sumratiodown__300->GetYaxis()->SetTitleFont(42);
   sumratiodown__300->GetZaxis()->SetLabelFont(42);
   sumratiodown__300->GetZaxis()->SetLabelOffset(0.007);
   sumratiodown__300->GetZaxis()->SetTitleSize(0.05);
   sumratiodown__300->GetZaxis()->SetTickLength(0.025);
   sumratiodown__300->GetZaxis()->SetTitleFont(42);
   sumratiodown__300->Draw("hist same");
   
   Double_t Graph0_fx1025[10] = {
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
   Double_t Graph0_fy1025[10] = {
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
   Double_t Graph0_fex1025[10] = {
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
   Double_t Graph0_fey1025[10] = {
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
   TGraphErrors *gre = new TGraphErrors(10,Graph0_fx1025,Graph0_fy1025,Graph0_fex1025,Graph0_fey1025);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1025 = new TH1F("Graph_Graph1025","Graph",100,0,1.04);
   Graph_Graph1025->SetMinimum(-0.1494617);
   Graph_Graph1025->SetMaximum(0.255476);
   Graph_Graph1025->SetDirectory(0);
   Graph_Graph1025->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1025->SetLineColor(ci);
   Graph_Graph1025->GetXaxis()->SetLabelFont(42);
   Graph_Graph1025->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1025->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1025->GetXaxis()->SetTickLength(0.025);
   Graph_Graph1025->GetXaxis()->SetTitleFont(42);
   Graph_Graph1025->GetYaxis()->SetLabelFont(42);
   Graph_Graph1025->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1025->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1025->GetYaxis()->SetTickLength(0.025);
   Graph_Graph1025->GetYaxis()->SetTitleFont(42);
   Graph_Graph1025->GetZaxis()->SetLabelFont(42);
   Graph_Graph1025->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1025->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph1025->GetZaxis()->SetTickLength(0.025);
   Graph_Graph1025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1025);
   
   gre->Draw("pe0");
   pad2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
