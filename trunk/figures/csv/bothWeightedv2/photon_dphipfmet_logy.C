void photon_dphipfmet_logy()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sun Dec 11 15:15:10 2016) by ROOT version6.06/01
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
   pad1->Range(-0.58875,-3.31141,3.33625,1.579853);
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
   h->SetMinimum(0.001424652);
   h->SetMaximum(9.775896);
   
   TH1F *h_stack_2 = new TH1F("h_stack_2","",20,0,3.14);
   h_stack_2->SetMinimum(0.0004881916);
   h_stack_2->SetMaximum(17.27684);
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
   
   
   TH1D *h_dphipfmet_QCD__10 = new TH1D("h_dphipfmet_QCD__10","",20,0,3.14);
   h_dphipfmet_QCD__10->SetBinContent(1,0.002657864);
   h_dphipfmet_QCD__10->SetBinContent(2,0.002418286);
   h_dphipfmet_QCD__10->SetBinContent(3,0.002168631);
   h_dphipfmet_QCD__10->SetBinContent(4,0.001996616);
   h_dphipfmet_QCD__10->SetBinContent(5,0.001845164);
   h_dphipfmet_QCD__10->SetBinContent(6,0.001745002);
   h_dphipfmet_QCD__10->SetBinContent(7,0.001666472);
   h_dphipfmet_QCD__10->SetBinContent(8,0.001612365);
   h_dphipfmet_QCD__10->SetBinContent(9,0.001565452);
   h_dphipfmet_QCD__10->SetBinContent(10,0.001570299);
   h_dphipfmet_QCD__10->SetBinContent(11,0.001555453);
   h_dphipfmet_QCD__10->SetBinContent(12,0.001531575);
   h_dphipfmet_QCD__10->SetBinContent(13,0.00153672);
   h_dphipfmet_QCD__10->SetBinContent(14,0.00152292);
   h_dphipfmet_QCD__10->SetBinContent(15,0.00151827);
   h_dphipfmet_QCD__10->SetBinContent(16,0.001462763);
   h_dphipfmet_QCD__10->SetBinContent(17,0.001406241);
   h_dphipfmet_QCD__10->SetBinContent(18,0.001348073);
   h_dphipfmet_QCD__10->SetBinContent(19,0.001224365);
   h_dphipfmet_QCD__10->SetBinContent(20,0.00107402);
   h_dphipfmet_QCD__10->SetBinError(1,1.131016e-05);
   h_dphipfmet_QCD__10->SetBinError(2,1.082921e-05);
   h_dphipfmet_QCD__10->SetBinError(3,1.028672e-05);
   h_dphipfmet_QCD__10->SetBinError(4,9.894885e-06);
   h_dphipfmet_QCD__10->SetBinError(5,9.548603e-06);
   h_dphipfmet_QCD__10->SetBinError(6,9.314376e-06);
   h_dphipfmet_QCD__10->SetBinError(7,9.125159e-06);
   h_dphipfmet_QCD__10->SetBinError(8,8.99522e-06);
   h_dphipfmet_QCD__10->SetBinError(9,8.884018e-06);
   h_dphipfmet_QCD__10->SetBinError(10,8.935629e-06);
   h_dphipfmet_QCD__10->SetBinError(11,8.924945e-06);
   h_dphipfmet_QCD__10->SetBinError(12,8.907952e-06);
   h_dphipfmet_QCD__10->SetBinError(13,8.962408e-06);
   h_dphipfmet_QCD__10->SetBinError(14,8.966027e-06);
   h_dphipfmet_QCD__10->SetBinError(15,8.992828e-06);
   h_dphipfmet_QCD__10->SetBinError(16,8.866465e-06);
   h_dphipfmet_QCD__10->SetBinError(17,8.729437e-06);
   h_dphipfmet_QCD__10->SetBinError(18,8.576755e-06);
   h_dphipfmet_QCD__10->SetBinError(19,8.202742e-06);
   h_dphipfmet_QCD__10->SetBinError(20,7.707159e-06);
   h_dphipfmet_QCD__10->SetEntries(668734);
   h_dphipfmet_QCD__10->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_dphipfmet_QCD__10->SetFillColor(ci);
   h_dphipfmet_QCD__10->GetXaxis()->SetTitle("min#Delta#phi(jet,pf MET)");
   h_dphipfmet_QCD__10->GetXaxis()->SetLabelFont(42);
   h_dphipfmet_QCD__10->GetXaxis()->SetLabelOffset(0.007);
   h_dphipfmet_QCD__10->GetXaxis()->SetTitleSize(0.05);
   h_dphipfmet_QCD__10->GetXaxis()->SetTickLength(0.025);
   h_dphipfmet_QCD__10->GetXaxis()->SetTitleFont(42);
   h_dphipfmet_QCD__10->GetYaxis()->SetTitle("a.u.");
   h_dphipfmet_QCD__10->GetYaxis()->SetLabelFont(42);
   h_dphipfmet_QCD__10->GetYaxis()->SetLabelOffset(0.007);
   h_dphipfmet_QCD__10->GetYaxis()->SetTitleSize(0.05);
   h_dphipfmet_QCD__10->GetYaxis()->SetTickLength(0.025);
   h_dphipfmet_QCD__10->GetYaxis()->SetTitleFont(42);
   h_dphipfmet_QCD__10->GetZaxis()->SetLabelFont(42);
   h_dphipfmet_QCD__10->GetZaxis()->SetLabelOffset(0.007);
   h_dphipfmet_QCD__10->GetZaxis()->SetTitleSize(0.05);
   h_dphipfmet_QCD__10->GetZaxis()->SetTickLength(0.025);
   h_dphipfmet_QCD__10->GetZaxis()->SetTitleFont(42);
   h->Add(h_dphipfmet_QCD,"");
   
   TH1D *h_dphipfmet_#gammapLjetssPoPHFcP__11 = new TH1D("h_dphipfmet_#gammapLjetssPoPHFcP__11","",20,0,3.14);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetBinContent(1,0.01272622);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetBinContent(2,0.01214057);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetBinContent(3,0.009659031);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetBinContent(4,0.008937626);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetBinContent(5,0.007745486);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetBinContent(6,0.006718477);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetBinContent(7,0.006339099);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetBinContent(8,0.006086736);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetBinContent(9,0.005514038);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetBinContent(10,0.005117733);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetBinContent(11,0.005417585);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetBinContent(12,0.005138754);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetBinContent(13,0.005490315);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetBinContent(14,0.004502907);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetBinContent(15,0.005496637);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetBinContent(16,0.004341589);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetBinContent(17,0.004349713);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetBinContent(18,0.003620399);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetBinContent(19,0.004166816);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetBinContent(20,0.003434136);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetBinError(1,0.0003963008);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetBinError(2,0.0003735158);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetBinError(3,0.0003337253);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetBinError(4,0.0003521675);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetBinError(5,0.0003033909);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetBinError(6,0.0003062115);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetBinError(7,0.0002834432);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetBinError(8,0.0003239886);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetBinError(9,0.0002697662);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetBinError(10,0.0002932326);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetBinError(11,0.0003617053);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetBinError(12,0.0003626408);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetBinError(13,0.0005287914);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetBinError(14,0.0003628449);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetBinError(15,0.0005235496);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetBinError(16,0.0004245868);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetBinError(17,0.0004502991);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetBinError(18,0.0004334646);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetBinError(19,0.0005048139);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetBinError(20,0.0004918234);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetEntries(14151);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetStats(0);

   ci = TColor::GetColor("#ff6633");
   h_dphipfmet_#gammapLjetssPoPHFcP__11->SetFillColor(ci);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->GetXaxis()->SetTitle("min#Delta#phi(jet,pf MET)");
   h_dphipfmet_#gammapLjetssPoPHFcP__11->GetXaxis()->SetLabelFont(42);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->GetXaxis()->SetLabelOffset(0.007);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->GetXaxis()->SetTitleSize(0.05);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->GetXaxis()->SetTickLength(0.025);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->GetXaxis()->SetTitleFont(42);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->GetYaxis()->SetTitle("a.u.");
   h_dphipfmet_#gammapLjetssPoPHFcP__11->GetYaxis()->SetLabelFont(42);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->GetYaxis()->SetLabelOffset(0.007);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->GetYaxis()->SetTitleSize(0.05);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->GetYaxis()->SetTickLength(0.025);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->GetYaxis()->SetTitleFont(42);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->GetZaxis()->SetLabelFont(42);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->GetZaxis()->SetLabelOffset(0.007);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->GetZaxis()->SetTitleSize(0.05);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->GetZaxis()->SetTickLength(0.025);
   h_dphipfmet_#gammapLjetssPoPHFcP__11->GetZaxis()->SetTitleFont(42);
   h->Add(h_dphipfmet_#gamma+jets (HF),"");
   
   TH1D *h_dphipfmet_#gammapLjetssPoPLFcP__12 = new TH1D("h_dphipfmet_#gammapLjetssPoPLFcP__12","",20,0,3.14);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetBinContent(1,0.08237488);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetBinContent(2,0.07174502);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetBinContent(3,0.06223198);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetBinContent(4,0.05396863);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetBinContent(5,0.05079911);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetBinContent(6,0.04618676);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetBinContent(7,0.04485702);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetBinContent(8,0.0405582);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetBinContent(9,0.0398274);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetBinContent(10,0.03773145);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetBinContent(11,0.03492241);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetBinContent(12,0.0355396);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetBinContent(13,0.03340707);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetBinContent(14,0.0320278);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetBinContent(15,0.03095404);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetBinContent(16,0.02928622);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetBinContent(17,0.03124944);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetBinContent(18,0.03180531);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetBinContent(19,0.02617232);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetBinContent(20,0.02398489);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetBinError(1,0.0009306498);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetBinError(2,0.0008858052);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetBinError(3,0.0008210164);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetBinError(4,0.0007719361);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetBinError(5,0.0007616784);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetBinError(6,0.0007380163);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetBinError(7,0.0008106947);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetBinError(8,0.0007796318);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetBinError(9,0.0008399357);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetBinError(10,0.0007876036);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetBinError(11,0.0007468053);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetBinError(12,0.0009661952);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetBinError(13,0.001002897);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetBinError(14,0.001082811);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetBinError(15,0.001054384);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetBinError(16,0.00111451);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetBinError(17,0.001319978);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetBinError(18,0.001454107);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetBinError(19,0.001232571);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetBinError(20,0.001268107);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetEntries(99281);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetStats(0);

   ci = TColor::GetColor("#339999");
   h_dphipfmet_#gammapLjetssPoPLFcP__12->SetFillColor(ci);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->GetXaxis()->SetTitle("min#Delta#phi(jet,pf MET)");
   h_dphipfmet_#gammapLjetssPoPLFcP__12->GetXaxis()->SetLabelFont(42);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->GetXaxis()->SetLabelOffset(0.007);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->GetXaxis()->SetTitleSize(0.05);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->GetXaxis()->SetTickLength(0.025);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->GetXaxis()->SetTitleFont(42);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->GetYaxis()->SetTitle("a.u.");
   h_dphipfmet_#gammapLjetssPoPLFcP__12->GetYaxis()->SetLabelFont(42);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->GetYaxis()->SetLabelOffset(0.007);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->GetYaxis()->SetTitleSize(0.05);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->GetYaxis()->SetTickLength(0.025);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->GetYaxis()->SetTitleFont(42);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->GetZaxis()->SetLabelFont(42);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->GetZaxis()->SetLabelOffset(0.007);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->GetZaxis()->SetTitleSize(0.05);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->GetZaxis()->SetTickLength(0.025);
   h_dphipfmet_#gammapLjetssPoPLFcP__12->GetZaxis()->SetTitleFont(42);
   h->Add(h_dphipfmet_#gamma+jets (LF),"");
   h->Draw("hist");
   
   TH1D *hsum__13 = new TH1D("hsum__13","",20,0,3.14);
   hsum__13->SetBinContent(1,0.09775896);
   hsum__13->SetBinContent(2,0.08630387);
   hsum__13->SetBinContent(3,0.07405964);
   hsum__13->SetBinContent(4,0.06490286);
   hsum__13->SetBinContent(5,0.06038976);
   hsum__13->SetBinContent(6,0.05465024);
   hsum__13->SetBinContent(7,0.05286259);
   hsum__13->SetBinContent(8,0.0482573);
   hsum__13->SetBinContent(9,0.04690689);
   hsum__13->SetBinContent(10,0.04441948);
   hsum__13->SetBinContent(11,0.04189545);
   hsum__13->SetBinContent(12,0.04220993);
   hsum__13->SetBinContent(13,0.0404341);
   hsum__13->SetBinContent(14,0.03805363);
   hsum__13->SetBinContent(15,0.03796895);
   hsum__13->SetBinContent(16,0.03509057);
   hsum__13->SetBinContent(17,0.03700539);
   hsum__13->SetBinContent(18,0.03677378);
   hsum__13->SetBinContent(19,0.0315635);
   hsum__13->SetBinContent(20,0.02849305);
   hsum__13->SetBinError(1,0.001011579);
   hsum__13->SetBinError(2,0.0009613959);
   hsum__13->SetBinError(3,0.0008863105);
   hsum__13->SetBinError(4,0.0008485312);
   hsum__13->SetBinError(5,0.0008199337);
   hsum__13->SetBinError(6,0.0007990747);
   hsum__13->SetBinError(7,0.000858865);
   hsum__13->SetBinError(8,0.0008443195);
   hsum__13->SetBinError(9,0.0008822385);
   hsum__13->SetBinError(10,0.0008404669);
   hsum__13->SetBinError(11,0.0008298365);
   hsum__13->SetBinError(12,0.001032047);
   hsum__13->SetBinError(13,0.0011338);
   hsum__13->SetBinError(14,0.001142023);
   hsum__13->SetBinError(15,0.001177247);
   hsum__13->SetBinError(16,0.00119268);
   hsum__13->SetBinError(17,0.001394699);
   hsum__13->SetBinError(18,0.001517363);
   hsum__13->SetBinError(19,0.001331966);
   hsum__13->SetBinError(20,0.001360164);
   hsum__13->SetEntries(668774);
   hsum__13->SetStats(0);

   ci = 1181;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   hsum__13->SetFillColor(ci);
   hsum__13->SetFillStyle(3003);
   hsum__13->SetLineWidth(0);
   hsum__13->GetXaxis()->SetTitle("min#Delta#phi(jet,pf MET)");
   hsum__13->GetXaxis()->SetLabelFont(42);
   hsum__13->GetXaxis()->SetLabelOffset(0.007);
   hsum__13->GetXaxis()->SetTitleSize(0.05);
   hsum__13->GetXaxis()->SetTickLength(0.025);
   hsum__13->GetXaxis()->SetTitleFont(42);
   hsum__13->GetYaxis()->SetTitle("a.u.");
   hsum__13->GetYaxis()->SetLabelFont(42);
   hsum__13->GetYaxis()->SetLabelOffset(0.007);
   hsum__13->GetYaxis()->SetTitleSize(0.05);
   hsum__13->GetYaxis()->SetTickLength(0.025);
   hsum__13->GetYaxis()->SetTitleFont(42);
   hsum__13->GetZaxis()->SetLabelFont(42);
   hsum__13->GetZaxis()->SetLabelOffset(0.007);
   hsum__13->GetZaxis()->SetTitleSize(0.05);
   hsum__13->GetZaxis()->SetTickLength(0.025);
   hsum__13->GetZaxis()->SetTitleFont(42);
   hsum__13->Draw("e2 same");
   
   TH1D *h_dphipfmet_Data__14 = new TH1D("h_dphipfmet_Data__14","",20,0,3.14);
   h_dphipfmet_Data__14->SetBinContent(1,0.08469287);
   h_dphipfmet_Data__14->SetBinContent(2,0.07638164);
   h_dphipfmet_Data__14->SetBinContent(3,0.0680091);
   h_dphipfmet_Data__14->SetBinContent(4,0.06226841);
   h_dphipfmet_Data__14->SetBinContent(5,0.05702865);
   h_dphipfmet_Data__14->SetBinContent(6,0.05358633);
   h_dphipfmet_Data__14->SetBinContent(7,0.05089916);
   h_dphipfmet_Data__14->SetBinContent(8,0.04900005);
   h_dphipfmet_Data__14->SetBinContent(9,0.04733571);
   h_dphipfmet_Data__14->SetBinContent(10,0.04705309);
   h_dphipfmet_Data__14->SetBinContent(11,0.04626802);
   h_dphipfmet_Data__14->SetBinContent(12,0.04499547);
   h_dphipfmet_Data__14->SetBinContent(13,0.04472929);
   h_dphipfmet_Data__14->SetBinContent(14,0.04385301);
   h_dphipfmet_Data__14->SetBinContent(15,0.04326384);
   h_dphipfmet_Data__14->SetBinContent(16,0.04124211);
   h_dphipfmet_Data__14->SetBinContent(17,0.0392443);
   h_dphipfmet_Data__14->SetBinContent(18,0.03731678);
   h_dphipfmet_Data__14->SetBinContent(19,0.03359931);
   h_dphipfmet_Data__14->SetBinContent(20,0.02923285);
   h_dphipfmet_Data__14->SetBinError(1,0.0003558744);
   h_dphipfmet_Data__14->SetBinError(2,0.0003379619);
   h_dphipfmet_Data__14->SetBinError(3,0.0003189017);
   h_dphipfmet_Data__14->SetBinError(4,0.0003051456);
   h_dphipfmet_Data__14->SetBinError(5,0.0002920249);
   h_dphipfmet_Data__14->SetBinError(6,0.0002830742);
   h_dphipfmet_Data__14->SetBinError(7,0.0002758853);
   h_dphipfmet_Data__14->SetBinError(8,0.0002706896);
   h_dphipfmet_Data__14->SetBinError(9,0.0002660528);
   h_dphipfmet_Data__14->SetBinError(10,0.0002652573);
   h_dphipfmet_Data__14->SetBinError(11,0.0002630351);
   h_dphipfmet_Data__14->SetBinError(12,0.0002593927);
   h_dphipfmet_Data__14->SetBinError(13,0.0002586243);
   h_dphipfmet_Data__14->SetBinError(14,0.0002560784);
   h_dphipfmet_Data__14->SetBinError(15,0.0002543524);
   h_dphipfmet_Data__14->SetBinError(16,0.0002483383);
   h_dphipfmet_Data__14->SetBinError(17,0.0002422488);
   h_dphipfmet_Data__14->SetBinError(18,0.0002362247);
   h_dphipfmet_Data__14->SetBinError(19,0.0002241499);
   h_dphipfmet_Data__14->SetBinError(20,0.0002090783);
   h_dphipfmet_Data__14->SetEntries(668734);
   h_dphipfmet_Data__14->SetStats(0);
   h_dphipfmet_Data__14->SetLineWidth(3);
   h_dphipfmet_Data__14->SetMarkerStyle(20);
   h_dphipfmet_Data__14->SetMarkerSize(2);
   h_dphipfmet_Data__14->GetXaxis()->SetTitle("min#Delta#phi(jet,pf MET)");
   h_dphipfmet_Data__14->GetXaxis()->SetLabelFont(42);
   h_dphipfmet_Data__14->GetXaxis()->SetLabelOffset(0.007);
   h_dphipfmet_Data__14->GetXaxis()->SetTitleSize(0.05);
   h_dphipfmet_Data__14->GetXaxis()->SetTickLength(0.025);
   h_dphipfmet_Data__14->GetXaxis()->SetTitleFont(42);
   h_dphipfmet_Data__14->GetYaxis()->SetTitle("a.u.");
   h_dphipfmet_Data__14->GetYaxis()->SetLabelFont(42);
   h_dphipfmet_Data__14->GetYaxis()->SetLabelOffset(0.007);
   h_dphipfmet_Data__14->GetYaxis()->SetTitleSize(0.05);
   h_dphipfmet_Data__14->GetYaxis()->SetTickLength(0.025);
   h_dphipfmet_Data__14->GetYaxis()->SetTitleFont(42);
   h_dphipfmet_Data__14->GetZaxis()->SetLabelFont(42);
   h_dphipfmet_Data__14->GetZaxis()->SetLabelOffset(0.007);
   h_dphipfmet_Data__14->GetZaxis()->SetTitleSize(0.05);
   h_dphipfmet_Data__14->GetZaxis()->SetTickLength(0.025);
   h_dphipfmet_Data__14->GetZaxis()->SetTitleFont(42);
   h_dphipfmet_Data__14->Draw("elp same");
   
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
   entry=leg->AddEntry("h_dphipfmet_#gamma+jets (LF)","#gamma+jets (LF)","F");

   ci = TColor::GetColor("#339999");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_dphipfmet_#gamma+jets (HF)","#gamma+jets (HF)","F");

   ci = TColor::GetColor("#ff6633");
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
   entry=leg->AddEntry("h_dphipfmet_#gamma+jets (LF)","#gamma+jets (LF)","F");

   ci = TColor::GetColor("#339999");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_dphipfmet_#gamma+jets (HF)","#gamma+jets (HF)","F");

   ci = TColor::GetColor("#ff6633");
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
   
   TH1D *ratio__15 = new TH1D("ratio__15","",20,0,3.14);
   ratio__15->SetBinContent(1,-0.1336562);
   ratio__15->SetBinContent(2,-0.1149686);
   ratio__15->SetBinContent(3,-0.08169824);
   ratio__15->SetBinContent(4,-0.04059076);
   ratio__15->SetBinContent(5,-0.05565697);
   ratio__15->SetBinContent(6,-0.01946765);
   ratio__15->SetBinContent(7,-0.03714216);
   ratio__15->SetBinContent(8,0.01539147);
   ratio__15->SetBinContent(9,0.009141922);
   ratio__15->SetBinContent(10,0.05928946);
   ratio__15->SetBinContent(11,0.1043688);
   ratio__15->SetBinContent(12,0.06599236);
   ratio__15->SetBinContent(13,0.1062269);
   ratio__15->SetBinContent(14,0.1524003);
   ratio__15->SetBinContent(15,0.1394532);
   ratio__15->SetBinContent(16,0.1753047);
   ratio__15->SetBinContent(17,0.06050229);
   ratio__15->SetBinContent(18,0.01476586);
   ratio__15->SetBinContent(19,0.0644989);
   ratio__15->SetBinContent(20,0.02596426);
   ratio__15->SetBinError(1,0.0001);
   ratio__15->SetBinError(2,0.0001);
   ratio__15->SetBinError(3,0.0001);
   ratio__15->SetBinError(4,0.0001);
   ratio__15->SetBinError(5,0.0001);
   ratio__15->SetBinError(6,0.0001);
   ratio__15->SetBinError(7,0.0001);
   ratio__15->SetBinError(8,0.0001);
   ratio__15->SetBinError(9,0.0001);
   ratio__15->SetBinError(10,0.0001);
   ratio__15->SetBinError(11,0.0001);
   ratio__15->SetBinError(12,0.0001);
   ratio__15->SetBinError(13,0.0001);
   ratio__15->SetBinError(14,0.0001);
   ratio__15->SetBinError(15,0.0001);
   ratio__15->SetBinError(16,0.0001);
   ratio__15->SetBinError(17,0.0001);
   ratio__15->SetBinError(18,0.0001);
   ratio__15->SetBinError(19,0.0001);
   ratio__15->SetBinError(20,0.0001);
   ratio__15->SetMinimum(-0.48);
   ratio__15->SetMaximum(0.48);
   ratio__15->SetEntries(668754);
   ratio__15->SetStats(0);
   ratio__15->SetLineWidth(3);
   ratio__15->SetMarkerStyle(20);
   ratio__15->SetMarkerSize(2);
   ratio__15->GetXaxis()->SetTitle("min#Delta#phi(jet,pf MET)");
   ratio__15->GetXaxis()->SetLabelFont(43);
   ratio__15->GetXaxis()->SetLabelOffset(0.007);
   ratio__15->GetXaxis()->SetLabelSize(30);
   ratio__15->GetXaxis()->SetTitleSize(40);
   ratio__15->GetXaxis()->SetTickLength(0.025);
   ratio__15->GetXaxis()->SetTitleOffset(5);
   ratio__15->GetXaxis()->SetTitleFont(43);
   ratio__15->GetYaxis()->SetTitle("#frac{Data-Exp}{Exp}");
   ratio__15->GetYaxis()->SetNdivisions(5);
   ratio__15->GetYaxis()->SetLabelFont(43);
   ratio__15->GetYaxis()->SetLabelOffset(0.007);
   ratio__15->GetYaxis()->SetLabelSize(30);
   ratio__15->GetYaxis()->SetTitleSize(40);
   ratio__15->GetYaxis()->SetTickLength(0.025);
   ratio__15->GetYaxis()->SetTitleOffset(2.5);
   ratio__15->GetYaxis()->SetTitleFont(43);
   ratio__15->GetZaxis()->SetLabelFont(42);
   ratio__15->GetZaxis()->SetLabelOffset(0.007);
   ratio__15->GetZaxis()->SetTitleSize(0.05);
   ratio__15->GetZaxis()->SetTickLength(0.025);
   ratio__15->GetZaxis()->SetTitleFont(42);
   ratio__15->Draw("elp");
   
   TH1D *zero__16 = new TH1D("zero__16","",20,0,3.14);
   zero__16->SetBinError(1,0.0003558744);
   zero__16->SetBinError(2,0.0003379619);
   zero__16->SetBinError(3,0.0003189017);
   zero__16->SetBinError(4,0.0003051456);
   zero__16->SetBinError(5,0.0002920249);
   zero__16->SetBinError(6,0.0002830742);
   zero__16->SetBinError(7,0.0002758853);
   zero__16->SetBinError(8,0.0002706896);
   zero__16->SetBinError(9,0.0002660528);
   zero__16->SetBinError(10,0.0002652573);
   zero__16->SetBinError(11,0.0002630351);
   zero__16->SetBinError(12,0.0002593927);
   zero__16->SetBinError(13,0.0002586243);
   zero__16->SetBinError(14,0.0002560784);
   zero__16->SetBinError(15,0.0002543524);
   zero__16->SetBinError(16,0.0002483383);
   zero__16->SetBinError(17,0.0002422488);
   zero__16->SetBinError(18,0.0002362247);
   zero__16->SetBinError(19,0.0002241499);
   zero__16->SetBinError(20,0.0002090783);
   zero__16->SetEntries(668754);
   zero__16->SetStats(0);
   zero__16->SetLineWidth(3);
   zero__16->SetMarkerStyle(20);
   zero__16->SetMarkerSize(2);
   zero__16->GetXaxis()->SetTitle("min#Delta#phi(jet,pf MET)");
   zero__16->GetXaxis()->SetLabelFont(42);
   zero__16->GetXaxis()->SetLabelOffset(0.007);
   zero__16->GetXaxis()->SetTitleSize(0.05);
   zero__16->GetXaxis()->SetTickLength(0.025);
   zero__16->GetXaxis()->SetTitleFont(42);
   zero__16->GetYaxis()->SetTitle("a.u.");
   zero__16->GetYaxis()->SetLabelFont(42);
   zero__16->GetYaxis()->SetLabelOffset(0.007);
   zero__16->GetYaxis()->SetTitleSize(0.05);
   zero__16->GetYaxis()->SetTickLength(0.025);
   zero__16->GetYaxis()->SetTitleFont(42);
   zero__16->GetZaxis()->SetLabelFont(42);
   zero__16->GetZaxis()->SetLabelOffset(0.007);
   zero__16->GetZaxis()->SetTitleSize(0.05);
   zero__16->GetZaxis()->SetTickLength(0.025);
   zero__16->GetZaxis()->SetTitleFont(42);
   zero__16->Draw("hist same");
   
   TH1D *sumratioup__17 = new TH1D("sumratioup__17","",20,0,3.14);
   sumratioup__17->SetBinContent(1,0.01034768);
   sumratioup__17->SetBinContent(2,0.01113966);
   sumratioup__17->SetBinContent(3,0.01196752);
   sumratioup__17->SetBinContent(4,0.01307386);
   sumratioup__17->SetBinContent(5,0.01357736);
   sumratioup__17->SetBinContent(6,0.01462161);
   sumratioup__17->SetBinContent(7,0.01624712);
   sumratioup__17->SetBinContent(8,0.0174962);
   sumratioup__17->SetBinContent(9,0.01880829);
   sumratioup__17->SetBinContent(10,0.01892113);
   sumratioup__17->SetBinContent(11,0.01980732);
   sumratioup__17->SetBinContent(12,0.02445033);
   sumratioup__17->SetBinContent(13,0.0280407);
   sumratioup__17->SetBinContent(14,0.03001088);
   sumratioup__17->SetBinContent(15,0.03100552);
   sumratioup__17->SetBinContent(16,0.03398861);
   sumratioup__17->SetBinContent(17,0.03768909);
   sumratioup__17->SetBinContent(18,0.0412621);
   sumratioup__17->SetBinContent(19,0.04219959);
   sumratioup__17->SetBinContent(20,0.0477367);
   sumratioup__17->SetBinError(1,0.001011579);
   sumratioup__17->SetBinError(2,0.0009613959);
   sumratioup__17->SetBinError(3,0.0008863105);
   sumratioup__17->SetBinError(4,0.0008485312);
   sumratioup__17->SetBinError(5,0.0008199337);
   sumratioup__17->SetBinError(6,0.0007990747);
   sumratioup__17->SetBinError(7,0.000858865);
   sumratioup__17->SetBinError(8,0.0008443195);
   sumratioup__17->SetBinError(9,0.0008822385);
   sumratioup__17->SetBinError(10,0.0008404669);
   sumratioup__17->SetBinError(11,0.0008298365);
   sumratioup__17->SetBinError(12,0.001032047);
   sumratioup__17->SetBinError(13,0.0011338);
   sumratioup__17->SetBinError(14,0.001142023);
   sumratioup__17->SetBinError(15,0.001177247);
   sumratioup__17->SetBinError(16,0.00119268);
   sumratioup__17->SetBinError(17,0.001394699);
   sumratioup__17->SetBinError(18,0.001517363);
   sumratioup__17->SetBinError(19,0.001331966);
   sumratioup__17->SetBinError(20,0.001360164);
   sumratioup__17->SetEntries(668794);
   sumratioup__17->SetStats(0);

   ci = 1181;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratioup__17->SetFillColor(ci);
   sumratioup__17->SetFillStyle(3003);
   sumratioup__17->GetXaxis()->SetTitle("min#Delta#phi(jet,pf MET)");
   sumratioup__17->GetXaxis()->SetLabelFont(42);
   sumratioup__17->GetXaxis()->SetLabelOffset(0.007);
   sumratioup__17->GetXaxis()->SetTitleSize(0.05);
   sumratioup__17->GetXaxis()->SetTickLength(0.025);
   sumratioup__17->GetXaxis()->SetTitleFont(42);
   sumratioup__17->GetYaxis()->SetTitle("a.u.");
   sumratioup__17->GetYaxis()->SetLabelFont(42);
   sumratioup__17->GetYaxis()->SetLabelOffset(0.007);
   sumratioup__17->GetYaxis()->SetTitleSize(0.05);
   sumratioup__17->GetYaxis()->SetTickLength(0.025);
   sumratioup__17->GetYaxis()->SetTitleFont(42);
   sumratioup__17->GetZaxis()->SetLabelFont(42);
   sumratioup__17->GetZaxis()->SetLabelOffset(0.007);
   sumratioup__17->GetZaxis()->SetTitleSize(0.05);
   sumratioup__17->GetZaxis()->SetTickLength(0.025);
   sumratioup__17->GetZaxis()->SetTitleFont(42);
   sumratioup__17->Draw("hist same");
   
   TH1D *sumratiodown__18 = new TH1D("sumratiodown__18","",20,0,3.14);
   sumratiodown__18->SetBinContent(1,-0.01034768);
   sumratiodown__18->SetBinContent(2,-0.01113966);
   sumratiodown__18->SetBinContent(3,-0.01196752);
   sumratiodown__18->SetBinContent(4,-0.01307386);
   sumratiodown__18->SetBinContent(5,-0.01357736);
   sumratiodown__18->SetBinContent(6,-0.01462161);
   sumratiodown__18->SetBinContent(7,-0.01624712);
   sumratiodown__18->SetBinContent(8,-0.0174962);
   sumratiodown__18->SetBinContent(9,-0.01880829);
   sumratiodown__18->SetBinContent(10,-0.01892113);
   sumratiodown__18->SetBinContent(11,-0.01980732);
   sumratiodown__18->SetBinContent(12,-0.02445033);
   sumratiodown__18->SetBinContent(13,-0.0280407);
   sumratiodown__18->SetBinContent(14,-0.03001088);
   sumratiodown__18->SetBinContent(15,-0.03100552);
   sumratiodown__18->SetBinContent(16,-0.03398861);
   sumratiodown__18->SetBinContent(17,-0.03768909);
   sumratiodown__18->SetBinContent(18,-0.0412621);
   sumratiodown__18->SetBinContent(19,-0.04219959);
   sumratiodown__18->SetBinContent(20,-0.0477367);
   sumratiodown__18->SetBinError(1,0.001011579);
   sumratiodown__18->SetBinError(2,0.0009613959);
   sumratiodown__18->SetBinError(3,0.0008863105);
   sumratiodown__18->SetBinError(4,0.0008485312);
   sumratiodown__18->SetBinError(5,0.0008199337);
   sumratiodown__18->SetBinError(6,0.0007990747);
   sumratiodown__18->SetBinError(7,0.000858865);
   sumratiodown__18->SetBinError(8,0.0008443195);
   sumratiodown__18->SetBinError(9,0.0008822385);
   sumratiodown__18->SetBinError(10,0.0008404669);
   sumratiodown__18->SetBinError(11,0.0008298365);
   sumratiodown__18->SetBinError(12,0.001032047);
   sumratiodown__18->SetBinError(13,0.0011338);
   sumratiodown__18->SetBinError(14,0.001142023);
   sumratiodown__18->SetBinError(15,0.001177247);
   sumratiodown__18->SetBinError(16,0.00119268);
   sumratiodown__18->SetBinError(17,0.001394699);
   sumratiodown__18->SetBinError(18,0.001517363);
   sumratiodown__18->SetBinError(19,0.001331966);
   sumratiodown__18->SetBinError(20,0.001360164);
   sumratiodown__18->SetEntries(668794);
   sumratiodown__18->SetStats(0);

   ci = 1181;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratiodown__18->SetFillColor(ci);
   sumratiodown__18->SetFillStyle(3003);
   sumratiodown__18->GetXaxis()->SetTitle("min#Delta#phi(jet,pf MET)");
   sumratiodown__18->GetXaxis()->SetLabelFont(42);
   sumratiodown__18->GetXaxis()->SetLabelOffset(0.007);
   sumratiodown__18->GetXaxis()->SetTitleSize(0.05);
   sumratiodown__18->GetXaxis()->SetTickLength(0.025);
   sumratiodown__18->GetXaxis()->SetTitleFont(42);
   sumratiodown__18->GetYaxis()->SetTitle("a.u.");
   sumratiodown__18->GetYaxis()->SetLabelFont(42);
   sumratiodown__18->GetYaxis()->SetLabelOffset(0.007);
   sumratiodown__18->GetYaxis()->SetTitleSize(0.05);
   sumratiodown__18->GetYaxis()->SetTickLength(0.025);
   sumratiodown__18->GetYaxis()->SetTitleFont(42);
   sumratiodown__18->GetZaxis()->SetLabelFont(42);
   sumratiodown__18->GetZaxis()->SetLabelOffset(0.007);
   sumratiodown__18->GetZaxis()->SetTitleSize(0.05);
   sumratiodown__18->GetZaxis()->SetTickLength(0.025);
   sumratiodown__18->GetZaxis()->SetTitleFont(42);
   sumratiodown__18->Draw("hist same");
   
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
   -0.1336562,
   -0.1149686,
   -0.08169824,
   -0.04059076,
   -0.05565697,
   -0.01946765,
   -0.03714216,
   0.01539147,
   0.009141922,
   0.05928946,
   0.1043688,
   0.06599236,
   0.1062269,
   0.1524003,
   0.1394532,
   0.1753047,
   0.06050229,
   0.01476586,
   0.0644989,
   0.02596426};
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
   0.003640325,
   0.003915953,
   0.004306012,
   0.004701574,
   0.004835668,
   0.005179743,
   0.005218914,
   0.005609298,
   0.005671933,
   0.005971644,
   0.006278371,
   0.006145299,
   0.006396192,
   0.006729409,
   0.006698958,
   0.007077067,
   0.006546311,
   0.006423727,
   0.007101553,
   0.007337869};
   TGraphErrors *gre = new TGraphErrors(20,Graph0_fx1002,Graph0_fy1002,Graph0_fex1002,Graph0_fey1002);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","Graph",100,0,3.3598);
   Graph_Graph1002->SetMinimum(-0.1692644);
   Graph_Graph1002->SetMaximum(0.2143495);
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
