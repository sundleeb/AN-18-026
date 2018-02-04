void ttbar_isojet2CSV()
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
   pad1->Range(-0.1875,0,1.0625,0.8295154);
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
   h->SetMaximum(0.7347137);
   
   TH1F *h_stack_27 = new TH1F("h_stack_27","",10,0,1);
   h_stack_27->SetMinimum(0);
   h_stack_27->SetMaximum(0.7714494);
   h_stack_27->SetDirectory(0);
   h_stack_27->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h_stack_27->SetLineColor(ci);
   h_stack_27->GetXaxis()->SetLabelFont(42);
   h_stack_27->GetXaxis()->SetLabelOffset(0.007);
   h_stack_27->GetXaxis()->SetTitleSize(0.05);
   h_stack_27->GetXaxis()->SetTickLength(0.025);
   h_stack_27->GetXaxis()->SetTitleFont(42);
   h_stack_27->GetYaxis()->SetTitle("a.u.");
   h_stack_27->GetYaxis()->SetLabelFont(42);
   h_stack_27->GetYaxis()->SetLabelOffset(0.007);
   h_stack_27->GetYaxis()->SetTitleSize(0.05);
   h_stack_27->GetYaxis()->SetTickLength(0.025);
   h_stack_27->GetYaxis()->SetTitleOffset(1.5);
   h_stack_27->GetYaxis()->SetTitleFont(42);
   h_stack_27->GetZaxis()->SetLabelFont(42);
   h_stack_27->GetZaxis()->SetLabelOffset(0.007);
   h_stack_27->GetZaxis()->SetTitleSize(0.05);
   h_stack_27->GetZaxis()->SetTickLength(0.025);
   h_stack_27->GetZaxis()->SetTitleFont(42);
   h->SetHistogram(h_stack_27);
   
   
   TH1D *h_isojet2CSV_QCD__313 = new TH1D("h_isojet2CSV_QCD__313","",10,0,1);
   h_isojet2CSV_QCD__313->SetBinContent(1,0.005689086);
   h_isojet2CSV_QCD__313->SetBinContent(3,0.001485453);
   h_isojet2CSV_QCD__313->SetBinContent(8,0.0004163522);
   h_isojet2CSV_QCD__313->SetBinContent(9,0.001709954);
   h_isojet2CSV_QCD__313->SetBinContent(10,0.002284714);
   h_isojet2CSV_QCD__313->SetBinError(1,0.001893142);
   h_isojet2CSV_QCD__313->SetBinError(3,0.001285212);
   h_isojet2CSV_QCD__313->SetBinError(8,0.000294723);
   h_isojet2CSV_QCD__313->SetBinError(9,0.001411539);
   h_isojet2CSV_QCD__313->SetBinError(10,0.001526445);
   h_isojet2CSV_QCD__313->SetEntries(25);
   h_isojet2CSV_QCD__313->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_isojet2CSV_QCD__313->SetFillColor(ci);
   h_isojet2CSV_QCD__313->GetXaxis()->SetTitle("isojet 2 CSV");
   h_isojet2CSV_QCD__313->GetXaxis()->SetLabelFont(42);
   h_isojet2CSV_QCD__313->GetXaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_QCD__313->GetXaxis()->SetTitleSize(0.05);
   h_isojet2CSV_QCD__313->GetXaxis()->SetTickLength(0.025);
   h_isojet2CSV_QCD__313->GetXaxis()->SetTitleFont(42);
   h_isojet2CSV_QCD__313->GetYaxis()->SetTitle("a.u.");
   h_isojet2CSV_QCD__313->GetYaxis()->SetLabelFont(42);
   h_isojet2CSV_QCD__313->GetYaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_QCD__313->GetYaxis()->SetTitleSize(0.05);
   h_isojet2CSV_QCD__313->GetYaxis()->SetTickLength(0.025);
   h_isojet2CSV_QCD__313->GetYaxis()->SetTitleFont(42);
   h_isojet2CSV_QCD__313->GetZaxis()->SetLabelFont(42);
   h_isojet2CSV_QCD__313->GetZaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_QCD__313->GetZaxis()->SetTitleSize(0.05);
   h_isojet2CSV_QCD__313->GetZaxis()->SetTickLength(0.025);
   h_isojet2CSV_QCD__313->GetZaxis()->SetTitleFont(42);
   h->Add(h_isojet2CSV_QCD,"");
   
   TH1D *h_isojet2CSV_Diboson__314 = new TH1D("h_isojet2CSV_Diboson__314","",10,0,1);
   h_isojet2CSV_Diboson__314->SetBinContent(1,0.02260547);
   h_isojet2CSV_Diboson__314->SetBinContent(2,0.005215535);
   h_isojet2CSV_Diboson__314->SetBinContent(3,0.003247682);
   h_isojet2CSV_Diboson__314->SetBinContent(4,0.001464948);
   h_isojet2CSV_Diboson__314->SetBinContent(5,0.001215577);
   h_isojet2CSV_Diboson__314->SetBinContent(6,0.0008384506);
   h_isojet2CSV_Diboson__314->SetBinContent(7,0.0006316198);
   h_isojet2CSV_Diboson__314->SetBinContent(8,0.0006711806);
   h_isojet2CSV_Diboson__314->SetBinContent(9,0.0002807753);
   h_isojet2CSV_Diboson__314->SetBinContent(10,0.0006219424);
   h_isojet2CSV_Diboson__314->SetBinError(1,0.002127326);
   h_isojet2CSV_Diboson__314->SetBinError(2,0.001014608);
   h_isojet2CSV_Diboson__314->SetBinError(3,0.0008052909);
   h_isojet2CSV_Diboson__314->SetBinError(4,0.0005202749);
   h_isojet2CSV_Diboson__314->SetBinError(5,0.0004830826);
   h_isojet2CSV_Diboson__314->SetBinError(6,0.0003896917);
   h_isojet2CSV_Diboson__314->SetBinError(7,0.0003602955);
   h_isojet2CSV_Diboson__314->SetBinError(8,0.0003539298);
   h_isojet2CSV_Diboson__314->SetBinError(9,0.0002096044);
   h_isojet2CSV_Diboson__314->SetBinError(10,0.0003279289);
   h_isojet2CSV_Diboson__314->SetEntries(227);
   h_isojet2CSV_Diboson__314->SetStats(0);

   ci = TColor::GetColor("#9966cc");
   h_isojet2CSV_Diboson__314->SetFillColor(ci);
   h_isojet2CSV_Diboson__314->GetXaxis()->SetTitle("isojet 2 CSV");
   h_isojet2CSV_Diboson__314->GetXaxis()->SetLabelFont(42);
   h_isojet2CSV_Diboson__314->GetXaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_Diboson__314->GetXaxis()->SetTitleSize(0.05);
   h_isojet2CSV_Diboson__314->GetXaxis()->SetTickLength(0.025);
   h_isojet2CSV_Diboson__314->GetXaxis()->SetTitleFont(42);
   h_isojet2CSV_Diboson__314->GetYaxis()->SetTitle("a.u.");
   h_isojet2CSV_Diboson__314->GetYaxis()->SetLabelFont(42);
   h_isojet2CSV_Diboson__314->GetYaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_Diboson__314->GetYaxis()->SetTitleSize(0.05);
   h_isojet2CSV_Diboson__314->GetYaxis()->SetTickLength(0.025);
   h_isojet2CSV_Diboson__314->GetYaxis()->SetTitleFont(42);
   h_isojet2CSV_Diboson__314->GetZaxis()->SetLabelFont(42);
   h_isojet2CSV_Diboson__314->GetZaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_Diboson__314->GetZaxis()->SetTitleSize(0.05);
   h_isojet2CSV_Diboson__314->GetZaxis()->SetTickLength(0.025);
   h_isojet2CSV_Diboson__314->GetZaxis()->SetTitleFont(42);
   h->Add(h_isojet2CSV_Diboson,"");
   
   TH1D *h_isojet2CSV_ZpLjets__315 = new TH1D("h_isojet2CSV_ZpLjets__315","",10,0,1);
   h_isojet2CSV_ZpLjets__315->SetBinContent(1,0.02930702);
   h_isojet2CSV_ZpLjets__315->SetBinContent(2,0.007476852);
   h_isojet2CSV_ZpLjets__315->SetBinContent(3,0.003806988);
   h_isojet2CSV_ZpLjets__315->SetBinContent(4,0.002016381);
   h_isojet2CSV_ZpLjets__315->SetBinContent(5,0.001255538);
   h_isojet2CSV_ZpLjets__315->SetBinContent(6,0.001162197);
   h_isojet2CSV_ZpLjets__315->SetBinContent(7,0.000621508);
   h_isojet2CSV_ZpLjets__315->SetBinContent(8,0.0006216042);
   h_isojet2CSV_ZpLjets__315->SetBinContent(9,0.0005039497);
   h_isojet2CSV_ZpLjets__315->SetBinContent(10,0.0006417649);
   h_isojet2CSV_ZpLjets__315->SetBinError(1,0.0005307679);
   h_isojet2CSV_ZpLjets__315->SetBinError(2,0.0002473113);
   h_isojet2CSV_ZpLjets__315->SetBinError(3,0.0001796176);
   h_isojet2CSV_ZpLjets__315->SetBinError(4,0.0001293224);
   h_isojet2CSV_ZpLjets__315->SetBinError(5,0.0001012353);
   h_isojet2CSV_ZpLjets__315->SetBinError(6,0.000100257);
   h_isojet2CSV_ZpLjets__315->SetBinError(7,6.623201e-05);
   h_isojet2CSV_ZpLjets__315->SetBinError(8,7.360567e-05);
   h_isojet2CSV_ZpLjets__315->SetBinError(9,6.547105e-05);
   h_isojet2CSV_ZpLjets__315->SetBinError(10,7.016391e-05);
   h_isojet2CSV_ZpLjets__315->SetEntries(24915);
   h_isojet2CSV_ZpLjets__315->SetStats(0);

   ci = TColor::GetColor("#3399cc");
   h_isojet2CSV_ZpLjets__315->SetFillColor(ci);
   h_isojet2CSV_ZpLjets__315->GetXaxis()->SetTitle("isojet 2 CSV");
   h_isojet2CSV_ZpLjets__315->GetXaxis()->SetLabelFont(42);
   h_isojet2CSV_ZpLjets__315->GetXaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_ZpLjets__315->GetXaxis()->SetTitleSize(0.05);
   h_isojet2CSV_ZpLjets__315->GetXaxis()->SetTickLength(0.025);
   h_isojet2CSV_ZpLjets__315->GetXaxis()->SetTitleFont(42);
   h_isojet2CSV_ZpLjets__315->GetYaxis()->SetTitle("a.u.");
   h_isojet2CSV_ZpLjets__315->GetYaxis()->SetLabelFont(42);
   h_isojet2CSV_ZpLjets__315->GetYaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_ZpLjets__315->GetYaxis()->SetTitleSize(0.05);
   h_isojet2CSV_ZpLjets__315->GetYaxis()->SetTickLength(0.025);
   h_isojet2CSV_ZpLjets__315->GetYaxis()->SetTitleFont(42);
   h_isojet2CSV_ZpLjets__315->GetZaxis()->SetLabelFont(42);
   h_isojet2CSV_ZpLjets__315->GetZaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_ZpLjets__315->GetZaxis()->SetTitleSize(0.05);
   h_isojet2CSV_ZpLjets__315->GetZaxis()->SetTickLength(0.025);
   h_isojet2CSV_ZpLjets__315->GetZaxis()->SetTitleFont(42);
   h->Add(h_isojet2CSV_Z+jets,"");
   
   TH1D *h_isojet2CSV_WpLjets__316 = new TH1D("h_isojet2CSV_WpLjets__316","",10,0,1);
   h_isojet2CSV_WpLjets__316->SetBinContent(1,0.02650013);
   h_isojet2CSV_WpLjets__316->SetBinContent(2,0.007918397);
   h_isojet2CSV_WpLjets__316->SetBinContent(3,0.003856131);
   h_isojet2CSV_WpLjets__316->SetBinContent(4,0.001795782);
   h_isojet2CSV_WpLjets__316->SetBinContent(5,0.001277726);
   h_isojet2CSV_WpLjets__316->SetBinContent(6,0.0007821116);
   h_isojet2CSV_WpLjets__316->SetBinContent(7,0.0009071845);
   h_isojet2CSV_WpLjets__316->SetBinContent(8,0.0006130107);
   h_isojet2CSV_WpLjets__316->SetBinContent(9,0.0008638331);
   h_isojet2CSV_WpLjets__316->SetBinContent(10,0.001168472);
   h_isojet2CSV_WpLjets__316->SetBinError(1,0.001314466);
   h_isojet2CSV_WpLjets__316->SetBinError(2,0.0006860849);
   h_isojet2CSV_WpLjets__316->SetBinError(3,0.0004681838);
   h_isojet2CSV_WpLjets__316->SetBinError(4,0.000323407);
   h_isojet2CSV_WpLjets__316->SetBinError(5,0.000258674);
   h_isojet2CSV_WpLjets__316->SetBinError(6,0.0001926402);
   h_isojet2CSV_WpLjets__316->SetBinError(7,0.0002025716);
   h_isojet2CSV_WpLjets__316->SetBinError(8,0.0001572725);
   h_isojet2CSV_WpLjets__316->SetBinError(9,0.0002336444);
   h_isojet2CSV_WpLjets__316->SetBinError(10,0.0002741289);
   h_isojet2CSV_WpLjets__316->SetEntries(3309);
   h_isojet2CSV_WpLjets__316->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   h_isojet2CSV_WpLjets__316->SetFillColor(ci);
   h_isojet2CSV_WpLjets__316->GetXaxis()->SetTitle("isojet 2 CSV");
   h_isojet2CSV_WpLjets__316->GetXaxis()->SetLabelFont(42);
   h_isojet2CSV_WpLjets__316->GetXaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_WpLjets__316->GetXaxis()->SetTitleSize(0.05);
   h_isojet2CSV_WpLjets__316->GetXaxis()->SetTickLength(0.025);
   h_isojet2CSV_WpLjets__316->GetXaxis()->SetTitleFont(42);
   h_isojet2CSV_WpLjets__316->GetYaxis()->SetTitle("a.u.");
   h_isojet2CSV_WpLjets__316->GetYaxis()->SetLabelFont(42);
   h_isojet2CSV_WpLjets__316->GetYaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_WpLjets__316->GetYaxis()->SetTitleSize(0.05);
   h_isojet2CSV_WpLjets__316->GetYaxis()->SetTickLength(0.025);
   h_isojet2CSV_WpLjets__316->GetYaxis()->SetTitleFont(42);
   h_isojet2CSV_WpLjets__316->GetZaxis()->SetLabelFont(42);
   h_isojet2CSV_WpLjets__316->GetZaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_WpLjets__316->GetZaxis()->SetTitleSize(0.05);
   h_isojet2CSV_WpLjets__316->GetZaxis()->SetTickLength(0.025);
   h_isojet2CSV_WpLjets__316->GetZaxis()->SetTitleFont(42);
   h->Add(h_isojet2CSV_W+jets,"");
   
   TH1D *h_isojet2CSV_TopsPoPLFcP__317 = new TH1D("h_isojet2CSV_TopsPoPLFcP__317","",10,0,1);
   h_isojet2CSV_TopsPoPLFcP__317->SetBinContent(1,0.07318222);
   h_isojet2CSV_TopsPoPLFcP__317->SetBinContent(2,0.04495743);
   h_isojet2CSV_TopsPoPLFcP__317->SetBinContent(3,0.02337085);
   h_isojet2CSV_TopsPoPLFcP__317->SetBinContent(4,0.01579536);
   h_isojet2CSV_TopsPoPLFcP__317->SetBinContent(5,0.01139608);
   h_isojet2CSV_TopsPoPLFcP__317->SetBinContent(6,0.01043578);
   h_isojet2CSV_TopsPoPLFcP__317->SetBinContent(7,0.01104881);
   h_isojet2CSV_TopsPoPLFcP__317->SetBinContent(8,0.01272808);
   h_isojet2CSV_TopsPoPLFcP__317->SetBinContent(9,0.02434799);
   h_isojet2CSV_TopsPoPLFcP__317->SetBinContent(10,0.1008165);
   h_isojet2CSV_TopsPoPLFcP__317->SetBinError(1,0.0009880813);
   h_isojet2CSV_TopsPoPLFcP__317->SetBinError(2,0.0007119177);
   h_isojet2CSV_TopsPoPLFcP__317->SetBinError(3,0.0004979389);
   h_isojet2CSV_TopsPoPLFcP__317->SetBinError(4,0.0004451326);
   h_isojet2CSV_TopsPoPLFcP__317->SetBinError(5,0.0003260669);
   h_isojet2CSV_TopsPoPLFcP__317->SetBinError(6,0.0003288321);
   h_isojet2CSV_TopsPoPLFcP__317->SetBinError(7,0.0003256373);
   h_isojet2CSV_TopsPoPLFcP__317->SetBinError(8,0.0003544473);
   h_isojet2CSV_TopsPoPLFcP__317->SetBinError(9,0.0005166364);
   h_isojet2CSV_TopsPoPLFcP__317->SetBinError(10,0.001076336);
   h_isojet2CSV_TopsPoPLFcP__317->SetEntries(45754);
   h_isojet2CSV_TopsPoPLFcP__317->SetStats(0);

   ci = TColor::GetColor("#cc33cc");
   h_isojet2CSV_TopsPoPLFcP__317->SetFillColor(ci);
   h_isojet2CSV_TopsPoPLFcP__317->GetXaxis()->SetTitle("isojet 2 CSV");
   h_isojet2CSV_TopsPoPLFcP__317->GetXaxis()->SetLabelFont(42);
   h_isojet2CSV_TopsPoPLFcP__317->GetXaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_TopsPoPLFcP__317->GetXaxis()->SetTitleSize(0.05);
   h_isojet2CSV_TopsPoPLFcP__317->GetXaxis()->SetTickLength(0.025);
   h_isojet2CSV_TopsPoPLFcP__317->GetXaxis()->SetTitleFont(42);
   h_isojet2CSV_TopsPoPLFcP__317->GetYaxis()->SetTitle("a.u.");
   h_isojet2CSV_TopsPoPLFcP__317->GetYaxis()->SetLabelFont(42);
   h_isojet2CSV_TopsPoPLFcP__317->GetYaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_TopsPoPLFcP__317->GetYaxis()->SetTitleSize(0.05);
   h_isojet2CSV_TopsPoPLFcP__317->GetYaxis()->SetTickLength(0.025);
   h_isojet2CSV_TopsPoPLFcP__317->GetYaxis()->SetTitleFont(42);
   h_isojet2CSV_TopsPoPLFcP__317->GetZaxis()->SetLabelFont(42);
   h_isojet2CSV_TopsPoPLFcP__317->GetZaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_TopsPoPLFcP__317->GetZaxis()->SetTitleSize(0.05);
   h_isojet2CSV_TopsPoPLFcP__317->GetZaxis()->SetTickLength(0.025);
   h_isojet2CSV_TopsPoPLFcP__317->GetZaxis()->SetTitleFont(42);
   h->Add(h_isojet2CSV_Top (LF),"");
   
   TH1D *h_isojet2CSV_TopsPoPHFcP__318 = new TH1D("h_isojet2CSV_TopsPoPHFcP__318","",10,0,1);
   h_isojet2CSV_TopsPoPHFcP__318->SetBinContent(1,0.2100729);
   h_isojet2CSV_TopsPoPHFcP__318->SetBinContent(2,0.07656022);
   h_isojet2CSV_TopsPoPHFcP__318->SetBinContent(3,0.03944194);
   h_isojet2CSV_TopsPoPHFcP__318->SetBinContent(4,0.02383049);
   h_isojet2CSV_TopsPoPHFcP__318->SetBinContent(5,0.01624159);
   h_isojet2CSV_TopsPoPHFcP__318->SetBinContent(6,0.01519003);
   h_isojet2CSV_TopsPoPHFcP__318->SetBinContent(7,0.01355305);
   h_isojet2CSV_TopsPoPHFcP__318->SetBinContent(8,0.01476908);
   h_isojet2CSV_TopsPoPHFcP__318->SetBinContent(9,0.02436797);
   h_isojet2CSV_TopsPoPHFcP__318->SetBinContent(10,0.09641826);
   h_isojet2CSV_TopsPoPHFcP__318->SetBinError(1,0.001683907);
   h_isojet2CSV_TopsPoPHFcP__318->SetBinError(2,0.0009413849);
   h_isojet2CSV_TopsPoPHFcP__318->SetBinError(3,0.0006843127);
   h_isojet2CSV_TopsPoPHFcP__318->SetBinError(4,0.0005103443);
   h_isojet2CSV_TopsPoPHFcP__318->SetBinError(5,0.000410493);
   h_isojet2CSV_TopsPoPHFcP__318->SetBinError(6,0.0004609286);
   h_isojet2CSV_TopsPoPHFcP__318->SetBinError(7,0.0003813826);
   h_isojet2CSV_TopsPoPHFcP__318->SetBinError(8,0.0003967835);
   h_isojet2CSV_TopsPoPHFcP__318->SetBinError(9,0.0004993463);
   h_isojet2CSV_TopsPoPHFcP__318->SetBinError(10,0.001012438);
   h_isojet2CSV_TopsPoPHFcP__318->SetEntries(77950);
   h_isojet2CSV_TopsPoPHFcP__318->SetStats(0);

   ci = TColor::GetColor("#ff9900");
   h_isojet2CSV_TopsPoPHFcP__318->SetFillColor(ci);
   h_isojet2CSV_TopsPoPHFcP__318->GetXaxis()->SetTitle("isojet 2 CSV");
   h_isojet2CSV_TopsPoPHFcP__318->GetXaxis()->SetLabelFont(42);
   h_isojet2CSV_TopsPoPHFcP__318->GetXaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_TopsPoPHFcP__318->GetXaxis()->SetTitleSize(0.05);
   h_isojet2CSV_TopsPoPHFcP__318->GetXaxis()->SetTickLength(0.025);
   h_isojet2CSV_TopsPoPHFcP__318->GetXaxis()->SetTitleFont(42);
   h_isojet2CSV_TopsPoPHFcP__318->GetYaxis()->SetTitle("a.u.");
   h_isojet2CSV_TopsPoPHFcP__318->GetYaxis()->SetLabelFont(42);
   h_isojet2CSV_TopsPoPHFcP__318->GetYaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_TopsPoPHFcP__318->GetYaxis()->SetTitleSize(0.05);
   h_isojet2CSV_TopsPoPHFcP__318->GetYaxis()->SetTickLength(0.025);
   h_isojet2CSV_TopsPoPHFcP__318->GetYaxis()->SetTitleFont(42);
   h_isojet2CSV_TopsPoPHFcP__318->GetZaxis()->SetLabelFont(42);
   h_isojet2CSV_TopsPoPHFcP__318->GetZaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_TopsPoPHFcP__318->GetZaxis()->SetTitleSize(0.05);
   h_isojet2CSV_TopsPoPHFcP__318->GetZaxis()->SetTickLength(0.025);
   h_isojet2CSV_TopsPoPHFcP__318->GetZaxis()->SetTitleFont(42);
   h->Add(h_isojet2CSV_Top (HF),"");
   h->Draw("hist");
   
   TH1D *hsum__319 = new TH1D("hsum__319","",10,0,1);
   hsum__319->SetBinContent(1,0.3673568);
   hsum__319->SetBinContent(2,0.1421284);
   hsum__319->SetBinContent(3,0.07520904);
   hsum__319->SetBinContent(4,0.04490296);
   hsum__319->SetBinContent(5,0.03138651);
   hsum__319->SetBinContent(6,0.02840858);
   hsum__319->SetBinContent(7,0.02676217);
   hsum__319->SetBinContent(8,0.02981931);
   hsum__319->SetBinContent(9,0.05207447);
   hsum__319->SetBinContent(10,0.2019517);
   hsum__319->SetBinError(1,0.00373241);
   hsum__319->SetBinError(2,0.001718819);
   hsum__319->SetBinError(3,0.001807747);
   hsum__319->SetBinError(4,0.0009222779);
   hsum__319->SetBinError(5,0.0007650841);
   hsum__319->SetBinError(6,0.0007208378);
   hsum__319->SetBinError(7,0.0006532434);
   hsum__319->SetBinError(8,0.0007248106);
   hsum__319->SetBinError(9,0.001616018);
   hsum__319->SetBinError(10,0.002168218);
   hsum__319->SetEntries(45);
   hsum__319->SetStats(0);

   ci = 1206;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   hsum__319->SetFillColor(ci);
   hsum__319->SetFillStyle(3003);
   hsum__319->SetLineWidth(0);
   hsum__319->GetXaxis()->SetTitle("isojet 2 CSV");
   hsum__319->GetXaxis()->SetLabelFont(42);
   hsum__319->GetXaxis()->SetLabelOffset(0.007);
   hsum__319->GetXaxis()->SetTitleSize(0.05);
   hsum__319->GetXaxis()->SetTickLength(0.025);
   hsum__319->GetXaxis()->SetTitleFont(42);
   hsum__319->GetYaxis()->SetTitle("a.u.");
   hsum__319->GetYaxis()->SetLabelFont(42);
   hsum__319->GetYaxis()->SetLabelOffset(0.007);
   hsum__319->GetYaxis()->SetTitleSize(0.05);
   hsum__319->GetYaxis()->SetTickLength(0.025);
   hsum__319->GetYaxis()->SetTitleFont(42);
   hsum__319->GetZaxis()->SetLabelFont(42);
   hsum__319->GetZaxis()->SetLabelOffset(0.007);
   hsum__319->GetZaxis()->SetTitleSize(0.05);
   hsum__319->GetZaxis()->SetTickLength(0.025);
   hsum__319->GetZaxis()->SetTitleFont(42);
   hsum__319->Draw("e2 same");
   
   TH1D *h_isojet2CSV_Data__320 = new TH1D("h_isojet2CSV_Data__320","",10,0,1);
   h_isojet2CSV_Data__320->SetBinContent(1,0.3555545);
   h_isojet2CSV_Data__320->SetBinContent(2,0.132055);
   h_isojet2CSV_Data__320->SetBinContent(3,0.07297654);
   h_isojet2CSV_Data__320->SetBinContent(4,0.04946763);
   h_isojet2CSV_Data__320->SetBinContent(5,0.03594648);
   h_isojet2CSV_Data__320->SetBinContent(6,0.03373222);
   h_isojet2CSV_Data__320->SetBinContent(7,0.03180062);
   h_isojet2CSV_Data__320->SetBinContent(8,0.03500424);
   h_isojet2CSV_Data__320->SetBinContent(9,0.05497974);
   h_isojet2CSV_Data__320->SetBinContent(10,0.198483);
   h_isojet2CSV_Data__320->SetBinError(1,0.004092786);
   h_isojet2CSV_Data__320->SetBinError(2,0.00249427);
   h_isojet2CSV_Data__320->SetBinError(3,0.001854204);
   h_isojet2CSV_Data__320->SetBinError(4,0.001526604);
   h_isojet2CSV_Data__320->SetBinError(5,0.00130135);
   h_isojet2CSV_Data__320->SetBinError(6,0.001260632);
   h_isojet2CSV_Data__320->SetBinError(7,0.001224007);
   h_isojet2CSV_Data__320->SetBinError(8,0.001284181);
   h_isojet2CSV_Data__320->SetBinError(9,0.001609412);
   h_isojet2CSV_Data__320->SetBinError(10,0.00305793);
   h_isojet2CSV_Data__320->SetEntries(21226);
   h_isojet2CSV_Data__320->SetStats(0);
   h_isojet2CSV_Data__320->SetLineWidth(3);
   h_isojet2CSV_Data__320->SetMarkerStyle(20);
   h_isojet2CSV_Data__320->SetMarkerSize(2);
   h_isojet2CSV_Data__320->GetXaxis()->SetTitle("isojet 2 CSV");
   h_isojet2CSV_Data__320->GetXaxis()->SetLabelFont(42);
   h_isojet2CSV_Data__320->GetXaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_Data__320->GetXaxis()->SetTitleSize(0.05);
   h_isojet2CSV_Data__320->GetXaxis()->SetTickLength(0.025);
   h_isojet2CSV_Data__320->GetXaxis()->SetTitleFont(42);
   h_isojet2CSV_Data__320->GetYaxis()->SetTitle("a.u.");
   h_isojet2CSV_Data__320->GetYaxis()->SetLabelFont(42);
   h_isojet2CSV_Data__320->GetYaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_Data__320->GetYaxis()->SetTitleSize(0.05);
   h_isojet2CSV_Data__320->GetYaxis()->SetTickLength(0.025);
   h_isojet2CSV_Data__320->GetYaxis()->SetTitleFont(42);
   h_isojet2CSV_Data__320->GetZaxis()->SetLabelFont(42);
   h_isojet2CSV_Data__320->GetZaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_Data__320->GetZaxis()->SetTitleSize(0.05);
   h_isojet2CSV_Data__320->GetZaxis()->SetTickLength(0.025);
   h_isojet2CSV_Data__320->GetZaxis()->SetTitleFont(42);
   h_isojet2CSV_Data__320->Draw("elp same");
   
   TLegend *leg = new TLegend(0.6,0.55,0.88,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("h_isojet2CSV_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_isojet2CSV_Top (HF)","Top (HF)","F");

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
   entry=leg->AddEntry("h_isojet2CSV_Top (LF)","Top (LF)","F");

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
   entry=leg->AddEntry("h_isojet2CSV_W+jets","W+jets","F");

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
   entry=leg->AddEntry("h_isojet2CSV_Z+jets","Z+jets","F");

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
   entry=leg->AddEntry("h_isojet2CSV_Diboson","Diboson","F");

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
   entry=leg->AddEntry("h_isojet2CSV_QCD","QCD","F");

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
   entry=leg->AddEntry("h_isojet2CSV_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_isojet2CSV_Top (HF)","Top (HF)","F");

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
   entry=leg->AddEntry("h_isojet2CSV_Top (LF)","Top (LF)","F");

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
   entry=leg->AddEntry("h_isojet2CSV_W+jets","W+jets","F");

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
   entry=leg->AddEntry("h_isojet2CSV_Z+jets","Z+jets","F");

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
   entry=leg->AddEntry("h_isojet2CSV_Diboson","Diboson","F");

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
   entry=leg->AddEntry("h_isojet2CSV_QCD","QCD","F");

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
   
   TH1D *ratio__321 = new TH1D("ratio__321","",10,0,1);
   ratio__321->SetBinContent(1,-0.03212768);
   ratio__321->SetBinContent(2,-0.07087541);
   ratio__321->SetBinContent(3,-0.02968395);
   ratio__321->SetBinContent(4,0.1016564);
   ratio__321->SetBinContent(5,0.1452843);
   ratio__321->SetBinContent(6,0.1873956);
   ratio__321->SetBinContent(7,0.1882676);
   ratio__321->SetBinContent(8,0.1738783);
   ratio__321->SetBinContent(9,0.05579066);
   ratio__321->SetBinContent(10,-0.01717585);
   ratio__321->SetBinError(1,0.0001);
   ratio__321->SetBinError(2,0.0001);
   ratio__321->SetBinError(3,0.0001);
   ratio__321->SetBinError(4,0.0001);
   ratio__321->SetBinError(5,0.0001);
   ratio__321->SetBinError(6,0.0001);
   ratio__321->SetBinError(7,0.0001);
   ratio__321->SetBinError(8,0.0001);
   ratio__321->SetBinError(9,0.0001);
   ratio__321->SetBinError(10,0.0001);
   ratio__321->SetMinimum(-0.48);
   ratio__321->SetMaximum(0.48);
   ratio__321->SetEntries(21236);
   ratio__321->SetStats(0);
   ratio__321->SetLineWidth(3);
   ratio__321->SetMarkerStyle(20);
   ratio__321->SetMarkerSize(2);
   ratio__321->GetXaxis()->SetTitle("isojet 2 CSV");
   ratio__321->GetXaxis()->SetLabelFont(43);
   ratio__321->GetXaxis()->SetLabelOffset(0.007);
   ratio__321->GetXaxis()->SetLabelSize(30);
   ratio__321->GetXaxis()->SetTitleSize(40);
   ratio__321->GetXaxis()->SetTickLength(0.025);
   ratio__321->GetXaxis()->SetTitleOffset(5);
   ratio__321->GetXaxis()->SetTitleFont(43);
   ratio__321->GetYaxis()->SetTitle("#frac{Data-Exp}{Exp}");
   ratio__321->GetYaxis()->SetNdivisions(5);
   ratio__321->GetYaxis()->SetLabelFont(43);
   ratio__321->GetYaxis()->SetLabelOffset(0.007);
   ratio__321->GetYaxis()->SetLabelSize(30);
   ratio__321->GetYaxis()->SetTitleSize(40);
   ratio__321->GetYaxis()->SetTickLength(0.025);
   ratio__321->GetYaxis()->SetTitleOffset(2.5);
   ratio__321->GetYaxis()->SetTitleFont(43);
   ratio__321->GetZaxis()->SetLabelFont(42);
   ratio__321->GetZaxis()->SetLabelOffset(0.007);
   ratio__321->GetZaxis()->SetTitleSize(0.05);
   ratio__321->GetZaxis()->SetTickLength(0.025);
   ratio__321->GetZaxis()->SetTitleFont(42);
   ratio__321->Draw("elp");
   
   TH1D *zero__322 = new TH1D("zero__322","",10,0,1);
   zero__322->SetBinError(1,0.004092786);
   zero__322->SetBinError(2,0.00249427);
   zero__322->SetBinError(3,0.001854204);
   zero__322->SetBinError(4,0.001526604);
   zero__322->SetBinError(5,0.00130135);
   zero__322->SetBinError(6,0.001260632);
   zero__322->SetBinError(7,0.001224007);
   zero__322->SetBinError(8,0.001284181);
   zero__322->SetBinError(9,0.001609412);
   zero__322->SetBinError(10,0.00305793);
   zero__322->SetEntries(21236);
   zero__322->SetStats(0);
   zero__322->SetLineWidth(3);
   zero__322->SetMarkerStyle(20);
   zero__322->SetMarkerSize(2);
   zero__322->GetXaxis()->SetTitle("isojet 2 CSV");
   zero__322->GetXaxis()->SetLabelFont(42);
   zero__322->GetXaxis()->SetLabelOffset(0.007);
   zero__322->GetXaxis()->SetTitleSize(0.05);
   zero__322->GetXaxis()->SetTickLength(0.025);
   zero__322->GetXaxis()->SetTitleFont(42);
   zero__322->GetYaxis()->SetTitle("a.u.");
   zero__322->GetYaxis()->SetLabelFont(42);
   zero__322->GetYaxis()->SetLabelOffset(0.007);
   zero__322->GetYaxis()->SetTitleSize(0.05);
   zero__322->GetYaxis()->SetTickLength(0.025);
   zero__322->GetYaxis()->SetTitleFont(42);
   zero__322->GetZaxis()->SetLabelFont(42);
   zero__322->GetZaxis()->SetLabelOffset(0.007);
   zero__322->GetZaxis()->SetTitleSize(0.05);
   zero__322->GetZaxis()->SetTickLength(0.025);
   zero__322->GetZaxis()->SetTitleFont(42);
   zero__322->Draw("hist same");
   
   TH1D *sumratioup__323 = new TH1D("sumratioup__323","",10,0,1);
   sumratioup__323->SetBinContent(1,0.01016018);
   sumratioup__323->SetBinContent(2,0.01209342);
   sumratioup__323->SetBinContent(3,0.0240363);
   sumratioup__323->SetBinContent(4,0.02053936);
   sumratioup__323->SetBinContent(5,0.02437621);
   sumratioup__323->SetBinContent(6,0.02537395);
   sumratioup__323->SetBinContent(7,0.02440921);
   sumratioup__323->SetBinContent(8,0.02430675);
   sumratioup__323->SetBinContent(9,0.03103282);
   sumratioup__323->SetBinContent(10,0.01073632);
   sumratioup__323->SetBinError(1,0.00373241);
   sumratioup__323->SetBinError(2,0.001718819);
   sumratioup__323->SetBinError(3,0.001807747);
   sumratioup__323->SetBinError(4,0.0009222779);
   sumratioup__323->SetBinError(5,0.0007650841);
   sumratioup__323->SetBinError(6,0.0007208378);
   sumratioup__323->SetBinError(7,0.0006532434);
   sumratioup__323->SetBinError(8,0.0007248106);
   sumratioup__323->SetBinError(9,0.001616018);
   sumratioup__323->SetBinError(10,0.002168218);
   sumratioup__323->SetEntries(55);
   sumratioup__323->SetStats(0);

   ci = 1206;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratioup__323->SetFillColor(ci);
   sumratioup__323->SetFillStyle(3003);
   sumratioup__323->GetXaxis()->SetTitle("isojet 2 CSV");
   sumratioup__323->GetXaxis()->SetLabelFont(42);
   sumratioup__323->GetXaxis()->SetLabelOffset(0.007);
   sumratioup__323->GetXaxis()->SetTitleSize(0.05);
   sumratioup__323->GetXaxis()->SetTickLength(0.025);
   sumratioup__323->GetXaxis()->SetTitleFont(42);
   sumratioup__323->GetYaxis()->SetTitle("a.u.");
   sumratioup__323->GetYaxis()->SetLabelFont(42);
   sumratioup__323->GetYaxis()->SetLabelOffset(0.007);
   sumratioup__323->GetYaxis()->SetTitleSize(0.05);
   sumratioup__323->GetYaxis()->SetTickLength(0.025);
   sumratioup__323->GetYaxis()->SetTitleFont(42);
   sumratioup__323->GetZaxis()->SetLabelFont(42);
   sumratioup__323->GetZaxis()->SetLabelOffset(0.007);
   sumratioup__323->GetZaxis()->SetTitleSize(0.05);
   sumratioup__323->GetZaxis()->SetTickLength(0.025);
   sumratioup__323->GetZaxis()->SetTitleFont(42);
   sumratioup__323->Draw("hist same");
   
   TH1D *sumratiodown__324 = new TH1D("sumratiodown__324","",10,0,1);
   sumratiodown__324->SetBinContent(1,-0.01016018);
   sumratiodown__324->SetBinContent(2,-0.01209342);
   sumratiodown__324->SetBinContent(3,-0.0240363);
   sumratiodown__324->SetBinContent(4,-0.02053936);
   sumratiodown__324->SetBinContent(5,-0.02437621);
   sumratiodown__324->SetBinContent(6,-0.02537395);
   sumratiodown__324->SetBinContent(7,-0.02440921);
   sumratiodown__324->SetBinContent(8,-0.02430675);
   sumratiodown__324->SetBinContent(9,-0.03103282);
   sumratiodown__324->SetBinContent(10,-0.01073632);
   sumratiodown__324->SetBinError(1,0.00373241);
   sumratiodown__324->SetBinError(2,0.001718819);
   sumratiodown__324->SetBinError(3,0.001807747);
   sumratiodown__324->SetBinError(4,0.0009222779);
   sumratiodown__324->SetBinError(5,0.0007650841);
   sumratiodown__324->SetBinError(6,0.0007208378);
   sumratiodown__324->SetBinError(7,0.0006532434);
   sumratiodown__324->SetBinError(8,0.0007248106);
   sumratiodown__324->SetBinError(9,0.001616018);
   sumratiodown__324->SetBinError(10,0.002168218);
   sumratiodown__324->SetEntries(55);
   sumratiodown__324->SetStats(0);

   ci = 1206;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratiodown__324->SetFillColor(ci);
   sumratiodown__324->SetFillStyle(3003);
   sumratiodown__324->GetXaxis()->SetTitle("isojet 2 CSV");
   sumratiodown__324->GetXaxis()->SetLabelFont(42);
   sumratiodown__324->GetXaxis()->SetLabelOffset(0.007);
   sumratiodown__324->GetXaxis()->SetTitleSize(0.05);
   sumratiodown__324->GetXaxis()->SetTickLength(0.025);
   sumratiodown__324->GetXaxis()->SetTitleFont(42);
   sumratiodown__324->GetYaxis()->SetTitle("a.u.");
   sumratiodown__324->GetYaxis()->SetLabelFont(42);
   sumratiodown__324->GetYaxis()->SetLabelOffset(0.007);
   sumratiodown__324->GetYaxis()->SetTitleSize(0.05);
   sumratiodown__324->GetYaxis()->SetTickLength(0.025);
   sumratiodown__324->GetYaxis()->SetTitleFont(42);
   sumratiodown__324->GetZaxis()->SetLabelFont(42);
   sumratiodown__324->GetZaxis()->SetLabelOffset(0.007);
   sumratiodown__324->GetZaxis()->SetTitleSize(0.05);
   sumratiodown__324->GetZaxis()->SetTickLength(0.025);
   sumratiodown__324->GetZaxis()->SetTitleFont(42);
   sumratiodown__324->Draw("hist same");
   
   Double_t Graph0_fx1027[10] = {
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
   Double_t Graph0_fy1027[10] = {
   -0.03212768,
   -0.07087541,
   -0.02968395,
   0.1016564,
   0.1452843,
   0.1873956,
   0.1882676,
   0.1738783,
   0.05579066,
   -0.01717585};
   Double_t Graph0_fex1027[10] = {
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
   Double_t Graph0_fey1027[10] = {
   0.01114117,
   0.0175494,
   0.02465401,
   0.03399785,
   0.04146207,
   0.04437505,
   0.04573644,
   0.04306542,
   0.03090597,
   0.01514189};
   TGraphErrors *gre = new TGraphErrors(10,Graph0_fx1027,Graph0_fy1027,Graph0_fex1027,Graph0_fey1027);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1027 = new TH1F("Graph_Graph1027","Graph",100,0,1.04);
   Graph_Graph1027->SetMinimum(-0.1206677);
   Graph_Graph1027->SetMaximum(0.2662469);
   Graph_Graph1027->SetDirectory(0);
   Graph_Graph1027->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1027->SetLineColor(ci);
   Graph_Graph1027->GetXaxis()->SetLabelFont(42);
   Graph_Graph1027->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1027->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1027->GetXaxis()->SetTickLength(0.025);
   Graph_Graph1027->GetXaxis()->SetTitleFont(42);
   Graph_Graph1027->GetYaxis()->SetLabelFont(42);
   Graph_Graph1027->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1027->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1027->GetYaxis()->SetTickLength(0.025);
   Graph_Graph1027->GetYaxis()->SetTitleFont(42);
   Graph_Graph1027->GetZaxis()->SetLabelFont(42);
   Graph_Graph1027->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1027->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph1027->GetZaxis()->SetTickLength(0.025);
   Graph_Graph1027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1027);
   
   gre->Draw("pe0");
   pad2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
