void photon_loosePho1Eta_logy()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sun Dec 11 15:15:11 2016) by ROOT version6.06/01
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
   pad1->Range(-3.4375,-2.929687,2.8125,1.494842);
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
   h->SetMinimum(0.003204712);
   h->SetMaximum(9.060827);
   
   TH1F *h_stack_6 = new TH1F("h_stack_6","",20,-2.5,2.5);
   h_stack_6->SetMinimum(0.001175744);
   h_stack_6->SetMaximum(15.3153);
   h_stack_6->SetDirectory(0);
   h_stack_6->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h_stack_6->SetLineColor(ci);
   h_stack_6->GetXaxis()->SetLabelFont(42);
   h_stack_6->GetXaxis()->SetLabelOffset(0.007);
   h_stack_6->GetXaxis()->SetTitleSize(0.05);
   h_stack_6->GetXaxis()->SetTickLength(0.025);
   h_stack_6->GetXaxis()->SetTitleFont(42);
   h_stack_6->GetYaxis()->SetTitle("a.u.");
   h_stack_6->GetYaxis()->SetLabelFont(42);
   h_stack_6->GetYaxis()->SetLabelOffset(0.007);
   h_stack_6->GetYaxis()->SetTitleSize(0.05);
   h_stack_6->GetYaxis()->SetTickLength(0.025);
   h_stack_6->GetYaxis()->SetTitleOffset(1.5);
   h_stack_6->GetYaxis()->SetTitleFont(42);
   h_stack_6->GetZaxis()->SetLabelFont(42);
   h_stack_6->GetZaxis()->SetLabelOffset(0.007);
   h_stack_6->GetZaxis()->SetTitleSize(0.05);
   h_stack_6->GetZaxis()->SetTickLength(0.025);
   h_stack_6->GetZaxis()->SetTitleFont(42);
   h->SetHistogram(h_stack_6);
   
   
   TH1D *h_loosePho1Eta_QCD__46 = new TH1D("h_loosePho1Eta_QCD__46","",20,-2.5,2.5);
   h_loosePho1Eta_QCD__46->SetBinContent(5,0.002164495);
   h_loosePho1Eta_QCD__46->SetBinContent(6,0.002828319);
   h_loosePho1Eta_QCD__46->SetBinContent(7,0.002876331);
   h_loosePho1Eta_QCD__46->SetBinContent(8,0.002998039);
   h_loosePho1Eta_QCD__46->SetBinContent(9,0.002878508);
   h_loosePho1Eta_QCD__46->SetBinContent(10,0.002850461);
   h_loosePho1Eta_QCD__46->SetBinContent(11,0.002908517);
   h_loosePho1Eta_QCD__46->SetBinContent(12,0.002945353);
   h_loosePho1Eta_QCD__46->SetBinContent(13,0.0030392);
   h_loosePho1Eta_QCD__46->SetBinContent(14,0.002927318);
   h_loosePho1Eta_QCD__46->SetBinContent(15,0.002823937);
   h_loosePho1Eta_QCD__46->SetBinContent(16,0.00218607);
   h_loosePho1Eta_QCD__46->SetBinError(5,1.055807e-05);
   h_loosePho1Eta_QCD__46->SetBinError(6,1.203979e-05);
   h_loosePho1Eta_QCD__46->SetBinError(7,1.21219e-05);
   h_loosePho1Eta_QCD__46->SetBinError(8,1.235736e-05);
   h_loosePho1Eta_QCD__46->SetBinError(9,1.20912e-05);
   h_loosePho1Eta_QCD__46->SetBinError(10,1.203118e-05);
   h_loosePho1Eta_QCD__46->SetBinError(11,1.214753e-05);
   h_loosePho1Eta_QCD__46->SetBinError(12,1.222809e-05);
   h_loosePho1Eta_QCD__46->SetBinError(13,1.243751e-05);
   h_loosePho1Eta_QCD__46->SetBinError(14,1.222261e-05);
   h_loosePho1Eta_QCD__46->SetBinError(15,1.203213e-05);
   h_loosePho1Eta_QCD__46->SetBinError(16,1.06063e-05);
   h_loosePho1Eta_QCD__46->SetEntries(668734);
   h_loosePho1Eta_QCD__46->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_loosePho1Eta_QCD__46->SetFillColor(ci);
   h_loosePho1Eta_QCD__46->GetXaxis()->SetTitle("Leading pho #eta");
   h_loosePho1Eta_QCD__46->GetXaxis()->SetLabelFont(42);
   h_loosePho1Eta_QCD__46->GetXaxis()->SetLabelOffset(0.007);
   h_loosePho1Eta_QCD__46->GetXaxis()->SetTitleSize(0.05);
   h_loosePho1Eta_QCD__46->GetXaxis()->SetTickLength(0.025);
   h_loosePho1Eta_QCD__46->GetXaxis()->SetTitleFont(42);
   h_loosePho1Eta_QCD__46->GetYaxis()->SetTitle("a.u.");
   h_loosePho1Eta_QCD__46->GetYaxis()->SetLabelFont(42);
   h_loosePho1Eta_QCD__46->GetYaxis()->SetLabelOffset(0.007);
   h_loosePho1Eta_QCD__46->GetYaxis()->SetTitleSize(0.05);
   h_loosePho1Eta_QCD__46->GetYaxis()->SetTickLength(0.025);
   h_loosePho1Eta_QCD__46->GetYaxis()->SetTitleFont(42);
   h_loosePho1Eta_QCD__46->GetZaxis()->SetLabelFont(42);
   h_loosePho1Eta_QCD__46->GetZaxis()->SetLabelOffset(0.007);
   h_loosePho1Eta_QCD__46->GetZaxis()->SetTitleSize(0.05);
   h_loosePho1Eta_QCD__46->GetZaxis()->SetTickLength(0.025);
   h_loosePho1Eta_QCD__46->GetZaxis()->SetTitleFont(42);
   h->Add(h_loosePho1Eta_QCD,"");
   
   TH1D *h_loosePho1Eta_#gammapLjetssPoPHFcP__47 = new TH1D("h_loosePho1Eta_#gammapLjetssPoPHFcP__47","",20,-2.5,2.5);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->SetBinContent(5,0.006840182);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->SetBinContent(6,0.0103398);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->SetBinContent(7,0.01121192);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->SetBinContent(8,0.01153625);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->SetBinContent(9,0.01314915);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->SetBinContent(10,0.01198874);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->SetBinContent(11,0.01200802);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->SetBinContent(12,0.01173113);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->SetBinContent(13,0.01226244);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->SetBinContent(14,0.01018778);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->SetBinContent(15,0.009084791);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->SetBinContent(16,0.006603649);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->SetBinError(5,0.0003073104);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->SetBinError(6,0.0005235979);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->SetBinError(7,0.0005542086);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->SetBinError(8,0.0005739262);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->SetBinError(9,0.0006049131);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->SetBinError(10,0.0005038418);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->SetBinError(11,0.0005320665);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->SetBinError(12,0.0004688333);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->SetBinError(13,0.0006193972);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->SetBinError(14,0.0005191619);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->SetBinError(15,0.0004010388);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->SetBinError(16,0.0003679695);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->SetEntries(14151);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->SetStats(0);

   ci = TColor::GetColor("#ff6633");
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->SetFillColor(ci);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->GetXaxis()->SetTitle("Leading pho #eta");
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->GetXaxis()->SetLabelFont(42);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->GetXaxis()->SetLabelOffset(0.007);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->GetXaxis()->SetTitleSize(0.05);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->GetXaxis()->SetTickLength(0.025);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->GetXaxis()->SetTitleFont(42);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->GetYaxis()->SetTitle("a.u.");
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->GetYaxis()->SetLabelFont(42);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->GetYaxis()->SetLabelOffset(0.007);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->GetYaxis()->SetTitleSize(0.05);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->GetYaxis()->SetTickLength(0.025);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->GetYaxis()->SetTitleFont(42);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->GetZaxis()->SetLabelFont(42);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->GetZaxis()->SetLabelOffset(0.007);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->GetZaxis()->SetTitleSize(0.05);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->GetZaxis()->SetTickLength(0.025);
   h_loosePho1Eta_#gammapLjetssPoPHFcP__47->GetZaxis()->SetTitleFont(42);
   h->Add(h_loosePho1Eta_#gamma+jets (HF),"");
   
   TH1D *h_loosePho1Eta_#gammapLjetssPoPLFcP__48 = new TH1D("h_loosePho1Eta_#gammapLjetssPoPLFcP__48","",20,-2.5,2.5);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->SetBinContent(5,0.05509);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->SetBinContent(6,0.07350518);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->SetBinContent(7,0.07369583);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->SetBinContent(8,0.07400916);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->SetBinContent(9,0.06994161);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->SetBinContent(10,0.07408522);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->SetBinContent(11,0.06944766);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->SetBinContent(12,0.07277519);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->SetBinContent(13,0.07530662);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->SetBinContent(14,0.07350071);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->SetBinContent(15,0.07269136);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->SetBinContent(16,0.05558102);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->SetBinError(5,0.001090536);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->SetBinError(6,0.00135948);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->SetBinError(7,0.001289716);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->SetBinError(8,0.001318112);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->SetBinError(9,0.001226331);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->SetBinError(10,0.001346946);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->SetBinError(11,0.001229073);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->SetBinError(12,0.001344709);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->SetBinError(13,0.001360939);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->SetBinError(14,0.001344407);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->SetBinError(15,0.00129452);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->SetBinError(16,0.001110522);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->SetEntries(99281);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->SetStats(0);

   ci = TColor::GetColor("#339999");
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->SetFillColor(ci);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->GetXaxis()->SetTitle("Leading pho #eta");
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->GetXaxis()->SetLabelFont(42);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->GetXaxis()->SetLabelOffset(0.007);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->GetXaxis()->SetTitleSize(0.05);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->GetXaxis()->SetTickLength(0.025);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->GetXaxis()->SetTitleFont(42);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->GetYaxis()->SetTitle("a.u.");
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->GetYaxis()->SetLabelFont(42);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->GetYaxis()->SetLabelOffset(0.007);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->GetYaxis()->SetTitleSize(0.05);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->GetYaxis()->SetTickLength(0.025);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->GetYaxis()->SetTitleFont(42);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->GetZaxis()->SetLabelFont(42);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->GetZaxis()->SetLabelOffset(0.007);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->GetZaxis()->SetTitleSize(0.05);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->GetZaxis()->SetTickLength(0.025);
   h_loosePho1Eta_#gammapLjetssPoPLFcP__48->GetZaxis()->SetTitleFont(42);
   h->Add(h_loosePho1Eta_#gamma+jets (LF),"");
   h->Draw("hist");
   
   TH1D *hsum__49 = new TH1D("hsum__49","",20,-2.5,2.5);
   hsum__49->SetBinContent(5,0.06409467);
   hsum__49->SetBinContent(6,0.0866733);
   hsum__49->SetBinContent(7,0.08778408);
   hsum__49->SetBinContent(8,0.08854344);
   hsum__49->SetBinContent(9,0.08596927);
   hsum__49->SetBinContent(10,0.08892442);
   hsum__49->SetBinContent(11,0.0843642);
   hsum__49->SetBinContent(12,0.08745167);
   hsum__49->SetBinContent(13,0.09060827);
   hsum__49->SetBinContent(14,0.08661582);
   hsum__49->SetBinContent(15,0.08460009);
   hsum__49->SetBinContent(16,0.06437074);
   hsum__49->SetBinError(5,0.001133058);
   hsum__49->SetBinError(6,0.001456875);
   hsum__49->SetBinError(7,0.001403803);
   hsum__49->SetBinError(8,0.001437694);
   hsum__49->SetBinError(9,0.001367462);
   hsum__49->SetBinError(10,0.001438147);
   hsum__49->SetBinError(11,0.001339352);
   hsum__49->SetBinError(12,0.001424148);
   hsum__49->SetBinError(13,0.001495314);
   hsum__49->SetBinError(14,0.001441218);
   hsum__49->SetBinError(15,0.00135527);
   hsum__49->SetBinError(16,0.001169946);
   hsum__49->SetEntries(668774);
   hsum__49->SetStats(0);

   ci = 1185;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   hsum__49->SetFillColor(ci);
   hsum__49->SetFillStyle(3003);
   hsum__49->SetLineWidth(0);
   hsum__49->GetXaxis()->SetTitle("Leading pho #eta");
   hsum__49->GetXaxis()->SetLabelFont(42);
   hsum__49->GetXaxis()->SetLabelOffset(0.007);
   hsum__49->GetXaxis()->SetTitleSize(0.05);
   hsum__49->GetXaxis()->SetTickLength(0.025);
   hsum__49->GetXaxis()->SetTitleFont(42);
   hsum__49->GetYaxis()->SetTitle("a.u.");
   hsum__49->GetYaxis()->SetLabelFont(42);
   hsum__49->GetYaxis()->SetLabelOffset(0.007);
   hsum__49->GetYaxis()->SetTitleSize(0.05);
   hsum__49->GetYaxis()->SetTickLength(0.025);
   hsum__49->GetYaxis()->SetTitleFont(42);
   hsum__49->GetZaxis()->SetLabelFont(42);
   hsum__49->GetZaxis()->SetLabelOffset(0.007);
   hsum__49->GetZaxis()->SetTitleSize(0.05);
   hsum__49->GetZaxis()->SetTickLength(0.025);
   hsum__49->GetZaxis()->SetTitleFont(42);
   hsum__49->Draw("e2 same");
   
   TH1D *h_loosePho1Eta_Data__50 = new TH1D("h_loosePho1Eta_Data__50","",20,-2.5,2.5);
   h_loosePho1Eta_Data__50->SetBinContent(5,0.06409424);
   h_loosePho1Eta_Data__50->SetBinContent(6,0.08413809);
   h_loosePho1Eta_Data__50->SetBinContent(7,0.08586673);
   h_loosePho1Eta_Data__50->SetBinContent(8,0.08984439);
   h_loosePho1Eta_Data__50->SetBinContent(9,0.08657254);
   h_loosePho1Eta_Data__50->SetBinContent(10,0.08577102);
   h_loosePho1Eta_Data__50->SetBinContent(11,0.08759836);
   h_loosePho1Eta_Data__50->SetBinContent(12,0.08864212);
   h_loosePho1Eta_Data__50->SetBinContent(13,0.09115583);
   h_loosePho1Eta_Data__50->SetBinContent(14,0.08751462);
   h_loosePho1Eta_Data__50->SetBinContent(15,0.08401397);
   h_loosePho1Eta_Data__50->SetBinContent(16,0.06478809);
   h_loosePho1Eta_Data__50->SetBinError(5,0.0003095871);
   h_loosePho1Eta_Data__50->SetBinError(6,0.0003547069);
   h_loosePho1Eta_Data__50->SetBinError(7,0.0003583321);
   h_loosePho1Eta_Data__50->SetBinError(8,0.0003665378);
   h_loosePho1Eta_Data__50->SetBinError(9,0.0003598018);
   h_loosePho1Eta_Data__50->SetBinError(10,0.0003581324);
   h_loosePho1Eta_Data__50->SetBinError(11,0.0003619272);
   h_loosePho1Eta_Data__50->SetBinError(12,0.0003640771);
   h_loosePho1Eta_Data__50->SetBinError(13,0.0003692032);
   h_loosePho1Eta_Data__50->SetBinError(14,0.0003617542);
   h_loosePho1Eta_Data__50->SetBinError(15,0.0003544452);
   h_loosePho1Eta_Data__50->SetBinError(16,0.0003112583);
   h_loosePho1Eta_Data__50->SetEntries(668734);
   h_loosePho1Eta_Data__50->SetStats(0);
   h_loosePho1Eta_Data__50->SetLineWidth(3);
   h_loosePho1Eta_Data__50->SetMarkerStyle(20);
   h_loosePho1Eta_Data__50->SetMarkerSize(2);
   h_loosePho1Eta_Data__50->GetXaxis()->SetTitle("Leading pho #eta");
   h_loosePho1Eta_Data__50->GetXaxis()->SetLabelFont(42);
   h_loosePho1Eta_Data__50->GetXaxis()->SetLabelOffset(0.007);
   h_loosePho1Eta_Data__50->GetXaxis()->SetTitleSize(0.05);
   h_loosePho1Eta_Data__50->GetXaxis()->SetTickLength(0.025);
   h_loosePho1Eta_Data__50->GetXaxis()->SetTitleFont(42);
   h_loosePho1Eta_Data__50->GetYaxis()->SetTitle("a.u.");
   h_loosePho1Eta_Data__50->GetYaxis()->SetLabelFont(42);
   h_loosePho1Eta_Data__50->GetYaxis()->SetLabelOffset(0.007);
   h_loosePho1Eta_Data__50->GetYaxis()->SetTitleSize(0.05);
   h_loosePho1Eta_Data__50->GetYaxis()->SetTickLength(0.025);
   h_loosePho1Eta_Data__50->GetYaxis()->SetTitleFont(42);
   h_loosePho1Eta_Data__50->GetZaxis()->SetLabelFont(42);
   h_loosePho1Eta_Data__50->GetZaxis()->SetLabelOffset(0.007);
   h_loosePho1Eta_Data__50->GetZaxis()->SetTitleSize(0.05);
   h_loosePho1Eta_Data__50->GetZaxis()->SetTickLength(0.025);
   h_loosePho1Eta_Data__50->GetZaxis()->SetTitleFont(42);
   h_loosePho1Eta_Data__50->Draw("elp same");
   
   TLegend *leg = new TLegend(0.6,0.55,0.88,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("h_loosePho1Eta_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_loosePho1Eta_#gamma+jets (LF)","#gamma+jets (LF)","F");

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
   entry=leg->AddEntry("h_loosePho1Eta_#gamma+jets (HF)","#gamma+jets (HF)","F");

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
   entry=leg->AddEntry("h_loosePho1Eta_QCD","QCD","F");

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
   entry=leg->AddEntry("h_loosePho1Eta_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_loosePho1Eta_#gamma+jets (LF)","#gamma+jets (LF)","F");

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
   entry=leg->AddEntry("h_loosePho1Eta_#gamma+jets (HF)","#gamma+jets (HF)","F");

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
   entry=leg->AddEntry("h_loosePho1Eta_QCD","QCD","F");

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
   pad2->Range(-3.4375,-0.8914286,2.8125,0.48);
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
   
   TH1D *ratio__51 = new TH1D("ratio__51","",20,-2.5,2.5);
   ratio__51->SetBinContent(1,-999);
   ratio__51->SetBinContent(2,-999);
   ratio__51->SetBinContent(3,-999);
   ratio__51->SetBinContent(4,-999);
   ratio__51->SetBinContent(5,-6.616116e-06);
   ratio__51->SetBinContent(6,-0.02925014);
   ratio__51->SetBinContent(7,-0.0218417);
   ratio__51->SetBinContent(8,0.01469278);
   ratio__51->SetBinContent(9,0.007017255);
   ratio__51->SetBinContent(10,-0.03546149);
   ratio__51->SetBinContent(11,0.03833568);
   ratio__51->SetBinContent(12,0.01361275);
   ratio__51->SetBinContent(13,0.006043077);
   ratio__51->SetBinContent(14,0.01037681);
   ratio__51->SetBinContent(15,-0.006928086);
   ratio__51->SetBinContent(16,0.006483674);
   ratio__51->SetBinContent(17,-999);
   ratio__51->SetBinContent(18,-999);
   ratio__51->SetBinContent(19,-999);
   ratio__51->SetBinContent(20,-999);
   ratio__51->SetBinError(1,0.0001);
   ratio__51->SetBinError(2,0.0001);
   ratio__51->SetBinError(3,0.0001);
   ratio__51->SetBinError(4,0.0001);
   ratio__51->SetBinError(5,0.0001);
   ratio__51->SetBinError(6,0.0001);
   ratio__51->SetBinError(7,0.0001);
   ratio__51->SetBinError(8,0.0001);
   ratio__51->SetBinError(9,0.0001);
   ratio__51->SetBinError(10,0.0001);
   ratio__51->SetBinError(11,0.0001);
   ratio__51->SetBinError(12,0.0001);
   ratio__51->SetBinError(13,0.0001);
   ratio__51->SetBinError(14,0.0001);
   ratio__51->SetBinError(15,0.0001);
   ratio__51->SetBinError(16,0.0001);
   ratio__51->SetBinError(17,0.0001);
   ratio__51->SetBinError(18,0.0001);
   ratio__51->SetBinError(19,0.0001);
   ratio__51->SetBinError(20,0.0001);
   ratio__51->SetMinimum(-0.48);
   ratio__51->SetMaximum(0.48);
   ratio__51->SetEntries(668754);
   ratio__51->SetStats(0);
   ratio__51->SetLineWidth(3);
   ratio__51->SetMarkerStyle(20);
   ratio__51->SetMarkerSize(2);
   ratio__51->GetXaxis()->SetTitle("Leading pho #eta");
   ratio__51->GetXaxis()->SetLabelFont(43);
   ratio__51->GetXaxis()->SetLabelOffset(0.007);
   ratio__51->GetXaxis()->SetLabelSize(30);
   ratio__51->GetXaxis()->SetTitleSize(40);
   ratio__51->GetXaxis()->SetTickLength(0.025);
   ratio__51->GetXaxis()->SetTitleOffset(5);
   ratio__51->GetXaxis()->SetTitleFont(43);
   ratio__51->GetYaxis()->SetTitle("#frac{Data-Exp}{Exp}");
   ratio__51->GetYaxis()->SetNdivisions(5);
   ratio__51->GetYaxis()->SetLabelFont(43);
   ratio__51->GetYaxis()->SetLabelOffset(0.007);
   ratio__51->GetYaxis()->SetLabelSize(30);
   ratio__51->GetYaxis()->SetTitleSize(40);
   ratio__51->GetYaxis()->SetTickLength(0.025);
   ratio__51->GetYaxis()->SetTitleOffset(2.5);
   ratio__51->GetYaxis()->SetTitleFont(43);
   ratio__51->GetZaxis()->SetLabelFont(42);
   ratio__51->GetZaxis()->SetLabelOffset(0.007);
   ratio__51->GetZaxis()->SetTitleSize(0.05);
   ratio__51->GetZaxis()->SetTickLength(0.025);
   ratio__51->GetZaxis()->SetTitleFont(42);
   ratio__51->Draw("elp");
   
   TH1D *zero__52 = new TH1D("zero__52","",20,-2.5,2.5);
   zero__52->SetBinError(5,0.0003095871);
   zero__52->SetBinError(6,0.0003547069);
   zero__52->SetBinError(7,0.0003583321);
   zero__52->SetBinError(8,0.0003665378);
   zero__52->SetBinError(9,0.0003598018);
   zero__52->SetBinError(10,0.0003581324);
   zero__52->SetBinError(11,0.0003619272);
   zero__52->SetBinError(12,0.0003640771);
   zero__52->SetBinError(13,0.0003692032);
   zero__52->SetBinError(14,0.0003617542);
   zero__52->SetBinError(15,0.0003544452);
   zero__52->SetBinError(16,0.0003112583);
   zero__52->SetEntries(668754);
   zero__52->SetStats(0);
   zero__52->SetLineWidth(3);
   zero__52->SetMarkerStyle(20);
   zero__52->SetMarkerSize(2);
   zero__52->GetXaxis()->SetTitle("Leading pho #eta");
   zero__52->GetXaxis()->SetLabelFont(42);
   zero__52->GetXaxis()->SetLabelOffset(0.007);
   zero__52->GetXaxis()->SetTitleSize(0.05);
   zero__52->GetXaxis()->SetTickLength(0.025);
   zero__52->GetXaxis()->SetTitleFont(42);
   zero__52->GetYaxis()->SetTitle("a.u.");
   zero__52->GetYaxis()->SetLabelFont(42);
   zero__52->GetYaxis()->SetLabelOffset(0.007);
   zero__52->GetYaxis()->SetTitleSize(0.05);
   zero__52->GetYaxis()->SetTickLength(0.025);
   zero__52->GetYaxis()->SetTitleFont(42);
   zero__52->GetZaxis()->SetLabelFont(42);
   zero__52->GetZaxis()->SetLabelOffset(0.007);
   zero__52->GetZaxis()->SetTitleSize(0.05);
   zero__52->GetZaxis()->SetTickLength(0.025);
   zero__52->GetZaxis()->SetTitleFont(42);
   zero__52->Draw("hist same");
   
   TH1D *sumratioup__53 = new TH1D("sumratioup__53","",20,-2.5,2.5);
   sumratioup__53->SetBinContent(5,0.01767788);
   sumratioup__53->SetBinContent(6,0.01680882);
   sumratioup__53->SetBinContent(7,0.01599154);
   sumratioup__53->SetBinContent(8,0.01623715);
   sumratioup__53->SetBinContent(9,0.01590641);
   sumratioup__53->SetBinContent(10,0.01617269);
   sumratioup__53->SetBinContent(11,0.01587583);
   sumratioup__53->SetBinContent(12,0.01628497);
   sumratioup__53->SetBinContent(13,0.01650306);
   sumratioup__53->SetBinContent(14,0.0166392);
   sumratioup__53->SetBinContent(15,0.01601973);
   sumratioup__53->SetBinContent(16,0.01817512);
   sumratioup__53->SetBinError(5,0.001133058);
   sumratioup__53->SetBinError(6,0.001456875);
   sumratioup__53->SetBinError(7,0.001403803);
   sumratioup__53->SetBinError(8,0.001437694);
   sumratioup__53->SetBinError(9,0.001367462);
   sumratioup__53->SetBinError(10,0.001438147);
   sumratioup__53->SetBinError(11,0.001339352);
   sumratioup__53->SetBinError(12,0.001424148);
   sumratioup__53->SetBinError(13,0.001495314);
   sumratioup__53->SetBinError(14,0.001441218);
   sumratioup__53->SetBinError(15,0.00135527);
   sumratioup__53->SetBinError(16,0.001169946);
   sumratioup__53->SetEntries(668794);
   sumratioup__53->SetStats(0);

   ci = 1185;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratioup__53->SetFillColor(ci);
   sumratioup__53->SetFillStyle(3003);
   sumratioup__53->GetXaxis()->SetTitle("Leading pho #eta");
   sumratioup__53->GetXaxis()->SetLabelFont(42);
   sumratioup__53->GetXaxis()->SetLabelOffset(0.007);
   sumratioup__53->GetXaxis()->SetTitleSize(0.05);
   sumratioup__53->GetXaxis()->SetTickLength(0.025);
   sumratioup__53->GetXaxis()->SetTitleFont(42);
   sumratioup__53->GetYaxis()->SetTitle("a.u.");
   sumratioup__53->GetYaxis()->SetLabelFont(42);
   sumratioup__53->GetYaxis()->SetLabelOffset(0.007);
   sumratioup__53->GetYaxis()->SetTitleSize(0.05);
   sumratioup__53->GetYaxis()->SetTickLength(0.025);
   sumratioup__53->GetYaxis()->SetTitleFont(42);
   sumratioup__53->GetZaxis()->SetLabelFont(42);
   sumratioup__53->GetZaxis()->SetLabelOffset(0.007);
   sumratioup__53->GetZaxis()->SetTitleSize(0.05);
   sumratioup__53->GetZaxis()->SetTickLength(0.025);
   sumratioup__53->GetZaxis()->SetTitleFont(42);
   sumratioup__53->Draw("hist same");
   
   TH1D *sumratiodown__54 = new TH1D("sumratiodown__54","",20,-2.5,2.5);
   sumratiodown__54->SetBinContent(5,-0.01767788);
   sumratiodown__54->SetBinContent(6,-0.01680882);
   sumratiodown__54->SetBinContent(7,-0.01599154);
   sumratiodown__54->SetBinContent(8,-0.01623715);
   sumratiodown__54->SetBinContent(9,-0.01590641);
   sumratiodown__54->SetBinContent(10,-0.01617269);
   sumratiodown__54->SetBinContent(11,-0.01587583);
   sumratiodown__54->SetBinContent(12,-0.01628497);
   sumratiodown__54->SetBinContent(13,-0.01650306);
   sumratiodown__54->SetBinContent(14,-0.0166392);
   sumratiodown__54->SetBinContent(15,-0.01601973);
   sumratiodown__54->SetBinContent(16,-0.01817512);
   sumratiodown__54->SetBinError(5,0.001133058);
   sumratiodown__54->SetBinError(6,0.001456875);
   sumratiodown__54->SetBinError(7,0.001403803);
   sumratiodown__54->SetBinError(8,0.001437694);
   sumratiodown__54->SetBinError(9,0.001367462);
   sumratiodown__54->SetBinError(10,0.001438147);
   sumratiodown__54->SetBinError(11,0.001339352);
   sumratiodown__54->SetBinError(12,0.001424148);
   sumratiodown__54->SetBinError(13,0.001495314);
   sumratiodown__54->SetBinError(14,0.001441218);
   sumratiodown__54->SetBinError(15,0.00135527);
   sumratiodown__54->SetBinError(16,0.001169946);
   sumratiodown__54->SetEntries(668794);
   sumratiodown__54->SetStats(0);

   ci = 1185;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratiodown__54->SetFillColor(ci);
   sumratiodown__54->SetFillStyle(3003);
   sumratiodown__54->GetXaxis()->SetTitle("Leading pho #eta");
   sumratiodown__54->GetXaxis()->SetLabelFont(42);
   sumratiodown__54->GetXaxis()->SetLabelOffset(0.007);
   sumratiodown__54->GetXaxis()->SetTitleSize(0.05);
   sumratiodown__54->GetXaxis()->SetTickLength(0.025);
   sumratiodown__54->GetXaxis()->SetTitleFont(42);
   sumratiodown__54->GetYaxis()->SetTitle("a.u.");
   sumratiodown__54->GetYaxis()->SetLabelFont(42);
   sumratiodown__54->GetYaxis()->SetLabelOffset(0.007);
   sumratiodown__54->GetYaxis()->SetTitleSize(0.05);
   sumratiodown__54->GetYaxis()->SetTickLength(0.025);
   sumratiodown__54->GetYaxis()->SetTitleFont(42);
   sumratiodown__54->GetZaxis()->SetLabelFont(42);
   sumratiodown__54->GetZaxis()->SetLabelOffset(0.007);
   sumratiodown__54->GetZaxis()->SetTitleSize(0.05);
   sumratiodown__54->GetZaxis()->SetTickLength(0.025);
   sumratiodown__54->GetZaxis()->SetTitleFont(42);
   sumratiodown__54->Draw("hist same");
   
   Double_t Graph0_fx1006[20] = {
   -2.375,
   -2.125,
   -1.875,
   -1.625,
   -1.375,
   -1.125,
   -0.875,
   -0.625,
   -0.375,
   -0.125,
   0.125,
   0.375,
   0.625,
   0.875,
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375};
   Double_t Graph0_fy1006[20] = {
   -999,
   -999,
   -999,
   -999,
   -6.616116e-06,
   -0.02925014,
   -0.0218417,
   0.01469278,
   0.007017255,
   -0.03546149,
   0.03833568,
   0.01361275,
   0.006043077,
   0.01037681,
   -0.006928086,
   0.006483674,
   -999,
   -999,
   -999,
   -999};
   Double_t Graph0_fex1006[20] = {
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
   Double_t Graph0_fey1006[20] = {
   0,
   0,
   0,
   0,
   0.004830153,
   0.004092459,
   0.004081971,
   0.004139638,
   0.004185238,
   0.00402738,
   0.004290057,
   0.004163181,
   0.004074719,
   0.004176538,
   0.004189655,
   0.0048354,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(20,Graph0_fx1006,Graph0_fy1006,Graph0_fex1006,Graph0_fey1006);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1006 = new TH1F("Graph_Graph1006","Graph",100,-2.85,2.85);
   Graph_Graph1006->SetMinimum(-1098.904);
   Graph_Graph1006->SetMaximum(99.94689);
   Graph_Graph1006->SetDirectory(0);
   Graph_Graph1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1006->SetLineColor(ci);
   Graph_Graph1006->GetXaxis()->SetLabelFont(42);
   Graph_Graph1006->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1006->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1006->GetXaxis()->SetTickLength(0.025);
   Graph_Graph1006->GetXaxis()->SetTitleFont(42);
   Graph_Graph1006->GetYaxis()->SetLabelFont(42);
   Graph_Graph1006->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1006->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1006->GetYaxis()->SetTickLength(0.025);
   Graph_Graph1006->GetYaxis()->SetTitleFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1006->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph1006->GetZaxis()->SetTickLength(0.025);
   Graph_Graph1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1006);
   
   gre->Draw("pe0");
   pad2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
