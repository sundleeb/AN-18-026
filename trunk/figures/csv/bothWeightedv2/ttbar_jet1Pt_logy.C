void ttbar_jet1Pt_logy()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sun Dec 11 15:16:18 2016) by ROOT version6.06/01
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
   pad1->Range(-169.6875,-5.113452,1061.562,2.208608);
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
   h->SetMinimum(3.032924e-05);
   h->SetMaximum(22.83167);
   
   TH1F *h_stack_16 = new TH1F("h_stack_16","",20,15,1000);
   h_stack_16->SetMinimum(7.701024e-06);
   h_stack_16->SetMaximum(49.66654);
   h_stack_16->SetDirectory(0);
   h_stack_16->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h_stack_16->SetLineColor(ci);
   h_stack_16->GetXaxis()->SetLabelFont(42);
   h_stack_16->GetXaxis()->SetLabelOffset(0.007);
   h_stack_16->GetXaxis()->SetTitleSize(0.05);
   h_stack_16->GetXaxis()->SetTickLength(0.025);
   h_stack_16->GetXaxis()->SetTitleFont(42);
   h_stack_16->GetYaxis()->SetTitle("a.u.");
   h_stack_16->GetYaxis()->SetLabelFont(42);
   h_stack_16->GetYaxis()->SetLabelOffset(0.007);
   h_stack_16->GetYaxis()->SetTitleSize(0.05);
   h_stack_16->GetYaxis()->SetTickLength(0.025);
   h_stack_16->GetYaxis()->SetTitleOffset(1.5);
   h_stack_16->GetYaxis()->SetTitleFont(42);
   h_stack_16->GetZaxis()->SetLabelFont(42);
   h_stack_16->GetZaxis()->SetLabelOffset(0.007);
   h_stack_16->GetZaxis()->SetTitleSize(0.05);
   h_stack_16->GetZaxis()->SetTickLength(0.025);
   h_stack_16->GetZaxis()->SetTitleFont(42);
   h->SetHistogram(h_stack_16);
   
   
   TH1D *h_jet1Pt_QCD__181 = new TH1D("h_jet1Pt_QCD__181","",20,15,1000);
   h_jet1Pt_QCD__181->SetBinContent(1,0.0008426245);
   h_jet1Pt_QCD__181->SetBinContent(2,0.002521156);
   h_jet1Pt_QCD__181->SetBinContent(3,0.002889778);
   h_jet1Pt_QCD__181->SetBinContent(4,0.001149113);
   h_jet1Pt_QCD__181->SetBinContent(5,0.001291158);
   h_jet1Pt_QCD__181->SetBinContent(6,0.0005078625);
   h_jet1Pt_QCD__181->SetBinContent(7,0.001682792);
   h_jet1Pt_QCD__181->SetBinContent(9,0.0002095089);
   h_jet1Pt_QCD__181->SetBinContent(10,0.0001985037);
   h_jet1Pt_QCD__181->SetBinContent(11,0.0001965747);
   h_jet1Pt_QCD__181->SetBinContent(13,5.915118e-05);
   h_jet1Pt_QCD__181->SetBinContent(16,2.93866e-05);
   h_jet1Pt_QCD__181->SetBinContent(20,7.949197e-06);
   h_jet1Pt_QCD__181->SetBinError(1,0.0008426245);
   h_jet1Pt_QCD__181->SetBinError(2,0.001782758);
   h_jet1Pt_QCD__181->SetBinError(3,0.00171558);
   h_jet1Pt_QCD__181->SetBinError(4,0.001149113);
   h_jet1Pt_QCD__181->SetBinError(5,0.0006682189);
   h_jet1Pt_QCD__181->SetBinError(6,0.0005078625);
   h_jet1Pt_QCD__181->SetBinError(7,0.0008149181);
   h_jet1Pt_QCD__181->SetBinError(9,0.0002095089);
   h_jet1Pt_QCD__181->SetBinError(10,0.0001985037);
   h_jet1Pt_QCD__181->SetBinError(11,0.0001965747);
   h_jet1Pt_QCD__181->SetBinError(13,4.216202e-05);
   h_jet1Pt_QCD__181->SetBinError(16,2.93866e-05);
   h_jet1Pt_QCD__181->SetBinError(20,7.949197e-06);
   h_jet1Pt_QCD__181->SetEntries(25);
   h_jet1Pt_QCD__181->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_jet1Pt_QCD__181->SetFillColor(ci);
   h_jet1Pt_QCD__181->GetXaxis()->SetTitle("leading jet p_{T} [GeV]");
   h_jet1Pt_QCD__181->GetXaxis()->SetLabelFont(42);
   h_jet1Pt_QCD__181->GetXaxis()->SetLabelOffset(0.007);
   h_jet1Pt_QCD__181->GetXaxis()->SetTitleSize(0.05);
   h_jet1Pt_QCD__181->GetXaxis()->SetTickLength(0.025);
   h_jet1Pt_QCD__181->GetXaxis()->SetTitleFont(42);
   h_jet1Pt_QCD__181->GetYaxis()->SetTitle("a.u.");
   h_jet1Pt_QCD__181->GetYaxis()->SetLabelFont(42);
   h_jet1Pt_QCD__181->GetYaxis()->SetLabelOffset(0.007);
   h_jet1Pt_QCD__181->GetYaxis()->SetTitleSize(0.05);
   h_jet1Pt_QCD__181->GetYaxis()->SetTickLength(0.025);
   h_jet1Pt_QCD__181->GetYaxis()->SetTitleFont(42);
   h_jet1Pt_QCD__181->GetZaxis()->SetLabelFont(42);
   h_jet1Pt_QCD__181->GetZaxis()->SetLabelOffset(0.007);
   h_jet1Pt_QCD__181->GetZaxis()->SetTitleSize(0.05);
   h_jet1Pt_QCD__181->GetZaxis()->SetTickLength(0.025);
   h_jet1Pt_QCD__181->GetZaxis()->SetTitleFont(42);
   h->Add(h_jet1Pt_QCD,"");
   
   TH1D *h_jet1Pt_Diboson__182 = new TH1D("h_jet1Pt_Diboson__182","",20,15,1000);
   h_jet1Pt_Diboson__182->SetBinContent(1,0.002730763);
   h_jet1Pt_Diboson__182->SetBinContent(2,0.00369183);
   h_jet1Pt_Diboson__182->SetBinContent(3,0.008961835);
   h_jet1Pt_Diboson__182->SetBinContent(4,0.007899656);
   h_jet1Pt_Diboson__182->SetBinContent(5,0.005173793);
   h_jet1Pt_Diboson__182->SetBinContent(6,0.003014978);
   h_jet1Pt_Diboson__182->SetBinContent(7,0.002379428);
   h_jet1Pt_Diboson__182->SetBinContent(8,0.0009995914);
   h_jet1Pt_Diboson__182->SetBinContent(9,0.0001987777);
   h_jet1Pt_Diboson__182->SetBinContent(10,0.0005483892);
   h_jet1Pt_Diboson__182->SetBinContent(11,0.0005462578);
   h_jet1Pt_Diboson__182->SetBinContent(12,0.0001557919);
   h_jet1Pt_Diboson__182->SetBinContent(13,5.989644e-05);
   h_jet1Pt_Diboson__182->SetBinContent(14,0.0001408858);
   h_jet1Pt_Diboson__182->SetBinContent(19,0.000176164);
   h_jet1Pt_Diboson__182->SetBinContent(20,0.0001151441);
   h_jet1Pt_Diboson__182->SetBinError(1,0.0007245887);
   h_jet1Pt_Diboson__182->SetBinError(2,0.0008357676);
   h_jet1Pt_Diboson__182->SetBinError(3,0.001347709);
   h_jet1Pt_Diboson__182->SetBinError(4,0.001283795);
   h_jet1Pt_Diboson__182->SetBinError(5,0.00102447);
   h_jet1Pt_Diboson__182->SetBinError(6,0.0007841595);
   h_jet1Pt_Diboson__182->SetBinError(7,0.0006314042);
   h_jet1Pt_Diboson__182->SetBinError(8,0.0004523694);
   h_jet1Pt_Diboson__182->SetBinError(9,0.0001588207);
   h_jet1Pt_Diboson__182->SetBinError(10,0.0003167486);
   h_jet1Pt_Diboson__182->SetBinError(11,0.0003103352);
   h_jet1Pt_Diboson__182->SetBinError(12,0.0001434349);
   h_jet1Pt_Diboson__182->SetBinError(13,5.989644e-05);
   h_jet1Pt_Diboson__182->SetBinError(14,0.0001408858);
   h_jet1Pt_Diboson__182->SetBinError(19,0.000176164);
   h_jet1Pt_Diboson__182->SetBinError(20,0.0001151441);
   h_jet1Pt_Diboson__182->SetEntries(227);
   h_jet1Pt_Diboson__182->SetStats(0);

   ci = TColor::GetColor("#9966cc");
   h_jet1Pt_Diboson__182->SetFillColor(ci);
   h_jet1Pt_Diboson__182->GetXaxis()->SetTitle("leading jet p_{T} [GeV]");
   h_jet1Pt_Diboson__182->GetXaxis()->SetLabelFont(42);
   h_jet1Pt_Diboson__182->GetXaxis()->SetLabelOffset(0.007);
   h_jet1Pt_Diboson__182->GetXaxis()->SetTitleSize(0.05);
   h_jet1Pt_Diboson__182->GetXaxis()->SetTickLength(0.025);
   h_jet1Pt_Diboson__182->GetXaxis()->SetTitleFont(42);
   h_jet1Pt_Diboson__182->GetYaxis()->SetTitle("a.u.");
   h_jet1Pt_Diboson__182->GetYaxis()->SetLabelFont(42);
   h_jet1Pt_Diboson__182->GetYaxis()->SetLabelOffset(0.007);
   h_jet1Pt_Diboson__182->GetYaxis()->SetTitleSize(0.05);
   h_jet1Pt_Diboson__182->GetYaxis()->SetTickLength(0.025);
   h_jet1Pt_Diboson__182->GetYaxis()->SetTitleFont(42);
   h_jet1Pt_Diboson__182->GetZaxis()->SetLabelFont(42);
   h_jet1Pt_Diboson__182->GetZaxis()->SetLabelOffset(0.007);
   h_jet1Pt_Diboson__182->GetZaxis()->SetTitleSize(0.05);
   h_jet1Pt_Diboson__182->GetZaxis()->SetTickLength(0.025);
   h_jet1Pt_Diboson__182->GetZaxis()->SetTitleFont(42);
   h->Add(h_jet1Pt_Diboson,"");
   
   TH1D *h_jet1Pt_ZpLjets__183 = new TH1D("h_jet1Pt_ZpLjets__183","",20,15,1000);
   h_jet1Pt_ZpLjets__183->SetBinContent(1,0.002274736);
   h_jet1Pt_ZpLjets__183->SetBinContent(2,0.003030278);
   h_jet1Pt_ZpLjets__183->SetBinContent(3,0.006724019);
   h_jet1Pt_ZpLjets__183->SetBinContent(4,0.01117985);
   h_jet1Pt_ZpLjets__183->SetBinContent(5,0.009069307);
   h_jet1Pt_ZpLjets__183->SetBinContent(6,0.005020627);
   h_jet1Pt_ZpLjets__183->SetBinContent(7,0.003329103);
   h_jet1Pt_ZpLjets__183->SetBinContent(8,0.002232395);
   h_jet1Pt_ZpLjets__183->SetBinContent(9,0.001407349);
   h_jet1Pt_ZpLjets__183->SetBinContent(10,0.0009623431);
   h_jet1Pt_ZpLjets__183->SetBinContent(11,0.0006694293);
   h_jet1Pt_ZpLjets__183->SetBinContent(12,0.0004418314);
   h_jet1Pt_ZpLjets__183->SetBinContent(13,0.00031871);
   h_jet1Pt_ZpLjets__183->SetBinContent(14,0.000217512);
   h_jet1Pt_ZpLjets__183->SetBinContent(15,0.0001512696);
   h_jet1Pt_ZpLjets__183->SetBinContent(16,9.654628e-05);
   h_jet1Pt_ZpLjets__183->SetBinContent(17,7.381064e-05);
   h_jet1Pt_ZpLjets__183->SetBinContent(18,5.895197e-05);
   h_jet1Pt_ZpLjets__183->SetBinContent(19,4.108381e-05);
   h_jet1Pt_ZpLjets__183->SetBinContent(20,0.0001146461);
   h_jet1Pt_ZpLjets__183->SetBinError(1,0.0001608008);
   h_jet1Pt_ZpLjets__183->SetBinError(2,0.0001921858);
   h_jet1Pt_ZpLjets__183->SetBinError(3,0.0002804405);
   h_jet1Pt_ZpLjets__183->SetBinError(4,0.0003816506);
   h_jet1Pt_ZpLjets__183->SetBinError(5,0.0002919354);
   h_jet1Pt_ZpLjets__183->SetBinError(6,0.0001821973);
   h_jet1Pt_ZpLjets__183->SetBinError(7,0.0001202493);
   h_jet1Pt_ZpLjets__183->SetBinError(8,7.958314e-05);
   h_jet1Pt_ZpLjets__183->SetBinError(9,5.059006e-05);
   h_jet1Pt_ZpLjets__183->SetBinError(10,3.24397e-05);
   h_jet1Pt_ZpLjets__183->SetBinError(11,2.247852e-05);
   h_jet1Pt_ZpLjets__183->SetBinError(12,1.544554e-05);
   h_jet1Pt_ZpLjets__183->SetBinError(13,1.236142e-05);
   h_jet1Pt_ZpLjets__183->SetBinError(14,1.005883e-05);
   h_jet1Pt_ZpLjets__183->SetBinError(15,8.602331e-06);
   h_jet1Pt_ZpLjets__183->SetBinError(16,6.719308e-06);
   h_jet1Pt_ZpLjets__183->SetBinError(17,5.916222e-06);
   h_jet1Pt_ZpLjets__183->SetBinError(18,5.320496e-06);
   h_jet1Pt_ZpLjets__183->SetBinError(19,4.434042e-06);
   h_jet1Pt_ZpLjets__183->SetBinError(20,7.403279e-06);
   h_jet1Pt_ZpLjets__183->SetEntries(24915);
   h_jet1Pt_ZpLjets__183->SetStats(0);

   ci = TColor::GetColor("#3399cc");
   h_jet1Pt_ZpLjets__183->SetFillColor(ci);
   h_jet1Pt_ZpLjets__183->GetXaxis()->SetTitle("leading jet p_{T} [GeV]");
   h_jet1Pt_ZpLjets__183->GetXaxis()->SetLabelFont(42);
   h_jet1Pt_ZpLjets__183->GetXaxis()->SetLabelOffset(0.007);
   h_jet1Pt_ZpLjets__183->GetXaxis()->SetTitleSize(0.05);
   h_jet1Pt_ZpLjets__183->GetXaxis()->SetTickLength(0.025);
   h_jet1Pt_ZpLjets__183->GetXaxis()->SetTitleFont(42);
   h_jet1Pt_ZpLjets__183->GetYaxis()->SetTitle("a.u.");
   h_jet1Pt_ZpLjets__183->GetYaxis()->SetLabelFont(42);
   h_jet1Pt_ZpLjets__183->GetYaxis()->SetLabelOffset(0.007);
   h_jet1Pt_ZpLjets__183->GetYaxis()->SetTitleSize(0.05);
   h_jet1Pt_ZpLjets__183->GetYaxis()->SetTickLength(0.025);
   h_jet1Pt_ZpLjets__183->GetYaxis()->SetTitleFont(42);
   h_jet1Pt_ZpLjets__183->GetZaxis()->SetLabelFont(42);
   h_jet1Pt_ZpLjets__183->GetZaxis()->SetLabelOffset(0.007);
   h_jet1Pt_ZpLjets__183->GetZaxis()->SetTitleSize(0.05);
   h_jet1Pt_ZpLjets__183->GetZaxis()->SetTickLength(0.025);
   h_jet1Pt_ZpLjets__183->GetZaxis()->SetTitleFont(42);
   h->Add(h_jet1Pt_Z+jets,"");
   
   TH1D *h_jet1Pt_WpLjets__184 = new TH1D("h_jet1Pt_WpLjets__184","",20,15,1000);
   h_jet1Pt_WpLjets__184->SetBinContent(1,0.005384929);
   h_jet1Pt_WpLjets__184->SetBinContent(2,0.004712887);
   h_jet1Pt_WpLjets__184->SetBinContent(3,0.007973121);
   h_jet1Pt_WpLjets__184->SetBinContent(4,0.01079059);
   h_jet1Pt_WpLjets__184->SetBinContent(5,0.008377068);
   h_jet1Pt_WpLjets__184->SetBinContent(6,0.003059488);
   h_jet1Pt_WpLjets__184->SetBinContent(7,0.00196419);
   h_jet1Pt_WpLjets__184->SetBinContent(8,0.001141963);
   h_jet1Pt_WpLjets__184->SetBinContent(9,0.0006967361);
   h_jet1Pt_WpLjets__184->SetBinContent(10,0.0004576817);
   h_jet1Pt_WpLjets__184->SetBinContent(11,0.0003156036);
   h_jet1Pt_WpLjets__184->SetBinContent(12,0.0002311036);
   h_jet1Pt_WpLjets__184->SetBinContent(13,0.0001629895);
   h_jet1Pt_WpLjets__184->SetBinContent(14,0.0001126711);
   h_jet1Pt_WpLjets__184->SetBinContent(15,8.216609e-05);
   h_jet1Pt_WpLjets__184->SetBinContent(16,6.700303e-05);
   h_jet1Pt_WpLjets__184->SetBinContent(17,3.943018e-05);
   h_jet1Pt_WpLjets__184->SetBinContent(18,2.723699e-05);
   h_jet1Pt_WpLjets__184->SetBinContent(19,3.077995e-05);
   h_jet1Pt_WpLjets__184->SetBinContent(20,5.513731e-05);
   h_jet1Pt_WpLjets__184->SetBinError(1,0.0006639205);
   h_jet1Pt_WpLjets__184->SetBinError(2,0.0005788144);
   h_jet1Pt_WpLjets__184->SetBinError(3,0.0007429995);
   h_jet1Pt_WpLjets__184->SetBinError(4,0.0008559895);
   h_jet1Pt_WpLjets__184->SetBinError(5,0.0007048966);
   h_jet1Pt_WpLjets__184->SetBinError(6,0.0003673993);
   h_jet1Pt_WpLjets__184->SetBinError(7,0.0002851034);
   h_jet1Pt_WpLjets__184->SetBinError(8,0.0001794116);
   h_jet1Pt_WpLjets__184->SetBinError(9,0.0001079997);
   h_jet1Pt_WpLjets__184->SetBinError(10,4.175019e-05);
   h_jet1Pt_WpLjets__184->SetBinError(11,3.363314e-05);
   h_jet1Pt_WpLjets__184->SetBinError(12,2.350504e-05);
   h_jet1Pt_WpLjets__184->SetBinError(13,1.757723e-05);
   h_jet1Pt_WpLjets__184->SetBinError(14,1.482169e-05);
   h_jet1Pt_WpLjets__184->SetBinError(15,1.17339e-05);
   h_jet1Pt_WpLjets__184->SetBinError(16,9.843054e-06);
   h_jet1Pt_WpLjets__184->SetBinError(17,4.882716e-06);
   h_jet1Pt_WpLjets__184->SetBinError(18,3.589856e-06);
   h_jet1Pt_WpLjets__184->SetBinError(19,4.351431e-06);
   h_jet1Pt_WpLjets__184->SetBinError(20,4.879258e-06);
   h_jet1Pt_WpLjets__184->SetEntries(3309);
   h_jet1Pt_WpLjets__184->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   h_jet1Pt_WpLjets__184->SetFillColor(ci);
   h_jet1Pt_WpLjets__184->GetXaxis()->SetTitle("leading jet p_{T} [GeV]");
   h_jet1Pt_WpLjets__184->GetXaxis()->SetLabelFont(42);
   h_jet1Pt_WpLjets__184->GetXaxis()->SetLabelOffset(0.007);
   h_jet1Pt_WpLjets__184->GetXaxis()->SetTitleSize(0.05);
   h_jet1Pt_WpLjets__184->GetXaxis()->SetTickLength(0.025);
   h_jet1Pt_WpLjets__184->GetXaxis()->SetTitleFont(42);
   h_jet1Pt_WpLjets__184->GetYaxis()->SetTitle("a.u.");
   h_jet1Pt_WpLjets__184->GetYaxis()->SetLabelFont(42);
   h_jet1Pt_WpLjets__184->GetYaxis()->SetLabelOffset(0.007);
   h_jet1Pt_WpLjets__184->GetYaxis()->SetTitleSize(0.05);
   h_jet1Pt_WpLjets__184->GetYaxis()->SetTickLength(0.025);
   h_jet1Pt_WpLjets__184->GetYaxis()->SetTitleFont(42);
   h_jet1Pt_WpLjets__184->GetZaxis()->SetLabelFont(42);
   h_jet1Pt_WpLjets__184->GetZaxis()->SetLabelOffset(0.007);
   h_jet1Pt_WpLjets__184->GetZaxis()->SetTitleSize(0.05);
   h_jet1Pt_WpLjets__184->GetZaxis()->SetTickLength(0.025);
   h_jet1Pt_WpLjets__184->GetZaxis()->SetTitleFont(42);
   h->Add(h_jet1Pt_W+jets,"");
   
   TH1D *h_jet1Pt_TopsPoPLFcP__185 = new TH1D("h_jet1Pt_TopsPoPLFcP__185","",20,15,1000);
   h_jet1Pt_TopsPoPLFcP__185->SetBinContent(1,0.02462333);
   h_jet1Pt_TopsPoPLFcP__185->SetBinContent(2,0.06504296);
   h_jet1Pt_TopsPoPLFcP__185->SetBinContent(3,0.07143131);
   h_jet1Pt_TopsPoPLFcP__185->SetBinContent(4,0.05904596);
   h_jet1Pt_TopsPoPLFcP__185->SetBinContent(5,0.03786394);
   h_jet1Pt_TopsPoPLFcP__185->SetBinContent(6,0.02323638);
   h_jet1Pt_TopsPoPLFcP__185->SetBinContent(7,0.01497382);
   h_jet1Pt_TopsPoPLFcP__185->SetBinContent(8,0.0098694);
   h_jet1Pt_TopsPoPLFcP__185->SetBinContent(9,0.00706409);
   h_jet1Pt_TopsPoPLFcP__185->SetBinContent(10,0.004704057);
   h_jet1Pt_TopsPoPLFcP__185->SetBinContent(11,0.003271093);
   h_jet1Pt_TopsPoPLFcP__185->SetBinContent(12,0.002548194);
   h_jet1Pt_TopsPoPLFcP__185->SetBinContent(13,0.00137492);
   h_jet1Pt_TopsPoPLFcP__185->SetBinContent(14,0.0008655418);
   h_jet1Pt_TopsPoPLFcP__185->SetBinContent(15,0.0005846858);
   h_jet1Pt_TopsPoPLFcP__185->SetBinContent(16,0.0005985423);
   h_jet1Pt_TopsPoPLFcP__185->SetBinContent(17,0.0003037914);
   h_jet1Pt_TopsPoPLFcP__185->SetBinContent(18,0.0002149623);
   h_jet1Pt_TopsPoPLFcP__185->SetBinContent(19,0.000171156);
   h_jet1Pt_TopsPoPLFcP__185->SetBinContent(20,0.0002910112);
   h_jet1Pt_TopsPoPLFcP__185->SetBinError(1,0.00056467);
   h_jet1Pt_TopsPoPLFcP__185->SetBinError(2,0.0008560783);
   h_jet1Pt_TopsPoPLFcP__185->SetBinError(3,0.0008715565);
   h_jet1Pt_TopsPoPLFcP__185->SetBinError(4,0.0008098343);
   h_jet1Pt_TopsPoPLFcP__185->SetBinError(5,0.0006796146);
   h_jet1Pt_TopsPoPLFcP__185->SetBinError(6,0.0005433469);
   h_jet1Pt_TopsPoPLFcP__185->SetBinError(7,0.000427007);
   h_jet1Pt_TopsPoPLFcP__185->SetBinError(8,0.0003231664);
   h_jet1Pt_TopsPoPLFcP__185->SetBinError(9,0.0002906889);
   h_jet1Pt_TopsPoPLFcP__185->SetBinError(10,0.0002355902);
   h_jet1Pt_TopsPoPLFcP__185->SetBinError(11,0.0002287131);
   h_jet1Pt_TopsPoPLFcP__185->SetBinError(12,0.0002062791);
   h_jet1Pt_TopsPoPLFcP__185->SetBinError(13,0.0001343418);
   h_jet1Pt_TopsPoPLFcP__185->SetBinError(14,9.619325e-05);
   h_jet1Pt_TopsPoPLFcP__185->SetBinError(15,6.40951e-05);
   h_jet1Pt_TopsPoPLFcP__185->SetBinError(16,0.0001261382);
   h_jet1Pt_TopsPoPLFcP__185->SetBinError(17,5.452399e-05);
   h_jet1Pt_TopsPoPLFcP__185->SetBinError(18,3.791402e-05);
   h_jet1Pt_TopsPoPLFcP__185->SetBinError(19,3.297694e-05);
   h_jet1Pt_TopsPoPLFcP__185->SetBinError(20,4.50887e-05);
   h_jet1Pt_TopsPoPLFcP__185->SetEntries(45754);
   h_jet1Pt_TopsPoPLFcP__185->SetStats(0);

   ci = TColor::GetColor("#cc33cc");
   h_jet1Pt_TopsPoPLFcP__185->SetFillColor(ci);
   h_jet1Pt_TopsPoPLFcP__185->GetXaxis()->SetTitle("leading jet p_{T} [GeV]");
   h_jet1Pt_TopsPoPLFcP__185->GetXaxis()->SetLabelFont(42);
   h_jet1Pt_TopsPoPLFcP__185->GetXaxis()->SetLabelOffset(0.007);
   h_jet1Pt_TopsPoPLFcP__185->GetXaxis()->SetTitleSize(0.05);
   h_jet1Pt_TopsPoPLFcP__185->GetXaxis()->SetTickLength(0.025);
   h_jet1Pt_TopsPoPLFcP__185->GetXaxis()->SetTitleFont(42);
   h_jet1Pt_TopsPoPLFcP__185->GetYaxis()->SetTitle("a.u.");
   h_jet1Pt_TopsPoPLFcP__185->GetYaxis()->SetLabelFont(42);
   h_jet1Pt_TopsPoPLFcP__185->GetYaxis()->SetLabelOffset(0.007);
   h_jet1Pt_TopsPoPLFcP__185->GetYaxis()->SetTitleSize(0.05);
   h_jet1Pt_TopsPoPLFcP__185->GetYaxis()->SetTickLength(0.025);
   h_jet1Pt_TopsPoPLFcP__185->GetYaxis()->SetTitleFont(42);
   h_jet1Pt_TopsPoPLFcP__185->GetZaxis()->SetLabelFont(42);
   h_jet1Pt_TopsPoPLFcP__185->GetZaxis()->SetLabelOffset(0.007);
   h_jet1Pt_TopsPoPLFcP__185->GetZaxis()->SetTitleSize(0.05);
   h_jet1Pt_TopsPoPLFcP__185->GetZaxis()->SetTickLength(0.025);
   h_jet1Pt_TopsPoPLFcP__185->GetZaxis()->SetTitleFont(42);
   h->Add(h_jet1Pt_Top (LF),"");
   
   TH1D *h_jet1Pt_TopsPoPHFcP__186 = new TH1D("h_jet1Pt_TopsPoPHFcP__186","",20,15,1000);
   h_jet1Pt_TopsPoPHFcP__186->SetBinContent(1,0.01619373);
   h_jet1Pt_TopsPoPHFcP__186->SetBinContent(2,0.07488389);
   h_jet1Pt_TopsPoPHFcP__186->SetBinContent(3,0.1303367);
   h_jet1Pt_TopsPoPHFcP__186->SetBinContent(4,0.1088493);
   h_jet1Pt_TopsPoPHFcP__186->SetBinContent(5,0.06851427);
   h_jet1Pt_TopsPoPHFcP__186->SetBinContent(6,0.04385157);
   h_jet1Pt_TopsPoPHFcP__186->SetBinContent(7,0.02854966);
   h_jet1Pt_TopsPoPHFcP__186->SetBinContent(8,0.01967444);
   h_jet1Pt_TopsPoPHFcP__186->SetBinContent(9,0.0121371);
   h_jet1Pt_TopsPoPHFcP__186->SetBinContent(10,0.00833271);
   h_jet1Pt_TopsPoPHFcP__186->SetBinContent(11,0.006006605);
   h_jet1Pt_TopsPoPHFcP__186->SetBinContent(12,0.004285266);
   h_jet1Pt_TopsPoPHFcP__186->SetBinContent(13,0.003040009);
   h_jet1Pt_TopsPoPHFcP__186->SetBinContent(14,0.001585849);
   h_jet1Pt_TopsPoPHFcP__186->SetBinContent(15,0.001277988);
   h_jet1Pt_TopsPoPHFcP__186->SetBinContent(16,0.0009396585);
   h_jet1Pt_TopsPoPHFcP__186->SetBinContent(17,0.0005448138);
   h_jet1Pt_TopsPoPHFcP__186->SetBinContent(18,0.0003054335);
   h_jet1Pt_TopsPoPHFcP__186->SetBinContent(19,0.0004441281);
   h_jet1Pt_TopsPoPHFcP__186->SetBinContent(20,0.0006924864);
   h_jet1Pt_TopsPoPHFcP__186->SetBinError(1,0.0004576431);
   h_jet1Pt_TopsPoPHFcP__186->SetBinError(2,0.0009285521);
   h_jet1Pt_TopsPoPHFcP__186->SetBinError(3,0.00128141);
   h_jet1Pt_TopsPoPHFcP__186->SetBinError(4,0.0011651);
   h_jet1Pt_TopsPoPHFcP__186->SetBinError(5,0.0008847275);
   h_jet1Pt_TopsPoPHFcP__186->SetBinError(6,0.0006979531);
   h_jet1Pt_TopsPoPHFcP__186->SetBinError(7,0.0005774053);
   h_jet1Pt_TopsPoPHFcP__186->SetBinError(8,0.0004841749);
   h_jet1Pt_TopsPoPHFcP__186->SetBinError(9,0.0003685968);
   h_jet1Pt_TopsPoPHFcP__186->SetBinError(10,0.0003212489);
   h_jet1Pt_TopsPoPHFcP__186->SetBinError(11,0.0002665508);
   h_jet1Pt_TopsPoPHFcP__186->SetBinError(12,0.0002506029);
   h_jet1Pt_TopsPoPHFcP__186->SetBinError(13,0.0002286275);
   h_jet1Pt_TopsPoPHFcP__186->SetBinError(14,0.0001449813);
   h_jet1Pt_TopsPoPHFcP__186->SetBinError(15,0.0001167015);
   h_jet1Pt_TopsPoPHFcP__186->SetBinError(16,0.0001054833);
   h_jet1Pt_TopsPoPHFcP__186->SetBinError(17,7.675607e-05);
   h_jet1Pt_TopsPoPHFcP__186->SetBinError(18,4.248781e-05);
   h_jet1Pt_TopsPoPHFcP__186->SetBinError(19,9.645464e-05);
   h_jet1Pt_TopsPoPHFcP__186->SetBinError(20,0.0001092669);
   h_jet1Pt_TopsPoPHFcP__186->SetEntries(77950);
   h_jet1Pt_TopsPoPHFcP__186->SetStats(0);

   ci = TColor::GetColor("#ff9900");
   h_jet1Pt_TopsPoPHFcP__186->SetFillColor(ci);
   h_jet1Pt_TopsPoPHFcP__186->GetXaxis()->SetTitle("leading jet p_{T} [GeV]");
   h_jet1Pt_TopsPoPHFcP__186->GetXaxis()->SetLabelFont(42);
   h_jet1Pt_TopsPoPHFcP__186->GetXaxis()->SetLabelOffset(0.007);
   h_jet1Pt_TopsPoPHFcP__186->GetXaxis()->SetTitleSize(0.05);
   h_jet1Pt_TopsPoPHFcP__186->GetXaxis()->SetTickLength(0.025);
   h_jet1Pt_TopsPoPHFcP__186->GetXaxis()->SetTitleFont(42);
   h_jet1Pt_TopsPoPHFcP__186->GetYaxis()->SetTitle("a.u.");
   h_jet1Pt_TopsPoPHFcP__186->GetYaxis()->SetLabelFont(42);
   h_jet1Pt_TopsPoPHFcP__186->GetYaxis()->SetLabelOffset(0.007);
   h_jet1Pt_TopsPoPHFcP__186->GetYaxis()->SetTitleSize(0.05);
   h_jet1Pt_TopsPoPHFcP__186->GetYaxis()->SetTickLength(0.025);
   h_jet1Pt_TopsPoPHFcP__186->GetYaxis()->SetTitleFont(42);
   h_jet1Pt_TopsPoPHFcP__186->GetZaxis()->SetLabelFont(42);
   h_jet1Pt_TopsPoPHFcP__186->GetZaxis()->SetLabelOffset(0.007);
   h_jet1Pt_TopsPoPHFcP__186->GetZaxis()->SetTitleSize(0.05);
   h_jet1Pt_TopsPoPHFcP__186->GetZaxis()->SetTickLength(0.025);
   h_jet1Pt_TopsPoPHFcP__186->GetZaxis()->SetTitleFont(42);
   h->Add(h_jet1Pt_Top (HF),"");
   h->Draw("hist");
   
   TH1D *hsum__187 = new TH1D("hsum__187","",20,15,1000);
   hsum__187->SetBinContent(1,0.05205011);
   hsum__187->SetBinContent(2,0.153883);
   hsum__187->SetBinContent(3,0.2283167);
   hsum__187->SetBinContent(4,0.1989144);
   hsum__187->SetBinContent(5,0.1302895);
   hsum__187->SetBinContent(6,0.07869091);
   hsum__187->SetBinContent(7,0.05287899);
   hsum__187->SetBinContent(8,0.03391779);
   hsum__187->SetBinContent(9,0.02171356);
   hsum__187->SetBinContent(10,0.01520368);
   hsum__187->SetBinContent(11,0.01100556);
   hsum__187->SetBinContent(12,0.007662187);
   hsum__187->SetBinContent(13,0.005015675);
   hsum__187->SetBinContent(14,0.00292246);
   hsum__187->SetBinContent(15,0.002096109);
   hsum__187->SetBinContent(16,0.001731137);
   hsum__187->SetBinContent(17,0.000961846);
   hsum__187->SetBinContent(18,0.0006065848);
   hsum__187->SetBinContent(19,0.0008633118);
   hsum__187->SetBinContent(20,0.001276374);
   hsum__187->SetBinError(1,0.001493312);
   hsum__187->SetBinError(2,0.00241739);
   hsum__187->SetBinError(3,0.002791389);
   hsum__187->SetBinError(4,0.002420797);
   hsum__187->SetBinError(5,0.001822849);
   hsum__187->SetBinError(6,0.001350323);
   hsum__187->SetBinError(7,0.001293924);
   hsum__187->SetBinError(8,0.0007629036);
   hsum__187->SetBinError(9,0.0005510943);
   hsum__187->SetBinError(10,0.0005488464);
   hsum__187->SetBinError(11,0.0005098481);
   hsum__187->SetBinError(12,0.000355974);
   hsum__187->SetBinError(13,0.0002759443);
   hsum__187->SetBinError(14,0.0002245938);
   hsum__187->SetBinError(15,0.0001339369);
   hsum__187->SetBinError(16,0.000167461);
   hsum__187->SetBinError(17,9.44627e-05);
   hsum__187->SetBinError(18,5.730516e-05);
   hsum__187->SetBinError(19,0.0002036255);
   hsum__187->SetBinError(20,0.0001654455);
   hsum__187->SetEntries(65);
   hsum__187->SetStats(0);

   ci = 1195;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   hsum__187->SetFillColor(ci);
   hsum__187->SetFillStyle(3003);
   hsum__187->SetLineWidth(0);
   hsum__187->GetXaxis()->SetTitle("leading jet p_{T} [GeV]");
   hsum__187->GetXaxis()->SetLabelFont(42);
   hsum__187->GetXaxis()->SetLabelOffset(0.007);
   hsum__187->GetXaxis()->SetTitleSize(0.05);
   hsum__187->GetXaxis()->SetTickLength(0.025);
   hsum__187->GetXaxis()->SetTitleFont(42);
   hsum__187->GetYaxis()->SetTitle("a.u.");
   hsum__187->GetYaxis()->SetLabelFont(42);
   hsum__187->GetYaxis()->SetLabelOffset(0.007);
   hsum__187->GetYaxis()->SetTitleSize(0.05);
   hsum__187->GetYaxis()->SetTickLength(0.025);
   hsum__187->GetYaxis()->SetTitleFont(42);
   hsum__187->GetZaxis()->SetLabelFont(42);
   hsum__187->GetZaxis()->SetLabelOffset(0.007);
   hsum__187->GetZaxis()->SetTitleSize(0.05);
   hsum__187->GetZaxis()->SetTickLength(0.025);
   hsum__187->GetZaxis()->SetTitleFont(42);
   hsum__187->Draw("e2 same");
   
   TH1D *h_jet1Pt_Data__188 = new TH1D("h_jet1Pt_Data__188","",20,15,1000);
   h_jet1Pt_Data__188->SetBinContent(1,0.04800716);
   h_jet1Pt_Data__188->SetBinContent(2,0.1339395);
   h_jet1Pt_Data__188->SetBinContent(3,0.2162442);
   h_jet1Pt_Data__188->SetBinContent(4,0.203948);
   h_jet1Pt_Data__188->SetBinContent(5,0.1410063);
   h_jet1Pt_Data__188->SetBinContent(6,0.08635636);
   h_jet1Pt_Data__188->SetBinContent(7,0.05917271);
   h_jet1Pt_Data__188->SetBinContent(8,0.03660605);
   h_jet1Pt_Data__188->SetBinContent(9,0.02501649);
   h_jet1Pt_Data__188->SetBinContent(10,0.01611232);
   h_jet1Pt_Data__188->SetBinContent(11,0.01088288);
   h_jet1Pt_Data__188->SetBinContent(12,0.007443701);
   h_jet1Pt_Data__188->SetBinContent(13,0.005276548);
   h_jet1Pt_Data__188->SetBinContent(14,0.00325073);
   h_jet1Pt_Data__188->SetBinContent(15,0.002355602);
   h_jet1Pt_Data__188->SetBinContent(16,0.0009422406);
   h_jet1Pt_Data__188->SetBinContent(17,0.001177801);
   h_jet1Pt_Data__188->SetBinContent(18,0.0006595685);
   h_jet1Pt_Data__188->SetBinContent(19,0.0006595685);
   h_jet1Pt_Data__188->SetBinContent(20,0.0009422406);
   h_jet1Pt_Data__188->SetBinError(1,0.0015039);
   h_jet1Pt_Data__188->SetBinError(2,0.002512004);
   h_jet1Pt_Data__188->SetBinError(3,0.003191818);
   h_jet1Pt_Data__188->SetBinError(4,0.003099743);
   h_jet1Pt_Data__188->SetBinError(5,0.00257742);
   h_jet1Pt_Data__188->SetBinError(6,0.002017033);
   h_jet1Pt_Data__188->SetBinError(7,0.001669655);
   h_jet1Pt_Data__188->SetBinError(8,0.001313235);
   h_jet1Pt_Data__188->SetBinError(9,0.001085623);
   h_jet1Pt_Data__188->SetBinError(10,0.0008712542);
   h_jet1Pt_Data__188->SetBinError(11,0.0007160409);
   h_jet1Pt_Data__188->SetBinError(12,0.0005921891);
   h_jet1Pt_Data__188->SetBinError(13,0.0004985869);
   h_jet1Pt_Data__188->SetBinError(14,0.0003913419);
   h_jet1Pt_Data__188->SetBinError(15,0.0003331324);
   h_jet1Pt_Data__188->SetBinError(16,0.0002106914);
   h_jet1Pt_Data__188->SetBinError(17,0.0002355602);
   h_jet1Pt_Data__188->SetBinError(18,0.0001762771);
   h_jet1Pt_Data__188->SetBinError(19,0.0001762771);
   h_jet1Pt_Data__188->SetBinError(20,0.0002106914);
   h_jet1Pt_Data__188->SetEntries(21226);
   h_jet1Pt_Data__188->SetStats(0);
   h_jet1Pt_Data__188->SetLineWidth(3);
   h_jet1Pt_Data__188->SetMarkerStyle(20);
   h_jet1Pt_Data__188->SetMarkerSize(2);
   h_jet1Pt_Data__188->GetXaxis()->SetTitle("leading jet p_{T} [GeV]");
   h_jet1Pt_Data__188->GetXaxis()->SetLabelFont(42);
   h_jet1Pt_Data__188->GetXaxis()->SetLabelOffset(0.007);
   h_jet1Pt_Data__188->GetXaxis()->SetTitleSize(0.05);
   h_jet1Pt_Data__188->GetXaxis()->SetTickLength(0.025);
   h_jet1Pt_Data__188->GetXaxis()->SetTitleFont(42);
   h_jet1Pt_Data__188->GetYaxis()->SetTitle("a.u.");
   h_jet1Pt_Data__188->GetYaxis()->SetLabelFont(42);
   h_jet1Pt_Data__188->GetYaxis()->SetLabelOffset(0.007);
   h_jet1Pt_Data__188->GetYaxis()->SetTitleSize(0.05);
   h_jet1Pt_Data__188->GetYaxis()->SetTickLength(0.025);
   h_jet1Pt_Data__188->GetYaxis()->SetTitleFont(42);
   h_jet1Pt_Data__188->GetZaxis()->SetLabelFont(42);
   h_jet1Pt_Data__188->GetZaxis()->SetLabelOffset(0.007);
   h_jet1Pt_Data__188->GetZaxis()->SetTitleSize(0.05);
   h_jet1Pt_Data__188->GetZaxis()->SetTickLength(0.025);
   h_jet1Pt_Data__188->GetZaxis()->SetTitleFont(42);
   h_jet1Pt_Data__188->Draw("elp same");
   
   TLegend *leg = new TLegend(0.6,0.55,0.88,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("h_jet1Pt_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_jet1Pt_Top (HF)","Top (HF)","F");

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
   entry=leg->AddEntry("h_jet1Pt_Top (LF)","Top (LF)","F");

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
   entry=leg->AddEntry("h_jet1Pt_W+jets","W+jets","F");

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
   entry=leg->AddEntry("h_jet1Pt_Z+jets","Z+jets","F");

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
   entry=leg->AddEntry("h_jet1Pt_Diboson","Diboson","F");

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
   entry=leg->AddEntry("h_jet1Pt_QCD","QCD","F");

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
   entry=leg->AddEntry("h_jet1Pt_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_jet1Pt_Top (HF)","Top (HF)","F");

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
   entry=leg->AddEntry("h_jet1Pt_Top (LF)","Top (LF)","F");

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
   entry=leg->AddEntry("h_jet1Pt_W+jets","W+jets","F");

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
   entry=leg->AddEntry("h_jet1Pt_Z+jets","Z+jets","F");

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
   entry=leg->AddEntry("h_jet1Pt_Diboson","Diboson","F");

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
   entry=leg->AddEntry("h_jet1Pt_QCD","QCD","F");

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
   pad2->Range(-169.6875,-0.8914286,1061.562,0.48);
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
   
   TH1D *ratio__189 = new TH1D("ratio__189","",20,15,1000);
   ratio__189->SetBinContent(1,-0.07767427);
   ratio__189->SetBinContent(2,-0.1296017);
   ratio__189->SetBinContent(3,-0.05287606);
   ratio__189->SetBinContent(4,0.02530515);
   ratio__189->SetBinContent(5,0.08225346);
   ratio__189->SetBinContent(6,0.09741211);
   ratio__189->SetBinContent(7,0.1190212);
   ratio__189->SetBinContent(8,0.07925808);
   ratio__189->SetBinContent(9,0.1521136);
   ratio__189->SetBinContent(10,0.05976379);
   ratio__189->SetBinContent(11,-0.01114738);
   ratio__189->SetBinContent(12,-0.02851486);
   ratio__189->SetBinContent(13,0.05201137);
   ratio__189->SetBinContent(14,0.1123267);
   ratio__189->SetBinContent(15,0.1237973);
   ratio__189->SetBinContent(16,-0.4557099);
   ratio__189->SetBinContent(17,0.2245213);
   ratio__189->SetBinContent(18,0.08734751);
   ratio__189->SetBinContent(19,-0.236002);
   ratio__189->SetBinContent(20,-0.2617835);
   ratio__189->SetBinError(1,0.0001);
   ratio__189->SetBinError(2,0.0001);
   ratio__189->SetBinError(3,0.0001);
   ratio__189->SetBinError(4,0.0001);
   ratio__189->SetBinError(5,0.0001);
   ratio__189->SetBinError(6,0.0001);
   ratio__189->SetBinError(7,0.0001);
   ratio__189->SetBinError(8,0.0001);
   ratio__189->SetBinError(9,0.0001);
   ratio__189->SetBinError(10,0.0001);
   ratio__189->SetBinError(11,0.0001);
   ratio__189->SetBinError(12,0.0001);
   ratio__189->SetBinError(13,0.0001);
   ratio__189->SetBinError(14,0.0001);
   ratio__189->SetBinError(15,0.0001);
   ratio__189->SetBinError(16,0.0001);
   ratio__189->SetBinError(17,0.0001);
   ratio__189->SetBinError(18,0.0001);
   ratio__189->SetBinError(19,0.0001);
   ratio__189->SetBinError(20,0.0001);
   ratio__189->SetMinimum(-0.48);
   ratio__189->SetMaximum(0.48);
   ratio__189->SetEntries(21246);
   ratio__189->SetStats(0);
   ratio__189->SetLineWidth(3);
   ratio__189->SetMarkerStyle(20);
   ratio__189->SetMarkerSize(2);
   ratio__189->GetXaxis()->SetTitle("leading jet p_{T} [GeV]");
   ratio__189->GetXaxis()->SetLabelFont(43);
   ratio__189->GetXaxis()->SetLabelOffset(0.007);
   ratio__189->GetXaxis()->SetLabelSize(30);
   ratio__189->GetXaxis()->SetTitleSize(40);
   ratio__189->GetXaxis()->SetTickLength(0.025);
   ratio__189->GetXaxis()->SetTitleOffset(5);
   ratio__189->GetXaxis()->SetTitleFont(43);
   ratio__189->GetYaxis()->SetTitle("#frac{Data-Exp}{Exp}");
   ratio__189->GetYaxis()->SetNdivisions(5);
   ratio__189->GetYaxis()->SetLabelFont(43);
   ratio__189->GetYaxis()->SetLabelOffset(0.007);
   ratio__189->GetYaxis()->SetLabelSize(30);
   ratio__189->GetYaxis()->SetTitleSize(40);
   ratio__189->GetYaxis()->SetTickLength(0.025);
   ratio__189->GetYaxis()->SetTitleOffset(2.5);
   ratio__189->GetYaxis()->SetTitleFont(43);
   ratio__189->GetZaxis()->SetLabelFont(42);
   ratio__189->GetZaxis()->SetLabelOffset(0.007);
   ratio__189->GetZaxis()->SetTitleSize(0.05);
   ratio__189->GetZaxis()->SetTickLength(0.025);
   ratio__189->GetZaxis()->SetTitleFont(42);
   ratio__189->Draw("elp");
   
   TH1D *zero__190 = new TH1D("zero__190","",20,15,1000);
   zero__190->SetBinError(1,0.0015039);
   zero__190->SetBinError(2,0.002512004);
   zero__190->SetBinError(3,0.003191818);
   zero__190->SetBinError(4,0.003099743);
   zero__190->SetBinError(5,0.00257742);
   zero__190->SetBinError(6,0.002017033);
   zero__190->SetBinError(7,0.001669655);
   zero__190->SetBinError(8,0.001313235);
   zero__190->SetBinError(9,0.001085623);
   zero__190->SetBinError(10,0.0008712542);
   zero__190->SetBinError(11,0.0007160409);
   zero__190->SetBinError(12,0.0005921891);
   zero__190->SetBinError(13,0.0004985869);
   zero__190->SetBinError(14,0.0003913419);
   zero__190->SetBinError(15,0.0003331324);
   zero__190->SetBinError(16,0.0002106914);
   zero__190->SetBinError(17,0.0002355602);
   zero__190->SetBinError(18,0.0001762771);
   zero__190->SetBinError(19,0.0001762771);
   zero__190->SetBinError(20,0.0002106914);
   zero__190->SetEntries(21246);
   zero__190->SetStats(0);
   zero__190->SetLineWidth(3);
   zero__190->SetMarkerStyle(20);
   zero__190->SetMarkerSize(2);
   zero__190->GetXaxis()->SetTitle("leading jet p_{T} [GeV]");
   zero__190->GetXaxis()->SetLabelFont(42);
   zero__190->GetXaxis()->SetLabelOffset(0.007);
   zero__190->GetXaxis()->SetTitleSize(0.05);
   zero__190->GetXaxis()->SetTickLength(0.025);
   zero__190->GetXaxis()->SetTitleFont(42);
   zero__190->GetYaxis()->SetTitle("a.u.");
   zero__190->GetYaxis()->SetLabelFont(42);
   zero__190->GetYaxis()->SetLabelOffset(0.007);
   zero__190->GetYaxis()->SetTitleSize(0.05);
   zero__190->GetYaxis()->SetTickLength(0.025);
   zero__190->GetYaxis()->SetTitleFont(42);
   zero__190->GetZaxis()->SetLabelFont(42);
   zero__190->GetZaxis()->SetLabelOffset(0.007);
   zero__190->GetZaxis()->SetTitleSize(0.05);
   zero__190->GetZaxis()->SetTickLength(0.025);
   zero__190->GetZaxis()->SetTitleFont(42);
   zero__190->Draw("hist same");
   
   TH1D *sumratioup__191 = new TH1D("sumratioup__191","",20,15,1000);
   sumratioup__191->SetBinContent(1,0.02868989);
   sumratioup__191->SetBinContent(2,0.01570927);
   sumratioup__191->SetBinContent(3,0.01222595);
   sumratioup__191->SetBinContent(4,0.01217004);
   sumratioup__191->SetBinContent(5,0.01399076);
   sumratioup__191->SetBinContent(6,0.01715984);
   sumratioup__191->SetBinContent(7,0.02446952);
   sumratioup__191->SetBinContent(8,0.02249273);
   sumratioup__191->SetBinContent(9,0.02538019);
   sumratioup__191->SetBinContent(10,0.03609957);
   sumratioup__191->SetBinContent(11,0.0463264);
   sumratioup__191->SetBinContent(12,0.04645854);
   sumratioup__191->SetBinContent(13,0.05501638);
   sumratioup__191->SetBinContent(14,0.07685095);
   sumratioup__191->SetBinContent(15,0.06389788);
   sumratioup__191->SetBinContent(16,0.09673469);
   sumratioup__191->SetBinContent(17,0.09820981);
   sumratioup__191->SetBinContent(18,0.0944718);
   sumratioup__191->SetBinContent(19,0.2358655);
   sumratioup__191->SetBinContent(20,0.1296214);
   sumratioup__191->SetBinError(1,0.001493312);
   sumratioup__191->SetBinError(2,0.00241739);
   sumratioup__191->SetBinError(3,0.002791389);
   sumratioup__191->SetBinError(4,0.002420797);
   sumratioup__191->SetBinError(5,0.001822849);
   sumratioup__191->SetBinError(6,0.001350323);
   sumratioup__191->SetBinError(7,0.001293924);
   sumratioup__191->SetBinError(8,0.0007629036);
   sumratioup__191->SetBinError(9,0.0005510943);
   sumratioup__191->SetBinError(10,0.0005488464);
   sumratioup__191->SetBinError(11,0.0005098481);
   sumratioup__191->SetBinError(12,0.000355974);
   sumratioup__191->SetBinError(13,0.0002759443);
   sumratioup__191->SetBinError(14,0.0002245938);
   sumratioup__191->SetBinError(15,0.0001339369);
   sumratioup__191->SetBinError(16,0.000167461);
   sumratioup__191->SetBinError(17,9.44627e-05);
   sumratioup__191->SetBinError(18,5.730516e-05);
   sumratioup__191->SetBinError(19,0.0002036255);
   sumratioup__191->SetBinError(20,0.0001654455);
   sumratioup__191->SetEntries(85);
   sumratioup__191->SetStats(0);

   ci = 1195;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratioup__191->SetFillColor(ci);
   sumratioup__191->SetFillStyle(3003);
   sumratioup__191->GetXaxis()->SetTitle("leading jet p_{T} [GeV]");
   sumratioup__191->GetXaxis()->SetLabelFont(42);
   sumratioup__191->GetXaxis()->SetLabelOffset(0.007);
   sumratioup__191->GetXaxis()->SetTitleSize(0.05);
   sumratioup__191->GetXaxis()->SetTickLength(0.025);
   sumratioup__191->GetXaxis()->SetTitleFont(42);
   sumratioup__191->GetYaxis()->SetTitle("a.u.");
   sumratioup__191->GetYaxis()->SetLabelFont(42);
   sumratioup__191->GetYaxis()->SetLabelOffset(0.007);
   sumratioup__191->GetYaxis()->SetTitleSize(0.05);
   sumratioup__191->GetYaxis()->SetTickLength(0.025);
   sumratioup__191->GetYaxis()->SetTitleFont(42);
   sumratioup__191->GetZaxis()->SetLabelFont(42);
   sumratioup__191->GetZaxis()->SetLabelOffset(0.007);
   sumratioup__191->GetZaxis()->SetTitleSize(0.05);
   sumratioup__191->GetZaxis()->SetTickLength(0.025);
   sumratioup__191->GetZaxis()->SetTitleFont(42);
   sumratioup__191->Draw("hist same");
   
   TH1D *sumratiodown__192 = new TH1D("sumratiodown__192","",20,15,1000);
   sumratiodown__192->SetBinContent(1,-0.02868989);
   sumratiodown__192->SetBinContent(2,-0.01570927);
   sumratiodown__192->SetBinContent(3,-0.01222595);
   sumratiodown__192->SetBinContent(4,-0.01217004);
   sumratiodown__192->SetBinContent(5,-0.01399076);
   sumratiodown__192->SetBinContent(6,-0.01715984);
   sumratiodown__192->SetBinContent(7,-0.02446952);
   sumratiodown__192->SetBinContent(8,-0.02249273);
   sumratiodown__192->SetBinContent(9,-0.02538019);
   sumratiodown__192->SetBinContent(10,-0.03609957);
   sumratiodown__192->SetBinContent(11,-0.0463264);
   sumratiodown__192->SetBinContent(12,-0.04645854);
   sumratiodown__192->SetBinContent(13,-0.05501638);
   sumratiodown__192->SetBinContent(14,-0.07685095);
   sumratiodown__192->SetBinContent(15,-0.06389788);
   sumratiodown__192->SetBinContent(16,-0.09673469);
   sumratiodown__192->SetBinContent(17,-0.09820981);
   sumratiodown__192->SetBinContent(18,-0.0944718);
   sumratiodown__192->SetBinContent(19,-0.2358655);
   sumratiodown__192->SetBinContent(20,-0.1296214);
   sumratiodown__192->SetBinError(1,0.001493312);
   sumratiodown__192->SetBinError(2,0.00241739);
   sumratiodown__192->SetBinError(3,0.002791389);
   sumratiodown__192->SetBinError(4,0.002420797);
   sumratiodown__192->SetBinError(5,0.001822849);
   sumratiodown__192->SetBinError(6,0.001350323);
   sumratiodown__192->SetBinError(7,0.001293924);
   sumratiodown__192->SetBinError(8,0.0007629036);
   sumratiodown__192->SetBinError(9,0.0005510943);
   sumratiodown__192->SetBinError(10,0.0005488464);
   sumratiodown__192->SetBinError(11,0.0005098481);
   sumratiodown__192->SetBinError(12,0.000355974);
   sumratiodown__192->SetBinError(13,0.0002759443);
   sumratiodown__192->SetBinError(14,0.0002245938);
   sumratiodown__192->SetBinError(15,0.0001339369);
   sumratiodown__192->SetBinError(16,0.000167461);
   sumratiodown__192->SetBinError(17,9.44627e-05);
   sumratiodown__192->SetBinError(18,5.730516e-05);
   sumratiodown__192->SetBinError(19,0.0002036255);
   sumratiodown__192->SetBinError(20,0.0001654455);
   sumratiodown__192->SetEntries(85);
   sumratiodown__192->SetStats(0);

   ci = 1195;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratiodown__192->SetFillColor(ci);
   sumratiodown__192->SetFillStyle(3003);
   sumratiodown__192->GetXaxis()->SetTitle("leading jet p_{T} [GeV]");
   sumratiodown__192->GetXaxis()->SetLabelFont(42);
   sumratiodown__192->GetXaxis()->SetLabelOffset(0.007);
   sumratiodown__192->GetXaxis()->SetTitleSize(0.05);
   sumratiodown__192->GetXaxis()->SetTickLength(0.025);
   sumratiodown__192->GetXaxis()->SetTitleFont(42);
   sumratiodown__192->GetYaxis()->SetTitle("a.u.");
   sumratiodown__192->GetYaxis()->SetLabelFont(42);
   sumratiodown__192->GetYaxis()->SetLabelOffset(0.007);
   sumratiodown__192->GetYaxis()->SetTitleSize(0.05);
   sumratiodown__192->GetYaxis()->SetTickLength(0.025);
   sumratiodown__192->GetYaxis()->SetTitleFont(42);
   sumratiodown__192->GetZaxis()->SetLabelFont(42);
   sumratiodown__192->GetZaxis()->SetLabelOffset(0.007);
   sumratiodown__192->GetZaxis()->SetTitleSize(0.05);
   sumratiodown__192->GetZaxis()->SetTickLength(0.025);
   sumratiodown__192->GetZaxis()->SetTitleFont(42);
   sumratiodown__192->Draw("hist same");
   
   Double_t Graph0_fx1016[20] = {
   39.625,
   88.875,
   138.125,
   187.375,
   236.625,
   285.875,
   335.125,
   384.375,
   433.625,
   482.875,
   532.125,
   581.375,
   630.625,
   679.875,
   729.125,
   778.375,
   827.625,
   876.875,
   926.125,
   975.375};
   Double_t Graph0_fy1016[20] = {
   -0.07767427,
   -0.1296017,
   -0.05287606,
   0.02530515,
   0.08225346,
   0.09741211,
   0.1190212,
   0.07925808,
   0.1521136,
   0.05976379,
   -0.01114738,
   -0.02851486,
   0.05201137,
   0.1123267,
   0.1237973,
   -0.4557099,
   0.2245213,
   0.08734751,
   -0.236002,
   -0.2617835};
   Double_t Graph0_fex1016[20] = {
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
   Double_t Graph0_fey1016[20] = {
   0.02889331,
   0.01632412,
   0.01397978,
   0.0155833,
   0.01978225,
   0.02563236,
   0.03157501,
   0.03871816,
   0.04999747,
   0.05730546,
   0.06506173,
   0.07728721,
   0.09940573,
   0.1339084,
   0.1589289,
   0.121707,
   0.2449042,
   0.2906058,
   0.2041871,
   0.1650702};
   TGraphErrors *gre = new TGraphErrors(20,Graph0_fx1016,Graph0_fy1016,Graph0_fex1016,Graph0_fey1016);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1016 = new TH1F("Graph_Graph1016","Graph",100,0,1068.95);
   Graph_Graph1016->SetMinimum(-0.6821011);
   Graph_Graph1016->SetMaximum(0.5741098);
   Graph_Graph1016->SetDirectory(0);
   Graph_Graph1016->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1016->SetLineColor(ci);
   Graph_Graph1016->GetXaxis()->SetLabelFont(42);
   Graph_Graph1016->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1016->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1016->GetXaxis()->SetTickLength(0.025);
   Graph_Graph1016->GetXaxis()->SetTitleFont(42);
   Graph_Graph1016->GetYaxis()->SetLabelFont(42);
   Graph_Graph1016->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1016->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1016->GetYaxis()->SetTickLength(0.025);
   Graph_Graph1016->GetYaxis()->SetTitleFont(42);
   Graph_Graph1016->GetZaxis()->SetLabelFont(42);
   Graph_Graph1016->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1016->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph1016->GetZaxis()->SetTickLength(0.025);
   Graph_Graph1016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1016);
   
   gre->Draw("pe0");
   pad2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
