void ttbar_isojet2CSV_logy()
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
   pad1->Range(-0.1875,-3.38127,1.0625,2.234102);
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
   h->SetMinimum(0.001338109);
   h->SetMaximum(36.73568);
   
   TH1F *h_stack_28 = new TH1F("h_stack_28","",10,0,1);
   h_stack_28->SetMinimum(0.0004156522);
   h_stack_28->SetMaximum(69.34666);
   h_stack_28->SetDirectory(0);
   h_stack_28->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h_stack_28->SetLineColor(ci);
   h_stack_28->GetXaxis()->SetLabelFont(42);
   h_stack_28->GetXaxis()->SetLabelOffset(0.007);
   h_stack_28->GetXaxis()->SetTitleSize(0.05);
   h_stack_28->GetXaxis()->SetTickLength(0.025);
   h_stack_28->GetXaxis()->SetTitleFont(42);
   h_stack_28->GetYaxis()->SetTitle("a.u.");
   h_stack_28->GetYaxis()->SetLabelFont(42);
   h_stack_28->GetYaxis()->SetLabelOffset(0.007);
   h_stack_28->GetYaxis()->SetTitleSize(0.05);
   h_stack_28->GetYaxis()->SetTickLength(0.025);
   h_stack_28->GetYaxis()->SetTitleOffset(1.5);
   h_stack_28->GetYaxis()->SetTitleFont(42);
   h_stack_28->GetZaxis()->SetLabelFont(42);
   h_stack_28->GetZaxis()->SetLabelOffset(0.007);
   h_stack_28->GetZaxis()->SetTitleSize(0.05);
   h_stack_28->GetZaxis()->SetTickLength(0.025);
   h_stack_28->GetZaxis()->SetTitleFont(42);
   h->SetHistogram(h_stack_28);
   
   
   TH1D *h_isojet2CSV_QCD__325 = new TH1D("h_isojet2CSV_QCD__325","",10,0,1);
   h_isojet2CSV_QCD__325->SetBinContent(1,0.005689086);
   h_isojet2CSV_QCD__325->SetBinContent(3,0.001485453);
   h_isojet2CSV_QCD__325->SetBinContent(8,0.0004163522);
   h_isojet2CSV_QCD__325->SetBinContent(9,0.001709954);
   h_isojet2CSV_QCD__325->SetBinContent(10,0.002284714);
   h_isojet2CSV_QCD__325->SetBinError(1,0.001893142);
   h_isojet2CSV_QCD__325->SetBinError(3,0.001285212);
   h_isojet2CSV_QCD__325->SetBinError(8,0.000294723);
   h_isojet2CSV_QCD__325->SetBinError(9,0.001411539);
   h_isojet2CSV_QCD__325->SetBinError(10,0.001526445);
   h_isojet2CSV_QCD__325->SetEntries(25);
   h_isojet2CSV_QCD__325->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_isojet2CSV_QCD__325->SetFillColor(ci);
   h_isojet2CSV_QCD__325->GetXaxis()->SetTitle("isojet 2 CSV");
   h_isojet2CSV_QCD__325->GetXaxis()->SetLabelFont(42);
   h_isojet2CSV_QCD__325->GetXaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_QCD__325->GetXaxis()->SetTitleSize(0.05);
   h_isojet2CSV_QCD__325->GetXaxis()->SetTickLength(0.025);
   h_isojet2CSV_QCD__325->GetXaxis()->SetTitleFont(42);
   h_isojet2CSV_QCD__325->GetYaxis()->SetTitle("a.u.");
   h_isojet2CSV_QCD__325->GetYaxis()->SetLabelFont(42);
   h_isojet2CSV_QCD__325->GetYaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_QCD__325->GetYaxis()->SetTitleSize(0.05);
   h_isojet2CSV_QCD__325->GetYaxis()->SetTickLength(0.025);
   h_isojet2CSV_QCD__325->GetYaxis()->SetTitleFont(42);
   h_isojet2CSV_QCD__325->GetZaxis()->SetLabelFont(42);
   h_isojet2CSV_QCD__325->GetZaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_QCD__325->GetZaxis()->SetTitleSize(0.05);
   h_isojet2CSV_QCD__325->GetZaxis()->SetTickLength(0.025);
   h_isojet2CSV_QCD__325->GetZaxis()->SetTitleFont(42);
   h->Add(h_isojet2CSV_QCD,"");
   
   TH1D *h_isojet2CSV_Diboson__326 = new TH1D("h_isojet2CSV_Diboson__326","",10,0,1);
   h_isojet2CSV_Diboson__326->SetBinContent(1,0.02260547);
   h_isojet2CSV_Diboson__326->SetBinContent(2,0.005215535);
   h_isojet2CSV_Diboson__326->SetBinContent(3,0.003247682);
   h_isojet2CSV_Diboson__326->SetBinContent(4,0.001464948);
   h_isojet2CSV_Diboson__326->SetBinContent(5,0.001215577);
   h_isojet2CSV_Diboson__326->SetBinContent(6,0.0008384506);
   h_isojet2CSV_Diboson__326->SetBinContent(7,0.0006316198);
   h_isojet2CSV_Diboson__326->SetBinContent(8,0.0006711806);
   h_isojet2CSV_Diboson__326->SetBinContent(9,0.0002807753);
   h_isojet2CSV_Diboson__326->SetBinContent(10,0.0006219424);
   h_isojet2CSV_Diboson__326->SetBinError(1,0.002127326);
   h_isojet2CSV_Diboson__326->SetBinError(2,0.001014608);
   h_isojet2CSV_Diboson__326->SetBinError(3,0.0008052909);
   h_isojet2CSV_Diboson__326->SetBinError(4,0.0005202749);
   h_isojet2CSV_Diboson__326->SetBinError(5,0.0004830826);
   h_isojet2CSV_Diboson__326->SetBinError(6,0.0003896917);
   h_isojet2CSV_Diboson__326->SetBinError(7,0.0003602955);
   h_isojet2CSV_Diboson__326->SetBinError(8,0.0003539298);
   h_isojet2CSV_Diboson__326->SetBinError(9,0.0002096044);
   h_isojet2CSV_Diboson__326->SetBinError(10,0.0003279289);
   h_isojet2CSV_Diboson__326->SetEntries(227);
   h_isojet2CSV_Diboson__326->SetStats(0);

   ci = TColor::GetColor("#9966cc");
   h_isojet2CSV_Diboson__326->SetFillColor(ci);
   h_isojet2CSV_Diboson__326->GetXaxis()->SetTitle("isojet 2 CSV");
   h_isojet2CSV_Diboson__326->GetXaxis()->SetLabelFont(42);
   h_isojet2CSV_Diboson__326->GetXaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_Diboson__326->GetXaxis()->SetTitleSize(0.05);
   h_isojet2CSV_Diboson__326->GetXaxis()->SetTickLength(0.025);
   h_isojet2CSV_Diboson__326->GetXaxis()->SetTitleFont(42);
   h_isojet2CSV_Diboson__326->GetYaxis()->SetTitle("a.u.");
   h_isojet2CSV_Diboson__326->GetYaxis()->SetLabelFont(42);
   h_isojet2CSV_Diboson__326->GetYaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_Diboson__326->GetYaxis()->SetTitleSize(0.05);
   h_isojet2CSV_Diboson__326->GetYaxis()->SetTickLength(0.025);
   h_isojet2CSV_Diboson__326->GetYaxis()->SetTitleFont(42);
   h_isojet2CSV_Diboson__326->GetZaxis()->SetLabelFont(42);
   h_isojet2CSV_Diboson__326->GetZaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_Diboson__326->GetZaxis()->SetTitleSize(0.05);
   h_isojet2CSV_Diboson__326->GetZaxis()->SetTickLength(0.025);
   h_isojet2CSV_Diboson__326->GetZaxis()->SetTitleFont(42);
   h->Add(h_isojet2CSV_Diboson,"");
   
   TH1D *h_isojet2CSV_ZpLjets__327 = new TH1D("h_isojet2CSV_ZpLjets__327","",10,0,1);
   h_isojet2CSV_ZpLjets__327->SetBinContent(1,0.02930702);
   h_isojet2CSV_ZpLjets__327->SetBinContent(2,0.007476852);
   h_isojet2CSV_ZpLjets__327->SetBinContent(3,0.003806988);
   h_isojet2CSV_ZpLjets__327->SetBinContent(4,0.002016381);
   h_isojet2CSV_ZpLjets__327->SetBinContent(5,0.001255538);
   h_isojet2CSV_ZpLjets__327->SetBinContent(6,0.001162197);
   h_isojet2CSV_ZpLjets__327->SetBinContent(7,0.000621508);
   h_isojet2CSV_ZpLjets__327->SetBinContent(8,0.0006216042);
   h_isojet2CSV_ZpLjets__327->SetBinContent(9,0.0005039497);
   h_isojet2CSV_ZpLjets__327->SetBinContent(10,0.0006417649);
   h_isojet2CSV_ZpLjets__327->SetBinError(1,0.0005307679);
   h_isojet2CSV_ZpLjets__327->SetBinError(2,0.0002473113);
   h_isojet2CSV_ZpLjets__327->SetBinError(3,0.0001796176);
   h_isojet2CSV_ZpLjets__327->SetBinError(4,0.0001293224);
   h_isojet2CSV_ZpLjets__327->SetBinError(5,0.0001012353);
   h_isojet2CSV_ZpLjets__327->SetBinError(6,0.000100257);
   h_isojet2CSV_ZpLjets__327->SetBinError(7,6.623201e-05);
   h_isojet2CSV_ZpLjets__327->SetBinError(8,7.360567e-05);
   h_isojet2CSV_ZpLjets__327->SetBinError(9,6.547105e-05);
   h_isojet2CSV_ZpLjets__327->SetBinError(10,7.016391e-05);
   h_isojet2CSV_ZpLjets__327->SetEntries(24915);
   h_isojet2CSV_ZpLjets__327->SetStats(0);

   ci = TColor::GetColor("#3399cc");
   h_isojet2CSV_ZpLjets__327->SetFillColor(ci);
   h_isojet2CSV_ZpLjets__327->GetXaxis()->SetTitle("isojet 2 CSV");
   h_isojet2CSV_ZpLjets__327->GetXaxis()->SetLabelFont(42);
   h_isojet2CSV_ZpLjets__327->GetXaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_ZpLjets__327->GetXaxis()->SetTitleSize(0.05);
   h_isojet2CSV_ZpLjets__327->GetXaxis()->SetTickLength(0.025);
   h_isojet2CSV_ZpLjets__327->GetXaxis()->SetTitleFont(42);
   h_isojet2CSV_ZpLjets__327->GetYaxis()->SetTitle("a.u.");
   h_isojet2CSV_ZpLjets__327->GetYaxis()->SetLabelFont(42);
   h_isojet2CSV_ZpLjets__327->GetYaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_ZpLjets__327->GetYaxis()->SetTitleSize(0.05);
   h_isojet2CSV_ZpLjets__327->GetYaxis()->SetTickLength(0.025);
   h_isojet2CSV_ZpLjets__327->GetYaxis()->SetTitleFont(42);
   h_isojet2CSV_ZpLjets__327->GetZaxis()->SetLabelFont(42);
   h_isojet2CSV_ZpLjets__327->GetZaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_ZpLjets__327->GetZaxis()->SetTitleSize(0.05);
   h_isojet2CSV_ZpLjets__327->GetZaxis()->SetTickLength(0.025);
   h_isojet2CSV_ZpLjets__327->GetZaxis()->SetTitleFont(42);
   h->Add(h_isojet2CSV_Z+jets,"");
   
   TH1D *h_isojet2CSV_WpLjets__328 = new TH1D("h_isojet2CSV_WpLjets__328","",10,0,1);
   h_isojet2CSV_WpLjets__328->SetBinContent(1,0.02650013);
   h_isojet2CSV_WpLjets__328->SetBinContent(2,0.007918397);
   h_isojet2CSV_WpLjets__328->SetBinContent(3,0.003856131);
   h_isojet2CSV_WpLjets__328->SetBinContent(4,0.001795782);
   h_isojet2CSV_WpLjets__328->SetBinContent(5,0.001277726);
   h_isojet2CSV_WpLjets__328->SetBinContent(6,0.0007821116);
   h_isojet2CSV_WpLjets__328->SetBinContent(7,0.0009071845);
   h_isojet2CSV_WpLjets__328->SetBinContent(8,0.0006130107);
   h_isojet2CSV_WpLjets__328->SetBinContent(9,0.0008638331);
   h_isojet2CSV_WpLjets__328->SetBinContent(10,0.001168472);
   h_isojet2CSV_WpLjets__328->SetBinError(1,0.001314466);
   h_isojet2CSV_WpLjets__328->SetBinError(2,0.0006860849);
   h_isojet2CSV_WpLjets__328->SetBinError(3,0.0004681838);
   h_isojet2CSV_WpLjets__328->SetBinError(4,0.000323407);
   h_isojet2CSV_WpLjets__328->SetBinError(5,0.000258674);
   h_isojet2CSV_WpLjets__328->SetBinError(6,0.0001926402);
   h_isojet2CSV_WpLjets__328->SetBinError(7,0.0002025716);
   h_isojet2CSV_WpLjets__328->SetBinError(8,0.0001572725);
   h_isojet2CSV_WpLjets__328->SetBinError(9,0.0002336444);
   h_isojet2CSV_WpLjets__328->SetBinError(10,0.0002741289);
   h_isojet2CSV_WpLjets__328->SetEntries(3309);
   h_isojet2CSV_WpLjets__328->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   h_isojet2CSV_WpLjets__328->SetFillColor(ci);
   h_isojet2CSV_WpLjets__328->GetXaxis()->SetTitle("isojet 2 CSV");
   h_isojet2CSV_WpLjets__328->GetXaxis()->SetLabelFont(42);
   h_isojet2CSV_WpLjets__328->GetXaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_WpLjets__328->GetXaxis()->SetTitleSize(0.05);
   h_isojet2CSV_WpLjets__328->GetXaxis()->SetTickLength(0.025);
   h_isojet2CSV_WpLjets__328->GetXaxis()->SetTitleFont(42);
   h_isojet2CSV_WpLjets__328->GetYaxis()->SetTitle("a.u.");
   h_isojet2CSV_WpLjets__328->GetYaxis()->SetLabelFont(42);
   h_isojet2CSV_WpLjets__328->GetYaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_WpLjets__328->GetYaxis()->SetTitleSize(0.05);
   h_isojet2CSV_WpLjets__328->GetYaxis()->SetTickLength(0.025);
   h_isojet2CSV_WpLjets__328->GetYaxis()->SetTitleFont(42);
   h_isojet2CSV_WpLjets__328->GetZaxis()->SetLabelFont(42);
   h_isojet2CSV_WpLjets__328->GetZaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_WpLjets__328->GetZaxis()->SetTitleSize(0.05);
   h_isojet2CSV_WpLjets__328->GetZaxis()->SetTickLength(0.025);
   h_isojet2CSV_WpLjets__328->GetZaxis()->SetTitleFont(42);
   h->Add(h_isojet2CSV_W+jets,"");
   
   TH1D *h_isojet2CSV_TopsPoPLFcP__329 = new TH1D("h_isojet2CSV_TopsPoPLFcP__329","",10,0,1);
   h_isojet2CSV_TopsPoPLFcP__329->SetBinContent(1,0.07318222);
   h_isojet2CSV_TopsPoPLFcP__329->SetBinContent(2,0.04495743);
   h_isojet2CSV_TopsPoPLFcP__329->SetBinContent(3,0.02337085);
   h_isojet2CSV_TopsPoPLFcP__329->SetBinContent(4,0.01579536);
   h_isojet2CSV_TopsPoPLFcP__329->SetBinContent(5,0.01139608);
   h_isojet2CSV_TopsPoPLFcP__329->SetBinContent(6,0.01043578);
   h_isojet2CSV_TopsPoPLFcP__329->SetBinContent(7,0.01104881);
   h_isojet2CSV_TopsPoPLFcP__329->SetBinContent(8,0.01272808);
   h_isojet2CSV_TopsPoPLFcP__329->SetBinContent(9,0.02434799);
   h_isojet2CSV_TopsPoPLFcP__329->SetBinContent(10,0.1008165);
   h_isojet2CSV_TopsPoPLFcP__329->SetBinError(1,0.0009880813);
   h_isojet2CSV_TopsPoPLFcP__329->SetBinError(2,0.0007119177);
   h_isojet2CSV_TopsPoPLFcP__329->SetBinError(3,0.0004979389);
   h_isojet2CSV_TopsPoPLFcP__329->SetBinError(4,0.0004451326);
   h_isojet2CSV_TopsPoPLFcP__329->SetBinError(5,0.0003260669);
   h_isojet2CSV_TopsPoPLFcP__329->SetBinError(6,0.0003288321);
   h_isojet2CSV_TopsPoPLFcP__329->SetBinError(7,0.0003256373);
   h_isojet2CSV_TopsPoPLFcP__329->SetBinError(8,0.0003544473);
   h_isojet2CSV_TopsPoPLFcP__329->SetBinError(9,0.0005166364);
   h_isojet2CSV_TopsPoPLFcP__329->SetBinError(10,0.001076336);
   h_isojet2CSV_TopsPoPLFcP__329->SetEntries(45754);
   h_isojet2CSV_TopsPoPLFcP__329->SetStats(0);

   ci = TColor::GetColor("#cc33cc");
   h_isojet2CSV_TopsPoPLFcP__329->SetFillColor(ci);
   h_isojet2CSV_TopsPoPLFcP__329->GetXaxis()->SetTitle("isojet 2 CSV");
   h_isojet2CSV_TopsPoPLFcP__329->GetXaxis()->SetLabelFont(42);
   h_isojet2CSV_TopsPoPLFcP__329->GetXaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_TopsPoPLFcP__329->GetXaxis()->SetTitleSize(0.05);
   h_isojet2CSV_TopsPoPLFcP__329->GetXaxis()->SetTickLength(0.025);
   h_isojet2CSV_TopsPoPLFcP__329->GetXaxis()->SetTitleFont(42);
   h_isojet2CSV_TopsPoPLFcP__329->GetYaxis()->SetTitle("a.u.");
   h_isojet2CSV_TopsPoPLFcP__329->GetYaxis()->SetLabelFont(42);
   h_isojet2CSV_TopsPoPLFcP__329->GetYaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_TopsPoPLFcP__329->GetYaxis()->SetTitleSize(0.05);
   h_isojet2CSV_TopsPoPLFcP__329->GetYaxis()->SetTickLength(0.025);
   h_isojet2CSV_TopsPoPLFcP__329->GetYaxis()->SetTitleFont(42);
   h_isojet2CSV_TopsPoPLFcP__329->GetZaxis()->SetLabelFont(42);
   h_isojet2CSV_TopsPoPLFcP__329->GetZaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_TopsPoPLFcP__329->GetZaxis()->SetTitleSize(0.05);
   h_isojet2CSV_TopsPoPLFcP__329->GetZaxis()->SetTickLength(0.025);
   h_isojet2CSV_TopsPoPLFcP__329->GetZaxis()->SetTitleFont(42);
   h->Add(h_isojet2CSV_Top (LF),"");
   
   TH1D *h_isojet2CSV_TopsPoPHFcP__330 = new TH1D("h_isojet2CSV_TopsPoPHFcP__330","",10,0,1);
   h_isojet2CSV_TopsPoPHFcP__330->SetBinContent(1,0.2100729);
   h_isojet2CSV_TopsPoPHFcP__330->SetBinContent(2,0.07656022);
   h_isojet2CSV_TopsPoPHFcP__330->SetBinContent(3,0.03944194);
   h_isojet2CSV_TopsPoPHFcP__330->SetBinContent(4,0.02383049);
   h_isojet2CSV_TopsPoPHFcP__330->SetBinContent(5,0.01624159);
   h_isojet2CSV_TopsPoPHFcP__330->SetBinContent(6,0.01519003);
   h_isojet2CSV_TopsPoPHFcP__330->SetBinContent(7,0.01355305);
   h_isojet2CSV_TopsPoPHFcP__330->SetBinContent(8,0.01476908);
   h_isojet2CSV_TopsPoPHFcP__330->SetBinContent(9,0.02436797);
   h_isojet2CSV_TopsPoPHFcP__330->SetBinContent(10,0.09641826);
   h_isojet2CSV_TopsPoPHFcP__330->SetBinError(1,0.001683907);
   h_isojet2CSV_TopsPoPHFcP__330->SetBinError(2,0.0009413849);
   h_isojet2CSV_TopsPoPHFcP__330->SetBinError(3,0.0006843127);
   h_isojet2CSV_TopsPoPHFcP__330->SetBinError(4,0.0005103443);
   h_isojet2CSV_TopsPoPHFcP__330->SetBinError(5,0.000410493);
   h_isojet2CSV_TopsPoPHFcP__330->SetBinError(6,0.0004609286);
   h_isojet2CSV_TopsPoPHFcP__330->SetBinError(7,0.0003813826);
   h_isojet2CSV_TopsPoPHFcP__330->SetBinError(8,0.0003967835);
   h_isojet2CSV_TopsPoPHFcP__330->SetBinError(9,0.0004993463);
   h_isojet2CSV_TopsPoPHFcP__330->SetBinError(10,0.001012438);
   h_isojet2CSV_TopsPoPHFcP__330->SetEntries(77950);
   h_isojet2CSV_TopsPoPHFcP__330->SetStats(0);

   ci = TColor::GetColor("#ff9900");
   h_isojet2CSV_TopsPoPHFcP__330->SetFillColor(ci);
   h_isojet2CSV_TopsPoPHFcP__330->GetXaxis()->SetTitle("isojet 2 CSV");
   h_isojet2CSV_TopsPoPHFcP__330->GetXaxis()->SetLabelFont(42);
   h_isojet2CSV_TopsPoPHFcP__330->GetXaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_TopsPoPHFcP__330->GetXaxis()->SetTitleSize(0.05);
   h_isojet2CSV_TopsPoPHFcP__330->GetXaxis()->SetTickLength(0.025);
   h_isojet2CSV_TopsPoPHFcP__330->GetXaxis()->SetTitleFont(42);
   h_isojet2CSV_TopsPoPHFcP__330->GetYaxis()->SetTitle("a.u.");
   h_isojet2CSV_TopsPoPHFcP__330->GetYaxis()->SetLabelFont(42);
   h_isojet2CSV_TopsPoPHFcP__330->GetYaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_TopsPoPHFcP__330->GetYaxis()->SetTitleSize(0.05);
   h_isojet2CSV_TopsPoPHFcP__330->GetYaxis()->SetTickLength(0.025);
   h_isojet2CSV_TopsPoPHFcP__330->GetYaxis()->SetTitleFont(42);
   h_isojet2CSV_TopsPoPHFcP__330->GetZaxis()->SetLabelFont(42);
   h_isojet2CSV_TopsPoPHFcP__330->GetZaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_TopsPoPHFcP__330->GetZaxis()->SetTitleSize(0.05);
   h_isojet2CSV_TopsPoPHFcP__330->GetZaxis()->SetTickLength(0.025);
   h_isojet2CSV_TopsPoPHFcP__330->GetZaxis()->SetTitleFont(42);
   h->Add(h_isojet2CSV_Top (HF),"");
   h->Draw("hist");
   
   TH1D *hsum__331 = new TH1D("hsum__331","",10,0,1);
   hsum__331->SetBinContent(1,0.3673568);
   hsum__331->SetBinContent(2,0.1421284);
   hsum__331->SetBinContent(3,0.07520904);
   hsum__331->SetBinContent(4,0.04490296);
   hsum__331->SetBinContent(5,0.03138651);
   hsum__331->SetBinContent(6,0.02840858);
   hsum__331->SetBinContent(7,0.02676217);
   hsum__331->SetBinContent(8,0.02981931);
   hsum__331->SetBinContent(9,0.05207447);
   hsum__331->SetBinContent(10,0.2019517);
   hsum__331->SetBinError(1,0.00373241);
   hsum__331->SetBinError(2,0.001718819);
   hsum__331->SetBinError(3,0.001807747);
   hsum__331->SetBinError(4,0.0009222779);
   hsum__331->SetBinError(5,0.0007650841);
   hsum__331->SetBinError(6,0.0007208378);
   hsum__331->SetBinError(7,0.0006532434);
   hsum__331->SetBinError(8,0.0007248106);
   hsum__331->SetBinError(9,0.001616018);
   hsum__331->SetBinError(10,0.002168218);
   hsum__331->SetEntries(45);
   hsum__331->SetStats(0);

   ci = 1207;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   hsum__331->SetFillColor(ci);
   hsum__331->SetFillStyle(3003);
   hsum__331->SetLineWidth(0);
   hsum__331->GetXaxis()->SetTitle("isojet 2 CSV");
   hsum__331->GetXaxis()->SetLabelFont(42);
   hsum__331->GetXaxis()->SetLabelOffset(0.007);
   hsum__331->GetXaxis()->SetTitleSize(0.05);
   hsum__331->GetXaxis()->SetTickLength(0.025);
   hsum__331->GetXaxis()->SetTitleFont(42);
   hsum__331->GetYaxis()->SetTitle("a.u.");
   hsum__331->GetYaxis()->SetLabelFont(42);
   hsum__331->GetYaxis()->SetLabelOffset(0.007);
   hsum__331->GetYaxis()->SetTitleSize(0.05);
   hsum__331->GetYaxis()->SetTickLength(0.025);
   hsum__331->GetYaxis()->SetTitleFont(42);
   hsum__331->GetZaxis()->SetLabelFont(42);
   hsum__331->GetZaxis()->SetLabelOffset(0.007);
   hsum__331->GetZaxis()->SetTitleSize(0.05);
   hsum__331->GetZaxis()->SetTickLength(0.025);
   hsum__331->GetZaxis()->SetTitleFont(42);
   hsum__331->Draw("e2 same");
   
   TH1D *h_isojet2CSV_Data__332 = new TH1D("h_isojet2CSV_Data__332","",10,0,1);
   h_isojet2CSV_Data__332->SetBinContent(1,0.3555545);
   h_isojet2CSV_Data__332->SetBinContent(2,0.132055);
   h_isojet2CSV_Data__332->SetBinContent(3,0.07297654);
   h_isojet2CSV_Data__332->SetBinContent(4,0.04946763);
   h_isojet2CSV_Data__332->SetBinContent(5,0.03594648);
   h_isojet2CSV_Data__332->SetBinContent(6,0.03373222);
   h_isojet2CSV_Data__332->SetBinContent(7,0.03180062);
   h_isojet2CSV_Data__332->SetBinContent(8,0.03500424);
   h_isojet2CSV_Data__332->SetBinContent(9,0.05497974);
   h_isojet2CSV_Data__332->SetBinContent(10,0.198483);
   h_isojet2CSV_Data__332->SetBinError(1,0.004092786);
   h_isojet2CSV_Data__332->SetBinError(2,0.00249427);
   h_isojet2CSV_Data__332->SetBinError(3,0.001854204);
   h_isojet2CSV_Data__332->SetBinError(4,0.001526604);
   h_isojet2CSV_Data__332->SetBinError(5,0.00130135);
   h_isojet2CSV_Data__332->SetBinError(6,0.001260632);
   h_isojet2CSV_Data__332->SetBinError(7,0.001224007);
   h_isojet2CSV_Data__332->SetBinError(8,0.001284181);
   h_isojet2CSV_Data__332->SetBinError(9,0.001609412);
   h_isojet2CSV_Data__332->SetBinError(10,0.00305793);
   h_isojet2CSV_Data__332->SetEntries(21226);
   h_isojet2CSV_Data__332->SetStats(0);
   h_isojet2CSV_Data__332->SetLineWidth(3);
   h_isojet2CSV_Data__332->SetMarkerStyle(20);
   h_isojet2CSV_Data__332->SetMarkerSize(2);
   h_isojet2CSV_Data__332->GetXaxis()->SetTitle("isojet 2 CSV");
   h_isojet2CSV_Data__332->GetXaxis()->SetLabelFont(42);
   h_isojet2CSV_Data__332->GetXaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_Data__332->GetXaxis()->SetTitleSize(0.05);
   h_isojet2CSV_Data__332->GetXaxis()->SetTickLength(0.025);
   h_isojet2CSV_Data__332->GetXaxis()->SetTitleFont(42);
   h_isojet2CSV_Data__332->GetYaxis()->SetTitle("a.u.");
   h_isojet2CSV_Data__332->GetYaxis()->SetLabelFont(42);
   h_isojet2CSV_Data__332->GetYaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_Data__332->GetYaxis()->SetTitleSize(0.05);
   h_isojet2CSV_Data__332->GetYaxis()->SetTickLength(0.025);
   h_isojet2CSV_Data__332->GetYaxis()->SetTitleFont(42);
   h_isojet2CSV_Data__332->GetZaxis()->SetLabelFont(42);
   h_isojet2CSV_Data__332->GetZaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_Data__332->GetZaxis()->SetTitleSize(0.05);
   h_isojet2CSV_Data__332->GetZaxis()->SetTickLength(0.025);
   h_isojet2CSV_Data__332->GetZaxis()->SetTitleFont(42);
   h_isojet2CSV_Data__332->Draw("elp same");
   
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
   
   TH1D *ratio__333 = new TH1D("ratio__333","",10,0,1);
   ratio__333->SetBinContent(1,-0.03212768);
   ratio__333->SetBinContent(2,-0.07087541);
   ratio__333->SetBinContent(3,-0.02968395);
   ratio__333->SetBinContent(4,0.1016564);
   ratio__333->SetBinContent(5,0.1452843);
   ratio__333->SetBinContent(6,0.1873956);
   ratio__333->SetBinContent(7,0.1882676);
   ratio__333->SetBinContent(8,0.1738783);
   ratio__333->SetBinContent(9,0.05579066);
   ratio__333->SetBinContent(10,-0.01717585);
   ratio__333->SetBinError(1,0.0001);
   ratio__333->SetBinError(2,0.0001);
   ratio__333->SetBinError(3,0.0001);
   ratio__333->SetBinError(4,0.0001);
   ratio__333->SetBinError(5,0.0001);
   ratio__333->SetBinError(6,0.0001);
   ratio__333->SetBinError(7,0.0001);
   ratio__333->SetBinError(8,0.0001);
   ratio__333->SetBinError(9,0.0001);
   ratio__333->SetBinError(10,0.0001);
   ratio__333->SetMinimum(-0.48);
   ratio__333->SetMaximum(0.48);
   ratio__333->SetEntries(21236);
   ratio__333->SetStats(0);
   ratio__333->SetLineWidth(3);
   ratio__333->SetMarkerStyle(20);
   ratio__333->SetMarkerSize(2);
   ratio__333->GetXaxis()->SetTitle("isojet 2 CSV");
   ratio__333->GetXaxis()->SetLabelFont(43);
   ratio__333->GetXaxis()->SetLabelOffset(0.007);
   ratio__333->GetXaxis()->SetLabelSize(30);
   ratio__333->GetXaxis()->SetTitleSize(40);
   ratio__333->GetXaxis()->SetTickLength(0.025);
   ratio__333->GetXaxis()->SetTitleOffset(5);
   ratio__333->GetXaxis()->SetTitleFont(43);
   ratio__333->GetYaxis()->SetTitle("#frac{Data-Exp}{Exp}");
   ratio__333->GetYaxis()->SetNdivisions(5);
   ratio__333->GetYaxis()->SetLabelFont(43);
   ratio__333->GetYaxis()->SetLabelOffset(0.007);
   ratio__333->GetYaxis()->SetLabelSize(30);
   ratio__333->GetYaxis()->SetTitleSize(40);
   ratio__333->GetYaxis()->SetTickLength(0.025);
   ratio__333->GetYaxis()->SetTitleOffset(2.5);
   ratio__333->GetYaxis()->SetTitleFont(43);
   ratio__333->GetZaxis()->SetLabelFont(42);
   ratio__333->GetZaxis()->SetLabelOffset(0.007);
   ratio__333->GetZaxis()->SetTitleSize(0.05);
   ratio__333->GetZaxis()->SetTickLength(0.025);
   ratio__333->GetZaxis()->SetTitleFont(42);
   ratio__333->Draw("elp");
   
   TH1D *zero__334 = new TH1D("zero__334","",10,0,1);
   zero__334->SetBinError(1,0.004092786);
   zero__334->SetBinError(2,0.00249427);
   zero__334->SetBinError(3,0.001854204);
   zero__334->SetBinError(4,0.001526604);
   zero__334->SetBinError(5,0.00130135);
   zero__334->SetBinError(6,0.001260632);
   zero__334->SetBinError(7,0.001224007);
   zero__334->SetBinError(8,0.001284181);
   zero__334->SetBinError(9,0.001609412);
   zero__334->SetBinError(10,0.00305793);
   zero__334->SetEntries(21236);
   zero__334->SetStats(0);
   zero__334->SetLineWidth(3);
   zero__334->SetMarkerStyle(20);
   zero__334->SetMarkerSize(2);
   zero__334->GetXaxis()->SetTitle("isojet 2 CSV");
   zero__334->GetXaxis()->SetLabelFont(42);
   zero__334->GetXaxis()->SetLabelOffset(0.007);
   zero__334->GetXaxis()->SetTitleSize(0.05);
   zero__334->GetXaxis()->SetTickLength(0.025);
   zero__334->GetXaxis()->SetTitleFont(42);
   zero__334->GetYaxis()->SetTitle("a.u.");
   zero__334->GetYaxis()->SetLabelFont(42);
   zero__334->GetYaxis()->SetLabelOffset(0.007);
   zero__334->GetYaxis()->SetTitleSize(0.05);
   zero__334->GetYaxis()->SetTickLength(0.025);
   zero__334->GetYaxis()->SetTitleFont(42);
   zero__334->GetZaxis()->SetLabelFont(42);
   zero__334->GetZaxis()->SetLabelOffset(0.007);
   zero__334->GetZaxis()->SetTitleSize(0.05);
   zero__334->GetZaxis()->SetTickLength(0.025);
   zero__334->GetZaxis()->SetTitleFont(42);
   zero__334->Draw("hist same");
   
   TH1D *sumratioup__335 = new TH1D("sumratioup__335","",10,0,1);
   sumratioup__335->SetBinContent(1,0.01016018);
   sumratioup__335->SetBinContent(2,0.01209342);
   sumratioup__335->SetBinContent(3,0.0240363);
   sumratioup__335->SetBinContent(4,0.02053936);
   sumratioup__335->SetBinContent(5,0.02437621);
   sumratioup__335->SetBinContent(6,0.02537395);
   sumratioup__335->SetBinContent(7,0.02440921);
   sumratioup__335->SetBinContent(8,0.02430675);
   sumratioup__335->SetBinContent(9,0.03103282);
   sumratioup__335->SetBinContent(10,0.01073632);
   sumratioup__335->SetBinError(1,0.00373241);
   sumratioup__335->SetBinError(2,0.001718819);
   sumratioup__335->SetBinError(3,0.001807747);
   sumratioup__335->SetBinError(4,0.0009222779);
   sumratioup__335->SetBinError(5,0.0007650841);
   sumratioup__335->SetBinError(6,0.0007208378);
   sumratioup__335->SetBinError(7,0.0006532434);
   sumratioup__335->SetBinError(8,0.0007248106);
   sumratioup__335->SetBinError(9,0.001616018);
   sumratioup__335->SetBinError(10,0.002168218);
   sumratioup__335->SetEntries(55);
   sumratioup__335->SetStats(0);

   ci = 1207;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratioup__335->SetFillColor(ci);
   sumratioup__335->SetFillStyle(3003);
   sumratioup__335->GetXaxis()->SetTitle("isojet 2 CSV");
   sumratioup__335->GetXaxis()->SetLabelFont(42);
   sumratioup__335->GetXaxis()->SetLabelOffset(0.007);
   sumratioup__335->GetXaxis()->SetTitleSize(0.05);
   sumratioup__335->GetXaxis()->SetTickLength(0.025);
   sumratioup__335->GetXaxis()->SetTitleFont(42);
   sumratioup__335->GetYaxis()->SetTitle("a.u.");
   sumratioup__335->GetYaxis()->SetLabelFont(42);
   sumratioup__335->GetYaxis()->SetLabelOffset(0.007);
   sumratioup__335->GetYaxis()->SetTitleSize(0.05);
   sumratioup__335->GetYaxis()->SetTickLength(0.025);
   sumratioup__335->GetYaxis()->SetTitleFont(42);
   sumratioup__335->GetZaxis()->SetLabelFont(42);
   sumratioup__335->GetZaxis()->SetLabelOffset(0.007);
   sumratioup__335->GetZaxis()->SetTitleSize(0.05);
   sumratioup__335->GetZaxis()->SetTickLength(0.025);
   sumratioup__335->GetZaxis()->SetTitleFont(42);
   sumratioup__335->Draw("hist same");
   
   TH1D *sumratiodown__336 = new TH1D("sumratiodown__336","",10,0,1);
   sumratiodown__336->SetBinContent(1,-0.01016018);
   sumratiodown__336->SetBinContent(2,-0.01209342);
   sumratiodown__336->SetBinContent(3,-0.0240363);
   sumratiodown__336->SetBinContent(4,-0.02053936);
   sumratiodown__336->SetBinContent(5,-0.02437621);
   sumratiodown__336->SetBinContent(6,-0.02537395);
   sumratiodown__336->SetBinContent(7,-0.02440921);
   sumratiodown__336->SetBinContent(8,-0.02430675);
   sumratiodown__336->SetBinContent(9,-0.03103282);
   sumratiodown__336->SetBinContent(10,-0.01073632);
   sumratiodown__336->SetBinError(1,0.00373241);
   sumratiodown__336->SetBinError(2,0.001718819);
   sumratiodown__336->SetBinError(3,0.001807747);
   sumratiodown__336->SetBinError(4,0.0009222779);
   sumratiodown__336->SetBinError(5,0.0007650841);
   sumratiodown__336->SetBinError(6,0.0007208378);
   sumratiodown__336->SetBinError(7,0.0006532434);
   sumratiodown__336->SetBinError(8,0.0007248106);
   sumratiodown__336->SetBinError(9,0.001616018);
   sumratiodown__336->SetBinError(10,0.002168218);
   sumratiodown__336->SetEntries(55);
   sumratiodown__336->SetStats(0);

   ci = 1207;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratiodown__336->SetFillColor(ci);
   sumratiodown__336->SetFillStyle(3003);
   sumratiodown__336->GetXaxis()->SetTitle("isojet 2 CSV");
   sumratiodown__336->GetXaxis()->SetLabelFont(42);
   sumratiodown__336->GetXaxis()->SetLabelOffset(0.007);
   sumratiodown__336->GetXaxis()->SetTitleSize(0.05);
   sumratiodown__336->GetXaxis()->SetTickLength(0.025);
   sumratiodown__336->GetXaxis()->SetTitleFont(42);
   sumratiodown__336->GetYaxis()->SetTitle("a.u.");
   sumratiodown__336->GetYaxis()->SetLabelFont(42);
   sumratiodown__336->GetYaxis()->SetLabelOffset(0.007);
   sumratiodown__336->GetYaxis()->SetTitleSize(0.05);
   sumratiodown__336->GetYaxis()->SetTickLength(0.025);
   sumratiodown__336->GetYaxis()->SetTitleFont(42);
   sumratiodown__336->GetZaxis()->SetLabelFont(42);
   sumratiodown__336->GetZaxis()->SetLabelOffset(0.007);
   sumratiodown__336->GetZaxis()->SetTitleSize(0.05);
   sumratiodown__336->GetZaxis()->SetTickLength(0.025);
   sumratiodown__336->GetZaxis()->SetTitleFont(42);
   sumratiodown__336->Draw("hist same");
   
   Double_t Graph0_fx1028[10] = {
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
   Double_t Graph0_fy1028[10] = {
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
   Double_t Graph0_fex1028[10] = {
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
   Double_t Graph0_fey1028[10] = {
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
   TGraphErrors *gre = new TGraphErrors(10,Graph0_fx1028,Graph0_fy1028,Graph0_fex1028,Graph0_fey1028);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1028 = new TH1F("Graph_Graph1028","Graph",100,0,1.04);
   Graph_Graph1028->SetMinimum(-0.1206677);
   Graph_Graph1028->SetMaximum(0.2662469);
   Graph_Graph1028->SetDirectory(0);
   Graph_Graph1028->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1028->SetLineColor(ci);
   Graph_Graph1028->GetXaxis()->SetLabelFont(42);
   Graph_Graph1028->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1028->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1028->GetXaxis()->SetTickLength(0.025);
   Graph_Graph1028->GetXaxis()->SetTitleFont(42);
   Graph_Graph1028->GetYaxis()->SetLabelFont(42);
   Graph_Graph1028->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1028->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1028->GetYaxis()->SetTickLength(0.025);
   Graph_Graph1028->GetYaxis()->SetTitleFont(42);
   Graph_Graph1028->GetZaxis()->SetLabelFont(42);
   Graph_Graph1028->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1028->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph1028->GetZaxis()->SetTickLength(0.025);
   Graph_Graph1028->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1028);
   
   gre->Draw("pe0");
   pad2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
