void photon_dphipfmet()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sun Dec 11 15:15:10 2016) by ROOT version6.06/01
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,1200,1440);
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
   pad1->Range(-0.58875,0,3.33625,0.220746);
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
   h->SetMaximum(0.1955179);
   
   TH1F *h_stack_1 = new TH1F("h_stack_1","",20,0,3.14);
   h_stack_1->SetMinimum(0);
   h_stack_1->SetMaximum(0.2052938);
   h_stack_1->SetDirectory(0);
   h_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h_stack_1->SetLineColor(ci);
   h_stack_1->GetXaxis()->SetLabelFont(42);
   h_stack_1->GetXaxis()->SetLabelOffset(0.007);
   h_stack_1->GetXaxis()->SetTitleSize(0.05);
   h_stack_1->GetXaxis()->SetTickLength(0.025);
   h_stack_1->GetXaxis()->SetTitleFont(42);
   h_stack_1->GetYaxis()->SetTitle("a.u.");
   h_stack_1->GetYaxis()->SetLabelFont(42);
   h_stack_1->GetYaxis()->SetLabelOffset(0.007);
   h_stack_1->GetYaxis()->SetTitleSize(0.05);
   h_stack_1->GetYaxis()->SetTickLength(0.025);
   h_stack_1->GetYaxis()->SetTitleOffset(1.5);
   h_stack_1->GetYaxis()->SetTitleFont(42);
   h_stack_1->GetZaxis()->SetLabelFont(42);
   h_stack_1->GetZaxis()->SetLabelOffset(0.007);
   h_stack_1->GetZaxis()->SetTitleSize(0.05);
   h_stack_1->GetZaxis()->SetTickLength(0.025);
   h_stack_1->GetZaxis()->SetTitleFont(42);
   h->SetHistogram(h_stack_1);
   
   
   TH1D *h_dphipfmet_QCD__1 = new TH1D("h_dphipfmet_QCD__1","",20,0,3.14);
   h_dphipfmet_QCD__1->SetBinContent(1,0.002657864);
   h_dphipfmet_QCD__1->SetBinContent(2,0.002418286);
   h_dphipfmet_QCD__1->SetBinContent(3,0.002168631);
   h_dphipfmet_QCD__1->SetBinContent(4,0.001996616);
   h_dphipfmet_QCD__1->SetBinContent(5,0.001845164);
   h_dphipfmet_QCD__1->SetBinContent(6,0.001745002);
   h_dphipfmet_QCD__1->SetBinContent(7,0.001666472);
   h_dphipfmet_QCD__1->SetBinContent(8,0.001612365);
   h_dphipfmet_QCD__1->SetBinContent(9,0.001565452);
   h_dphipfmet_QCD__1->SetBinContent(10,0.001570299);
   h_dphipfmet_QCD__1->SetBinContent(11,0.001555453);
   h_dphipfmet_QCD__1->SetBinContent(12,0.001531575);
   h_dphipfmet_QCD__1->SetBinContent(13,0.00153672);
   h_dphipfmet_QCD__1->SetBinContent(14,0.00152292);
   h_dphipfmet_QCD__1->SetBinContent(15,0.00151827);
   h_dphipfmet_QCD__1->SetBinContent(16,0.001462763);
   h_dphipfmet_QCD__1->SetBinContent(17,0.001406241);
   h_dphipfmet_QCD__1->SetBinContent(18,0.001348073);
   h_dphipfmet_QCD__1->SetBinContent(19,0.001224365);
   h_dphipfmet_QCD__1->SetBinContent(20,0.00107402);
   h_dphipfmet_QCD__1->SetBinError(1,1.131016e-05);
   h_dphipfmet_QCD__1->SetBinError(2,1.082921e-05);
   h_dphipfmet_QCD__1->SetBinError(3,1.028672e-05);
   h_dphipfmet_QCD__1->SetBinError(4,9.894885e-06);
   h_dphipfmet_QCD__1->SetBinError(5,9.548603e-06);
   h_dphipfmet_QCD__1->SetBinError(6,9.314376e-06);
   h_dphipfmet_QCD__1->SetBinError(7,9.125159e-06);
   h_dphipfmet_QCD__1->SetBinError(8,8.99522e-06);
   h_dphipfmet_QCD__1->SetBinError(9,8.884018e-06);
   h_dphipfmet_QCD__1->SetBinError(10,8.935629e-06);
   h_dphipfmet_QCD__1->SetBinError(11,8.924945e-06);
   h_dphipfmet_QCD__1->SetBinError(12,8.907952e-06);
   h_dphipfmet_QCD__1->SetBinError(13,8.962408e-06);
   h_dphipfmet_QCD__1->SetBinError(14,8.966027e-06);
   h_dphipfmet_QCD__1->SetBinError(15,8.992828e-06);
   h_dphipfmet_QCD__1->SetBinError(16,8.866465e-06);
   h_dphipfmet_QCD__1->SetBinError(17,8.729437e-06);
   h_dphipfmet_QCD__1->SetBinError(18,8.576755e-06);
   h_dphipfmet_QCD__1->SetBinError(19,8.202742e-06);
   h_dphipfmet_QCD__1->SetBinError(20,7.707159e-06);
   h_dphipfmet_QCD__1->SetEntries(668734);
   h_dphipfmet_QCD__1->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_dphipfmet_QCD__1->SetFillColor(ci);
   h_dphipfmet_QCD__1->GetXaxis()->SetTitle("min#Delta#phi(jet,pf MET)");
   h_dphipfmet_QCD__1->GetXaxis()->SetLabelFont(42);
   h_dphipfmet_QCD__1->GetXaxis()->SetLabelOffset(0.007);
   h_dphipfmet_QCD__1->GetXaxis()->SetTitleSize(0.05);
   h_dphipfmet_QCD__1->GetXaxis()->SetTickLength(0.025);
   h_dphipfmet_QCD__1->GetXaxis()->SetTitleFont(42);
   h_dphipfmet_QCD__1->GetYaxis()->SetTitle("a.u.");
   h_dphipfmet_QCD__1->GetYaxis()->SetLabelFont(42);
   h_dphipfmet_QCD__1->GetYaxis()->SetLabelOffset(0.007);
   h_dphipfmet_QCD__1->GetYaxis()->SetTitleSize(0.05);
   h_dphipfmet_QCD__1->GetYaxis()->SetTickLength(0.025);
   h_dphipfmet_QCD__1->GetYaxis()->SetTitleFont(42);
   h_dphipfmet_QCD__1->GetZaxis()->SetLabelFont(42);
   h_dphipfmet_QCD__1->GetZaxis()->SetLabelOffset(0.007);
   h_dphipfmet_QCD__1->GetZaxis()->SetTitleSize(0.05);
   h_dphipfmet_QCD__1->GetZaxis()->SetTickLength(0.025);
   h_dphipfmet_QCD__1->GetZaxis()->SetTitleFont(42);
   h->Add(h_dphipfmet_QCD,"");
   
   TH1D *h_dphipfmet_#gammapLjetssPoPHFcP__2 = new TH1D("h_dphipfmet_#gammapLjetssPoPHFcP__2","",20,0,3.14);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetBinContent(1,0.01272622);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetBinContent(2,0.01214057);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetBinContent(3,0.009659031);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetBinContent(4,0.008937626);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetBinContent(5,0.007745486);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetBinContent(6,0.006718477);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetBinContent(7,0.006339099);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetBinContent(8,0.006086736);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetBinContent(9,0.005514038);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetBinContent(10,0.005117733);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetBinContent(11,0.005417585);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetBinContent(12,0.005138754);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetBinContent(13,0.005490315);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetBinContent(14,0.004502907);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetBinContent(15,0.005496637);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetBinContent(16,0.004341589);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetBinContent(17,0.004349713);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetBinContent(18,0.003620399);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetBinContent(19,0.004166816);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetBinContent(20,0.003434136);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetBinError(1,0.0003963008);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetBinError(2,0.0003735158);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetBinError(3,0.0003337253);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetBinError(4,0.0003521675);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetBinError(5,0.0003033909);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetBinError(6,0.0003062115);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetBinError(7,0.0002834432);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetBinError(8,0.0003239886);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetBinError(9,0.0002697662);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetBinError(10,0.0002932326);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetBinError(11,0.0003617053);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetBinError(12,0.0003626408);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetBinError(13,0.0005287914);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetBinError(14,0.0003628449);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetBinError(15,0.0005235496);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetBinError(16,0.0004245868);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetBinError(17,0.0004502991);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetBinError(18,0.0004334646);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetBinError(19,0.0005048139);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetBinError(20,0.0004918234);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetEntries(14151);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetStats(0);

   ci = TColor::GetColor("#ff6633");
   h_dphipfmet_#gammapLjetssPoPHFcP__2->SetFillColor(ci);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->GetXaxis()->SetTitle("min#Delta#phi(jet,pf MET)");
   h_dphipfmet_#gammapLjetssPoPHFcP__2->GetXaxis()->SetLabelFont(42);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->GetXaxis()->SetLabelOffset(0.007);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->GetXaxis()->SetTitleSize(0.05);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->GetXaxis()->SetTickLength(0.025);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->GetXaxis()->SetTitleFont(42);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->GetYaxis()->SetTitle("a.u.");
   h_dphipfmet_#gammapLjetssPoPHFcP__2->GetYaxis()->SetLabelFont(42);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->GetYaxis()->SetLabelOffset(0.007);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->GetYaxis()->SetTitleSize(0.05);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->GetYaxis()->SetTickLength(0.025);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->GetYaxis()->SetTitleFont(42);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->GetZaxis()->SetLabelFont(42);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->GetZaxis()->SetLabelOffset(0.007);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->GetZaxis()->SetTitleSize(0.05);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->GetZaxis()->SetTickLength(0.025);
   h_dphipfmet_#gammapLjetssPoPHFcP__2->GetZaxis()->SetTitleFont(42);
   h->Add(h_dphipfmet_#gamma+jets (HF),"");
   
   TH1D *h_dphipfmet_#gammapLjetssPoPLFcP__3 = new TH1D("h_dphipfmet_#gammapLjetssPoPLFcP__3","",20,0,3.14);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetBinContent(1,0.08237488);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetBinContent(2,0.07174502);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetBinContent(3,0.06223198);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetBinContent(4,0.05396863);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetBinContent(5,0.05079911);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetBinContent(6,0.04618676);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetBinContent(7,0.04485702);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetBinContent(8,0.0405582);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetBinContent(9,0.0398274);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetBinContent(10,0.03773145);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetBinContent(11,0.03492241);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetBinContent(12,0.0355396);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetBinContent(13,0.03340707);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetBinContent(14,0.0320278);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetBinContent(15,0.03095404);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetBinContent(16,0.02928622);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetBinContent(17,0.03124944);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetBinContent(18,0.03180531);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetBinContent(19,0.02617232);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetBinContent(20,0.02398489);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetBinError(1,0.0009306498);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetBinError(2,0.0008858052);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetBinError(3,0.0008210164);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetBinError(4,0.0007719361);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetBinError(5,0.0007616784);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetBinError(6,0.0007380163);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetBinError(7,0.0008106947);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetBinError(8,0.0007796318);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetBinError(9,0.0008399357);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetBinError(10,0.0007876036);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetBinError(11,0.0007468053);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetBinError(12,0.0009661952);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetBinError(13,0.001002897);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetBinError(14,0.001082811);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetBinError(15,0.001054384);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetBinError(16,0.00111451);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetBinError(17,0.001319978);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetBinError(18,0.001454107);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetBinError(19,0.001232571);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetBinError(20,0.001268107);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetEntries(99281);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetStats(0);

   ci = TColor::GetColor("#339999");
   h_dphipfmet_#gammapLjetssPoPLFcP__3->SetFillColor(ci);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->GetXaxis()->SetTitle("min#Delta#phi(jet,pf MET)");
   h_dphipfmet_#gammapLjetssPoPLFcP__3->GetXaxis()->SetLabelFont(42);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->GetXaxis()->SetLabelOffset(0.007);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->GetXaxis()->SetTitleSize(0.05);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->GetXaxis()->SetTickLength(0.025);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->GetXaxis()->SetTitleFont(42);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->GetYaxis()->SetTitle("a.u.");
   h_dphipfmet_#gammapLjetssPoPLFcP__3->GetYaxis()->SetLabelFont(42);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->GetYaxis()->SetLabelOffset(0.007);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->GetYaxis()->SetTitleSize(0.05);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->GetYaxis()->SetTickLength(0.025);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->GetYaxis()->SetTitleFont(42);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->GetZaxis()->SetLabelFont(42);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->GetZaxis()->SetLabelOffset(0.007);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->GetZaxis()->SetTitleSize(0.05);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->GetZaxis()->SetTickLength(0.025);
   h_dphipfmet_#gammapLjetssPoPLFcP__3->GetZaxis()->SetTitleFont(42);
   h->Add(h_dphipfmet_#gamma+jets (LF),"");
   h->Draw("hist");
   
   TH1D *hsum__4 = new TH1D("hsum__4","",20,0,3.14);
   hsum__4->SetBinContent(1,0.09775896);
   hsum__4->SetBinContent(2,0.08630387);
   hsum__4->SetBinContent(3,0.07405964);
   hsum__4->SetBinContent(4,0.06490286);
   hsum__4->SetBinContent(5,0.06038976);
   hsum__4->SetBinContent(6,0.05465024);
   hsum__4->SetBinContent(7,0.05286259);
   hsum__4->SetBinContent(8,0.0482573);
   hsum__4->SetBinContent(9,0.04690689);
   hsum__4->SetBinContent(10,0.04441948);
   hsum__4->SetBinContent(11,0.04189545);
   hsum__4->SetBinContent(12,0.04220993);
   hsum__4->SetBinContent(13,0.0404341);
   hsum__4->SetBinContent(14,0.03805363);
   hsum__4->SetBinContent(15,0.03796895);
   hsum__4->SetBinContent(16,0.03509057);
   hsum__4->SetBinContent(17,0.03700539);
   hsum__4->SetBinContent(18,0.03677378);
   hsum__4->SetBinContent(19,0.0315635);
   hsum__4->SetBinContent(20,0.02849305);
   hsum__4->SetBinError(1,0.001011579);
   hsum__4->SetBinError(2,0.0009613959);
   hsum__4->SetBinError(3,0.0008863105);
   hsum__4->SetBinError(4,0.0008485312);
   hsum__4->SetBinError(5,0.0008199337);
   hsum__4->SetBinError(6,0.0007990747);
   hsum__4->SetBinError(7,0.000858865);
   hsum__4->SetBinError(8,0.0008443195);
   hsum__4->SetBinError(9,0.0008822385);
   hsum__4->SetBinError(10,0.0008404669);
   hsum__4->SetBinError(11,0.0008298365);
   hsum__4->SetBinError(12,0.001032047);
   hsum__4->SetBinError(13,0.0011338);
   hsum__4->SetBinError(14,0.001142023);
   hsum__4->SetBinError(15,0.001177247);
   hsum__4->SetBinError(16,0.00119268);
   hsum__4->SetBinError(17,0.001394699);
   hsum__4->SetBinError(18,0.001517363);
   hsum__4->SetBinError(19,0.001331966);
   hsum__4->SetBinError(20,0.001360164);
   hsum__4->SetEntries(668774);
   hsum__4->SetStats(0);

   ci = 1180;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   hsum__4->SetFillColor(ci);
   hsum__4->SetFillStyle(3003);
   hsum__4->SetLineWidth(0);
   hsum__4->GetXaxis()->SetTitle("min#Delta#phi(jet,pf MET)");
   hsum__4->GetXaxis()->SetLabelFont(42);
   hsum__4->GetXaxis()->SetLabelOffset(0.007);
   hsum__4->GetXaxis()->SetTitleSize(0.05);
   hsum__4->GetXaxis()->SetTickLength(0.025);
   hsum__4->GetXaxis()->SetTitleFont(42);
   hsum__4->GetYaxis()->SetTitle("a.u.");
   hsum__4->GetYaxis()->SetLabelFont(42);
   hsum__4->GetYaxis()->SetLabelOffset(0.007);
   hsum__4->GetYaxis()->SetTitleSize(0.05);
   hsum__4->GetYaxis()->SetTickLength(0.025);
   hsum__4->GetYaxis()->SetTitleFont(42);
   hsum__4->GetZaxis()->SetLabelFont(42);
   hsum__4->GetZaxis()->SetLabelOffset(0.007);
   hsum__4->GetZaxis()->SetTitleSize(0.05);
   hsum__4->GetZaxis()->SetTickLength(0.025);
   hsum__4->GetZaxis()->SetTitleFont(42);
   hsum__4->Draw("e2 same");
   
   TH1D *h_dphipfmet_Data__5 = new TH1D("h_dphipfmet_Data__5","",20,0,3.14);
   h_dphipfmet_Data__5->SetBinContent(1,0.08469287);
   h_dphipfmet_Data__5->SetBinContent(2,0.07638164);
   h_dphipfmet_Data__5->SetBinContent(3,0.0680091);
   h_dphipfmet_Data__5->SetBinContent(4,0.06226841);
   h_dphipfmet_Data__5->SetBinContent(5,0.05702865);
   h_dphipfmet_Data__5->SetBinContent(6,0.05358633);
   h_dphipfmet_Data__5->SetBinContent(7,0.05089916);
   h_dphipfmet_Data__5->SetBinContent(8,0.04900005);
   h_dphipfmet_Data__5->SetBinContent(9,0.04733571);
   h_dphipfmet_Data__5->SetBinContent(10,0.04705309);
   h_dphipfmet_Data__5->SetBinContent(11,0.04626802);
   h_dphipfmet_Data__5->SetBinContent(12,0.04499547);
   h_dphipfmet_Data__5->SetBinContent(13,0.04472929);
   h_dphipfmet_Data__5->SetBinContent(14,0.04385301);
   h_dphipfmet_Data__5->SetBinContent(15,0.04326384);
   h_dphipfmet_Data__5->SetBinContent(16,0.04124211);
   h_dphipfmet_Data__5->SetBinContent(17,0.0392443);
   h_dphipfmet_Data__5->SetBinContent(18,0.03731678);
   h_dphipfmet_Data__5->SetBinContent(19,0.03359931);
   h_dphipfmet_Data__5->SetBinContent(20,0.02923285);
   h_dphipfmet_Data__5->SetBinError(1,0.0003558744);
   h_dphipfmet_Data__5->SetBinError(2,0.0003379619);
   h_dphipfmet_Data__5->SetBinError(3,0.0003189017);
   h_dphipfmet_Data__5->SetBinError(4,0.0003051456);
   h_dphipfmet_Data__5->SetBinError(5,0.0002920249);
   h_dphipfmet_Data__5->SetBinError(6,0.0002830742);
   h_dphipfmet_Data__5->SetBinError(7,0.0002758853);
   h_dphipfmet_Data__5->SetBinError(8,0.0002706896);
   h_dphipfmet_Data__5->SetBinError(9,0.0002660528);
   h_dphipfmet_Data__5->SetBinError(10,0.0002652573);
   h_dphipfmet_Data__5->SetBinError(11,0.0002630351);
   h_dphipfmet_Data__5->SetBinError(12,0.0002593927);
   h_dphipfmet_Data__5->SetBinError(13,0.0002586243);
   h_dphipfmet_Data__5->SetBinError(14,0.0002560784);
   h_dphipfmet_Data__5->SetBinError(15,0.0002543524);
   h_dphipfmet_Data__5->SetBinError(16,0.0002483383);
   h_dphipfmet_Data__5->SetBinError(17,0.0002422488);
   h_dphipfmet_Data__5->SetBinError(18,0.0002362247);
   h_dphipfmet_Data__5->SetBinError(19,0.0002241499);
   h_dphipfmet_Data__5->SetBinError(20,0.0002090783);
   h_dphipfmet_Data__5->SetEntries(668734);
   h_dphipfmet_Data__5->SetStats(0);
   h_dphipfmet_Data__5->SetLineWidth(3);
   h_dphipfmet_Data__5->SetMarkerStyle(20);
   h_dphipfmet_Data__5->SetMarkerSize(2);
   h_dphipfmet_Data__5->GetXaxis()->SetTitle("min#Delta#phi(jet,pf MET)");
   h_dphipfmet_Data__5->GetXaxis()->SetLabelFont(42);
   h_dphipfmet_Data__5->GetXaxis()->SetLabelOffset(0.007);
   h_dphipfmet_Data__5->GetXaxis()->SetTitleSize(0.05);
   h_dphipfmet_Data__5->GetXaxis()->SetTickLength(0.025);
   h_dphipfmet_Data__5->GetXaxis()->SetTitleFont(42);
   h_dphipfmet_Data__5->GetYaxis()->SetTitle("a.u.");
   h_dphipfmet_Data__5->GetYaxis()->SetLabelFont(42);
   h_dphipfmet_Data__5->GetYaxis()->SetLabelOffset(0.007);
   h_dphipfmet_Data__5->GetYaxis()->SetTitleSize(0.05);
   h_dphipfmet_Data__5->GetYaxis()->SetTickLength(0.025);
   h_dphipfmet_Data__5->GetYaxis()->SetTitleFont(42);
   h_dphipfmet_Data__5->GetZaxis()->SetLabelFont(42);
   h_dphipfmet_Data__5->GetZaxis()->SetLabelOffset(0.007);
   h_dphipfmet_Data__5->GetZaxis()->SetTitleSize(0.05);
   h_dphipfmet_Data__5->GetZaxis()->SetTickLength(0.025);
   h_dphipfmet_Data__5->GetZaxis()->SetTitleFont(42);
   h_dphipfmet_Data__5->Draw("elp same");
   
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
   
   TH1D *ratio__6 = new TH1D("ratio__6","",20,0,3.14);
   ratio__6->SetBinContent(1,-0.1336562);
   ratio__6->SetBinContent(2,-0.1149686);
   ratio__6->SetBinContent(3,-0.08169824);
   ratio__6->SetBinContent(4,-0.04059076);
   ratio__6->SetBinContent(5,-0.05565697);
   ratio__6->SetBinContent(6,-0.01946765);
   ratio__6->SetBinContent(7,-0.03714216);
   ratio__6->SetBinContent(8,0.01539147);
   ratio__6->SetBinContent(9,0.009141922);
   ratio__6->SetBinContent(10,0.05928946);
   ratio__6->SetBinContent(11,0.1043688);
   ratio__6->SetBinContent(12,0.06599236);
   ratio__6->SetBinContent(13,0.1062269);
   ratio__6->SetBinContent(14,0.1524003);
   ratio__6->SetBinContent(15,0.1394532);
   ratio__6->SetBinContent(16,0.1753047);
   ratio__6->SetBinContent(17,0.06050229);
   ratio__6->SetBinContent(18,0.01476586);
   ratio__6->SetBinContent(19,0.0644989);
   ratio__6->SetBinContent(20,0.02596426);
   ratio__6->SetBinError(1,0.0001);
   ratio__6->SetBinError(2,0.0001);
   ratio__6->SetBinError(3,0.0001);
   ratio__6->SetBinError(4,0.0001);
   ratio__6->SetBinError(5,0.0001);
   ratio__6->SetBinError(6,0.0001);
   ratio__6->SetBinError(7,0.0001);
   ratio__6->SetBinError(8,0.0001);
   ratio__6->SetBinError(9,0.0001);
   ratio__6->SetBinError(10,0.0001);
   ratio__6->SetBinError(11,0.0001);
   ratio__6->SetBinError(12,0.0001);
   ratio__6->SetBinError(13,0.0001);
   ratio__6->SetBinError(14,0.0001);
   ratio__6->SetBinError(15,0.0001);
   ratio__6->SetBinError(16,0.0001);
   ratio__6->SetBinError(17,0.0001);
   ratio__6->SetBinError(18,0.0001);
   ratio__6->SetBinError(19,0.0001);
   ratio__6->SetBinError(20,0.0001);
   ratio__6->SetMinimum(-0.48);
   ratio__6->SetMaximum(0.48);
   ratio__6->SetEntries(668754);
   ratio__6->SetStats(0);
   ratio__6->SetLineWidth(3);
   ratio__6->SetMarkerStyle(20);
   ratio__6->SetMarkerSize(2);
   ratio__6->GetXaxis()->SetTitle("min#Delta#phi(jet,pf MET)");
   ratio__6->GetXaxis()->SetLabelFont(43);
   ratio__6->GetXaxis()->SetLabelOffset(0.007);
   ratio__6->GetXaxis()->SetLabelSize(30);
   ratio__6->GetXaxis()->SetTitleSize(40);
   ratio__6->GetXaxis()->SetTickLength(0.025);
   ratio__6->GetXaxis()->SetTitleOffset(5);
   ratio__6->GetXaxis()->SetTitleFont(43);
   ratio__6->GetYaxis()->SetTitle("#frac{Data-Exp}{Exp}");
   ratio__6->GetYaxis()->SetNdivisions(5);
   ratio__6->GetYaxis()->SetLabelFont(43);
   ratio__6->GetYaxis()->SetLabelOffset(0.007);
   ratio__6->GetYaxis()->SetLabelSize(30);
   ratio__6->GetYaxis()->SetTitleSize(40);
   ratio__6->GetYaxis()->SetTickLength(0.025);
   ratio__6->GetYaxis()->SetTitleOffset(2.5);
   ratio__6->GetYaxis()->SetTitleFont(43);
   ratio__6->GetZaxis()->SetLabelFont(42);
   ratio__6->GetZaxis()->SetLabelOffset(0.007);
   ratio__6->GetZaxis()->SetTitleSize(0.05);
   ratio__6->GetZaxis()->SetTickLength(0.025);
   ratio__6->GetZaxis()->SetTitleFont(42);
   ratio__6->Draw("elp");
   
   TH1D *zero__7 = new TH1D("zero__7","",20,0,3.14);
   zero__7->SetBinError(1,0.0003558744);
   zero__7->SetBinError(2,0.0003379619);
   zero__7->SetBinError(3,0.0003189017);
   zero__7->SetBinError(4,0.0003051456);
   zero__7->SetBinError(5,0.0002920249);
   zero__7->SetBinError(6,0.0002830742);
   zero__7->SetBinError(7,0.0002758853);
   zero__7->SetBinError(8,0.0002706896);
   zero__7->SetBinError(9,0.0002660528);
   zero__7->SetBinError(10,0.0002652573);
   zero__7->SetBinError(11,0.0002630351);
   zero__7->SetBinError(12,0.0002593927);
   zero__7->SetBinError(13,0.0002586243);
   zero__7->SetBinError(14,0.0002560784);
   zero__7->SetBinError(15,0.0002543524);
   zero__7->SetBinError(16,0.0002483383);
   zero__7->SetBinError(17,0.0002422488);
   zero__7->SetBinError(18,0.0002362247);
   zero__7->SetBinError(19,0.0002241499);
   zero__7->SetBinError(20,0.0002090783);
   zero__7->SetEntries(668754);
   zero__7->SetStats(0);
   zero__7->SetLineWidth(3);
   zero__7->SetMarkerStyle(20);
   zero__7->SetMarkerSize(2);
   zero__7->GetXaxis()->SetTitle("min#Delta#phi(jet,pf MET)");
   zero__7->GetXaxis()->SetLabelFont(42);
   zero__7->GetXaxis()->SetLabelOffset(0.007);
   zero__7->GetXaxis()->SetTitleSize(0.05);
   zero__7->GetXaxis()->SetTickLength(0.025);
   zero__7->GetXaxis()->SetTitleFont(42);
   zero__7->GetYaxis()->SetTitle("a.u.");
   zero__7->GetYaxis()->SetLabelFont(42);
   zero__7->GetYaxis()->SetLabelOffset(0.007);
   zero__7->GetYaxis()->SetTitleSize(0.05);
   zero__7->GetYaxis()->SetTickLength(0.025);
   zero__7->GetYaxis()->SetTitleFont(42);
   zero__7->GetZaxis()->SetLabelFont(42);
   zero__7->GetZaxis()->SetLabelOffset(0.007);
   zero__7->GetZaxis()->SetTitleSize(0.05);
   zero__7->GetZaxis()->SetTickLength(0.025);
   zero__7->GetZaxis()->SetTitleFont(42);
   zero__7->Draw("hist same");
   
   TH1D *sumratioup__8 = new TH1D("sumratioup__8","",20,0,3.14);
   sumratioup__8->SetBinContent(1,0.01034768);
   sumratioup__8->SetBinContent(2,0.01113966);
   sumratioup__8->SetBinContent(3,0.01196752);
   sumratioup__8->SetBinContent(4,0.01307386);
   sumratioup__8->SetBinContent(5,0.01357736);
   sumratioup__8->SetBinContent(6,0.01462161);
   sumratioup__8->SetBinContent(7,0.01624712);
   sumratioup__8->SetBinContent(8,0.0174962);
   sumratioup__8->SetBinContent(9,0.01880829);
   sumratioup__8->SetBinContent(10,0.01892113);
   sumratioup__8->SetBinContent(11,0.01980732);
   sumratioup__8->SetBinContent(12,0.02445033);
   sumratioup__8->SetBinContent(13,0.0280407);
   sumratioup__8->SetBinContent(14,0.03001088);
   sumratioup__8->SetBinContent(15,0.03100552);
   sumratioup__8->SetBinContent(16,0.03398861);
   sumratioup__8->SetBinContent(17,0.03768909);
   sumratioup__8->SetBinContent(18,0.0412621);
   sumratioup__8->SetBinContent(19,0.04219959);
   sumratioup__8->SetBinContent(20,0.0477367);
   sumratioup__8->SetBinError(1,0.001011579);
   sumratioup__8->SetBinError(2,0.0009613959);
   sumratioup__8->SetBinError(3,0.0008863105);
   sumratioup__8->SetBinError(4,0.0008485312);
   sumratioup__8->SetBinError(5,0.0008199337);
   sumratioup__8->SetBinError(6,0.0007990747);
   sumratioup__8->SetBinError(7,0.000858865);
   sumratioup__8->SetBinError(8,0.0008443195);
   sumratioup__8->SetBinError(9,0.0008822385);
   sumratioup__8->SetBinError(10,0.0008404669);
   sumratioup__8->SetBinError(11,0.0008298365);
   sumratioup__8->SetBinError(12,0.001032047);
   sumratioup__8->SetBinError(13,0.0011338);
   sumratioup__8->SetBinError(14,0.001142023);
   sumratioup__8->SetBinError(15,0.001177247);
   sumratioup__8->SetBinError(16,0.00119268);
   sumratioup__8->SetBinError(17,0.001394699);
   sumratioup__8->SetBinError(18,0.001517363);
   sumratioup__8->SetBinError(19,0.001331966);
   sumratioup__8->SetBinError(20,0.001360164);
   sumratioup__8->SetEntries(668794);
   sumratioup__8->SetStats(0);

   ci = 1180;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratioup__8->SetFillColor(ci);
   sumratioup__8->SetFillStyle(3003);
   sumratioup__8->GetXaxis()->SetTitle("min#Delta#phi(jet,pf MET)");
   sumratioup__8->GetXaxis()->SetLabelFont(42);
   sumratioup__8->GetXaxis()->SetLabelOffset(0.007);
   sumratioup__8->GetXaxis()->SetTitleSize(0.05);
   sumratioup__8->GetXaxis()->SetTickLength(0.025);
   sumratioup__8->GetXaxis()->SetTitleFont(42);
   sumratioup__8->GetYaxis()->SetTitle("a.u.");
   sumratioup__8->GetYaxis()->SetLabelFont(42);
   sumratioup__8->GetYaxis()->SetLabelOffset(0.007);
   sumratioup__8->GetYaxis()->SetTitleSize(0.05);
   sumratioup__8->GetYaxis()->SetTickLength(0.025);
   sumratioup__8->GetYaxis()->SetTitleFont(42);
   sumratioup__8->GetZaxis()->SetLabelFont(42);
   sumratioup__8->GetZaxis()->SetLabelOffset(0.007);
   sumratioup__8->GetZaxis()->SetTitleSize(0.05);
   sumratioup__8->GetZaxis()->SetTickLength(0.025);
   sumratioup__8->GetZaxis()->SetTitleFont(42);
   sumratioup__8->Draw("hist same");
   
   TH1D *sumratiodown__9 = new TH1D("sumratiodown__9","",20,0,3.14);
   sumratiodown__9->SetBinContent(1,-0.01034768);
   sumratiodown__9->SetBinContent(2,-0.01113966);
   sumratiodown__9->SetBinContent(3,-0.01196752);
   sumratiodown__9->SetBinContent(4,-0.01307386);
   sumratiodown__9->SetBinContent(5,-0.01357736);
   sumratiodown__9->SetBinContent(6,-0.01462161);
   sumratiodown__9->SetBinContent(7,-0.01624712);
   sumratiodown__9->SetBinContent(8,-0.0174962);
   sumratiodown__9->SetBinContent(9,-0.01880829);
   sumratiodown__9->SetBinContent(10,-0.01892113);
   sumratiodown__9->SetBinContent(11,-0.01980732);
   sumratiodown__9->SetBinContent(12,-0.02445033);
   sumratiodown__9->SetBinContent(13,-0.0280407);
   sumratiodown__9->SetBinContent(14,-0.03001088);
   sumratiodown__9->SetBinContent(15,-0.03100552);
   sumratiodown__9->SetBinContent(16,-0.03398861);
   sumratiodown__9->SetBinContent(17,-0.03768909);
   sumratiodown__9->SetBinContent(18,-0.0412621);
   sumratiodown__9->SetBinContent(19,-0.04219959);
   sumratiodown__9->SetBinContent(20,-0.0477367);
   sumratiodown__9->SetBinError(1,0.001011579);
   sumratiodown__9->SetBinError(2,0.0009613959);
   sumratiodown__9->SetBinError(3,0.0008863105);
   sumratiodown__9->SetBinError(4,0.0008485312);
   sumratiodown__9->SetBinError(5,0.0008199337);
   sumratiodown__9->SetBinError(6,0.0007990747);
   sumratiodown__9->SetBinError(7,0.000858865);
   sumratiodown__9->SetBinError(8,0.0008443195);
   sumratiodown__9->SetBinError(9,0.0008822385);
   sumratiodown__9->SetBinError(10,0.0008404669);
   sumratiodown__9->SetBinError(11,0.0008298365);
   sumratiodown__9->SetBinError(12,0.001032047);
   sumratiodown__9->SetBinError(13,0.0011338);
   sumratiodown__9->SetBinError(14,0.001142023);
   sumratiodown__9->SetBinError(15,0.001177247);
   sumratiodown__9->SetBinError(16,0.00119268);
   sumratiodown__9->SetBinError(17,0.001394699);
   sumratiodown__9->SetBinError(18,0.001517363);
   sumratiodown__9->SetBinError(19,0.001331966);
   sumratiodown__9->SetBinError(20,0.001360164);
   sumratiodown__9->SetEntries(668794);
   sumratiodown__9->SetStats(0);

   ci = 1180;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratiodown__9->SetFillColor(ci);
   sumratiodown__9->SetFillStyle(3003);
   sumratiodown__9->GetXaxis()->SetTitle("min#Delta#phi(jet,pf MET)");
   sumratiodown__9->GetXaxis()->SetLabelFont(42);
   sumratiodown__9->GetXaxis()->SetLabelOffset(0.007);
   sumratiodown__9->GetXaxis()->SetTitleSize(0.05);
   sumratiodown__9->GetXaxis()->SetTickLength(0.025);
   sumratiodown__9->GetXaxis()->SetTitleFont(42);
   sumratiodown__9->GetYaxis()->SetTitle("a.u.");
   sumratiodown__9->GetYaxis()->SetLabelFont(42);
   sumratiodown__9->GetYaxis()->SetLabelOffset(0.007);
   sumratiodown__9->GetYaxis()->SetTitleSize(0.05);
   sumratiodown__9->GetYaxis()->SetTickLength(0.025);
   sumratiodown__9->GetYaxis()->SetTitleFont(42);
   sumratiodown__9->GetZaxis()->SetLabelFont(42);
   sumratiodown__9->GetZaxis()->SetLabelOffset(0.007);
   sumratiodown__9->GetZaxis()->SetTitleSize(0.05);
   sumratiodown__9->GetZaxis()->SetTickLength(0.025);
   sumratiodown__9->GetZaxis()->SetTitleFont(42);
   sumratiodown__9->Draw("hist same");
   
   Double_t Graph0_fx1001[20] = {
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
   Double_t Graph0_fy1001[20] = {
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
   Double_t Graph0_fex1001[20] = {
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
   Double_t Graph0_fey1001[20] = {
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
   TGraphErrors *gre = new TGraphErrors(20,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","Graph",100,0,3.3598);
   Graph_Graph1001->SetMinimum(-0.1692644);
   Graph_Graph1001->SetMaximum(0.2143495);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1001->GetXaxis()->SetTickLength(0.025);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1001->GetYaxis()->SetTickLength(0.025);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1001->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph1001->GetZaxis()->SetTickLength(0.025);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   gre->Draw("pe0");
   pad2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
