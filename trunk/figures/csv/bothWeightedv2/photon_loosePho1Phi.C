void photon_loosePho1Phi()
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
   pad1->Range(-4.32025,0,3.53475,0.1219848);
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
   h->SetMaximum(0.1080437);
   
   TH1F *h_stack_7 = new TH1F("h_stack_7","",20,-3.142,3.142);
   h_stack_7->SetMinimum(0);
   h_stack_7->SetMaximum(0.1134458);
   h_stack_7->SetDirectory(0);
   h_stack_7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h_stack_7->SetLineColor(ci);
   h_stack_7->GetXaxis()->SetLabelFont(42);
   h_stack_7->GetXaxis()->SetLabelOffset(0.007);
   h_stack_7->GetXaxis()->SetTitleSize(0.05);
   h_stack_7->GetXaxis()->SetTickLength(0.025);
   h_stack_7->GetXaxis()->SetTitleFont(42);
   h_stack_7->GetYaxis()->SetTitle("a.u.");
   h_stack_7->GetYaxis()->SetLabelFont(42);
   h_stack_7->GetYaxis()->SetLabelOffset(0.007);
   h_stack_7->GetYaxis()->SetTitleSize(0.05);
   h_stack_7->GetYaxis()->SetTickLength(0.025);
   h_stack_7->GetYaxis()->SetTitleOffset(1.5);
   h_stack_7->GetYaxis()->SetTitleFont(42);
   h_stack_7->GetZaxis()->SetLabelFont(42);
   h_stack_7->GetZaxis()->SetLabelOffset(0.007);
   h_stack_7->GetZaxis()->SetTitleSize(0.05);
   h_stack_7->GetZaxis()->SetTickLength(0.025);
   h_stack_7->GetZaxis()->SetTitleFont(42);
   h->SetHistogram(h_stack_7);
   
   
   TH1D *h_loosePho1Phi_QCD__55 = new TH1D("h_loosePho1Phi_QCD__55","",20,-3.142,3.142);
   h_loosePho1Phi_QCD__55->SetBinContent(1,0.001527146);
   h_loosePho1Phi_QCD__55->SetBinContent(2,0.001553014);
   h_loosePho1Phi_QCD__55->SetBinContent(3,0.001579399);
   h_loosePho1Phi_QCD__55->SetBinContent(4,0.001564492);
   h_loosePho1Phi_QCD__55->SetBinContent(5,0.001656573);
   h_loosePho1Phi_QCD__55->SetBinContent(6,0.001694824);
   h_loosePho1Phi_QCD__55->SetBinContent(7,0.001679123);
   h_loosePho1Phi_QCD__55->SetBinContent(8,0.001725329);
   h_loosePho1Phi_QCD__55->SetBinContent(9,0.001739622);
   h_loosePho1Phi_QCD__55->SetBinContent(10,0.001764174);
   h_loosePho1Phi_QCD__55->SetBinContent(11,0.001770426);
   h_loosePho1Phi_QCD__55->SetBinContent(12,0.001785605);
   h_loosePho1Phi_QCD__55->SetBinContent(13,0.00171873);
   h_loosePho1Phi_QCD__55->SetBinContent(14,0.001744854);
   h_loosePho1Phi_QCD__55->SetBinContent(15,0.001765502);
   h_loosePho1Phi_QCD__55->SetBinContent(16,0.001714444);
   h_loosePho1Phi_QCD__55->SetBinContent(17,0.001629515);
   h_loosePho1Phi_QCD__55->SetBinContent(18,0.001641323);
   h_loosePho1Phi_QCD__55->SetBinContent(19,0.001623159);
   h_loosePho1Phi_QCD__55->SetBinContent(20,0.001549295);
   h_loosePho1Phi_QCD__55->SetBinError(1,8.807808e-06);
   h_loosePho1Phi_QCD__55->SetBinError(2,8.887906e-06);
   h_loosePho1Phi_QCD__55->SetBinError(3,8.955208e-06);
   h_loosePho1Phi_QCD__55->SetBinError(4,8.913079e-06);
   h_loosePho1Phi_QCD__55->SetBinError(5,9.17621e-06);
   h_loosePho1Phi_QCD__55->SetBinError(6,9.293765e-06);
   h_loosePho1Phi_QCD__55->SetBinError(7,9.246733e-06);
   h_loosePho1Phi_QCD__55->SetBinError(8,9.387732e-06);
   h_loosePho1Phi_QCD__55->SetBinError(9,9.430127e-06);
   h_loosePho1Phi_QCD__55->SetBinError(10,9.50398e-06);
   h_loosePho1Phi_QCD__55->SetBinError(11,9.529371e-06);
   h_loosePho1Phi_QCD__55->SetBinError(12,9.579345e-06);
   h_loosePho1Phi_QCD__55->SetBinError(13,9.395944e-06);
   h_loosePho1Phi_QCD__55->SetBinError(14,9.462223e-06);
   h_loosePho1Phi_QCD__55->SetBinError(15,9.511264e-06);
   h_loosePho1Phi_QCD__55->SetBinError(16,9.346162e-06);
   h_loosePho1Phi_QCD__55->SetBinError(17,9.106487e-06);
   h_loosePho1Phi_QCD__55->SetBinError(18,9.134556e-06);
   h_loosePho1Phi_QCD__55->SetBinError(19,9.082604e-06);
   h_loosePho1Phi_QCD__55->SetBinError(20,8.872394e-06);
   h_loosePho1Phi_QCD__55->SetEntries(668734);
   h_loosePho1Phi_QCD__55->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_loosePho1Phi_QCD__55->SetFillColor(ci);
   h_loosePho1Phi_QCD__55->GetXaxis()->SetTitle("Leading pho #phi");
   h_loosePho1Phi_QCD__55->GetXaxis()->SetLabelFont(42);
   h_loosePho1Phi_QCD__55->GetXaxis()->SetLabelOffset(0.007);
   h_loosePho1Phi_QCD__55->GetXaxis()->SetTitleSize(0.05);
   h_loosePho1Phi_QCD__55->GetXaxis()->SetTickLength(0.025);
   h_loosePho1Phi_QCD__55->GetXaxis()->SetTitleFont(42);
   h_loosePho1Phi_QCD__55->GetYaxis()->SetTitle("a.u.");
   h_loosePho1Phi_QCD__55->GetYaxis()->SetLabelFont(42);
   h_loosePho1Phi_QCD__55->GetYaxis()->SetLabelOffset(0.007);
   h_loosePho1Phi_QCD__55->GetYaxis()->SetTitleSize(0.05);
   h_loosePho1Phi_QCD__55->GetYaxis()->SetTickLength(0.025);
   h_loosePho1Phi_QCD__55->GetYaxis()->SetTitleFont(42);
   h_loosePho1Phi_QCD__55->GetZaxis()->SetLabelFont(42);
   h_loosePho1Phi_QCD__55->GetZaxis()->SetLabelOffset(0.007);
   h_loosePho1Phi_QCD__55->GetZaxis()->SetTitleSize(0.05);
   h_loosePho1Phi_QCD__55->GetZaxis()->SetTickLength(0.025);
   h_loosePho1Phi_QCD__55->GetZaxis()->SetTitleFont(42);
   h->Add(h_loosePho1Phi_QCD,"");
   
   TH1D *h_loosePho1Phi_#gammapLjetssPoPHFcP__56 = new TH1D("h_loosePho1Phi_#gammapLjetssPoPHFcP__56","",20,-3.142,3.142);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetBinContent(1,0.007580622);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetBinContent(2,0.006243296);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetBinContent(3,0.007212475);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetBinContent(4,0.006230206);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetBinContent(5,0.006138001);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetBinContent(6,0.005679161);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetBinContent(7,0.005908013);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetBinContent(8,0.00615065);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetBinContent(9,0.005384296);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetBinContent(10,0.005465338);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetBinContent(11,0.005864246);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetBinContent(12,0.005615142);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetBinContent(13,0.00606208);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetBinContent(14,0.007558854);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetBinContent(15,0.006488408);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetBinContent(16,0.00707482);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetBinContent(17,0.006552534);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetBinContent(18,0.006711246);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetBinContent(19,0.006206663);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetBinContent(20,0.006817809);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetBinError(1,0.0004398862);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetBinError(2,0.0002901606);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetBinError(3,0.0004621011);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetBinError(4,0.0003642364);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetBinError(5,0.0004273346);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetBinError(6,0.0003082864);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetBinError(7,0.000345631);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetBinError(8,0.0003538317);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetBinError(9,0.0003252454);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetBinError(10,0.000351064);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetBinError(11,0.0003581355);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetBinError(12,0.0002940349);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetBinError(13,0.0003193481);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetBinError(14,0.0004980156);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetBinError(15,0.0004573395);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetBinError(16,0.0004790501);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetBinError(17,0.0003809586);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetBinError(18,0.000461228);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetBinError(19,0.0003353362);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetBinError(20,0.00047781);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetEntries(14151);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetStats(0);

   ci = TColor::GetColor("#ff6633");
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->SetFillColor(ci);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->GetXaxis()->SetTitle("Leading pho #phi");
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->GetXaxis()->SetLabelFont(42);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->GetXaxis()->SetLabelOffset(0.007);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->GetXaxis()->SetTitleSize(0.05);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->GetXaxis()->SetTickLength(0.025);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->GetXaxis()->SetTitleFont(42);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->GetYaxis()->SetTitle("a.u.");
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->GetYaxis()->SetLabelFont(42);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->GetYaxis()->SetLabelOffset(0.007);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->GetYaxis()->SetTitleSize(0.05);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->GetYaxis()->SetTickLength(0.025);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->GetYaxis()->SetTitleFont(42);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->GetZaxis()->SetLabelFont(42);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->GetZaxis()->SetLabelOffset(0.007);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->GetZaxis()->SetTitleSize(0.05);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->GetZaxis()->SetTickLength(0.025);
   h_loosePho1Phi_#gammapLjetssPoPHFcP__56->GetZaxis()->SetTitleFont(42);
   h->Add(h_loosePho1Phi_#gamma+jets (HF),"");
   
   TH1D *h_loosePho1Phi_#gammapLjetssPoPLFcP__57 = new TH1D("h_loosePho1Phi_#gammapLjetssPoPLFcP__57","",20,-3.142,3.142);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetBinContent(1,0.0448764);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetBinContent(2,0.04440685);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetBinContent(3,0.04344906);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetBinContent(4,0.04310338);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetBinContent(5,0.04269081);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetBinContent(6,0.04185375);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetBinContent(7,0.03888412);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetBinContent(8,0.03949592);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetBinContent(9,0.03726568);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetBinContent(10,0.0383274);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetBinContent(11,0.03837297);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetBinContent(12,0.03974643);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetBinContent(13,0.04014297);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetBinContent(14,0.04228346);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetBinContent(15,0.04218996);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetBinContent(16,0.0444736);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetBinContent(17,0.04383192);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetBinContent(18,0.04566926);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetBinContent(19,0.04463987);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetBinContent(20,0.04392575);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetBinError(1,0.001055815);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetBinError(2,0.00105101);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetBinError(3,0.001066025);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetBinError(4,0.001028398);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetBinError(5,0.0009522692);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetBinError(6,0.0009989319);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetBinError(7,0.0009098059);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetBinError(8,0.0008704401);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetBinError(9,0.0008847442);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetBinError(10,0.0009406142);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetBinError(11,0.00085493);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetBinError(12,0.0009793633);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetBinError(13,0.001006037);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetBinError(14,0.001053339);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetBinError(15,0.0009418597);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetBinError(16,0.001042592);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetBinError(17,0.001033143);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetBinError(18,0.001096065);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetBinError(19,0.001034445);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetBinError(20,0.0009737942);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetEntries(99281);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetStats(0);

   ci = TColor::GetColor("#339999");
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->SetFillColor(ci);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->GetXaxis()->SetTitle("Leading pho #phi");
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->GetXaxis()->SetLabelFont(42);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->GetXaxis()->SetLabelOffset(0.007);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->GetXaxis()->SetTitleSize(0.05);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->GetXaxis()->SetTickLength(0.025);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->GetXaxis()->SetTitleFont(42);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->GetYaxis()->SetTitle("a.u.");
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->GetYaxis()->SetLabelFont(42);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->GetYaxis()->SetLabelOffset(0.007);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->GetYaxis()->SetTitleSize(0.05);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->GetYaxis()->SetTickLength(0.025);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->GetYaxis()->SetTitleFont(42);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->GetZaxis()->SetLabelFont(42);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->GetZaxis()->SetLabelOffset(0.007);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->GetZaxis()->SetTitleSize(0.05);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->GetZaxis()->SetTickLength(0.025);
   h_loosePho1Phi_#gammapLjetssPoPLFcP__57->GetZaxis()->SetTitleFont(42);
   h->Add(h_loosePho1Phi_#gamma+jets (LF),"");
   h->Draw("hist");
   
   TH1D *hsum__58 = new TH1D("hsum__58","",20,-3.142,3.142);
   hsum__58->SetBinContent(1,0.05398417);
   hsum__58->SetBinContent(2,0.05220316);
   hsum__58->SetBinContent(3,0.05224093);
   hsum__58->SetBinContent(4,0.05089808);
   hsum__58->SetBinContent(5,0.05048538);
   hsum__58->SetBinContent(6,0.04922774);
   hsum__58->SetBinContent(7,0.04647126);
   hsum__58->SetBinContent(8,0.0473719);
   hsum__58->SetBinContent(9,0.0443896);
   hsum__58->SetBinContent(10,0.04555691);
   hsum__58->SetBinContent(11,0.04600764);
   hsum__58->SetBinContent(12,0.04714718);
   hsum__58->SetBinContent(13,0.04792378);
   hsum__58->SetBinContent(14,0.05158717);
   hsum__58->SetBinContent(15,0.05044387);
   hsum__58->SetBinContent(16,0.05326286);
   hsum__58->SetBinContent(17,0.05201397);
   hsum__58->SetBinContent(18,0.05402183);
   hsum__58->SetBinContent(19,0.05246969);
   hsum__58->SetBinContent(20,0.05229286);
   hsum__58->SetBinError(1,0.001143819);
   hsum__58->SetBinError(2,0.001090364);
   hsum__58->SetBinError(3,0.001161907);
   hsum__58->SetBinError(4,0.001091031);
   hsum__58->SetBinError(5,0.001043799);
   hsum__58->SetBinError(6,0.001045463);
   hsum__58->SetBinError(7,0.0009732898);
   hsum__58->SetBinError(8,0.0009396547);
   hsum__58->SetBinError(9,0.0009426801);
   hsum__58->SetBinError(10,0.001004038);
   hsum__58->SetBinError(11,0.0009269612);
   hsum__58->SetBinError(12,0.001022595);
   hsum__58->SetBinError(13,0.001055548);
   hsum__58->SetBinError(14,0.001165175);
   hsum__58->SetBinError(15,0.001047067);
   hsum__58->SetBinError(16,0.001147421);
   hsum__58->SetBinError(17,0.001101179);
   hsum__58->SetBinError(18,0.00118919);
   hsum__58->SetBinError(19,0.001087478);
   hsum__58->SetBinError(20,0.001084738);
   hsum__58->SetEntries(668774);
   hsum__58->SetStats(0);

   ci = 1186;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   hsum__58->SetFillColor(ci);
   hsum__58->SetFillStyle(3003);
   hsum__58->SetLineWidth(0);
   hsum__58->GetXaxis()->SetTitle("Leading pho #phi");
   hsum__58->GetXaxis()->SetLabelFont(42);
   hsum__58->GetXaxis()->SetLabelOffset(0.007);
   hsum__58->GetXaxis()->SetTitleSize(0.05);
   hsum__58->GetXaxis()->SetTickLength(0.025);
   hsum__58->GetXaxis()->SetTitleFont(42);
   hsum__58->GetYaxis()->SetTitle("a.u.");
   hsum__58->GetYaxis()->SetLabelFont(42);
   hsum__58->GetYaxis()->SetLabelOffset(0.007);
   hsum__58->GetYaxis()->SetTitleSize(0.05);
   hsum__58->GetYaxis()->SetTickLength(0.025);
   hsum__58->GetYaxis()->SetTitleFont(42);
   hsum__58->GetZaxis()->SetLabelFont(42);
   hsum__58->GetZaxis()->SetLabelOffset(0.007);
   hsum__58->GetZaxis()->SetTitleSize(0.05);
   hsum__58->GetZaxis()->SetTickLength(0.025);
   hsum__58->GetZaxis()->SetTitleFont(42);
   hsum__58->Draw("e2 same");
   
   TH1D *h_loosePho1Phi_Data__59 = new TH1D("h_loosePho1Phi_Data__59","",20,-3.142,3.142);
   h_loosePho1Phi_Data__59->SetBinContent(1,0.04589119);
   h_loosePho1Phi_Data__59->SetBinContent(2,0.04660298);
   h_loosePho1Phi_Data__59->SetBinContent(3,0.04747777);
   h_loosePho1Phi_Data__59->SetBinContent(4,0.04704711);
   h_loosePho1Phi_Data__59->SetBinContent(5,0.04973577);
   h_loosePho1Phi_Data__59->SetBinContent(6,0.05077206);
   h_loosePho1Phi_Data__59->SetBinContent(7,0.05035934);
   h_loosePho1Phi_Data__59->SetBinContent(8,0.05154366);
   h_loosePho1Phi_Data__59->SetBinContent(9,0.05194891);
   h_loosePho1Phi_Data__59->SetBinContent(10,0.05260088);
   h_loosePho1Phi_Data__59->SetBinContent(11,0.05268313);
   h_loosePho1Phi_Data__59->SetBinContent(12,0.05302706);
   h_loosePho1Phi_Data__59->SetBinContent(13,0.05105767);
   h_loosePho1Phi_Data__59->SetBinContent(14,0.05185918);
   h_loosePho1Phi_Data__59->SetBinContent(15,0.05254855);
   h_loosePho1Phi_Data__59->SetBinContent(16,0.05137768);
   h_loosePho1Phi_Data__59->SetBinContent(17,0.04888491);
   h_loosePho1Phi_Data__59->SetBinContent(18,0.04928866);
   h_loosePho1Phi_Data__59->SetBinContent(19,0.04874434);
   h_loosePho1Phi_Data__59->SetBinContent(20,0.04654915);
   h_loosePho1Phi_Data__59->SetBinError(1,0.0002619618);
   h_loosePho1Phi_Data__59->SetBinError(2,0.0002639856);
   h_loosePho1Phi_Data__59->SetBinError(3,0.0002664517);
   h_loosePho1Phi_Data__59->SetBinError(4,0.0002652405);
   h_loosePho1Phi_Data__59->SetBinError(5,0.0002727142);
   h_loosePho1Phi_Data__59->SetBinError(6,0.0002755406);
   h_loosePho1Phi_Data__59->SetBinError(7,0.0002744184);
   h_loosePho1Phi_Data__59->SetBinError(8,0.0002776265);
   h_loosePho1Phi_Data__59->SetBinError(9,0.0002787157);
   h_loosePho1Phi_Data__59->SetBinError(10,0.0002804593);
   h_loosePho1Phi_Data__59->SetBinError(11,0.0002806785);
   h_loosePho1Phi_Data__59->SetBinError(12,0.0002815931);
   h_loosePho1Phi_Data__59->SetBinError(13,0.0002763146);
   h_loosePho1Phi_Data__59->SetBinError(14,0.000278475);
   h_loosePho1Phi_Data__59->SetBinError(15,0.0002803197);
   h_loosePho1Phi_Data__59->SetBinError(16,0.0002771791);
   h_loosePho1Phi_Data__59->SetBinError(17,0.0002703714);
   h_loosePho1Phi_Data__59->SetBinError(18,0.0002714856);
   h_loosePho1Phi_Data__59->SetBinError(19,0.0002699824);
   h_loosePho1Phi_Data__59->SetBinError(20,0.000263833);
   h_loosePho1Phi_Data__59->SetEntries(668734);
   h_loosePho1Phi_Data__59->SetStats(0);
   h_loosePho1Phi_Data__59->SetLineWidth(3);
   h_loosePho1Phi_Data__59->SetMarkerStyle(20);
   h_loosePho1Phi_Data__59->SetMarkerSize(2);
   h_loosePho1Phi_Data__59->GetXaxis()->SetTitle("Leading pho #phi");
   h_loosePho1Phi_Data__59->GetXaxis()->SetLabelFont(42);
   h_loosePho1Phi_Data__59->GetXaxis()->SetLabelOffset(0.007);
   h_loosePho1Phi_Data__59->GetXaxis()->SetTitleSize(0.05);
   h_loosePho1Phi_Data__59->GetXaxis()->SetTickLength(0.025);
   h_loosePho1Phi_Data__59->GetXaxis()->SetTitleFont(42);
   h_loosePho1Phi_Data__59->GetYaxis()->SetTitle("a.u.");
   h_loosePho1Phi_Data__59->GetYaxis()->SetLabelFont(42);
   h_loosePho1Phi_Data__59->GetYaxis()->SetLabelOffset(0.007);
   h_loosePho1Phi_Data__59->GetYaxis()->SetTitleSize(0.05);
   h_loosePho1Phi_Data__59->GetYaxis()->SetTickLength(0.025);
   h_loosePho1Phi_Data__59->GetYaxis()->SetTitleFont(42);
   h_loosePho1Phi_Data__59->GetZaxis()->SetLabelFont(42);
   h_loosePho1Phi_Data__59->GetZaxis()->SetLabelOffset(0.007);
   h_loosePho1Phi_Data__59->GetZaxis()->SetTitleSize(0.05);
   h_loosePho1Phi_Data__59->GetZaxis()->SetTickLength(0.025);
   h_loosePho1Phi_Data__59->GetZaxis()->SetTitleFont(42);
   h_loosePho1Phi_Data__59->Draw("elp same");
   
   TLegend *leg = new TLegend(0.6,0.55,0.88,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("h_loosePho1Phi_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_loosePho1Phi_#gamma+jets (LF)","#gamma+jets (LF)","F");

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
   entry=leg->AddEntry("h_loosePho1Phi_#gamma+jets (HF)","#gamma+jets (HF)","F");

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
   entry=leg->AddEntry("h_loosePho1Phi_QCD","QCD","F");

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
   entry=leg->AddEntry("h_loosePho1Phi_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_loosePho1Phi_#gamma+jets (LF)","#gamma+jets (LF)","F");

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
   entry=leg->AddEntry("h_loosePho1Phi_#gamma+jets (HF)","#gamma+jets (HF)","F");

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
   entry=leg->AddEntry("h_loosePho1Phi_QCD","QCD","F");

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
   pad2->Range(-4.32025,-0.8914286,3.53475,0.48);
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
   
   TH1D *ratio__60 = new TH1D("ratio__60","",20,-3.142,3.142);
   ratio__60->SetBinContent(1,-0.1499138);
   ratio__60->SetBinContent(2,-0.1072767);
   ratio__60->SetBinContent(3,-0.09117687);
   ratio__60->SetBinContent(4,-0.07566035);
   ratio__60->SetBinContent(5,-0.01484811);
   ratio__60->SetBinContent(6,0.03137088);
   ratio__60->SetBinContent(7,0.08366632);
   ratio__60->SetBinContent(8,0.08806407);
   ratio__60->SetBinContent(9,0.1702945);
   ratio__60->SetBinContent(10,0.1546192);
   ratio__60->SetBinContent(11,0.1450952);
   ratio__60->SetBinContent(12,0.1247134);
   ratio__60->SetBinContent(13,0.06539333);
   ratio__60->SetBinContent(14,0.005272985);
   ratio__60->SetBinContent(15,0.04172313);
   ratio__60->SetBinContent(16,-0.03539395);
   ratio__60->SetBinContent(17,-0.06015801);
   ratio__60->SetBinContent(18,-0.08761597);
   ratio__60->SetBinContent(19,-0.07100004);
   ratio__60->SetBinContent(20,-0.1098373);
   ratio__60->SetBinError(1,0.0001);
   ratio__60->SetBinError(2,0.0001);
   ratio__60->SetBinError(3,0.0001);
   ratio__60->SetBinError(4,0.0001);
   ratio__60->SetBinError(5,0.0001);
   ratio__60->SetBinError(6,0.0001);
   ratio__60->SetBinError(7,0.0001);
   ratio__60->SetBinError(8,0.0001);
   ratio__60->SetBinError(9,0.0001);
   ratio__60->SetBinError(10,0.0001);
   ratio__60->SetBinError(11,0.0001);
   ratio__60->SetBinError(12,0.0001);
   ratio__60->SetBinError(13,0.0001);
   ratio__60->SetBinError(14,0.0001);
   ratio__60->SetBinError(15,0.0001);
   ratio__60->SetBinError(16,0.0001);
   ratio__60->SetBinError(17,0.0001);
   ratio__60->SetBinError(18,0.0001);
   ratio__60->SetBinError(19,0.0001);
   ratio__60->SetBinError(20,0.0001);
   ratio__60->SetMinimum(-0.48);
   ratio__60->SetMaximum(0.48);
   ratio__60->SetEntries(668754);
   ratio__60->SetStats(0);
   ratio__60->SetLineWidth(3);
   ratio__60->SetMarkerStyle(20);
   ratio__60->SetMarkerSize(2);
   ratio__60->GetXaxis()->SetTitle("Leading pho #phi");
   ratio__60->GetXaxis()->SetLabelFont(43);
   ratio__60->GetXaxis()->SetLabelOffset(0.007);
   ratio__60->GetXaxis()->SetLabelSize(30);
   ratio__60->GetXaxis()->SetTitleSize(40);
   ratio__60->GetXaxis()->SetTickLength(0.025);
   ratio__60->GetXaxis()->SetTitleOffset(5);
   ratio__60->GetXaxis()->SetTitleFont(43);
   ratio__60->GetYaxis()->SetTitle("#frac{Data-Exp}{Exp}");
   ratio__60->GetYaxis()->SetNdivisions(5);
   ratio__60->GetYaxis()->SetLabelFont(43);
   ratio__60->GetYaxis()->SetLabelOffset(0.007);
   ratio__60->GetYaxis()->SetLabelSize(30);
   ratio__60->GetYaxis()->SetTitleSize(40);
   ratio__60->GetYaxis()->SetTickLength(0.025);
   ratio__60->GetYaxis()->SetTitleOffset(2.5);
   ratio__60->GetYaxis()->SetTitleFont(43);
   ratio__60->GetZaxis()->SetLabelFont(42);
   ratio__60->GetZaxis()->SetLabelOffset(0.007);
   ratio__60->GetZaxis()->SetTitleSize(0.05);
   ratio__60->GetZaxis()->SetTickLength(0.025);
   ratio__60->GetZaxis()->SetTitleFont(42);
   ratio__60->Draw("elp");
   
   TH1D *zero__61 = new TH1D("zero__61","",20,-3.142,3.142);
   zero__61->SetBinError(1,0.0002619618);
   zero__61->SetBinError(2,0.0002639856);
   zero__61->SetBinError(3,0.0002664517);
   zero__61->SetBinError(4,0.0002652405);
   zero__61->SetBinError(5,0.0002727142);
   zero__61->SetBinError(6,0.0002755406);
   zero__61->SetBinError(7,0.0002744184);
   zero__61->SetBinError(8,0.0002776265);
   zero__61->SetBinError(9,0.0002787157);
   zero__61->SetBinError(10,0.0002804593);
   zero__61->SetBinError(11,0.0002806785);
   zero__61->SetBinError(12,0.0002815931);
   zero__61->SetBinError(13,0.0002763146);
   zero__61->SetBinError(14,0.000278475);
   zero__61->SetBinError(15,0.0002803197);
   zero__61->SetBinError(16,0.0002771791);
   zero__61->SetBinError(17,0.0002703714);
   zero__61->SetBinError(18,0.0002714856);
   zero__61->SetBinError(19,0.0002699824);
   zero__61->SetBinError(20,0.000263833);
   zero__61->SetEntries(668754);
   zero__61->SetStats(0);
   zero__61->SetLineWidth(3);
   zero__61->SetMarkerStyle(20);
   zero__61->SetMarkerSize(2);
   zero__61->GetXaxis()->SetTitle("Leading pho #phi");
   zero__61->GetXaxis()->SetLabelFont(42);
   zero__61->GetXaxis()->SetLabelOffset(0.007);
   zero__61->GetXaxis()->SetTitleSize(0.05);
   zero__61->GetXaxis()->SetTickLength(0.025);
   zero__61->GetXaxis()->SetTitleFont(42);
   zero__61->GetYaxis()->SetTitle("a.u.");
   zero__61->GetYaxis()->SetLabelFont(42);
   zero__61->GetYaxis()->SetLabelOffset(0.007);
   zero__61->GetYaxis()->SetTitleSize(0.05);
   zero__61->GetYaxis()->SetTickLength(0.025);
   zero__61->GetYaxis()->SetTitleFont(42);
   zero__61->GetZaxis()->SetLabelFont(42);
   zero__61->GetZaxis()->SetLabelOffset(0.007);
   zero__61->GetZaxis()->SetTitleSize(0.05);
   zero__61->GetZaxis()->SetTickLength(0.025);
   zero__61->GetZaxis()->SetTitleFont(42);
   zero__61->Draw("hist same");
   
   TH1D *sumratioup__62 = new TH1D("sumratioup__62","",20,-3.142,3.142);
   sumratioup__62->SetBinContent(1,0.02118805);
   sumratioup__62->SetBinContent(2,0.02088694);
   sumratioup__62->SetBinContent(3,0.02224131);
   sumratioup__62->SetBinContent(4,0.02143561);
   sumratioup__62->SetBinContent(5,0.02067527);
   sumratioup__62->SetBinContent(6,0.02123727);
   sumratioup__62->SetBinContent(7,0.02094391);
   sumratioup__62->SetBinContent(8,0.0198357);
   sumratioup__62->SetBinContent(9,0.02123651);
   sumratioup__62->SetBinContent(10,0.02203919);
   sumratioup__62->SetBinContent(11,0.02014798);
   sumratioup__62->SetBinContent(12,0.02168942);
   sumratioup__62->SetBinContent(13,0.02202556);
   sumratioup__62->SetBinContent(14,0.02258652);
   sumratioup__62->SetBinContent(15,0.02075708);
   sumratioup__62->SetBinContent(16,0.02154261);
   sumratioup__62->SetBinContent(17,0.02117084);
   sumratioup__62->SetBinContent(18,0.02201314);
   sumratioup__62->SetBinContent(19,0.02072584);
   sumratioup__62->SetBinContent(20,0.02074352);
   sumratioup__62->SetBinError(1,0.001143819);
   sumratioup__62->SetBinError(2,0.001090364);
   sumratioup__62->SetBinError(3,0.001161907);
   sumratioup__62->SetBinError(4,0.001091031);
   sumratioup__62->SetBinError(5,0.001043799);
   sumratioup__62->SetBinError(6,0.001045463);
   sumratioup__62->SetBinError(7,0.0009732898);
   sumratioup__62->SetBinError(8,0.0009396547);
   sumratioup__62->SetBinError(9,0.0009426801);
   sumratioup__62->SetBinError(10,0.001004038);
   sumratioup__62->SetBinError(11,0.0009269612);
   sumratioup__62->SetBinError(12,0.001022595);
   sumratioup__62->SetBinError(13,0.001055548);
   sumratioup__62->SetBinError(14,0.001165175);
   sumratioup__62->SetBinError(15,0.001047067);
   sumratioup__62->SetBinError(16,0.001147421);
   sumratioup__62->SetBinError(17,0.001101179);
   sumratioup__62->SetBinError(18,0.00118919);
   sumratioup__62->SetBinError(19,0.001087478);
   sumratioup__62->SetBinError(20,0.001084738);
   sumratioup__62->SetEntries(668794);
   sumratioup__62->SetStats(0);

   ci = 1186;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratioup__62->SetFillColor(ci);
   sumratioup__62->SetFillStyle(3003);
   sumratioup__62->GetXaxis()->SetTitle("Leading pho #phi");
   sumratioup__62->GetXaxis()->SetLabelFont(42);
   sumratioup__62->GetXaxis()->SetLabelOffset(0.007);
   sumratioup__62->GetXaxis()->SetTitleSize(0.05);
   sumratioup__62->GetXaxis()->SetTickLength(0.025);
   sumratioup__62->GetXaxis()->SetTitleFont(42);
   sumratioup__62->GetYaxis()->SetTitle("a.u.");
   sumratioup__62->GetYaxis()->SetLabelFont(42);
   sumratioup__62->GetYaxis()->SetLabelOffset(0.007);
   sumratioup__62->GetYaxis()->SetTitleSize(0.05);
   sumratioup__62->GetYaxis()->SetTickLength(0.025);
   sumratioup__62->GetYaxis()->SetTitleFont(42);
   sumratioup__62->GetZaxis()->SetLabelFont(42);
   sumratioup__62->GetZaxis()->SetLabelOffset(0.007);
   sumratioup__62->GetZaxis()->SetTitleSize(0.05);
   sumratioup__62->GetZaxis()->SetTickLength(0.025);
   sumratioup__62->GetZaxis()->SetTitleFont(42);
   sumratioup__62->Draw("hist same");
   
   TH1D *sumratiodown__63 = new TH1D("sumratiodown__63","",20,-3.142,3.142);
   sumratiodown__63->SetBinContent(1,-0.02118805);
   sumratiodown__63->SetBinContent(2,-0.02088694);
   sumratiodown__63->SetBinContent(3,-0.02224131);
   sumratiodown__63->SetBinContent(4,-0.02143561);
   sumratiodown__63->SetBinContent(5,-0.02067527);
   sumratiodown__63->SetBinContent(6,-0.02123727);
   sumratiodown__63->SetBinContent(7,-0.02094391);
   sumratiodown__63->SetBinContent(8,-0.0198357);
   sumratiodown__63->SetBinContent(9,-0.02123651);
   sumratiodown__63->SetBinContent(10,-0.02203919);
   sumratiodown__63->SetBinContent(11,-0.02014798);
   sumratiodown__63->SetBinContent(12,-0.02168942);
   sumratiodown__63->SetBinContent(13,-0.02202556);
   sumratiodown__63->SetBinContent(14,-0.02258652);
   sumratiodown__63->SetBinContent(15,-0.02075708);
   sumratiodown__63->SetBinContent(16,-0.02154261);
   sumratiodown__63->SetBinContent(17,-0.02117084);
   sumratiodown__63->SetBinContent(18,-0.02201314);
   sumratiodown__63->SetBinContent(19,-0.02072584);
   sumratiodown__63->SetBinContent(20,-0.02074352);
   sumratiodown__63->SetBinError(1,0.001143819);
   sumratiodown__63->SetBinError(2,0.001090364);
   sumratiodown__63->SetBinError(3,0.001161907);
   sumratiodown__63->SetBinError(4,0.001091031);
   sumratiodown__63->SetBinError(5,0.001043799);
   sumratiodown__63->SetBinError(6,0.001045463);
   sumratiodown__63->SetBinError(7,0.0009732898);
   sumratiodown__63->SetBinError(8,0.0009396547);
   sumratiodown__63->SetBinError(9,0.0009426801);
   sumratiodown__63->SetBinError(10,0.001004038);
   sumratiodown__63->SetBinError(11,0.0009269612);
   sumratiodown__63->SetBinError(12,0.001022595);
   sumratiodown__63->SetBinError(13,0.001055548);
   sumratiodown__63->SetBinError(14,0.001165175);
   sumratiodown__63->SetBinError(15,0.001047067);
   sumratiodown__63->SetBinError(16,0.001147421);
   sumratiodown__63->SetBinError(17,0.001101179);
   sumratiodown__63->SetBinError(18,0.00118919);
   sumratiodown__63->SetBinError(19,0.001087478);
   sumratiodown__63->SetBinError(20,0.001084738);
   sumratiodown__63->SetEntries(668794);
   sumratiodown__63->SetStats(0);

   ci = 1186;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratiodown__63->SetFillColor(ci);
   sumratiodown__63->SetFillStyle(3003);
   sumratiodown__63->GetXaxis()->SetTitle("Leading pho #phi");
   sumratiodown__63->GetXaxis()->SetLabelFont(42);
   sumratiodown__63->GetXaxis()->SetLabelOffset(0.007);
   sumratiodown__63->GetXaxis()->SetTitleSize(0.05);
   sumratiodown__63->GetXaxis()->SetTickLength(0.025);
   sumratiodown__63->GetXaxis()->SetTitleFont(42);
   sumratiodown__63->GetYaxis()->SetTitle("a.u.");
   sumratiodown__63->GetYaxis()->SetLabelFont(42);
   sumratiodown__63->GetYaxis()->SetLabelOffset(0.007);
   sumratiodown__63->GetYaxis()->SetTitleSize(0.05);
   sumratiodown__63->GetYaxis()->SetTickLength(0.025);
   sumratiodown__63->GetYaxis()->SetTitleFont(42);
   sumratiodown__63->GetZaxis()->SetLabelFont(42);
   sumratiodown__63->GetZaxis()->SetLabelOffset(0.007);
   sumratiodown__63->GetZaxis()->SetTitleSize(0.05);
   sumratiodown__63->GetZaxis()->SetTickLength(0.025);
   sumratiodown__63->GetZaxis()->SetTitleFont(42);
   sumratiodown__63->Draw("hist same");
   
   Double_t Graph0_fx1007[20] = {
   -2.9849,
   -2.6707,
   -2.3565,
   -2.0423,
   -1.7281,
   -1.4139,
   -1.0997,
   -0.7855,
   -0.4713,
   -0.1571,
   0.1571,
   0.4713,
   0.7855,
   1.0997,
   1.4139,
   1.7281,
   2.0423,
   2.3565,
   2.6707,
   2.9849};
   Double_t Graph0_fy1007[20] = {
   -0.1499138,
   -0.1072767,
   -0.09117687,
   -0.07566035,
   -0.01484811,
   0.03137088,
   0.08366632,
   0.08806407,
   0.1702945,
   0.1546192,
   0.1450952,
   0.1247134,
   0.06539333,
   0.005272985,
   0.04172313,
   -0.03539395,
   -0.06015801,
   -0.08761597,
   -0.07100004,
   -0.1098373};
   Double_t Graph0_fex1007[20] = {
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
   Double_t Graph0_fey1007[20] = {
   0.004852567,
   0.005056888,
   0.005100439,
   0.005211208,
   0.005401844,
   0.005597265,
   0.005905122,
   0.005860573,
   0.006278852,
   0.006156241,
   0.006100692,
   0.005972641,
   0.00576571,
   0.005398144,
   0.005557062,
   0.005203986,
   0.005198053,
   0.005025479,
   0.005145492,
   0.005045298};
   TGraphErrors *gre = new TGraphErrors(20,Graph0_fx1007,Graph0_fy1007,Graph0_fex1007,Graph0_fey1007);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1007 = new TH1F("Graph_Graph1007","Graph",100,-3.58188,3.58188);
   Graph_Graph1007->SetMinimum(-0.1879004);
   Graph_Graph1007->SetMaximum(0.2097074);
   Graph_Graph1007->SetDirectory(0);
   Graph_Graph1007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1007->SetLineColor(ci);
   Graph_Graph1007->GetXaxis()->SetLabelFont(42);
   Graph_Graph1007->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1007->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1007->GetXaxis()->SetTickLength(0.025);
   Graph_Graph1007->GetXaxis()->SetTitleFont(42);
   Graph_Graph1007->GetYaxis()->SetLabelFont(42);
   Graph_Graph1007->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1007->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1007->GetYaxis()->SetTickLength(0.025);
   Graph_Graph1007->GetYaxis()->SetTitleFont(42);
   Graph_Graph1007->GetZaxis()->SetLabelFont(42);
   Graph_Graph1007->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1007->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph1007->GetZaxis()->SetTickLength(0.025);
   Graph_Graph1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1007);
   
   gre->Draw("pe0");
   pad2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
