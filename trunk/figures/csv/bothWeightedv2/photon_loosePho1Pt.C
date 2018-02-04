void photon_loosePho1Pt()
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
   pad1->Range(-12.5,0,1237.5,1.154355);
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
   h->SetMaximum(1.022428);
   
   TH1F *h_stack_3 = new TH1F("h_stack_3","",20,175,1175);
   h_stack_3->SetMinimum(0);
   h_stack_3->SetMaximum(1.07355);
   h_stack_3->SetDirectory(0);
   h_stack_3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h_stack_3->SetLineColor(ci);
   h_stack_3->GetXaxis()->SetLabelFont(42);
   h_stack_3->GetXaxis()->SetLabelOffset(0.007);
   h_stack_3->GetXaxis()->SetTitleSize(0.05);
   h_stack_3->GetXaxis()->SetTickLength(0.025);
   h_stack_3->GetXaxis()->SetTitleFont(42);
   h_stack_3->GetYaxis()->SetTitle("a.u./50 GeV");
   h_stack_3->GetYaxis()->SetLabelFont(42);
   h_stack_3->GetYaxis()->SetLabelOffset(0.007);
   h_stack_3->GetYaxis()->SetTitleSize(0.05);
   h_stack_3->GetYaxis()->SetTickLength(0.025);
   h_stack_3->GetYaxis()->SetTitleOffset(1.5);
   h_stack_3->GetYaxis()->SetTitleFont(42);
   h_stack_3->GetZaxis()->SetLabelFont(42);
   h_stack_3->GetZaxis()->SetLabelOffset(0.007);
   h_stack_3->GetZaxis()->SetTitleSize(0.05);
   h_stack_3->GetZaxis()->SetTickLength(0.025);
   h_stack_3->GetZaxis()->SetTitleFont(42);
   h->SetHistogram(h_stack_3);
   
   
   TH1D *h_loosePho1Pt_QCD__19 = new TH1D("h_loosePho1Pt_QCD__19","",20,175,1175);
   h_loosePho1Pt_QCD__19->SetBinContent(1,0.01962999);
   h_loosePho1Pt_QCD__19->SetBinContent(2,0.009152202);
   h_loosePho1Pt_QCD__19->SetBinContent(3,0.002732998);
   h_loosePho1Pt_QCD__19->SetBinContent(4,0.000997493);
   h_loosePho1Pt_QCD__19->SetBinContent(5,0.0004054084);
   h_loosePho1Pt_QCD__19->SetBinContent(6,0.0002067361);
   h_loosePho1Pt_QCD__19->SetBinContent(7,0.00011551);
   h_loosePho1Pt_QCD__19->SetBinContent(8,6.712691e-05);
   h_loosePho1Pt_QCD__19->SetBinContent(9,4.084246e-05);
   h_loosePho1Pt_QCD__19->SetBinContent(10,2.554578e-05);
   h_loosePho1Pt_QCD__19->SetBinContent(11,1.588147e-05);
   h_loosePho1Pt_QCD__19->SetBinContent(12,1.154177e-05);
   h_loosePho1Pt_QCD__19->SetBinContent(13,7.202062e-06);
   h_loosePho1Pt_QCD__19->SetBinContent(14,5.139933e-06);
   h_loosePho1Pt_QCD__19->SetBinContent(15,3.785699e-06);
   h_loosePho1Pt_QCD__19->SetBinContent(16,2.400687e-06);
   h_loosePho1Pt_QCD__19->SetBinContent(17,1.785127e-06);
   h_loosePho1Pt_QCD__19->SetBinContent(18,1.200344e-06);
   h_loosePho1Pt_QCD__19->SetBinContent(19,7.07895e-07);
   h_loosePho1Pt_QCD__19->SetBinContent(20,3.047026e-06);
   h_loosePho1Pt_QCD__19->SetBinError(1,3.279729e-05);
   h_loosePho1Pt_QCD__19->SetBinError(2,2.116867e-05);
   h_loosePho1Pt_QCD__19->SetBinError(3,1.079978e-05);
   h_loosePho1Pt_QCD__19->SetBinError(4,6.076354e-06);
   h_loosePho1Pt_QCD__19->SetBinError(5,3.532376e-06);
   h_loosePho1Pt_QCD__19->SetBinError(6,2.522486e-06);
   h_loosePho1Pt_QCD__19->SetBinError(7,1.885516e-06);
   h_loosePho1Pt_QCD__19->SetBinError(8,1.437371e-06);
   h_loosePho1Pt_QCD__19->SetBinError(9,1.121183e-06);
   h_loosePho1Pt_QCD__19->SetBinError(10,8.867068e-07);
   h_loosePho1Pt_QCD__19->SetBinError(11,6.991428e-07);
   h_loosePho1Pt_QCD__19->SetBinError(12,5.960143e-07);
   h_loosePho1Pt_QCD__19->SetBinError(13,4.708135e-07);
   h_loosePho1Pt_QCD__19->SetBinError(14,3.9774e-07);
   h_loosePho1Pt_QCD__19->SetBinError(15,3.41345e-07);
   h_loosePho1Pt_QCD__19->SetBinError(16,2.718243e-07);
   h_loosePho1Pt_QCD__19->SetBinError(17,2.343986e-07);
   h_loosePho1Pt_QCD__19->SetBinError(18,1.922088e-07);
   h_loosePho1Pt_QCD__19->SetBinError(19,1.476063e-07);
   h_loosePho1Pt_QCD__19->SetBinError(20,3.062377e-07);
   h_loosePho1Pt_QCD__19->SetEntries(668734);
   h_loosePho1Pt_QCD__19->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_loosePho1Pt_QCD__19->SetFillColor(ci);
   h_loosePho1Pt_QCD__19->GetXaxis()->SetTitle("Leading pho p_{T} [GeV]");
   h_loosePho1Pt_QCD__19->GetXaxis()->SetLabelFont(42);
   h_loosePho1Pt_QCD__19->GetXaxis()->SetLabelOffset(0.007);
   h_loosePho1Pt_QCD__19->GetXaxis()->SetTitleSize(0.05);
   h_loosePho1Pt_QCD__19->GetXaxis()->SetTickLength(0.025);
   h_loosePho1Pt_QCD__19->GetXaxis()->SetTitleFont(42);
   h_loosePho1Pt_QCD__19->GetYaxis()->SetTitle("a.u./50 GeV");
   h_loosePho1Pt_QCD__19->GetYaxis()->SetLabelFont(42);
   h_loosePho1Pt_QCD__19->GetYaxis()->SetLabelOffset(0.007);
   h_loosePho1Pt_QCD__19->GetYaxis()->SetTitleSize(0.05);
   h_loosePho1Pt_QCD__19->GetYaxis()->SetTickLength(0.025);
   h_loosePho1Pt_QCD__19->GetYaxis()->SetTitleFont(42);
   h_loosePho1Pt_QCD__19->GetZaxis()->SetLabelFont(42);
   h_loosePho1Pt_QCD__19->GetZaxis()->SetLabelOffset(0.007);
   h_loosePho1Pt_QCD__19->GetZaxis()->SetTitleSize(0.05);
   h_loosePho1Pt_QCD__19->GetZaxis()->SetTickLength(0.025);
   h_loosePho1Pt_QCD__19->GetZaxis()->SetTitleFont(42);
   h->Add(h_loosePho1Pt_QCD,"");
   
   TH1D *h_loosePho1Pt_#gammapLjetssPoPHFcP__20 = new TH1D("h_loosePho1Pt_#gammapLjetssPoPHFcP__20","",20,175,1175);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetBinContent(1,0.06683307);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetBinContent(2,0.0380947);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetBinContent(3,0.01172633);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetBinContent(4,0.00467973);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetBinContent(5,0.002470404);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetBinContent(6,0.001344332);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetBinContent(7,0.0007106874);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetBinContent(8,0.0004195401);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetBinContent(9,0.0001894962);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetBinContent(10,0.0001717862);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetBinContent(11,0.0001109478);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetBinContent(12,6.31031e-05);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetBinContent(13,3.893543e-05);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetBinContent(14,2.49248e-05);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetBinContent(15,1.664829e-05);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetBinContent(16,2.040743e-05);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetBinContent(17,6.17297e-06);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetBinContent(18,7.447146e-06);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetBinContent(19,6.981614e-07);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetBinContent(20,1.450248e-05);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetBinError(1,0.001540305);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetBinError(2,0.0007221177);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetBinError(3,0.0003482849);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetBinError(4,0.000187521);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetBinError(5,0.0001234601);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetBinError(6,7.82273e-05);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetBinError(7,5.219345e-05);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetBinError(8,3.585786e-05);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetBinError(9,1.994582e-05);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetBinError(10,1.925122e-05);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetBinError(11,1.553628e-05);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetBinError(12,1.109359e-05);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetBinError(13,9.106777e-06);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetBinError(14,7.260147e-06);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetBinError(15,5.889587e-06);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetBinError(16,6.160816e-06);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetBinError(17,3.239459e-06);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetBinError(18,3.486188e-06);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetBinError(19,6.981614e-07);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetBinError(20,5.426608e-06);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetEntries(14151);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetStats(0);

   ci = TColor::GetColor("#ff6633");
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->SetFillColor(ci);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->GetXaxis()->SetTitle("Leading pho p_{T} [GeV]");
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->GetXaxis()->SetLabelFont(42);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->GetXaxis()->SetLabelOffset(0.007);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->GetXaxis()->SetTitleSize(0.05);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->GetXaxis()->SetTickLength(0.025);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->GetXaxis()->SetTitleFont(42);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->GetYaxis()->SetTitle("a.u./50 GeV");
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->GetYaxis()->SetLabelFont(42);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->GetYaxis()->SetLabelOffset(0.007);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->GetYaxis()->SetTitleSize(0.05);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->GetYaxis()->SetTickLength(0.025);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->GetYaxis()->SetTitleFont(42);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->GetZaxis()->SetLabelFont(42);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->GetZaxis()->SetLabelOffset(0.007);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->GetZaxis()->SetTitleSize(0.05);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->GetZaxis()->SetTickLength(0.025);
   h_loosePho1Pt_#gammapLjetssPoPHFcP__20->GetZaxis()->SetTitleFont(42);
   h->Add(h_loosePho1Pt_#gamma+jets (HF),"");
   
   TH1D *h_loosePho1Pt_#gammapLjetssPoPLFcP__21 = new TH1D("h_loosePho1Pt_#gammapLjetssPoPLFcP__21","",20,175,1175);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetBinContent(1,0.4247512);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetBinContent(2,0.2413108);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetBinContent(3,0.08603686);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetBinContent(4,0.03924831);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetBinContent(5,0.02052735);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetBinContent(6,0.01078018);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetBinContent(7,0.006431278);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetBinContent(8,0.003780554);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetBinContent(9,0.002238013);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetBinContent(10,0.001600319);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetBinContent(11,0.00102501);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetBinContent(12,0.0005973198);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetBinContent(13,0.0003648167);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetBinContent(14,0.0002839127);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetBinContent(15,0.0001897704);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetBinContent(16,0.0001306896);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetBinContent(17,9.43177e-05);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetBinContent(18,7.908691e-05);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetBinContent(19,4.325319e-05);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetBinContent(20,0.0001165131);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetBinError(1,0.003881721);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetBinError(2,0.001778236);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetBinError(3,0.0009388489);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetBinError(4,0.0005571927);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetBinError(5,0.0003475214);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetBinError(6,0.0002259061);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetBinError(7,0.000156829);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetBinError(8,0.0001060039);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetBinError(9,7.278401e-05);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetBinError(10,5.851595e-05);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetBinError(11,4.572755e-05);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetBinError(12,3.419954e-05);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetBinError(13,2.686729e-05);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetBinError(14,2.393737e-05);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetBinError(15,1.916891e-05);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetBinError(16,1.502798e-05);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetBinError(17,1.264955e-05);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetBinError(18,1.18217e-05);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetBinError(19,8.606628e-06);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetBinError(20,1.480604e-05);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetEntries(99281);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetStats(0);

   ci = TColor::GetColor("#339999");
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->SetFillColor(ci);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->GetXaxis()->SetTitle("Leading pho p_{T} [GeV]");
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->GetXaxis()->SetLabelFont(42);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->GetXaxis()->SetLabelOffset(0.007);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->GetXaxis()->SetTitleSize(0.05);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->GetXaxis()->SetTickLength(0.025);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->GetXaxis()->SetTitleFont(42);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->GetYaxis()->SetTitle("a.u./50 GeV");
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->GetYaxis()->SetLabelFont(42);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->GetYaxis()->SetLabelOffset(0.007);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->GetYaxis()->SetTitleSize(0.05);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->GetYaxis()->SetTickLength(0.025);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->GetYaxis()->SetTitleFont(42);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->GetZaxis()->SetLabelFont(42);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->GetZaxis()->SetLabelOffset(0.007);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->GetZaxis()->SetTitleSize(0.05);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->GetZaxis()->SetTickLength(0.025);
   h_loosePho1Pt_#gammapLjetssPoPLFcP__21->GetZaxis()->SetTitleFont(42);
   h->Add(h_loosePho1Pt_#gamma+jets (LF),"");
   h->Draw("hist");
   
   TH1D *hsum__22 = new TH1D("hsum__22","",20,175,1175);
   hsum__22->SetBinContent(1,0.5112143);
   hsum__22->SetBinContent(2,0.2885577);
   hsum__22->SetBinContent(3,0.1004962);
   hsum__22->SetBinContent(4,0.04492553);
   hsum__22->SetBinContent(5,0.02340316);
   hsum__22->SetBinContent(6,0.01233125);
   hsum__22->SetBinContent(7,0.007257476);
   hsum__22->SetBinContent(8,0.004267221);
   hsum__22->SetBinContent(9,0.002468352);
   hsum__22->SetBinContent(10,0.001797651);
   hsum__22->SetBinContent(11,0.001151839);
   hsum__22->SetBinContent(12,0.0006719646);
   hsum__22->SetBinContent(13,0.0004109542);
   hsum__22->SetBinContent(14,0.0003139774);
   hsum__22->SetBinContent(15,0.0002102044);
   hsum__22->SetBinContent(16,0.0001534977);
   hsum__22->SetBinContent(17,0.0001022758);
   hsum__22->SetBinContent(18,8.77344e-05);
   hsum__22->SetBinContent(19,4.465925e-05);
   hsum__22->SetBinContent(20,0.0001340626);
   hsum__22->SetBinError(1,0.004176287);
   hsum__22->SetBinError(2,0.001919382);
   hsum__22->SetBinError(3,0.001001427);
   hsum__22->SetBinError(4,0.0005879326);
   hsum__22->SetBinError(5,0.000368817);
   hsum__22->SetBinError(6,0.0002390804);
   hsum__22->SetBinError(7,0.0001652968);
   hsum__22->SetBinError(8,0.0001119137);
   hsum__22->SetBinError(9,7.547586e-05);
   hsum__22->SetBinError(10,6.160772e-05);
   hsum__22->SetBinError(11,4.829983e-05);
   hsum__22->SetBinError(12,3.595875e-05);
   hsum__22->SetBinError(13,2.837263e-05);
   hsum__22->SetBinError(14,2.501731e-05);
   hsum__22->SetBinError(15,2.00562e-05);
   hsum__22->SetBinError(16,1.624407e-05);
   hsum__22->SetBinError(17,1.305987e-05);
   hsum__22->SetBinError(18,1.232652e-05);
   hsum__22->SetBinError(19,8.636161e-06);
   hsum__22->SetBinError(20,1.577215e-05);
   hsum__22->SetEntries(668774);
   hsum__22->SetStats(0);

   ci = 1182;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   hsum__22->SetFillColor(ci);
   hsum__22->SetFillStyle(3003);
   hsum__22->SetLineWidth(0);
   hsum__22->GetXaxis()->SetTitle("Leading pho p_{T} [GeV]");
   hsum__22->GetXaxis()->SetLabelFont(42);
   hsum__22->GetXaxis()->SetLabelOffset(0.007);
   hsum__22->GetXaxis()->SetTitleSize(0.05);
   hsum__22->GetXaxis()->SetTickLength(0.025);
   hsum__22->GetXaxis()->SetTitleFont(42);
   hsum__22->GetYaxis()->SetTitle("a.u./50 GeV");
   hsum__22->GetYaxis()->SetLabelFont(42);
   hsum__22->GetYaxis()->SetLabelOffset(0.007);
   hsum__22->GetYaxis()->SetTitleSize(0.05);
   hsum__22->GetYaxis()->SetTickLength(0.025);
   hsum__22->GetYaxis()->SetTitleFont(42);
   hsum__22->GetZaxis()->SetLabelFont(42);
   hsum__22->GetZaxis()->SetLabelOffset(0.007);
   hsum__22->GetZaxis()->SetTitleSize(0.05);
   hsum__22->GetZaxis()->SetTickLength(0.025);
   hsum__22->GetZaxis()->SetTitleFont(42);
   hsum__22->Draw("e2 same");
   
   TH1D *h_loosePho1Pt_Data__23 = new TH1D("h_loosePho1Pt_Data__23","",20,175,1175);
   h_loosePho1Pt_Data__23->SetBinContent(1,0.5377549);
   h_loosePho1Pt_Data__23->SetBinContent(2,0.2809443);
   h_loosePho1Pt_Data__23->SetBinContent(3,0.09593949);
   h_loosePho1Pt_Data__23->SetBinContent(4,0.04096098);
   h_loosePho1Pt_Data__23->SetBinContent(5,0.01969692);
   h_loosePho1Pt_Data__23->SetBinContent(6,0.01004435);
   h_loosePho1Pt_Data__23->SetBinContent(7,0.005612097);
   h_loosePho1Pt_Data__23->SetBinContent(8,0.003261386);
   h_loosePho1Pt_Data__23->SetBinContent(9,0.001984347);
   h_loosePho1Pt_Data__23->SetBinContent(10,0.001241151);
   h_loosePho1Pt_Data__23->SetBinContent(11,0.0007716072);
   h_loosePho1Pt_Data__23->SetBinContent(12,0.0005607611);
   h_loosePho1Pt_Data__23->SetBinContent(13,0.0003499149);
   h_loosePho1Pt_Data__23->SetBinContent(14,0.0002497256);
   h_loosePho1Pt_Data__23->SetBinContent(15,0.0001839296);
   h_loosePho1Pt_Data__23->SetBinContent(16,0.0001166383);
   h_loosePho1Pt_Data__23->SetBinContent(17,8.673105e-05);
   h_loosePho1Pt_Data__23->SetBinContent(18,5.831915e-05);
   h_loosePho1Pt_Data__23->SetBinContent(19,3.439335e-05);
   h_loosePho1Pt_Data__23->SetBinContent(20,0.0001480409);
   h_loosePho1Pt_Data__23->SetBinError(1,0.0008967378);
   h_loosePho1Pt_Data__23->SetBinError(2,0.0006481618);
   h_loosePho1Pt_Data__23->SetBinError(3,0.0003787669);
   h_loosePho1Pt_Data__23->SetBinError(4,0.0002474905);
   h_loosePho1Pt_Data__23->SetBinError(5,0.0001716218);
   h_loosePho1Pt_Data__23->SetBinError(6,0.0001225559);
   h_loosePho1Pt_Data__23->SetBinError(7,9.160852e-05);
   h_loosePho1Pt_Data__23->SetBinError(8,6.983521e-05);
   h_loosePho1Pt_Data__23->SetBinError(9,5.44731e-05);
   h_loosePho1Pt_Data__23->SetBinError(10,4.308099e-05);
   h_loosePho1Pt_Data__23->SetBinError(11,3.396811e-05);
   h_loosePho1Pt_Data__23->SetBinError(12,2.895758e-05);
   h_loosePho1Pt_Data__23->SetBinError(13,2.287465e-05);
   h_loosePho1Pt_Data__23->SetBinError(14,1.932435e-05);
   h_loosePho1Pt_Data__23->SetBinError(15,1.658438e-05);
   h_loosePho1Pt_Data__23->SetBinError(16,1.320669e-05);
   h_loosePho1Pt_Data__23->SetBinError(17,1.138834e-05);
   h_loosePho1Pt_Data__23->SetBinError(18,9.338538e-06);
   h_loosePho1Pt_Data__23->SetBinError(19,7.171508e-06);
   h_loosePho1Pt_Data__23->SetBinError(20,1.487867e-05);
   h_loosePho1Pt_Data__23->SetEntries(668734);
   h_loosePho1Pt_Data__23->SetStats(0);
   h_loosePho1Pt_Data__23->SetLineWidth(3);
   h_loosePho1Pt_Data__23->SetMarkerStyle(20);
   h_loosePho1Pt_Data__23->SetMarkerSize(2);
   h_loosePho1Pt_Data__23->GetXaxis()->SetTitle("Leading pho p_{T} [GeV]");
   h_loosePho1Pt_Data__23->GetXaxis()->SetLabelFont(42);
   h_loosePho1Pt_Data__23->GetXaxis()->SetLabelOffset(0.007);
   h_loosePho1Pt_Data__23->GetXaxis()->SetTitleSize(0.05);
   h_loosePho1Pt_Data__23->GetXaxis()->SetTickLength(0.025);
   h_loosePho1Pt_Data__23->GetXaxis()->SetTitleFont(42);
   h_loosePho1Pt_Data__23->GetYaxis()->SetTitle("a.u./50 GeV");
   h_loosePho1Pt_Data__23->GetYaxis()->SetLabelFont(42);
   h_loosePho1Pt_Data__23->GetYaxis()->SetLabelOffset(0.007);
   h_loosePho1Pt_Data__23->GetYaxis()->SetTitleSize(0.05);
   h_loosePho1Pt_Data__23->GetYaxis()->SetTickLength(0.025);
   h_loosePho1Pt_Data__23->GetYaxis()->SetTitleFont(42);
   h_loosePho1Pt_Data__23->GetZaxis()->SetLabelFont(42);
   h_loosePho1Pt_Data__23->GetZaxis()->SetLabelOffset(0.007);
   h_loosePho1Pt_Data__23->GetZaxis()->SetTitleSize(0.05);
   h_loosePho1Pt_Data__23->GetZaxis()->SetTickLength(0.025);
   h_loosePho1Pt_Data__23->GetZaxis()->SetTitleFont(42);
   h_loosePho1Pt_Data__23->Draw("elp same");
   
   TLegend *leg = new TLegend(0.6,0.55,0.88,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("h_loosePho1Pt_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_loosePho1Pt_#gamma+jets (LF)","#gamma+jets (LF)","F");

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
   entry=leg->AddEntry("h_loosePho1Pt_#gamma+jets (HF)","#gamma+jets (HF)","F");

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
   entry=leg->AddEntry("h_loosePho1Pt_QCD","QCD","F");

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
   entry=leg->AddEntry("h_loosePho1Pt_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_loosePho1Pt_#gamma+jets (LF)","#gamma+jets (LF)","F");

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
   entry=leg->AddEntry("h_loosePho1Pt_#gamma+jets (HF)","#gamma+jets (HF)","F");

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
   entry=leg->AddEntry("h_loosePho1Pt_QCD","QCD","F");

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
   pad2->Range(-12.5,-0.8914286,1237.5,0.48);
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
   
   TH1D *ratio__24 = new TH1D("ratio__24","",20,175,1175);
   ratio__24->SetBinContent(1,0.05191684);
   ratio__24->SetBinContent(2,-0.02638447);
   ratio__24->SetBinContent(3,-0.04534197);
   ratio__24->SetBinContent(4,-0.08824724);
   ratio__24->SetBinContent(5,-0.1583651);
   ratio__24->SetBinContent(6,-0.1854557);
   ratio__24->SetBinContent(7,-0.226715);
   ratio__24->SetBinContent(8,-0.2357118);
   ratio__24->SetBinContent(9,-0.1960846);
   ratio__24->SetBinContent(10,-0.3095705);
   ratio__24->SetBinContent(11,-0.3301086);
   ratio__24->SetBinContent(12,-0.1654902);
   ratio__24->SetBinContent(13,-0.1485306);
   ratio__24->SetBinContent(14,-0.2046384);
   ratio__24->SetBinContent(15,-0.1249964);
   ratio__24->SetBinContent(16,-0.2401302);
   ratio__24->SetBinContent(17,-0.1519886);
   ratio__24->SetBinContent(18,-0.3352761);
   ratio__24->SetBinContent(19,-0.2298717);
   ratio__24->SetBinContent(20,0.1042669);
   ratio__24->SetBinError(1,0.0001);
   ratio__24->SetBinError(2,0.0001);
   ratio__24->SetBinError(3,0.0001);
   ratio__24->SetBinError(4,0.0001);
   ratio__24->SetBinError(5,0.0001);
   ratio__24->SetBinError(6,0.0001);
   ratio__24->SetBinError(7,0.0001);
   ratio__24->SetBinError(8,0.0001);
   ratio__24->SetBinError(9,0.0001);
   ratio__24->SetBinError(10,0.0001);
   ratio__24->SetBinError(11,0.0001);
   ratio__24->SetBinError(12,0.0001);
   ratio__24->SetBinError(13,0.0001);
   ratio__24->SetBinError(14,0.0001);
   ratio__24->SetBinError(15,0.0001);
   ratio__24->SetBinError(16,0.0001);
   ratio__24->SetBinError(17,0.0001);
   ratio__24->SetBinError(18,0.0001);
   ratio__24->SetBinError(19,0.0001);
   ratio__24->SetBinError(20,0.0001);
   ratio__24->SetMinimum(-0.48);
   ratio__24->SetMaximum(0.48);
   ratio__24->SetEntries(668754);
   ratio__24->SetStats(0);
   ratio__24->SetLineWidth(3);
   ratio__24->SetMarkerStyle(20);
   ratio__24->SetMarkerSize(2);
   ratio__24->GetXaxis()->SetTitle("Leading pho p_{T} [GeV]");
   ratio__24->GetXaxis()->SetLabelFont(43);
   ratio__24->GetXaxis()->SetLabelOffset(0.007);
   ratio__24->GetXaxis()->SetLabelSize(30);
   ratio__24->GetXaxis()->SetTitleSize(40);
   ratio__24->GetXaxis()->SetTickLength(0.025);
   ratio__24->GetXaxis()->SetTitleOffset(5);
   ratio__24->GetXaxis()->SetTitleFont(43);
   ratio__24->GetYaxis()->SetTitle("#frac{Data-Exp}{Exp}");
   ratio__24->GetYaxis()->SetNdivisions(5);
   ratio__24->GetYaxis()->SetLabelFont(43);
   ratio__24->GetYaxis()->SetLabelOffset(0.007);
   ratio__24->GetYaxis()->SetLabelSize(30);
   ratio__24->GetYaxis()->SetTitleSize(40);
   ratio__24->GetYaxis()->SetTickLength(0.025);
   ratio__24->GetYaxis()->SetTitleOffset(2.5);
   ratio__24->GetYaxis()->SetTitleFont(43);
   ratio__24->GetZaxis()->SetLabelFont(42);
   ratio__24->GetZaxis()->SetLabelOffset(0.007);
   ratio__24->GetZaxis()->SetTitleSize(0.05);
   ratio__24->GetZaxis()->SetTickLength(0.025);
   ratio__24->GetZaxis()->SetTitleFont(42);
   ratio__24->Draw("elp");
   
   TH1D *zero__25 = new TH1D("zero__25","",20,175,1175);
   zero__25->SetBinError(1,0.0008967378);
   zero__25->SetBinError(2,0.0006481618);
   zero__25->SetBinError(3,0.0003787669);
   zero__25->SetBinError(4,0.0002474905);
   zero__25->SetBinError(5,0.0001716218);
   zero__25->SetBinError(6,0.0001225559);
   zero__25->SetBinError(7,9.160852e-05);
   zero__25->SetBinError(8,6.983521e-05);
   zero__25->SetBinError(9,5.44731e-05);
   zero__25->SetBinError(10,4.308099e-05);
   zero__25->SetBinError(11,3.396811e-05);
   zero__25->SetBinError(12,2.895758e-05);
   zero__25->SetBinError(13,2.287465e-05);
   zero__25->SetBinError(14,1.932435e-05);
   zero__25->SetBinError(15,1.658438e-05);
   zero__25->SetBinError(16,1.320669e-05);
   zero__25->SetBinError(17,1.138834e-05);
   zero__25->SetBinError(18,9.338538e-06);
   zero__25->SetBinError(19,7.171508e-06);
   zero__25->SetBinError(20,1.487867e-05);
   zero__25->SetEntries(668754);
   zero__25->SetStats(0);
   zero__25->SetLineWidth(3);
   zero__25->SetMarkerStyle(20);
   zero__25->SetMarkerSize(2);
   zero__25->GetXaxis()->SetTitle("Leading pho p_{T} [GeV]");
   zero__25->GetXaxis()->SetLabelFont(42);
   zero__25->GetXaxis()->SetLabelOffset(0.007);
   zero__25->GetXaxis()->SetTitleSize(0.05);
   zero__25->GetXaxis()->SetTickLength(0.025);
   zero__25->GetXaxis()->SetTitleFont(42);
   zero__25->GetYaxis()->SetTitle("a.u./50 GeV");
   zero__25->GetYaxis()->SetLabelFont(42);
   zero__25->GetYaxis()->SetLabelOffset(0.007);
   zero__25->GetYaxis()->SetTitleSize(0.05);
   zero__25->GetYaxis()->SetTickLength(0.025);
   zero__25->GetYaxis()->SetTitleFont(42);
   zero__25->GetZaxis()->SetLabelFont(42);
   zero__25->GetZaxis()->SetLabelOffset(0.007);
   zero__25->GetZaxis()->SetTitleSize(0.05);
   zero__25->GetZaxis()->SetTickLength(0.025);
   zero__25->GetZaxis()->SetTitleFont(42);
   zero__25->Draw("hist same");
   
   TH1D *sumratioup__26 = new TH1D("sumratioup__26","",20,175,1175);
   sumratioup__26->SetBinContent(1,0.008169347);
   sumratioup__26->SetBinContent(2,0.006651638);
   sumratioup__26->SetBinContent(3,0.009964827);
   sumratioup__26->SetBinContent(4,0.01308683);
   sumratioup__26->SetBinContent(5,0.01575928);
   sumratioup__26->SetBinContent(6,0.01938817);
   sumratioup__26->SetBinContent(7,0.02277608);
   sumratioup__26->SetBinContent(8,0.02622637);
   sumratioup__26->SetBinContent(9,0.03057743);
   sumratioup__26->SetBinContent(10,0.03427124);
   sumratioup__26->SetBinContent(11,0.04193279);
   sumratioup__26->SetBinContent(12,0.05351286);
   sumratioup__26->SetBinContent(13,0.06904086);
   sumratioup__26->SetBinContent(14,0.07967869);
   sumratioup__26->SetBinContent(15,0.09541282);
   sumratioup__26->SetBinContent(16,0.1058261);
   sumratioup__26->SetBinContent(17,0.1276926);
   sumratioup__26->SetBinContent(18,0.1404981);
   sumratioup__26->SetBinContent(19,0.193379);
   sumratioup__26->SetBinContent(20,0.1176476);
   sumratioup__26->SetBinError(1,0.004176287);
   sumratioup__26->SetBinError(2,0.001919382);
   sumratioup__26->SetBinError(3,0.001001427);
   sumratioup__26->SetBinError(4,0.0005879326);
   sumratioup__26->SetBinError(5,0.000368817);
   sumratioup__26->SetBinError(6,0.0002390804);
   sumratioup__26->SetBinError(7,0.0001652968);
   sumratioup__26->SetBinError(8,0.0001119137);
   sumratioup__26->SetBinError(9,7.547586e-05);
   sumratioup__26->SetBinError(10,6.160772e-05);
   sumratioup__26->SetBinError(11,4.829983e-05);
   sumratioup__26->SetBinError(12,3.595875e-05);
   sumratioup__26->SetBinError(13,2.837263e-05);
   sumratioup__26->SetBinError(14,2.501731e-05);
   sumratioup__26->SetBinError(15,2.00562e-05);
   sumratioup__26->SetBinError(16,1.624407e-05);
   sumratioup__26->SetBinError(17,1.305987e-05);
   sumratioup__26->SetBinError(18,1.232652e-05);
   sumratioup__26->SetBinError(19,8.636161e-06);
   sumratioup__26->SetBinError(20,1.577215e-05);
   sumratioup__26->SetEntries(668794);
   sumratioup__26->SetStats(0);

   ci = 1182;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratioup__26->SetFillColor(ci);
   sumratioup__26->SetFillStyle(3003);
   sumratioup__26->GetXaxis()->SetTitle("Leading pho p_{T} [GeV]");
   sumratioup__26->GetXaxis()->SetLabelFont(42);
   sumratioup__26->GetXaxis()->SetLabelOffset(0.007);
   sumratioup__26->GetXaxis()->SetTitleSize(0.05);
   sumratioup__26->GetXaxis()->SetTickLength(0.025);
   sumratioup__26->GetXaxis()->SetTitleFont(42);
   sumratioup__26->GetYaxis()->SetTitle("a.u./50 GeV");
   sumratioup__26->GetYaxis()->SetLabelFont(42);
   sumratioup__26->GetYaxis()->SetLabelOffset(0.007);
   sumratioup__26->GetYaxis()->SetTitleSize(0.05);
   sumratioup__26->GetYaxis()->SetTickLength(0.025);
   sumratioup__26->GetYaxis()->SetTitleFont(42);
   sumratioup__26->GetZaxis()->SetLabelFont(42);
   sumratioup__26->GetZaxis()->SetLabelOffset(0.007);
   sumratioup__26->GetZaxis()->SetTitleSize(0.05);
   sumratioup__26->GetZaxis()->SetTickLength(0.025);
   sumratioup__26->GetZaxis()->SetTitleFont(42);
   sumratioup__26->Draw("hist same");
   
   TH1D *sumratiodown__27 = new TH1D("sumratiodown__27","",20,175,1175);
   sumratiodown__27->SetBinContent(1,-0.008169347);
   sumratiodown__27->SetBinContent(2,-0.006651638);
   sumratiodown__27->SetBinContent(3,-0.009964827);
   sumratiodown__27->SetBinContent(4,-0.01308683);
   sumratiodown__27->SetBinContent(5,-0.01575928);
   sumratiodown__27->SetBinContent(6,-0.01938817);
   sumratiodown__27->SetBinContent(7,-0.02277608);
   sumratiodown__27->SetBinContent(8,-0.02622637);
   sumratiodown__27->SetBinContent(9,-0.03057743);
   sumratiodown__27->SetBinContent(10,-0.03427124);
   sumratiodown__27->SetBinContent(11,-0.04193279);
   sumratiodown__27->SetBinContent(12,-0.05351286);
   sumratiodown__27->SetBinContent(13,-0.06904086);
   sumratiodown__27->SetBinContent(14,-0.07967869);
   sumratiodown__27->SetBinContent(15,-0.09541282);
   sumratiodown__27->SetBinContent(16,-0.1058261);
   sumratiodown__27->SetBinContent(17,-0.1276926);
   sumratiodown__27->SetBinContent(18,-0.1404981);
   sumratiodown__27->SetBinContent(19,-0.193379);
   sumratiodown__27->SetBinContent(20,-0.1176476);
   sumratiodown__27->SetBinError(1,0.004176287);
   sumratiodown__27->SetBinError(2,0.001919382);
   sumratiodown__27->SetBinError(3,0.001001427);
   sumratiodown__27->SetBinError(4,0.0005879326);
   sumratiodown__27->SetBinError(5,0.000368817);
   sumratiodown__27->SetBinError(6,0.0002390804);
   sumratiodown__27->SetBinError(7,0.0001652968);
   sumratiodown__27->SetBinError(8,0.0001119137);
   sumratiodown__27->SetBinError(9,7.547586e-05);
   sumratiodown__27->SetBinError(10,6.160772e-05);
   sumratiodown__27->SetBinError(11,4.829983e-05);
   sumratiodown__27->SetBinError(12,3.595875e-05);
   sumratiodown__27->SetBinError(13,2.837263e-05);
   sumratiodown__27->SetBinError(14,2.501731e-05);
   sumratiodown__27->SetBinError(15,2.00562e-05);
   sumratiodown__27->SetBinError(16,1.624407e-05);
   sumratiodown__27->SetBinError(17,1.305987e-05);
   sumratiodown__27->SetBinError(18,1.232652e-05);
   sumratiodown__27->SetBinError(19,8.636161e-06);
   sumratiodown__27->SetBinError(20,1.577215e-05);
   sumratiodown__27->SetEntries(668794);
   sumratiodown__27->SetStats(0);

   ci = 1182;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratiodown__27->SetFillColor(ci);
   sumratiodown__27->SetFillStyle(3003);
   sumratiodown__27->GetXaxis()->SetTitle("Leading pho p_{T} [GeV]");
   sumratiodown__27->GetXaxis()->SetLabelFont(42);
   sumratiodown__27->GetXaxis()->SetLabelOffset(0.007);
   sumratiodown__27->GetXaxis()->SetTitleSize(0.05);
   sumratiodown__27->GetXaxis()->SetTickLength(0.025);
   sumratiodown__27->GetXaxis()->SetTitleFont(42);
   sumratiodown__27->GetYaxis()->SetTitle("a.u./50 GeV");
   sumratiodown__27->GetYaxis()->SetLabelFont(42);
   sumratiodown__27->GetYaxis()->SetLabelOffset(0.007);
   sumratiodown__27->GetYaxis()->SetTitleSize(0.05);
   sumratiodown__27->GetYaxis()->SetTickLength(0.025);
   sumratiodown__27->GetYaxis()->SetTitleFont(42);
   sumratiodown__27->GetZaxis()->SetLabelFont(42);
   sumratiodown__27->GetZaxis()->SetLabelOffset(0.007);
   sumratiodown__27->GetZaxis()->SetTitleSize(0.05);
   sumratiodown__27->GetZaxis()->SetTickLength(0.025);
   sumratiodown__27->GetZaxis()->SetTitleFont(42);
   sumratiodown__27->Draw("hist same");
   
   Double_t Graph0_fx1003[20] = {
   200,
   250,
   300,
   350,
   400,
   450,
   500,
   550,
   600,
   650,
   700,
   750,
   800,
   850,
   900,
   950,
   1000,
   1050,
   1100,
   1150};
   Double_t Graph0_fy1003[20] = {
   0.05191684,
   -0.02638447,
   -0.04534197,
   -0.08824724,
   -0.1583651,
   -0.1854557,
   -0.226715,
   -0.2357118,
   -0.1960846,
   -0.3095705,
   -0.3301086,
   -0.1654902,
   -0.1485306,
   -0.2046384,
   -0.1249964,
   -0.2401302,
   -0.1519886,
   -0.3352761,
   -0.2298717,
   0.1042669};
   Double_t Graph0_fex1003[20] = {
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
   Double_t Graph0_fey1003[20] = {
   0.001754133,
   0.002246212,
   0.003768968,
   0.005508905,
   0.007333273,
   0.009938642,
   0.01262264,
   0.0163655,
   0.02206861,
   0.02396516,
   0.02949032,
   0.0430939,
   0.0556623,
   0.06154693,
   0.07889642,
   0.08603831,
   0.1113494,
   0.106441,
   0.1605828,
   0.110983};
   TGraphErrors *gre = new TGraphErrors(20,Graph0_fx1003,Graph0_fy1003,Graph0_fex1003,Graph0_fey1003);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","Graph",100,105,1245);
   Graph_Graph1003->SetMinimum(-0.5074138);
   Graph_Graph1003->SetMaximum(0.2809466);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1003->SetLineColor(ci);
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1003->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1003->GetXaxis()->SetTickLength(0.025);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1003->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1003->GetYaxis()->SetTickLength(0.025);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1003->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph1003->GetZaxis()->SetTickLength(0.025);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);
   
   gre->Draw("pe0");
   pad2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
