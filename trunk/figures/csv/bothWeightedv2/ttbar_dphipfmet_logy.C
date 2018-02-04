void ttbar_dphipfmet_logy()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sun Dec 11 15:16:16 2016) by ROOT version6.06/01
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
   pad1->Range(-0.58875,-3.207054,3.33625,1.426449);
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
   h->SetMinimum(0.001745501);
   h->SetMaximum(7.334856);
   
   TH1F *h_stack_2 = new TH1F("h_stack_2","",20,0,3.14);
   h_stack_2->SetMinimum(0.0006207912);
   h_stack_2->SetMaximum(12.65038);
   h_stack_2->SetDirectory(0);
   h_stack_2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h_stack_2->SetLineColor(ci);
   h_stack_2->GetXaxis()->SetLabelFont(42);
   h_stack_2->GetXaxis()->SetLabelOffset(0.007);
   h_stack_2->GetXaxis()->SetTitleSize(0.05);
   h_stack_2->GetXaxis()->SetTickLength(0.025);
   h_stack_2->GetXaxis()->SetTitleFont(42);
   h_stack_2->GetYaxis()->SetTitle("a.u.");
   h_stack_2->GetYaxis()->SetLabelFont(42);
   h_stack_2->GetYaxis()->SetLabelOffset(0.007);
   h_stack_2->GetYaxis()->SetTitleSize(0.05);
   h_stack_2->GetYaxis()->SetTickLength(0.025);
   h_stack_2->GetYaxis()->SetTitleOffset(1.5);
   h_stack_2->GetYaxis()->SetTitleFont(42);
   h_stack_2->GetZaxis()->SetLabelFont(42);
   h_stack_2->GetZaxis()->SetLabelOffset(0.007);
   h_stack_2->GetZaxis()->SetTitleSize(0.05);
   h_stack_2->GetZaxis()->SetTickLength(0.025);
   h_stack_2->GetZaxis()->SetTitleFont(42);
   h->SetHistogram(h_stack_2);
   
   
   TH1D *h_dphipfmet_QCD__13 = new TH1D("h_dphipfmet_QCD__13","",20,0,3.14);
   h_dphipfmet_QCD__13->SetBinContent(1,0.001351778);
   h_dphipfmet_QCD__13->SetBinContent(2,0.0003693531);
   h_dphipfmet_QCD__13->SetBinContent(3,0.0001985037);
   h_dphipfmet_QCD__13->SetBinContent(4,0.0006991272);
   h_dphipfmet_QCD__13->SetBinContent(5,0.0001320254);
   h_dphipfmet_QCD__13->SetBinContent(6,0.001255784);
   h_dphipfmet_QCD__13->SetBinContent(7,0.0003700481);
   h_dphipfmet_QCD__13->SetBinContent(8,0.0002178485);
   h_dphipfmet_QCD__13->SetBinContent(13,2.582028e-05);
   h_dphipfmet_QCD__13->SetBinContent(14,0.00187785);
   h_dphipfmet_QCD__13->SetBinContent(16,0.0005745276);
   h_dphipfmet_QCD__13->SetBinContent(17,0.002521156);
   h_dphipfmet_QCD__13->SetBinContent(19,0.0008426245);
   h_dphipfmet_QCD__13->SetBinContent(20,0.001149113);
   h_dphipfmet_QCD__13->SetBinError(1,0.00072501);
   h_dphipfmet_QCD__13->SetBinError(2,0.0003412343);
   h_dphipfmet_QCD__13->SetBinError(3,0.0001985037);
   h_dphipfmet_QCD__13->SetBinError(4,0.0004445384);
   h_dphipfmet_QCD__13->SetBinError(5,0.0001320254);
   h_dphipfmet_QCD__13->SetBinError(6,0.0009433616);
   h_dphipfmet_QCD__13->SetBinError(7,0.0003700481);
   h_dphipfmet_QCD__13->SetBinError(8,0.0002178485);
   h_dphipfmet_QCD__13->SetBinError(13,2.582028e-05);
   h_dphipfmet_QCD__13->SetBinError(14,0.001461092);
   h_dphipfmet_QCD__13->SetBinError(16,0.0005745276);
   h_dphipfmet_QCD__13->SetBinError(17,0.001782758);
   h_dphipfmet_QCD__13->SetBinError(19,0.0008426245);
   h_dphipfmet_QCD__13->SetBinError(20,0.001149113);
   h_dphipfmet_QCD__13->SetEntries(25);
   h_dphipfmet_QCD__13->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_dphipfmet_QCD__13->SetFillColor(ci);
   h_dphipfmet_QCD__13->GetXaxis()->SetTitle("min#Delta#phi(jet,PF MET)");
   h_dphipfmet_QCD__13->GetXaxis()->SetLabelFont(42);
   h_dphipfmet_QCD__13->GetXaxis()->SetLabelOffset(0.007);
   h_dphipfmet_QCD__13->GetXaxis()->SetTitleSize(0.05);
   h_dphipfmet_QCD__13->GetXaxis()->SetTickLength(0.025);
   h_dphipfmet_QCD__13->GetXaxis()->SetTitleFont(42);
   h_dphipfmet_QCD__13->GetYaxis()->SetTitle("a.u.");
   h_dphipfmet_QCD__13->GetYaxis()->SetLabelFont(42);
   h_dphipfmet_QCD__13->GetYaxis()->SetLabelOffset(0.007);
   h_dphipfmet_QCD__13->GetYaxis()->SetTitleSize(0.05);
   h_dphipfmet_QCD__13->GetYaxis()->SetTickLength(0.025);
   h_dphipfmet_QCD__13->GetYaxis()->SetTitleFont(42);
   h_dphipfmet_QCD__13->GetZaxis()->SetLabelFont(42);
   h_dphipfmet_QCD__13->GetZaxis()->SetLabelOffset(0.007);
   h_dphipfmet_QCD__13->GetZaxis()->SetTitleSize(0.05);
   h_dphipfmet_QCD__13->GetZaxis()->SetTickLength(0.025);
   h_dphipfmet_QCD__13->GetZaxis()->SetTitleFont(42);
   h->Add(h_dphipfmet_QCD,"");
   
   TH1D *h_dphipfmet_Diboson__14 = new TH1D("h_dphipfmet_Diboson__14","",20,0,3.14);
   h_dphipfmet_Diboson__14->SetBinContent(1,0.001733818);
   h_dphipfmet_Diboson__14->SetBinContent(2,0.001628946);
   h_dphipfmet_Diboson__14->SetBinContent(3,0.0006583465);
   h_dphipfmet_Diboson__14->SetBinContent(4,0.0008959354);
   h_dphipfmet_Diboson__14->SetBinContent(5,0.00071004);
   h_dphipfmet_Diboson__14->SetBinContent(6,0.0002904025);
   h_dphipfmet_Diboson__14->SetBinContent(7,0.001390349);
   h_dphipfmet_Diboson__14->SetBinContent(8,0.000793722);
   h_dphipfmet_Diboson__14->SetBinContent(9,0.001708281);
   h_dphipfmet_Diboson__14->SetBinContent(10,0.001353864);
   h_dphipfmet_Diboson__14->SetBinContent(11,0.0009054545);
   h_dphipfmet_Diboson__14->SetBinContent(12,0.001229892);
   h_dphipfmet_Diboson__14->SetBinContent(13,0.0029107);
   h_dphipfmet_Diboson__14->SetBinContent(14,0.003739613);
   h_dphipfmet_Diboson__14->SetBinContent(15,0.00197951);
   h_dphipfmet_Diboson__14->SetBinContent(16,0.001577872);
   h_dphipfmet_Diboson__14->SetBinContent(17,0.002399003);
   h_dphipfmet_Diboson__14->SetBinContent(18,0.003754574);
   h_dphipfmet_Diboson__14->SetBinContent(19,0.003879532);
   h_dphipfmet_Diboson__14->SetBinContent(20,0.003253328);
   h_dphipfmet_Diboson__14->SetBinError(1,0.0006286204);
   h_dphipfmet_Diboson__14->SetBinError(2,0.0005498671);
   h_dphipfmet_Diboson__14->SetBinError(3,0.0003192695);
   h_dphipfmet_Diboson__14->SetBinError(4,0.0004853563);
   h_dphipfmet_Diboson__14->SetBinError(5,0.0003919442);
   h_dphipfmet_Diboson__14->SetBinError(6,0.0002227465);
   h_dphipfmet_Diboson__14->SetBinError(7,0.0004807048);
   h_dphipfmet_Diboson__14->SetBinError(8,0.0003806929);
   h_dphipfmet_Diboson__14->SetBinError(9,0.0005715356);
   h_dphipfmet_Diboson__14->SetBinError(10,0.0004968976);
   h_dphipfmet_Diboson__14->SetBinError(11,0.000396608);
   h_dphipfmet_Diboson__14->SetBinError(12,0.0004303995);
   h_dphipfmet_Diboson__14->SetBinError(13,0.0007881216);
   h_dphipfmet_Diboson__14->SetBinError(14,0.0008602285);
   h_dphipfmet_Diboson__14->SetBinError(15,0.0006039216);
   h_dphipfmet_Diboson__14->SetBinError(16,0.0005265211);
   h_dphipfmet_Diboson__14->SetBinError(17,0.0007130289);
   h_dphipfmet_Diboson__14->SetBinError(18,0.0009275922);
   h_dphipfmet_Diboson__14->SetBinError(19,0.0008371719);
   h_dphipfmet_Diboson__14->SetBinError(20,0.0008141066);
   h_dphipfmet_Diboson__14->SetEntries(227);
   h_dphipfmet_Diboson__14->SetStats(0);

   ci = TColor::GetColor("#9966cc");
   h_dphipfmet_Diboson__14->SetFillColor(ci);
   h_dphipfmet_Diboson__14->GetXaxis()->SetTitle("min#Delta#phi(jet,PF MET)");
   h_dphipfmet_Diboson__14->GetXaxis()->SetLabelFont(42);
   h_dphipfmet_Diboson__14->GetXaxis()->SetLabelOffset(0.007);
   h_dphipfmet_Diboson__14->GetXaxis()->SetTitleSize(0.05);
   h_dphipfmet_Diboson__14->GetXaxis()->SetTickLength(0.025);
   h_dphipfmet_Diboson__14->GetXaxis()->SetTitleFont(42);
   h_dphipfmet_Diboson__14->GetYaxis()->SetTitle("a.u.");
   h_dphipfmet_Diboson__14->GetYaxis()->SetLabelFont(42);
   h_dphipfmet_Diboson__14->GetYaxis()->SetLabelOffset(0.007);
   h_dphipfmet_Diboson__14->GetYaxis()->SetTitleSize(0.05);
   h_dphipfmet_Diboson__14->GetYaxis()->SetTickLength(0.025);
   h_dphipfmet_Diboson__14->GetYaxis()->SetTitleFont(42);
   h_dphipfmet_Diboson__14->GetZaxis()->SetLabelFont(42);
   h_dphipfmet_Diboson__14->GetZaxis()->SetLabelOffset(0.007);
   h_dphipfmet_Diboson__14->GetZaxis()->SetTitleSize(0.05);
   h_dphipfmet_Diboson__14->GetZaxis()->SetTickLength(0.025);
   h_dphipfmet_Diboson__14->GetZaxis()->SetTitleFont(42);
   h->Add(h_dphipfmet_Diboson,"");
   
   TH1D *h_dphipfmet_ZpLjets__15 = new TH1D("h_dphipfmet_ZpLjets__15","",20,0,3.14);
   h_dphipfmet_ZpLjets__15->SetBinContent(1,0.001552637);
   h_dphipfmet_ZpLjets__15->SetBinContent(2,0.001738839);
   h_dphipfmet_ZpLjets__15->SetBinContent(3,0.001702629);
   h_dphipfmet_ZpLjets__15->SetBinContent(4,0.002002157);
   h_dphipfmet_ZpLjets__15->SetBinContent(5,0.002030789);
   h_dphipfmet_ZpLjets__15->SetBinContent(6,0.001808446);
   h_dphipfmet_ZpLjets__15->SetBinContent(7,0.00192554);
   h_dphipfmet_ZpLjets__15->SetBinContent(8,0.001857493);
   h_dphipfmet_ZpLjets__15->SetBinContent(9,0.002149933);
   h_dphipfmet_ZpLjets__15->SetBinContent(10,0.00212855);
   h_dphipfmet_ZpLjets__15->SetBinContent(11,0.002146407);
   h_dphipfmet_ZpLjets__15->SetBinContent(12,0.002535823);
   h_dphipfmet_ZpLjets__15->SetBinContent(13,0.002135906);
   h_dphipfmet_ZpLjets__15->SetBinContent(14,0.002386503);
   h_dphipfmet_ZpLjets__15->SetBinContent(15,0.002083114);
   h_dphipfmet_ZpLjets__15->SetBinContent(16,0.002369981);
   h_dphipfmet_ZpLjets__15->SetBinContent(17,0.002382048);
   h_dphipfmet_ZpLjets__15->SetBinContent(18,0.002529621);
   h_dphipfmet_ZpLjets__15->SetBinContent(19,0.003765363);
   h_dphipfmet_ZpLjets__15->SetBinContent(20,0.006182024);
   h_dphipfmet_ZpLjets__15->SetBinError(1,7.891182e-05);
   h_dphipfmet_ZpLjets__15->SetBinError(2,9.319355e-05);
   h_dphipfmet_ZpLjets__15->SetBinError(3,8.80201e-05);
   h_dphipfmet_ZpLjets__15->SetBinError(4,0.0001057828);
   h_dphipfmet_ZpLjets__15->SetBinError(5,0.0001017924);
   h_dphipfmet_ZpLjets__15->SetBinError(6,9.395093e-05);
   h_dphipfmet_ZpLjets__15->SetBinError(7,0.0001013863);
   h_dphipfmet_ZpLjets__15->SetBinError(8,0.0001015638);
   h_dphipfmet_ZpLjets__15->SetBinError(9,0.0001166938);
   h_dphipfmet_ZpLjets__15->SetBinError(10,0.0001161077);
   h_dphipfmet_ZpLjets__15->SetBinError(11,0.0001212231);
   h_dphipfmet_ZpLjets__15->SetBinError(12,0.0001429661);
   h_dphipfmet_ZpLjets__15->SetBinError(13,0.000133793);
   h_dphipfmet_ZpLjets__15->SetBinError(14,0.0001484004);
   h_dphipfmet_ZpLjets__15->SetBinError(15,0.0001380163);
   h_dphipfmet_ZpLjets__15->SetBinError(16,0.0001607654);
   h_dphipfmet_ZpLjets__15->SetBinError(17,0.0001748672);
   h_dphipfmet_ZpLjets__15->SetBinError(18,0.000183706);
   h_dphipfmet_ZpLjets__15->SetBinError(19,0.000224721);
   h_dphipfmet_ZpLjets__15->SetBinError(20,0.0003093052);
   h_dphipfmet_ZpLjets__15->SetEntries(24915);
   h_dphipfmet_ZpLjets__15->SetStats(0);

   ci = TColor::GetColor("#3399cc");
   h_dphipfmet_ZpLjets__15->SetFillColor(ci);
   h_dphipfmet_ZpLjets__15->GetXaxis()->SetTitle("min#Delta#phi(jet,PF MET)");
   h_dphipfmet_ZpLjets__15->GetXaxis()->SetLabelFont(42);
   h_dphipfmet_ZpLjets__15->GetXaxis()->SetLabelOffset(0.007);
   h_dphipfmet_ZpLjets__15->GetXaxis()->SetTitleSize(0.05);
   h_dphipfmet_ZpLjets__15->GetXaxis()->SetTickLength(0.025);
   h_dphipfmet_ZpLjets__15->GetXaxis()->SetTitleFont(42);
   h_dphipfmet_ZpLjets__15->GetYaxis()->SetTitle("a.u.");
   h_dphipfmet_ZpLjets__15->GetYaxis()->SetLabelFont(42);
   h_dphipfmet_ZpLjets__15->GetYaxis()->SetLabelOffset(0.007);
   h_dphipfmet_ZpLjets__15->GetYaxis()->SetTitleSize(0.05);
   h_dphipfmet_ZpLjets__15->GetYaxis()->SetTickLength(0.025);
   h_dphipfmet_ZpLjets__15->GetYaxis()->SetTitleFont(42);
   h_dphipfmet_ZpLjets__15->GetZaxis()->SetLabelFont(42);
   h_dphipfmet_ZpLjets__15->GetZaxis()->SetLabelOffset(0.007);
   h_dphipfmet_ZpLjets__15->GetZaxis()->SetTitleSize(0.05);
   h_dphipfmet_ZpLjets__15->GetZaxis()->SetTickLength(0.025);
   h_dphipfmet_ZpLjets__15->GetZaxis()->SetTitleFont(42);
   h->Add(h_dphipfmet_Z+jets,"");
   
   TH1D *h_dphipfmet_WpLjets__16 = new TH1D("h_dphipfmet_WpLjets__16","",20,0,3.14);
   h_dphipfmet_WpLjets__16->SetBinContent(1,0.002093741);
   h_dphipfmet_WpLjets__16->SetBinContent(2,0.001434182);
   h_dphipfmet_WpLjets__16->SetBinContent(3,0.001655611);
   h_dphipfmet_WpLjets__16->SetBinContent(4,0.001604451);
   h_dphipfmet_WpLjets__16->SetBinContent(5,0.001867204);
   h_dphipfmet_WpLjets__16->SetBinContent(6,0.001686001);
   h_dphipfmet_WpLjets__16->SetBinContent(7,0.001715933);
   h_dphipfmet_WpLjets__16->SetBinContent(8,0.001836338);
   h_dphipfmet_WpLjets__16->SetBinContent(9,0.002343956);
   h_dphipfmet_WpLjets__16->SetBinContent(10,0.001874981);
   h_dphipfmet_WpLjets__16->SetBinContent(11,0.002581467);
   h_dphipfmet_WpLjets__16->SetBinContent(12,0.002006292);
   h_dphipfmet_WpLjets__16->SetBinContent(13,0.002146115);
   h_dphipfmet_WpLjets__16->SetBinContent(14,0.00222692);
   h_dphipfmet_WpLjets__16->SetBinContent(15,0.001781753);
   h_dphipfmet_WpLjets__16->SetBinContent(16,0.00249164);
   h_dphipfmet_WpLjets__16->SetBinContent(17,0.002075355);
   h_dphipfmet_WpLjets__16->SetBinContent(18,0.004127144);
   h_dphipfmet_WpLjets__16->SetBinContent(19,0.004108076);
   h_dphipfmet_WpLjets__16->SetBinContent(20,0.004025617);
   h_dphipfmet_WpLjets__16->SetBinError(1,0.0003017842);
   h_dphipfmet_WpLjets__16->SetBinError(2,0.0002147102);
   h_dphipfmet_WpLjets__16->SetBinError(3,0.0002618914);
   h_dphipfmet_WpLjets__16->SetBinError(4,0.000260704);
   h_dphipfmet_WpLjets__16->SetBinError(5,0.0003035445);
   h_dphipfmet_WpLjets__16->SetBinError(6,0.0002748464);
   h_dphipfmet_WpLjets__16->SetBinError(7,0.0002889593);
   h_dphipfmet_WpLjets__16->SetBinError(8,0.0003208424);
   h_dphipfmet_WpLjets__16->SetBinError(9,0.0003476831);
   h_dphipfmet_WpLjets__16->SetBinError(10,0.0003085009);
   h_dphipfmet_WpLjets__16->SetBinError(11,0.0003816949);
   h_dphipfmet_WpLjets__16->SetBinError(12,0.0003305363);
   h_dphipfmet_WpLjets__16->SetBinError(13,0.0003572201);
   h_dphipfmet_WpLjets__16->SetBinError(14,0.0003557877);
   h_dphipfmet_WpLjets__16->SetBinError(15,0.0003436085);
   h_dphipfmet_WpLjets__16->SetBinError(16,0.0003910228);
   h_dphipfmet_WpLjets__16->SetBinError(17,0.0004016124);
   h_dphipfmet_WpLjets__16->SetBinError(18,0.000567118);
   h_dphipfmet_WpLjets__16->SetBinError(19,0.0006359374);
   h_dphipfmet_WpLjets__16->SetBinError(20,0.0005572388);
   h_dphipfmet_WpLjets__16->SetEntries(3309);
   h_dphipfmet_WpLjets__16->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   h_dphipfmet_WpLjets__16->SetFillColor(ci);
   h_dphipfmet_WpLjets__16->GetXaxis()->SetTitle("min#Delta#phi(jet,PF MET)");
   h_dphipfmet_WpLjets__16->GetXaxis()->SetLabelFont(42);
   h_dphipfmet_WpLjets__16->GetXaxis()->SetLabelOffset(0.007);
   h_dphipfmet_WpLjets__16->GetXaxis()->SetTitleSize(0.05);
   h_dphipfmet_WpLjets__16->GetXaxis()->SetTickLength(0.025);
   h_dphipfmet_WpLjets__16->GetXaxis()->SetTitleFont(42);
   h_dphipfmet_WpLjets__16->GetYaxis()->SetTitle("a.u.");
   h_dphipfmet_WpLjets__16->GetYaxis()->SetLabelFont(42);
   h_dphipfmet_WpLjets__16->GetYaxis()->SetLabelOffset(0.007);
   h_dphipfmet_WpLjets__16->GetYaxis()->SetTitleSize(0.05);
   h_dphipfmet_WpLjets__16->GetYaxis()->SetTickLength(0.025);
   h_dphipfmet_WpLjets__16->GetYaxis()->SetTitleFont(42);
   h_dphipfmet_WpLjets__16->GetZaxis()->SetLabelFont(42);
   h_dphipfmet_WpLjets__16->GetZaxis()->SetLabelOffset(0.007);
   h_dphipfmet_WpLjets__16->GetZaxis()->SetTitleSize(0.05);
   h_dphipfmet_WpLjets__16->GetZaxis()->SetTickLength(0.025);
   h_dphipfmet_WpLjets__16->GetZaxis()->SetTitleFont(42);
   h->Add(h_dphipfmet_W+jets,"");
   
   TH1D *h_dphipfmet_TopsPoPLFcP__17 = new TH1D("h_dphipfmet_TopsPoPLFcP__17","",20,0,3.14);
   h_dphipfmet_TopsPoPLFcP__17->SetBinContent(1,0.02529968);
   h_dphipfmet_TopsPoPLFcP__17->SetBinContent(2,0.02396434);
   h_dphipfmet_TopsPoPLFcP__17->SetBinContent(3,0.02325551);
   h_dphipfmet_TopsPoPLFcP__17->SetBinContent(4,0.02330514);
   h_dphipfmet_TopsPoPLFcP__17->SetBinContent(5,0.02138234);
   h_dphipfmet_TopsPoPLFcP__17->SetBinContent(6,0.02129114);
   h_dphipfmet_TopsPoPLFcP__17->SetBinContent(7,0.02097353);
   h_dphipfmet_TopsPoPLFcP__17->SetBinContent(8,0.01997489);
   h_dphipfmet_TopsPoPLFcP__17->SetBinContent(9,0.01892287);
   h_dphipfmet_TopsPoPLFcP__17->SetBinContent(10,0.01972787);
   h_dphipfmet_TopsPoPLFcP__17->SetBinContent(11,0.01842835);
   h_dphipfmet_TopsPoPLFcP__17->SetBinContent(12,0.01725549);
   h_dphipfmet_TopsPoPLFcP__17->SetBinContent(13,0.0154732);
   h_dphipfmet_TopsPoPLFcP__17->SetBinContent(14,0.01337274);
   h_dphipfmet_TopsPoPLFcP__17->SetBinContent(15,0.01148852);
   h_dphipfmet_TopsPoPLFcP__17->SetBinContent(16,0.01038329);
   h_dphipfmet_TopsPoPLFcP__17->SetBinContent(17,0.008183859);
   h_dphipfmet_TopsPoPLFcP__17->SetBinContent(18,0.007151434);
   h_dphipfmet_TopsPoPLFcP__17->SetBinContent(19,0.005130465);
   h_dphipfmet_TopsPoPLFcP__17->SetBinContent(20,0.003114486);
   h_dphipfmet_TopsPoPLFcP__17->SetBinError(1,0.0005293566);
   h_dphipfmet_TopsPoPLFcP__17->SetBinError(2,0.0004875165);
   h_dphipfmet_TopsPoPLFcP__17->SetBinError(3,0.0004973609);
   h_dphipfmet_TopsPoPLFcP__17->SetBinError(4,0.0005201417);
   h_dphipfmet_TopsPoPLFcP__17->SetBinError(5,0.0004961156);
   h_dphipfmet_TopsPoPLFcP__17->SetBinError(6,0.0004692313);
   h_dphipfmet_TopsPoPLFcP__17->SetBinError(7,0.0004851653);
   h_dphipfmet_TopsPoPLFcP__17->SetBinError(8,0.0004815335);
   h_dphipfmet_TopsPoPLFcP__17->SetBinError(9,0.0004512876);
   h_dphipfmet_TopsPoPLFcP__17->SetBinError(10,0.0004895715);
   h_dphipfmet_TopsPoPLFcP__17->SetBinError(11,0.0004495065);
   h_dphipfmet_TopsPoPLFcP__17->SetBinError(12,0.0004717565);
   h_dphipfmet_TopsPoPLFcP__17->SetBinError(13,0.0004333967);
   h_dphipfmet_TopsPoPLFcP__17->SetBinError(14,0.0003981469);
   h_dphipfmet_TopsPoPLFcP__17->SetBinError(15,0.0003730166);
   h_dphipfmet_TopsPoPLFcP__17->SetBinError(16,0.0003744052);
   h_dphipfmet_TopsPoPLFcP__17->SetBinError(17,0.0003237608);
   h_dphipfmet_TopsPoPLFcP__17->SetBinError(18,0.0003336216);
   h_dphipfmet_TopsPoPLFcP__17->SetBinError(19,0.0002887828);
   h_dphipfmet_TopsPoPLFcP__17->SetBinError(20,0.0001955313);
   h_dphipfmet_TopsPoPLFcP__17->SetEntries(45754);
   h_dphipfmet_TopsPoPLFcP__17->SetStats(0);

   ci = TColor::GetColor("#cc33cc");
   h_dphipfmet_TopsPoPLFcP__17->SetFillColor(ci);
   h_dphipfmet_TopsPoPLFcP__17->GetXaxis()->SetTitle("min#Delta#phi(jet,PF MET)");
   h_dphipfmet_TopsPoPLFcP__17->GetXaxis()->SetLabelFont(42);
   h_dphipfmet_TopsPoPLFcP__17->GetXaxis()->SetLabelOffset(0.007);
   h_dphipfmet_TopsPoPLFcP__17->GetXaxis()->SetTitleSize(0.05);
   h_dphipfmet_TopsPoPLFcP__17->GetXaxis()->SetTickLength(0.025);
   h_dphipfmet_TopsPoPLFcP__17->GetXaxis()->SetTitleFont(42);
   h_dphipfmet_TopsPoPLFcP__17->GetYaxis()->SetTitle("a.u.");
   h_dphipfmet_TopsPoPLFcP__17->GetYaxis()->SetLabelFont(42);
   h_dphipfmet_TopsPoPLFcP__17->GetYaxis()->SetLabelOffset(0.007);
   h_dphipfmet_TopsPoPLFcP__17->GetYaxis()->SetTitleSize(0.05);
   h_dphipfmet_TopsPoPLFcP__17->GetYaxis()->SetTickLength(0.025);
   h_dphipfmet_TopsPoPLFcP__17->GetYaxis()->SetTitleFont(42);
   h_dphipfmet_TopsPoPLFcP__17->GetZaxis()->SetLabelFont(42);
   h_dphipfmet_TopsPoPLFcP__17->GetZaxis()->SetLabelOffset(0.007);
   h_dphipfmet_TopsPoPLFcP__17->GetZaxis()->SetTitleSize(0.05);
   h_dphipfmet_TopsPoPLFcP__17->GetZaxis()->SetTickLength(0.025);
   h_dphipfmet_TopsPoPLFcP__17->GetZaxis()->SetTitleFont(42);
   h->Add(h_dphipfmet_Top (LF),"");
   
   TH1D *h_dphipfmet_TopsPoPHFcP__18 = new TH1D("h_dphipfmet_TopsPoPHFcP__18","",20,0,3.14);
   h_dphipfmet_TopsPoPHFcP__18->SetBinContent(1,0.04131691);
   h_dphipfmet_TopsPoPHFcP__18->SetBinContent(2,0.0384691);
   h_dphipfmet_TopsPoPHFcP__18->SetBinContent(3,0.03769783);
   h_dphipfmet_TopsPoPHFcP__18->SetBinContent(4,0.03417172);
   h_dphipfmet_TopsPoPHFcP__18->SetBinContent(5,0.03393662);
   h_dphipfmet_TopsPoPHFcP__18->SetBinContent(6,0.0314115);
   h_dphipfmet_TopsPoPHFcP__18->SetBinContent(7,0.03035391);
   h_dphipfmet_TopsPoPHFcP__18->SetBinContent(8,0.02795775);
   h_dphipfmet_TopsPoPHFcP__18->SetBinContent(9,0.02684132);
   h_dphipfmet_TopsPoPHFcP__18->SetBinContent(10,0.02584738);
   h_dphipfmet_TopsPoPHFcP__18->SetBinContent(11,0.02353541);
   h_dphipfmet_TopsPoPHFcP__18->SetBinContent(12,0.02210649);
   h_dphipfmet_TopsPoPHFcP__18->SetBinContent(13,0.02062911);
   h_dphipfmet_TopsPoPHFcP__18->SetBinContent(14,0.01912087);
   h_dphipfmet_TopsPoPHFcP__18->SetBinContent(15,0.01825688);
   h_dphipfmet_TopsPoPHFcP__18->SetBinContent(16,0.01879467);
   h_dphipfmet_TopsPoPHFcP__18->SetBinContent(17,0.01913859);
   h_dphipfmet_TopsPoPHFcP__18->SetBinContent(18,0.02005562);
   h_dphipfmet_TopsPoPHFcP__18->SetBinContent(19,0.0214212);
   h_dphipfmet_TopsPoPHFcP__18->SetBinContent(20,0.01938268);
   h_dphipfmet_TopsPoPHFcP__18->SetBinError(1,0.0006680746);
   h_dphipfmet_TopsPoPHFcP__18->SetBinError(2,0.0006545396);
   h_dphipfmet_TopsPoPHFcP__18->SetBinError(3,0.0006588522);
   h_dphipfmet_TopsPoPHFcP__18->SetBinError(4,0.0005699241);
   h_dphipfmet_TopsPoPHFcP__18->SetBinError(5,0.0005929429);
   h_dphipfmet_TopsPoPHFcP__18->SetBinError(6,0.0005692733);
   h_dphipfmet_TopsPoPHFcP__18->SetBinError(7,0.0005651989);
   h_dphipfmet_TopsPoPHFcP__18->SetBinError(8,0.0005334104);
   h_dphipfmet_TopsPoPHFcP__18->SetBinError(9,0.0005709573);
   h_dphipfmet_TopsPoPHFcP__18->SetBinError(10,0.000577955);
   h_dphipfmet_TopsPoPHFcP__18->SetBinError(11,0.0005350415);
   h_dphipfmet_TopsPoPHFcP__18->SetBinError(12,0.0005303447);
   h_dphipfmet_TopsPoPHFcP__18->SetBinError(13,0.0005421248);
   h_dphipfmet_TopsPoPHFcP__18->SetBinError(14,0.0005535302);
   h_dphipfmet_TopsPoPHFcP__18->SetBinError(15,0.0005326857);
   h_dphipfmet_TopsPoPHFcP__18->SetBinError(16,0.0005368283);
   h_dphipfmet_TopsPoPHFcP__18->SetBinError(17,0.0005349886);
   h_dphipfmet_TopsPoPHFcP__18->SetBinError(18,0.0005328845);
   h_dphipfmet_TopsPoPHFcP__18->SetBinError(19,0.0005261907);
   h_dphipfmet_TopsPoPHFcP__18->SetBinError(20,0.0004985866);
   h_dphipfmet_TopsPoPHFcP__18->SetEntries(77950);
   h_dphipfmet_TopsPoPHFcP__18->SetStats(0);

   ci = TColor::GetColor("#ff9900");
   h_dphipfmet_TopsPoPHFcP__18->SetFillColor(ci);
   h_dphipfmet_TopsPoPHFcP__18->GetXaxis()->SetTitle("min#Delta#phi(jet,PF MET)");
   h_dphipfmet_TopsPoPHFcP__18->GetXaxis()->SetLabelFont(42);
   h_dphipfmet_TopsPoPHFcP__18->GetXaxis()->SetLabelOffset(0.007);
   h_dphipfmet_TopsPoPHFcP__18->GetXaxis()->SetTitleSize(0.05);
   h_dphipfmet_TopsPoPHFcP__18->GetXaxis()->SetTickLength(0.025);
   h_dphipfmet_TopsPoPHFcP__18->GetXaxis()->SetTitleFont(42);
   h_dphipfmet_TopsPoPHFcP__18->GetYaxis()->SetTitle("a.u.");
   h_dphipfmet_TopsPoPHFcP__18->GetYaxis()->SetLabelFont(42);
   h_dphipfmet_TopsPoPHFcP__18->GetYaxis()->SetLabelOffset(0.007);
   h_dphipfmet_TopsPoPHFcP__18->GetYaxis()->SetTitleSize(0.05);
   h_dphipfmet_TopsPoPHFcP__18->GetYaxis()->SetTickLength(0.025);
   h_dphipfmet_TopsPoPHFcP__18->GetYaxis()->SetTitleFont(42);
   h_dphipfmet_TopsPoPHFcP__18->GetZaxis()->SetLabelFont(42);
   h_dphipfmet_TopsPoPHFcP__18->GetZaxis()->SetLabelOffset(0.007);
   h_dphipfmet_TopsPoPHFcP__18->GetZaxis()->SetTitleSize(0.05);
   h_dphipfmet_TopsPoPHFcP__18->GetZaxis()->SetTickLength(0.025);
   h_dphipfmet_TopsPoPHFcP__18->GetZaxis()->SetTitleFont(42);
   h->Add(h_dphipfmet_Top (HF),"");
   h->Draw("hist");
   
   TH1D *hsum__19 = new TH1D("hsum__19","",20,0,3.14);
   hsum__19->SetBinContent(1,0.07334856);
   hsum__19->SetBinContent(2,0.06760477);
   hsum__19->SetBinContent(3,0.06516843);
   hsum__19->SetBinContent(4,0.06267853);
   hsum__19->SetBinContent(5,0.06005902);
   hsum__19->SetBinContent(6,0.05774328);
   hsum__19->SetBinContent(7,0.05672931);
   hsum__19->SetBinContent(8,0.05263803);
   hsum__19->SetBinContent(9,0.05196635);
   hsum__19->SetBinContent(10,0.05093265);
   hsum__19->SetBinContent(11,0.04759709);
   hsum__19->SetBinContent(12,0.04513399);
   hsum__19->SetBinContent(13,0.04332085);
   hsum__19->SetBinContent(14,0.04272449);
   hsum__19->SetBinContent(15,0.03558977);
   hsum__19->SetBinContent(16,0.03619198);
   hsum__19->SetBinContent(17,0.03670001);
   hsum__19->SetBinContent(18,0.03761839);
   hsum__19->SetBinContent(19,0.03914726);
   hsum__19->SetBinContent(20,0.03710724);
   hsum__19->SetBinError(1,0.00132085);
   hsum__19->SetBinError(2,0.001067555);
   hsum__19->SetBinError(3,0.0009482222);
   hsum__19->SetBinError(4,0.001052474);
   hsum__19->SetBinError(5,0.0009334151);
   hsum__19->SetBinError(6,0.001252264);
   hsum__19->SetBinError(7,0.001008278);
   hsum__19->SetBinError(8,0.0009066649);
   hsum__19->SetBinError(9,0.0009953928);
   hsum__19->SetBinError(10,0.0009639882);
   hsum__19->SetBinError(11,0.0008977803);
   hsum__19->SetBinError(12,0.0009048519);
   hsum__19->SetBinError(13,0.001117605);
   hsum__19->SetBinError(14,0.001867701);
   hsum__19->SetBinError(15,0.0009616299);
   hsum__19->SetBinError(16,0.001102005);
   hsum__19->SetBinError(17,0.002066287);
   hsum__19->SetBinError(18,0.001269278);
   hsum__19->SetBinError(19,0.001491999);
   hsum__19->SetBinError(20,0.001635921);
   hsum__19->SetEntries(65);
   hsum__19->SetStats(0);

   ci = 1181;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   hsum__19->SetFillColor(ci);
   hsum__19->SetFillStyle(3003);
   hsum__19->SetLineWidth(0);
   hsum__19->GetXaxis()->SetTitle("min#Delta#phi(jet,PF MET)");
   hsum__19->GetXaxis()->SetLabelFont(42);
   hsum__19->GetXaxis()->SetLabelOffset(0.007);
   hsum__19->GetXaxis()->SetTitleSize(0.05);
   hsum__19->GetXaxis()->SetTickLength(0.025);
   hsum__19->GetXaxis()->SetTitleFont(42);
   hsum__19->GetYaxis()->SetTitle("a.u.");
   hsum__19->GetYaxis()->SetLabelFont(42);
   hsum__19->GetYaxis()->SetLabelOffset(0.007);
   hsum__19->GetYaxis()->SetTitleSize(0.05);
   hsum__19->GetYaxis()->SetTickLength(0.025);
   hsum__19->GetYaxis()->SetTitleFont(42);
   hsum__19->GetZaxis()->SetLabelFont(42);
   hsum__19->GetZaxis()->SetLabelOffset(0.007);
   hsum__19->GetZaxis()->SetTitleSize(0.05);
   hsum__19->GetZaxis()->SetTickLength(0.025);
   hsum__19->GetZaxis()->SetTitleFont(42);
   hsum__19->Draw("e2 same");
   
   TH1D *h_dphipfmet_Data__20 = new TH1D("h_dphipfmet_Data__20","",20,0,3.14);
   h_dphipfmet_Data__20->SetBinContent(1,0.07226986);
   h_dphipfmet_Data__20->SetBinContent(2,0.06534439);
   h_dphipfmet_Data__20->SetBinContent(3,0.06769999);
   h_dphipfmet_Data__20->SetBinContent(4,0.06426081);
   h_dphipfmet_Data__20->SetBinContent(5,0.06388392);
   h_dphipfmet_Data__20->SetBinContent(6,0.05856026);
   h_dphipfmet_Data__20->SetBinContent(7,0.05658155);
   h_dphipfmet_Data__20->SetBinContent(8,0.05672289);
   h_dphipfmet_Data__20->SetBinContent(9,0.0501272);
   h_dphipfmet_Data__20->SetBinContent(10,0.05201168);
   h_dphipfmet_Data__20->SetBinContent(11,0.04913785);
   h_dphipfmet_Data__20->SetBinContent(12,0.04343729);
   h_dphipfmet_Data__20->SetBinContent(13,0.04249505);
   h_dphipfmet_Data__20->SetBinContent(14,0.03801941);
   h_dphipfmet_Data__20->SetBinContent(15,0.03816075);
   h_dphipfmet_Data__20->SetBinContent(16,0.03491002);
   h_dphipfmet_Data__20->SetBinContent(17,0.03538114);
   h_dphipfmet_Data__20->SetBinContent(18,0.03731273);
   h_dphipfmet_Data__20->SetBinContent(19,0.03853764);
   h_dphipfmet_Data__20->SetBinContent(20,0.03514558);
   h_dphipfmet_Data__20->SetBinError(1,0.001845205);
   h_dphipfmet_Data__20->SetBinError(2,0.001754567);
   h_dphipfmet_Data__20->SetBinError(3,0.001785913);
   h_dphipfmet_Data__20->SetBinError(4,0.001739959);
   h_dphipfmet_Data__20->SetBinError(5,0.001734849);
   h_dphipfmet_Data__20->SetBinError(6,0.001660991);
   h_dphipfmet_Data__20->SetBinError(7,0.001632689);
   h_dphipfmet_Data__20->SetBinError(8,0.001634726);
   h_dphipfmet_Data__20->SetBinError(9,0.001536748);
   h_dphipfmet_Data__20->SetBinError(10,0.001565368);
   h_dphipfmet_Data__20->SetBinError(11,0.001521507);
   h_dphipfmet_Data__20->SetBinError(12,0.001430531);
   h_dphipfmet_Data__20->SetBinError(13,0.001414931);
   h_dphipfmet_Data__20->SetBinError(14,0.001338347);
   h_dphipfmet_Data__20->SetBinError(15,0.001340832);
   h_dphipfmet_Data__20->SetBinError(16,0.001282451);
   h_dphipfmet_Data__20->SetBinError(17,0.001291076);
   h_dphipfmet_Data__20->SetBinError(18,0.00132585);
   h_dphipfmet_Data__20->SetBinError(19,0.001347437);
   h_dphipfmet_Data__20->SetBinError(20,0.001286771);
   h_dphipfmet_Data__20->SetEntries(21226);
   h_dphipfmet_Data__20->SetStats(0);
   h_dphipfmet_Data__20->SetLineWidth(3);
   h_dphipfmet_Data__20->SetMarkerStyle(20);
   h_dphipfmet_Data__20->SetMarkerSize(2);
   h_dphipfmet_Data__20->GetXaxis()->SetTitle("min#Delta#phi(jet,PF MET)");
   h_dphipfmet_Data__20->GetXaxis()->SetLabelFont(42);
   h_dphipfmet_Data__20->GetXaxis()->SetLabelOffset(0.007);
   h_dphipfmet_Data__20->GetXaxis()->SetTitleSize(0.05);
   h_dphipfmet_Data__20->GetXaxis()->SetTickLength(0.025);
   h_dphipfmet_Data__20->GetXaxis()->SetTitleFont(42);
   h_dphipfmet_Data__20->GetYaxis()->SetTitle("a.u.");
   h_dphipfmet_Data__20->GetYaxis()->SetLabelFont(42);
   h_dphipfmet_Data__20->GetYaxis()->SetLabelOffset(0.007);
   h_dphipfmet_Data__20->GetYaxis()->SetTitleSize(0.05);
   h_dphipfmet_Data__20->GetYaxis()->SetTickLength(0.025);
   h_dphipfmet_Data__20->GetYaxis()->SetTitleFont(42);
   h_dphipfmet_Data__20->GetZaxis()->SetLabelFont(42);
   h_dphipfmet_Data__20->GetZaxis()->SetLabelOffset(0.007);
   h_dphipfmet_Data__20->GetZaxis()->SetTitleSize(0.05);
   h_dphipfmet_Data__20->GetZaxis()->SetTickLength(0.025);
   h_dphipfmet_Data__20->GetZaxis()->SetTitleFont(42);
   h_dphipfmet_Data__20->Draw("elp same");
   
   TLegend *leg = new TLegend(0.6,0.55,0.88,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("h_dphipfmet_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_dphipfmet_Top (HF)","Top (HF)","F");

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
   entry=leg->AddEntry("h_dphipfmet_Top (LF)","Top (LF)","F");

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
   entry=leg->AddEntry("h_dphipfmet_W+jets","W+jets","F");

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
   entry=leg->AddEntry("h_dphipfmet_Z+jets","Z+jets","F");

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
   entry=leg->AddEntry("h_dphipfmet_Diboson","Diboson","F");

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
   entry=leg->AddEntry("h_dphipfmet_QCD","QCD","F");

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
   entry=leg->AddEntry("h_dphipfmet_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_dphipfmet_Top (HF)","Top (HF)","F");

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
   entry=leg->AddEntry("h_dphipfmet_Top (LF)","Top (LF)","F");

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
   entry=leg->AddEntry("h_dphipfmet_W+jets","W+jets","F");

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
   entry=leg->AddEntry("h_dphipfmet_Z+jets","Z+jets","F");

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
   entry=leg->AddEntry("h_dphipfmet_Diboson","Diboson","F");

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
   entry=leg->AddEntry("h_dphipfmet_QCD","QCD","F");

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
   pad2->Range(-0.58875,-0.8914286,3.33625,0.48);
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
   
   TH1D *ratio__21 = new TH1D("ratio__21","",20,0,3.14);
   ratio__21->SetBinContent(1,-0.01470655);
   ratio__21->SetBinContent(2,-0.03343523);
   ratio__21->SetBinContent(3,0.03884637);
   ratio__21->SetBinContent(4,0.02524436);
   ratio__21->SetBinContent(5,0.06368554);
   ratio__21->SetBinContent(6,0.01414835);
   ratio__21->SetBinContent(7,-0.002604723);
   ratio__21->SetBinContent(8,0.07760274);
   ratio__21->SetBinContent(9,-0.03539121);
   ratio__21->SetBinContent(10,0.02118564);
   ratio__21->SetBinContent(11,0.03237092);
   ratio__21->SetBinContent(12,-0.03759229);
   ratio__21->SetBinContent(13,-0.01906222);
   ratio__21->SetBinContent(14,-0.1101261);
   ratio__21->SetBinContent(15,0.07223904);
   ratio__21->SetBinContent(16,-0.03542125);
   ratio__21->SetBinContent(17,-0.03593665);
   ratio__21->SetBinContent(18,-0.008125186);
   ratio__21->SetBinContent(19,-0.01557231);
   ratio__21->SetBinContent(20,-0.05286479);
   ratio__21->SetBinError(1,0.0001);
   ratio__21->SetBinError(2,0.0001);
   ratio__21->SetBinError(3,0.0001);
   ratio__21->SetBinError(4,0.0001);
   ratio__21->SetBinError(5,0.0001);
   ratio__21->SetBinError(6,0.0001);
   ratio__21->SetBinError(7,0.0001);
   ratio__21->SetBinError(8,0.0001);
   ratio__21->SetBinError(9,0.0001);
   ratio__21->SetBinError(10,0.0001);
   ratio__21->SetBinError(11,0.0001);
   ratio__21->SetBinError(12,0.0001);
   ratio__21->SetBinError(13,0.0001);
   ratio__21->SetBinError(14,0.0001);
   ratio__21->SetBinError(15,0.0001);
   ratio__21->SetBinError(16,0.0001);
   ratio__21->SetBinError(17,0.0001);
   ratio__21->SetBinError(18,0.0001);
   ratio__21->SetBinError(19,0.0001);
   ratio__21->SetBinError(20,0.0001);
   ratio__21->SetMinimum(-0.48);
   ratio__21->SetMaximum(0.48);
   ratio__21->SetEntries(21246);
   ratio__21->SetStats(0);
   ratio__21->SetLineWidth(3);
   ratio__21->SetMarkerStyle(20);
   ratio__21->SetMarkerSize(2);
   ratio__21->GetXaxis()->SetTitle("min#Delta#phi(jet,PF MET)");
   ratio__21->GetXaxis()->SetLabelFont(43);
   ratio__21->GetXaxis()->SetLabelOffset(0.007);
   ratio__21->GetXaxis()->SetLabelSize(30);
   ratio__21->GetXaxis()->SetTitleSize(40);
   ratio__21->GetXaxis()->SetTickLength(0.025);
   ratio__21->GetXaxis()->SetTitleOffset(5);
   ratio__21->GetXaxis()->SetTitleFont(43);
   ratio__21->GetYaxis()->SetTitle("#frac{Data-Exp}{Exp}");
   ratio__21->GetYaxis()->SetNdivisions(5);
   ratio__21->GetYaxis()->SetLabelFont(43);
   ratio__21->GetYaxis()->SetLabelOffset(0.007);
   ratio__21->GetYaxis()->SetLabelSize(30);
   ratio__21->GetYaxis()->SetTitleSize(40);
   ratio__21->GetYaxis()->SetTickLength(0.025);
   ratio__21->GetYaxis()->SetTitleOffset(2.5);
   ratio__21->GetYaxis()->SetTitleFont(43);
   ratio__21->GetZaxis()->SetLabelFont(42);
   ratio__21->GetZaxis()->SetLabelOffset(0.007);
   ratio__21->GetZaxis()->SetTitleSize(0.05);
   ratio__21->GetZaxis()->SetTickLength(0.025);
   ratio__21->GetZaxis()->SetTitleFont(42);
   ratio__21->Draw("elp");
   
   TH1D *zero__22 = new TH1D("zero__22","",20,0,3.14);
   zero__22->SetBinError(1,0.001845205);
   zero__22->SetBinError(2,0.001754567);
   zero__22->SetBinError(3,0.001785913);
   zero__22->SetBinError(4,0.001739959);
   zero__22->SetBinError(5,0.001734849);
   zero__22->SetBinError(6,0.001660991);
   zero__22->SetBinError(7,0.001632689);
   zero__22->SetBinError(8,0.001634726);
   zero__22->SetBinError(9,0.001536748);
   zero__22->SetBinError(10,0.001565368);
   zero__22->SetBinError(11,0.001521507);
   zero__22->SetBinError(12,0.001430531);
   zero__22->SetBinError(13,0.001414931);
   zero__22->SetBinError(14,0.001338347);
   zero__22->SetBinError(15,0.001340832);
   zero__22->SetBinError(16,0.001282451);
   zero__22->SetBinError(17,0.001291076);
   zero__22->SetBinError(18,0.00132585);
   zero__22->SetBinError(19,0.001347437);
   zero__22->SetBinError(20,0.001286771);
   zero__22->SetEntries(21246);
   zero__22->SetStats(0);
   zero__22->SetLineWidth(3);
   zero__22->SetMarkerStyle(20);
   zero__22->SetMarkerSize(2);
   zero__22->GetXaxis()->SetTitle("min#Delta#phi(jet,PF MET)");
   zero__22->GetXaxis()->SetLabelFont(42);
   zero__22->GetXaxis()->SetLabelOffset(0.007);
   zero__22->GetXaxis()->SetTitleSize(0.05);
   zero__22->GetXaxis()->SetTickLength(0.025);
   zero__22->GetXaxis()->SetTitleFont(42);
   zero__22->GetYaxis()->SetTitle("a.u.");
   zero__22->GetYaxis()->SetLabelFont(42);
   zero__22->GetYaxis()->SetLabelOffset(0.007);
   zero__22->GetYaxis()->SetTitleSize(0.05);
   zero__22->GetYaxis()->SetTickLength(0.025);
   zero__22->GetYaxis()->SetTitleFont(42);
   zero__22->GetZaxis()->SetLabelFont(42);
   zero__22->GetZaxis()->SetLabelOffset(0.007);
   zero__22->GetZaxis()->SetTitleSize(0.05);
   zero__22->GetZaxis()->SetTickLength(0.025);
   zero__22->GetZaxis()->SetTitleFont(42);
   zero__22->Draw("hist same");
   
   TH1D *sumratioup__23 = new TH1D("sumratioup__23","",20,0,3.14);
   sumratioup__23->SetBinContent(1,0.01800786);
   sumratioup__23->SetBinContent(2,0.01579113);
   sumratioup__23->SetBinContent(3,0.01455033);
   sumratioup__23->SetBinContent(4,0.01679163);
   sumratioup__23->SetBinContent(5,0.01554163);
   sumratioup__23->SetBinContent(6,0.02168674);
   sumratioup__23->SetBinContent(7,0.01777349);
   sumratioup__23->SetBinContent(8,0.01722452);
   sumratioup__23->SetBinContent(9,0.01915456);
   sumratioup__23->SetBinContent(10,0.01892672);
   sumratioup__23->SetBinContent(11,0.01886208);
   sumratioup__23->SetBinContent(12,0.02004813);
   sumratioup__23->SetBinContent(13,0.02579832);
   sumratioup__23->SetBinContent(14,0.04371499);
   sumratioup__23->SetBinContent(15,0.02701984);
   sumratioup__23->SetBinContent(16,0.03044887);
   sumratioup__23->SetBinContent(17,0.05630207);
   sumratioup__23->SetBinContent(18,0.0337409);
   sumratioup__23->SetBinContent(19,0.03811248);
   sumratioup__23->SetBinContent(20,0.04408628);
   sumratioup__23->SetBinError(1,0.00132085);
   sumratioup__23->SetBinError(2,0.001067555);
   sumratioup__23->SetBinError(3,0.0009482222);
   sumratioup__23->SetBinError(4,0.001052474);
   sumratioup__23->SetBinError(5,0.0009334151);
   sumratioup__23->SetBinError(6,0.001252264);
   sumratioup__23->SetBinError(7,0.001008278);
   sumratioup__23->SetBinError(8,0.0009066649);
   sumratioup__23->SetBinError(9,0.0009953928);
   sumratioup__23->SetBinError(10,0.0009639882);
   sumratioup__23->SetBinError(11,0.0008977803);
   sumratioup__23->SetBinError(12,0.0009048519);
   sumratioup__23->SetBinError(13,0.001117605);
   sumratioup__23->SetBinError(14,0.001867701);
   sumratioup__23->SetBinError(15,0.0009616299);
   sumratioup__23->SetBinError(16,0.001102005);
   sumratioup__23->SetBinError(17,0.002066287);
   sumratioup__23->SetBinError(18,0.001269278);
   sumratioup__23->SetBinError(19,0.001491999);
   sumratioup__23->SetBinError(20,0.001635921);
   sumratioup__23->SetEntries(85);
   sumratioup__23->SetStats(0);

   ci = 1181;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratioup__23->SetFillColor(ci);
   sumratioup__23->SetFillStyle(3003);
   sumratioup__23->GetXaxis()->SetTitle("min#Delta#phi(jet,PF MET)");
   sumratioup__23->GetXaxis()->SetLabelFont(42);
   sumratioup__23->GetXaxis()->SetLabelOffset(0.007);
   sumratioup__23->GetXaxis()->SetTitleSize(0.05);
   sumratioup__23->GetXaxis()->SetTickLength(0.025);
   sumratioup__23->GetXaxis()->SetTitleFont(42);
   sumratioup__23->GetYaxis()->SetTitle("a.u.");
   sumratioup__23->GetYaxis()->SetLabelFont(42);
   sumratioup__23->GetYaxis()->SetLabelOffset(0.007);
   sumratioup__23->GetYaxis()->SetTitleSize(0.05);
   sumratioup__23->GetYaxis()->SetTickLength(0.025);
   sumratioup__23->GetYaxis()->SetTitleFont(42);
   sumratioup__23->GetZaxis()->SetLabelFont(42);
   sumratioup__23->GetZaxis()->SetLabelOffset(0.007);
   sumratioup__23->GetZaxis()->SetTitleSize(0.05);
   sumratioup__23->GetZaxis()->SetTickLength(0.025);
   sumratioup__23->GetZaxis()->SetTitleFont(42);
   sumratioup__23->Draw("hist same");
   
   TH1D *sumratiodown__24 = new TH1D("sumratiodown__24","",20,0,3.14);
   sumratiodown__24->SetBinContent(1,-0.01800786);
   sumratiodown__24->SetBinContent(2,-0.01579113);
   sumratiodown__24->SetBinContent(3,-0.01455033);
   sumratiodown__24->SetBinContent(4,-0.01679163);
   sumratiodown__24->SetBinContent(5,-0.01554163);
   sumratiodown__24->SetBinContent(6,-0.02168674);
   sumratiodown__24->SetBinContent(7,-0.01777349);
   sumratiodown__24->SetBinContent(8,-0.01722452);
   sumratiodown__24->SetBinContent(9,-0.01915456);
   sumratiodown__24->SetBinContent(10,-0.01892672);
   sumratiodown__24->SetBinContent(11,-0.01886208);
   sumratiodown__24->SetBinContent(12,-0.02004813);
   sumratiodown__24->SetBinContent(13,-0.02579832);
   sumratiodown__24->SetBinContent(14,-0.04371499);
   sumratiodown__24->SetBinContent(15,-0.02701984);
   sumratiodown__24->SetBinContent(16,-0.03044887);
   sumratiodown__24->SetBinContent(17,-0.05630207);
   sumratiodown__24->SetBinContent(18,-0.0337409);
   sumratiodown__24->SetBinContent(19,-0.03811248);
   sumratiodown__24->SetBinContent(20,-0.04408628);
   sumratiodown__24->SetBinError(1,0.00132085);
   sumratiodown__24->SetBinError(2,0.001067555);
   sumratiodown__24->SetBinError(3,0.0009482222);
   sumratiodown__24->SetBinError(4,0.001052474);
   sumratiodown__24->SetBinError(5,0.0009334151);
   sumratiodown__24->SetBinError(6,0.001252264);
   sumratiodown__24->SetBinError(7,0.001008278);
   sumratiodown__24->SetBinError(8,0.0009066649);
   sumratiodown__24->SetBinError(9,0.0009953928);
   sumratiodown__24->SetBinError(10,0.0009639882);
   sumratiodown__24->SetBinError(11,0.0008977803);
   sumratiodown__24->SetBinError(12,0.0009048519);
   sumratiodown__24->SetBinError(13,0.001117605);
   sumratiodown__24->SetBinError(14,0.001867701);
   sumratiodown__24->SetBinError(15,0.0009616299);
   sumratiodown__24->SetBinError(16,0.001102005);
   sumratiodown__24->SetBinError(17,0.002066287);
   sumratiodown__24->SetBinError(18,0.001269278);
   sumratiodown__24->SetBinError(19,0.001491999);
   sumratiodown__24->SetBinError(20,0.001635921);
   sumratiodown__24->SetEntries(85);
   sumratiodown__24->SetStats(0);

   ci = 1181;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratiodown__24->SetFillColor(ci);
   sumratiodown__24->SetFillStyle(3003);
   sumratiodown__24->GetXaxis()->SetTitle("min#Delta#phi(jet,PF MET)");
   sumratiodown__24->GetXaxis()->SetLabelFont(42);
   sumratiodown__24->GetXaxis()->SetLabelOffset(0.007);
   sumratiodown__24->GetXaxis()->SetTitleSize(0.05);
   sumratiodown__24->GetXaxis()->SetTickLength(0.025);
   sumratiodown__24->GetXaxis()->SetTitleFont(42);
   sumratiodown__24->GetYaxis()->SetTitle("a.u.");
   sumratiodown__24->GetYaxis()->SetLabelFont(42);
   sumratiodown__24->GetYaxis()->SetLabelOffset(0.007);
   sumratiodown__24->GetYaxis()->SetTitleSize(0.05);
   sumratiodown__24->GetYaxis()->SetTickLength(0.025);
   sumratiodown__24->GetYaxis()->SetTitleFont(42);
   sumratiodown__24->GetZaxis()->SetLabelFont(42);
   sumratiodown__24->GetZaxis()->SetLabelOffset(0.007);
   sumratiodown__24->GetZaxis()->SetTitleSize(0.05);
   sumratiodown__24->GetZaxis()->SetTickLength(0.025);
   sumratiodown__24->GetZaxis()->SetTitleFont(42);
   sumratiodown__24->Draw("hist same");
   
   Double_t Graph0_fx1002[20] = {
   0.0785,
   0.2355,
   0.3925,
   0.5495,
   0.7065,
   0.8635,
   1.0205,
   1.1775,
   1.3345,
   1.4915,
   1.6485,
   1.8055,
   1.9625,
   2.1195,
   2.2765,
   2.4335,
   2.5905,
   2.7475,
   2.9045,
   3.0615};
   Double_t Graph0_fy1002[20] = {
   -0.01470655,
   -0.03343523,
   0.03884637,
   0.02524436,
   0.06368554,
   0.01414835,
   -0.002604723,
   0.07760274,
   -0.03539121,
   0.02118564,
   0.03237092,
   -0.03759229,
   -0.01906222,
   -0.1101261,
   0.07223904,
   -0.03542125,
   -0.03593665,
   -0.008125186,
   -0.01557231,
   -0.05286479};
   Double_t Graph0_fex1002[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1002[20] = {
   0.02515666,
   0.02595331,
   0.02740457,
   0.02776005,
   0.02888574,
   0.0287651,
   0.02878033,
   0.03105599,
   0.02957198,
   0.03073407,
   0.03196639,
   0.03169521,
   0.03266165,
   0.03132504,
   0.03767464,
   0.03543469,
   0.03517917,
   0.03524474,
   0.0344197,
   0.03467708};
   TGraphErrors *gre = new TGraphErrors(20,Graph0_fx1002,Graph0_fy1002,Graph0_fex1002,Graph0_fey1002);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","Graph",100,0,3.3598);
   Graph_Graph1002->SetMinimum(-0.1665877);
   Graph_Graph1002->SetMaximum(0.1350502);
   Graph_Graph1002->SetDirectory(0);
   Graph_Graph1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1002->SetLineColor(ci);
   Graph_Graph1002->GetXaxis()->SetLabelFont(42);
   Graph_Graph1002->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1002->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1002->GetXaxis()->SetTickLength(0.025);
   Graph_Graph1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1002->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1002->GetYaxis()->SetTickLength(0.025);
   Graph_Graph1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1002->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph1002->GetZaxis()->SetTickLength(0.025);
   Graph_Graph1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1002);
   
   gre->Draw("pe0");
   pad2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
