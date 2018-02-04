void ttbar_isojet1Pt()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sun Dec 11 15:16:19 2016) by ROOT version6.06/01
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
   pad1->Range(-169.6875,0,1061.562,0.6329468);
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
   h->SetMaximum(0.56061);
   
   TH1F *h_stack_17 = new TH1F("h_stack_17","",20,15,1000);
   h_stack_17->SetMinimum(0);
   h_stack_17->SetMaximum(0.5886405);
   h_stack_17->SetDirectory(0);
   h_stack_17->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h_stack_17->SetLineColor(ci);
   h_stack_17->GetXaxis()->SetLabelFont(42);
   h_stack_17->GetXaxis()->SetLabelOffset(0.007);
   h_stack_17->GetXaxis()->SetTitleSize(0.05);
   h_stack_17->GetXaxis()->SetTickLength(0.025);
   h_stack_17->GetXaxis()->SetTitleFont(42);
   h_stack_17->GetYaxis()->SetTitle("a.u.");
   h_stack_17->GetYaxis()->SetLabelFont(42);
   h_stack_17->GetYaxis()->SetLabelOffset(0.007);
   h_stack_17->GetYaxis()->SetTitleSize(0.05);
   h_stack_17->GetYaxis()->SetTickLength(0.025);
   h_stack_17->GetYaxis()->SetTitleOffset(1.5);
   h_stack_17->GetYaxis()->SetTitleFont(42);
   h_stack_17->GetZaxis()->SetLabelFont(42);
   h_stack_17->GetZaxis()->SetLabelOffset(0.007);
   h_stack_17->GetZaxis()->SetTitleSize(0.05);
   h_stack_17->GetZaxis()->SetTickLength(0.025);
   h_stack_17->GetZaxis()->SetTitleFont(42);
   h->SetHistogram(h_stack_17);
   
   
   TH1D *h_isojet1Pt_QCD__193 = new TH1D("h_isojet1Pt_QCD__193","",20,15,1000);
   h_isojet1Pt_QCD__193->SetBinContent(1,0.0005347126);
   h_isojet1Pt_QCD__193->SetBinContent(2,0.003450032);
   h_isojet1Pt_QCD__193->SetBinContent(3,0.004650802);
   h_isojet1Pt_QCD__193->SetBinContent(4,0.001149113);
   h_isojet1Pt_QCD__193->SetBinContent(5,0.001792951);
   h_isojet1Pt_QCD__193->SetBinContent(16,7.949197e-06);
   h_isojet1Pt_QCD__193->SetBinError(1,0.0004237779);
   h_isojet1Pt_QCD__193->SetBinError(2,0.001559739);
   h_isojet1Pt_QCD__193->SetBinError(3,0.002184388);
   h_isojet1Pt_QCD__193->SetBinError(4,0.001149113);
   h_isojet1Pt_QCD__193->SetBinError(5,0.0009698672);
   h_isojet1Pt_QCD__193->SetBinError(16,7.949197e-06);
   h_isojet1Pt_QCD__193->SetEntries(25);
   h_isojet1Pt_QCD__193->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_isojet1Pt_QCD__193->SetFillColor(ci);
   h_isojet1Pt_QCD__193->GetXaxis()->SetTitle("leading isojet p_{T} [GeV]");
   h_isojet1Pt_QCD__193->GetXaxis()->SetLabelFont(42);
   h_isojet1Pt_QCD__193->GetXaxis()->SetLabelOffset(0.007);
   h_isojet1Pt_QCD__193->GetXaxis()->SetTitleSize(0.05);
   h_isojet1Pt_QCD__193->GetXaxis()->SetTickLength(0.025);
   h_isojet1Pt_QCD__193->GetXaxis()->SetTitleFont(42);
   h_isojet1Pt_QCD__193->GetYaxis()->SetTitle("a.u.");
   h_isojet1Pt_QCD__193->GetYaxis()->SetLabelFont(42);
   h_isojet1Pt_QCD__193->GetYaxis()->SetLabelOffset(0.007);
   h_isojet1Pt_QCD__193->GetYaxis()->SetTitleSize(0.05);
   h_isojet1Pt_QCD__193->GetYaxis()->SetTickLength(0.025);
   h_isojet1Pt_QCD__193->GetYaxis()->SetTitleFont(42);
   h_isojet1Pt_QCD__193->GetZaxis()->SetLabelFont(42);
   h_isojet1Pt_QCD__193->GetZaxis()->SetLabelOffset(0.007);
   h_isojet1Pt_QCD__193->GetZaxis()->SetTitleSize(0.05);
   h_isojet1Pt_QCD__193->GetZaxis()->SetTickLength(0.025);
   h_isojet1Pt_QCD__193->GetZaxis()->SetTitleFont(42);
   h->Add(h_isojet1Pt_QCD,"");
   
   TH1D *h_isojet1Pt_Diboson__194 = new TH1D("h_isojet1Pt_Diboson__194","",20,15,1000);
   h_isojet1Pt_Diboson__194->SetBinContent(1,0.006188016);
   h_isojet1Pt_Diboson__194->SetBinContent(2,0.005174629);
   h_isojet1Pt_Diboson__194->SetBinContent(3,0.01049678);
   h_isojet1Pt_Diboson__194->SetBinContent(4,0.008149221);
   h_isojet1Pt_Diboson__194->SetBinContent(5,0.002855847);
   h_isojet1Pt_Diboson__194->SetBinContent(6,0.001717267);
   h_isojet1Pt_Diboson__194->SetBinContent(7,0.0005776281);
   h_isojet1Pt_Diboson__194->SetBinContent(8,0.0007601585);
   h_isojet1Pt_Diboson__194->SetBinContent(10,0.0003723579);
   h_isojet1Pt_Diboson__194->SetBinContent(11,0.0001822679);
   h_isojet1Pt_Diboson__194->SetBinContent(12,0.0001428498);
   h_isojet1Pt_Diboson__194->SetBinContent(19,0.000176164);
   h_isojet1Pt_Diboson__194->SetBinError(1,0.001140478);
   h_isojet1Pt_Diboson__194->SetBinError(2,0.0009712364);
   h_isojet1Pt_Diboson__194->SetBinError(3,0.001461177);
   h_isojet1Pt_Diboson__194->SetBinError(4,0.001278804);
   h_isojet1Pt_Diboson__194->SetBinError(5,0.0007119828);
   h_isojet1Pt_Diboson__194->SetBinError(6,0.0005634065);
   h_isojet1Pt_Diboson__194->SetBinError(7,0.000313404);
   h_isojet1Pt_Diboson__194->SetBinError(8,0.0004182833);
   h_isojet1Pt_Diboson__194->SetBinError(10,0.00026333);
   h_isojet1Pt_Diboson__194->SetBinError(11,0.0001822679);
   h_isojet1Pt_Diboson__194->SetBinError(12,0.0001428498);
   h_isojet1Pt_Diboson__194->SetBinError(19,0.000176164);
   h_isojet1Pt_Diboson__194->SetEntries(227);
   h_isojet1Pt_Diboson__194->SetStats(0);

   ci = TColor::GetColor("#9966cc");
   h_isojet1Pt_Diboson__194->SetFillColor(ci);
   h_isojet1Pt_Diboson__194->GetXaxis()->SetTitle("leading isojet p_{T} [GeV]");
   h_isojet1Pt_Diboson__194->GetXaxis()->SetLabelFont(42);
   h_isojet1Pt_Diboson__194->GetXaxis()->SetLabelOffset(0.007);
   h_isojet1Pt_Diboson__194->GetXaxis()->SetTitleSize(0.05);
   h_isojet1Pt_Diboson__194->GetXaxis()->SetTickLength(0.025);
   h_isojet1Pt_Diboson__194->GetXaxis()->SetTitleFont(42);
   h_isojet1Pt_Diboson__194->GetYaxis()->SetTitle("a.u.");
   h_isojet1Pt_Diboson__194->GetYaxis()->SetLabelFont(42);
   h_isojet1Pt_Diboson__194->GetYaxis()->SetLabelOffset(0.007);
   h_isojet1Pt_Diboson__194->GetYaxis()->SetTitleSize(0.05);
   h_isojet1Pt_Diboson__194->GetYaxis()->SetTickLength(0.025);
   h_isojet1Pt_Diboson__194->GetYaxis()->SetTitleFont(42);
   h_isojet1Pt_Diboson__194->GetZaxis()->SetLabelFont(42);
   h_isojet1Pt_Diboson__194->GetZaxis()->SetLabelOffset(0.007);
   h_isojet1Pt_Diboson__194->GetZaxis()->SetTitleSize(0.05);
   h_isojet1Pt_Diboson__194->GetZaxis()->SetTickLength(0.025);
   h_isojet1Pt_Diboson__194->GetZaxis()->SetTitleFont(42);
   h->Add(h_isojet1Pt_Diboson,"");
   
   TH1D *h_isojet1Pt_ZpLjets__195 = new TH1D("h_isojet1Pt_ZpLjets__195","",20,15,1000);
   h_isojet1Pt_ZpLjets__195->SetBinContent(1,0.00798301);
   h_isojet1Pt_ZpLjets__195->SetBinContent(2,0.007220812);
   h_isojet1Pt_ZpLjets__195->SetBinContent(3,0.009127793);
   h_isojet1Pt_ZpLjets__195->SetBinContent(4,0.01218818);
   h_isojet1Pt_ZpLjets__195->SetBinContent(5,0.007270126);
   h_isojet1Pt_ZpLjets__195->SetBinContent(6,0.001679381);
   h_isojet1Pt_ZpLjets__195->SetBinContent(7,0.0008149369);
   h_isojet1Pt_ZpLjets__195->SetBinContent(8,0.0004136824);
   h_isojet1Pt_ZpLjets__195->SetBinContent(9,0.0002219987);
   h_isojet1Pt_ZpLjets__195->SetBinContent(10,0.0001839084);
   h_isojet1Pt_ZpLjets__195->SetBinContent(11,9.268368e-05);
   h_isojet1Pt_ZpLjets__195->SetBinContent(12,5.895288e-05);
   h_isojet1Pt_ZpLjets__195->SetBinContent(13,4.83462e-05);
   h_isojet1Pt_ZpLjets__195->SetBinContent(14,3.161529e-05);
   h_isojet1Pt_ZpLjets__195->SetBinContent(15,2.818728e-05);
   h_isojet1Pt_ZpLjets__195->SetBinContent(16,1.846536e-05);
   h_isojet1Pt_ZpLjets__195->SetBinContent(17,1.22896e-05);
   h_isojet1Pt_ZpLjets__195->SetBinContent(18,9.113681e-06);
   h_isojet1Pt_ZpLjets__195->SetBinContent(19,5.872089e-06);
   h_isojet1Pt_ZpLjets__195->SetBinContent(20,4.446909e-06);
   h_isojet1Pt_ZpLjets__195->SetBinError(1,0.0002487167);
   h_isojet1Pt_ZpLjets__195->SetBinError(2,0.0002363106);
   h_isojet1Pt_ZpLjets__195->SetBinError(3,0.0002923049);
   h_isojet1Pt_ZpLjets__195->SetBinError(4,0.0003829574);
   h_isojet1Pt_ZpLjets__195->SetBinError(5,0.0002591981);
   h_isojet1Pt_ZpLjets__195->SetBinError(6,9.884667e-05);
   h_isojet1Pt_ZpLjets__195->SetBinError(7,5.423404e-05);
   h_isojet1Pt_ZpLjets__195->SetBinError(8,3.025725e-05);
   h_isojet1Pt_ZpLjets__195->SetBinError(9,1.378626e-05);
   h_isojet1Pt_ZpLjets__195->SetBinError(10,1.353088e-05);
   h_isojet1Pt_ZpLjets__195->SetBinError(11,8.380875e-06);
   h_isojet1Pt_ZpLjets__195->SetBinError(12,5.654634e-06);
   h_isojet1Pt_ZpLjets__195->SetBinError(13,5.16615e-06);
   h_isojet1Pt_ZpLjets__195->SetBinError(14,4.186753e-06);
   h_isojet1Pt_ZpLjets__195->SetBinError(15,4.192793e-06);
   h_isojet1Pt_ZpLjets__195->SetBinError(16,3.402976e-06);
   h_isojet1Pt_ZpLjets__195->SetBinError(17,2.677996e-06);
   h_isojet1Pt_ZpLjets__195->SetBinError(18,2.143179e-06);
   h_isojet1Pt_ZpLjets__195->SetBinError(19,1.778609e-06);
   h_isojet1Pt_ZpLjets__195->SetBinError(20,1.456137e-06);
   h_isojet1Pt_ZpLjets__195->SetEntries(24915);
   h_isojet1Pt_ZpLjets__195->SetStats(0);

   ci = TColor::GetColor("#3399cc");
   h_isojet1Pt_ZpLjets__195->SetFillColor(ci);
   h_isojet1Pt_ZpLjets__195->GetXaxis()->SetTitle("leading isojet p_{T} [GeV]");
   h_isojet1Pt_ZpLjets__195->GetXaxis()->SetLabelFont(42);
   h_isojet1Pt_ZpLjets__195->GetXaxis()->SetLabelOffset(0.007);
   h_isojet1Pt_ZpLjets__195->GetXaxis()->SetTitleSize(0.05);
   h_isojet1Pt_ZpLjets__195->GetXaxis()->SetTickLength(0.025);
   h_isojet1Pt_ZpLjets__195->GetXaxis()->SetTitleFont(42);
   h_isojet1Pt_ZpLjets__195->GetYaxis()->SetTitle("a.u.");
   h_isojet1Pt_ZpLjets__195->GetYaxis()->SetLabelFont(42);
   h_isojet1Pt_ZpLjets__195->GetYaxis()->SetLabelOffset(0.007);
   h_isojet1Pt_ZpLjets__195->GetYaxis()->SetTitleSize(0.05);
   h_isojet1Pt_ZpLjets__195->GetYaxis()->SetTickLength(0.025);
   h_isojet1Pt_ZpLjets__195->GetYaxis()->SetTitleFont(42);
   h_isojet1Pt_ZpLjets__195->GetZaxis()->SetLabelFont(42);
   h_isojet1Pt_ZpLjets__195->GetZaxis()->SetLabelOffset(0.007);
   h_isojet1Pt_ZpLjets__195->GetZaxis()->SetTitleSize(0.05);
   h_isojet1Pt_ZpLjets__195->GetZaxis()->SetTickLength(0.025);
   h_isojet1Pt_ZpLjets__195->GetZaxis()->SetTitleFont(42);
   h->Add(h_isojet1Pt_Z+jets,"");
   
   TH1D *h_isojet1Pt_WpLjets__196 = new TH1D("h_isojet1Pt_WpLjets__196","",20,15,1000);
   h_isojet1Pt_WpLjets__196->SetBinContent(1,0.006673633);
   h_isojet1Pt_WpLjets__196->SetBinContent(2,0.007476134);
   h_isojet1Pt_WpLjets__196->SetBinContent(3,0.01034405);
   h_isojet1Pt_WpLjets__196->SetBinContent(4,0.01143697);
   h_isojet1Pt_WpLjets__196->SetBinContent(5,0.006646656);
   h_isojet1Pt_WpLjets__196->SetBinContent(6,0.001249045);
   h_isojet1Pt_WpLjets__196->SetBinContent(7,0.0008649575);
   h_isojet1Pt_WpLjets__196->SetBinContent(8,0.0003241676);
   h_isojet1Pt_WpLjets__196->SetBinContent(9,0.0002039288);
   h_isojet1Pt_WpLjets__196->SetBinContent(10,0.0001233427);
   h_isojet1Pt_WpLjets__196->SetBinContent(11,0.0001171848);
   h_isojet1Pt_WpLjets__196->SetBinContent(12,6.260269e-05);
   h_isojet1Pt_WpLjets__196->SetBinContent(13,4.354349e-05);
   h_isojet1Pt_WpLjets__196->SetBinContent(14,2.51491e-05);
   h_isojet1Pt_WpLjets__196->SetBinContent(15,2.370758e-05);
   h_isojet1Pt_WpLjets__196->SetBinContent(16,2.289085e-05);
   h_isojet1Pt_WpLjets__196->SetBinContent(17,1.694443e-05);
   h_isojet1Pt_WpLjets__196->SetBinContent(18,9.702286e-06);
   h_isojet1Pt_WpLjets__196->SetBinContent(19,1.12199e-05);
   h_isojet1Pt_WpLjets__196->SetBinContent(20,6.943192e-06);
   h_isojet1Pt_WpLjets__196->SetBinError(1,0.0006593485);
   h_isojet1Pt_WpLjets__196->SetBinError(2,0.0006813573);
   h_isojet1Pt_WpLjets__196->SetBinError(3,0.0008370674);
   h_isojet1Pt_WpLjets__196->SetBinError(4,0.0008705131);
   h_isojet1Pt_WpLjets__196->SetBinError(5,0.0006204858);
   h_isojet1Pt_WpLjets__196->SetBinError(6,0.0002059239);
   h_isojet1Pt_WpLjets__196->SetBinError(7,0.000173744);
   h_isojet1Pt_WpLjets__196->SetBinError(8,6.837025e-05);
   h_isojet1Pt_WpLjets__196->SetBinError(9,3.466486e-05);
   h_isojet1Pt_WpLjets__196->SetBinError(10,1.620873e-05);
   h_isojet1Pt_WpLjets__196->SetBinError(11,1.925693e-05);
   h_isojet1Pt_WpLjets__196->SetBinError(12,1.033023e-05);
   h_isojet1Pt_WpLjets__196->SetBinError(13,6.832937e-06);
   h_isojet1Pt_WpLjets__196->SetBinError(14,4.384468e-06);
   h_isojet1Pt_WpLjets__196->SetBinError(15,7.704484e-06);
   h_isojet1Pt_WpLjets__196->SetBinError(16,5.115614e-06);
   h_isojet1Pt_WpLjets__196->SetBinError(17,3.056466e-06);
   h_isojet1Pt_WpLjets__196->SetBinError(18,2.129985e-06);
   h_isojet1Pt_WpLjets__196->SetBinError(19,2.733854e-06);
   h_isojet1Pt_WpLjets__196->SetBinError(20,1.916796e-06);
   h_isojet1Pt_WpLjets__196->SetEntries(3309);
   h_isojet1Pt_WpLjets__196->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   h_isojet1Pt_WpLjets__196->SetFillColor(ci);
   h_isojet1Pt_WpLjets__196->GetXaxis()->SetTitle("leading isojet p_{T} [GeV]");
   h_isojet1Pt_WpLjets__196->GetXaxis()->SetLabelFont(42);
   h_isojet1Pt_WpLjets__196->GetXaxis()->SetLabelOffset(0.007);
   h_isojet1Pt_WpLjets__196->GetXaxis()->SetTitleSize(0.05);
   h_isojet1Pt_WpLjets__196->GetXaxis()->SetTickLength(0.025);
   h_isojet1Pt_WpLjets__196->GetXaxis()->SetTitleFont(42);
   h_isojet1Pt_WpLjets__196->GetYaxis()->SetTitle("a.u.");
   h_isojet1Pt_WpLjets__196->GetYaxis()->SetLabelFont(42);
   h_isojet1Pt_WpLjets__196->GetYaxis()->SetLabelOffset(0.007);
   h_isojet1Pt_WpLjets__196->GetYaxis()->SetTitleSize(0.05);
   h_isojet1Pt_WpLjets__196->GetYaxis()->SetTickLength(0.025);
   h_isojet1Pt_WpLjets__196->GetYaxis()->SetTitleFont(42);
   h_isojet1Pt_WpLjets__196->GetZaxis()->SetLabelFont(42);
   h_isojet1Pt_WpLjets__196->GetZaxis()->SetLabelOffset(0.007);
   h_isojet1Pt_WpLjets__196->GetZaxis()->SetTitleSize(0.05);
   h_isojet1Pt_WpLjets__196->GetZaxis()->SetTickLength(0.025);
   h_isojet1Pt_WpLjets__196->GetZaxis()->SetTitleFont(42);
   h->Add(h_isojet1Pt_W+jets,"");
   
   TH1D *h_isojet1Pt_TopsPoPLFcP__197 = new TH1D("h_isojet1Pt_TopsPoPLFcP__197","",20,15,1000);
   h_isojet1Pt_TopsPoPLFcP__197->SetBinContent(1,0.02676145);
   h_isojet1Pt_TopsPoPLFcP__197->SetBinContent(2,0.07090153);
   h_isojet1Pt_TopsPoPLFcP__197->SetBinContent(3,0.08811999);
   h_isojet1Pt_TopsPoPLFcP__197->SetBinContent(4,0.068723);
   h_isojet1Pt_TopsPoPLFcP__197->SetBinContent(5,0.03572278);
   h_isojet1Pt_TopsPoPLFcP__197->SetBinContent(6,0.01530031);
   h_isojet1Pt_TopsPoPLFcP__197->SetBinContent(7,0.009325503);
   h_isojet1Pt_TopsPoPLFcP__197->SetBinContent(8,0.005281559);
   h_isojet1Pt_TopsPoPLFcP__197->SetBinContent(9,0.003118859);
   h_isojet1Pt_TopsPoPLFcP__197->SetBinContent(10,0.001944144);
   h_isojet1Pt_TopsPoPLFcP__197->SetBinContent(11,0.0009673707);
   h_isojet1Pt_TopsPoPLFcP__197->SetBinContent(12,0.0007110474);
   h_isojet1Pt_TopsPoPLFcP__197->SetBinContent(13,0.0004724468);
   h_isojet1Pt_TopsPoPLFcP__197->SetBinContent(14,0.0002422368);
   h_isojet1Pt_TopsPoPLFcP__197->SetBinContent(15,0.0001979926);
   h_isojet1Pt_TopsPoPLFcP__197->SetBinContent(16,0.0001837896);
   h_isojet1Pt_TopsPoPLFcP__197->SetBinContent(17,6.006481e-05);
   h_isojet1Pt_TopsPoPLFcP__197->SetBinContent(18,9.665042e-06);
   h_isojet1Pt_TopsPoPLFcP__197->SetBinContent(19,3.539496e-05);
   h_isojet1Pt_TopsPoPLFcP__197->SetBinError(1,0.0006499119);
   h_isojet1Pt_TopsPoPLFcP__197->SetBinError(2,0.0009229603);
   h_isojet1Pt_TopsPoPLFcP__197->SetBinError(3,0.0009783832);
   h_isojet1Pt_TopsPoPLFcP__197->SetBinError(4,0.0008737185);
   h_isojet1Pt_TopsPoPLFcP__197->SetBinError(5,0.0006436437);
   h_isojet1Pt_TopsPoPLFcP__197->SetBinError(6,0.0003903229);
   h_isojet1Pt_TopsPoPLFcP__197->SetBinError(7,0.0003116745);
   h_isojet1Pt_TopsPoPLFcP__197->SetBinError(8,0.0002153498);
   h_isojet1Pt_TopsPoPLFcP__197->SetBinError(9,0.0002020293);
   h_isojet1Pt_TopsPoPLFcP__197->SetBinError(10,0.0001474633);
   h_isojet1Pt_TopsPoPLFcP__197->SetBinError(11,9.582954e-05);
   h_isojet1Pt_TopsPoPLFcP__197->SetBinError(12,7.036448e-05);
   h_isojet1Pt_TopsPoPLFcP__197->SetBinError(13,8.923393e-05);
   h_isojet1Pt_TopsPoPLFcP__197->SetBinError(14,4.048016e-05);
   h_isojet1Pt_TopsPoPLFcP__197->SetBinError(15,4.071014e-05);
   h_isojet1Pt_TopsPoPLFcP__197->SetBinError(16,8.465044e-05);
   h_isojet1Pt_TopsPoPLFcP__197->SetBinError(17,1.850043e-05);
   h_isojet1Pt_TopsPoPLFcP__197->SetBinError(18,7.113986e-06);
   h_isojet1Pt_TopsPoPLFcP__197->SetBinError(19,1.531377e-05);
   h_isojet1Pt_TopsPoPLFcP__197->SetEntries(45754);
   h_isojet1Pt_TopsPoPLFcP__197->SetStats(0);

   ci = TColor::GetColor("#cc33cc");
   h_isojet1Pt_TopsPoPLFcP__197->SetFillColor(ci);
   h_isojet1Pt_TopsPoPLFcP__197->GetXaxis()->SetTitle("leading isojet p_{T} [GeV]");
   h_isojet1Pt_TopsPoPLFcP__197->GetXaxis()->SetLabelFont(42);
   h_isojet1Pt_TopsPoPLFcP__197->GetXaxis()->SetLabelOffset(0.007);
   h_isojet1Pt_TopsPoPLFcP__197->GetXaxis()->SetTitleSize(0.05);
   h_isojet1Pt_TopsPoPLFcP__197->GetXaxis()->SetTickLength(0.025);
   h_isojet1Pt_TopsPoPLFcP__197->GetXaxis()->SetTitleFont(42);
   h_isojet1Pt_TopsPoPLFcP__197->GetYaxis()->SetTitle("a.u.");
   h_isojet1Pt_TopsPoPLFcP__197->GetYaxis()->SetLabelFont(42);
   h_isojet1Pt_TopsPoPLFcP__197->GetYaxis()->SetLabelOffset(0.007);
   h_isojet1Pt_TopsPoPLFcP__197->GetYaxis()->SetTitleSize(0.05);
   h_isojet1Pt_TopsPoPLFcP__197->GetYaxis()->SetTickLength(0.025);
   h_isojet1Pt_TopsPoPLFcP__197->GetYaxis()->SetTitleFont(42);
   h_isojet1Pt_TopsPoPLFcP__197->GetZaxis()->SetLabelFont(42);
   h_isojet1Pt_TopsPoPLFcP__197->GetZaxis()->SetLabelOffset(0.007);
   h_isojet1Pt_TopsPoPLFcP__197->GetZaxis()->SetTitleSize(0.05);
   h_isojet1Pt_TopsPoPLFcP__197->GetZaxis()->SetTickLength(0.025);
   h_isojet1Pt_TopsPoPLFcP__197->GetZaxis()->SetTitleFont(42);
   h->Add(h_isojet1Pt_Top (LF),"");
   
   TH1D *h_isojet1Pt_TopsPoPHFcP__198 = new TH1D("h_isojet1Pt_TopsPoPHFcP__198","",20,15,1000);
   h_isojet1Pt_TopsPoPHFcP__198->SetBinContent(1,0.04426579);
   h_isojet1Pt_TopsPoPHFcP__198->SetBinContent(2,0.1260393);
   h_isojet1Pt_TopsPoPHFcP__198->SetBinContent(3,0.1575656);
   h_isojet1Pt_TopsPoPHFcP__198->SetBinContent(4,0.1122851);
   h_isojet1Pt_TopsPoPHFcP__198->SetBinContent(5,0.05110368);
   h_isojet1Pt_TopsPoPHFcP__198->SetBinContent(6,0.02156738);
   h_isojet1Pt_TopsPoPHFcP__198->SetBinContent(7,0.008291957);
   h_isojet1Pt_TopsPoPHFcP__198->SetBinContent(8,0.00444154);
   h_isojet1Pt_TopsPoPHFcP__198->SetBinContent(9,0.002148658);
   h_isojet1Pt_TopsPoPHFcP__198->SetBinContent(10,0.001049189);
   h_isojet1Pt_TopsPoPHFcP__198->SetBinContent(11,0.0005464123);
   h_isojet1Pt_TopsPoPHFcP__198->SetBinContent(12,0.00021003);
   h_isojet1Pt_TopsPoPHFcP__198->SetBinContent(13,0.0004980041);
   h_isojet1Pt_TopsPoPHFcP__198->SetBinContent(14,0.0001466135);
   h_isojet1Pt_TopsPoPHFcP__198->SetBinContent(15,5.099863e-05);
   h_isojet1Pt_TopsPoPHFcP__198->SetBinContent(16,5.485068e-05);
   h_isojet1Pt_TopsPoPHFcP__198->SetBinContent(17,7.494216e-05);
   h_isojet1Pt_TopsPoPHFcP__198->SetBinContent(18,1.014739e-05);
   h_isojet1Pt_TopsPoPHFcP__198->SetBinContent(19,8.219343e-05);
   h_isojet1Pt_TopsPoPHFcP__198->SetBinContent(20,1.311849e-05);
   h_isojet1Pt_TopsPoPHFcP__198->SetBinError(1,0.0007565783);
   h_isojet1Pt_TopsPoPHFcP__198->SetBinError(2,0.001195534);
   h_isojet1Pt_TopsPoPHFcP__198->SetBinError(3,0.001387808);
   h_isojet1Pt_TopsPoPHFcP__198->SetBinError(4,0.001183735);
   h_isojet1Pt_TopsPoPHFcP__198->SetBinError(5,0.0007698696);
   h_isojet1Pt_TopsPoPHFcP__198->SetBinError(6,0.000496597);
   h_isojet1Pt_TopsPoPHFcP__198->SetBinError(7,0.0002919274);
   h_isojet1Pt_TopsPoPHFcP__198->SetBinError(8,0.0002425336);
   h_isojet1Pt_TopsPoPHFcP__198->SetBinError(9,0.0002021693);
   h_isojet1Pt_TopsPoPHFcP__198->SetBinError(10,0.0001200122);
   h_isojet1Pt_TopsPoPHFcP__198->SetBinError(11,7.730261e-05);
   h_isojet1Pt_TopsPoPHFcP__198->SetBinError(12,3.584586e-05);
   h_isojet1Pt_TopsPoPHFcP__198->SetBinError(13,0.0001456064);
   h_isojet1Pt_TopsPoPHFcP__198->SetBinError(14,6.172519e-05);
   h_isojet1Pt_TopsPoPHFcP__198->SetBinError(15,1.568916e-05);
   h_isojet1Pt_TopsPoPHFcP__198->SetBinError(16,4.25201e-05);
   h_isojet1Pt_TopsPoPHFcP__198->SetBinError(17,4.153432e-05);
   h_isojet1Pt_TopsPoPHFcP__198->SetBinError(18,1.014739e-05);
   h_isojet1Pt_TopsPoPHFcP__198->SetBinError(19,6.996211e-05);
   h_isojet1Pt_TopsPoPHFcP__198->SetBinError(20,9.295349e-06);
   h_isojet1Pt_TopsPoPHFcP__198->SetEntries(77950);
   h_isojet1Pt_TopsPoPHFcP__198->SetStats(0);

   ci = TColor::GetColor("#ff9900");
   h_isojet1Pt_TopsPoPHFcP__198->SetFillColor(ci);
   h_isojet1Pt_TopsPoPHFcP__198->GetXaxis()->SetTitle("leading isojet p_{T} [GeV]");
   h_isojet1Pt_TopsPoPHFcP__198->GetXaxis()->SetLabelFont(42);
   h_isojet1Pt_TopsPoPHFcP__198->GetXaxis()->SetLabelOffset(0.007);
   h_isojet1Pt_TopsPoPHFcP__198->GetXaxis()->SetTitleSize(0.05);
   h_isojet1Pt_TopsPoPHFcP__198->GetXaxis()->SetTickLength(0.025);
   h_isojet1Pt_TopsPoPHFcP__198->GetXaxis()->SetTitleFont(42);
   h_isojet1Pt_TopsPoPHFcP__198->GetYaxis()->SetTitle("a.u.");
   h_isojet1Pt_TopsPoPHFcP__198->GetYaxis()->SetLabelFont(42);
   h_isojet1Pt_TopsPoPHFcP__198->GetYaxis()->SetLabelOffset(0.007);
   h_isojet1Pt_TopsPoPHFcP__198->GetYaxis()->SetTitleSize(0.05);
   h_isojet1Pt_TopsPoPHFcP__198->GetYaxis()->SetTickLength(0.025);
   h_isojet1Pt_TopsPoPHFcP__198->GetYaxis()->SetTitleFont(42);
   h_isojet1Pt_TopsPoPHFcP__198->GetZaxis()->SetLabelFont(42);
   h_isojet1Pt_TopsPoPHFcP__198->GetZaxis()->SetLabelOffset(0.007);
   h_isojet1Pt_TopsPoPHFcP__198->GetZaxis()->SetTitleSize(0.05);
   h_isojet1Pt_TopsPoPHFcP__198->GetZaxis()->SetTickLength(0.025);
   h_isojet1Pt_TopsPoPHFcP__198->GetZaxis()->SetTitleFont(42);
   h->Add(h_isojet1Pt_Top (HF),"");
   h->Draw("hist");
   
   TH1D *hsum__199 = new TH1D("hsum__199","",20,15,1000);
   hsum__199->SetBinContent(1,0.0924066);
   hsum__199->SetBinContent(2,0.2202624);
   hsum__199->SetBinContent(3,0.280305);
   hsum__199->SetBinContent(4,0.2139316);
   hsum__199->SetBinContent(5,0.105392);
   hsum__199->SetBinContent(6,0.04151339);
   hsum__199->SetBinContent(7,0.01987498);
   hsum__199->SetBinContent(8,0.01122111);
   hsum__199->SetBinContent(9,0.005693445);
   hsum__199->SetBinContent(10,0.003672942);
   hsum__199->SetBinContent(11,0.001905919);
   hsum__199->SetBinContent(12,0.001185483);
   hsum__199->SetBinContent(13,0.001062341);
   hsum__199->SetBinContent(14,0.0004456147);
   hsum__199->SetBinContent(15,0.0003008861);
   hsum__199->SetBinContent(16,0.0002879457);
   hsum__199->SetBinContent(17,0.000164241);
   hsum__199->SetBinContent(18,3.862839e-05);
   hsum__199->SetBinContent(19,0.0003108444);
   hsum__199->SetBinContent(20,2.450859e-05);
   hsum__199->SetBinError(1,0.001723855);
   hsum__199->SetBinError(2,0.002485424);
   hsum__199->SetBinError(3,0.00325207);
   hsum__199->SetBinError(4,0.002454559);
   hsum__199->SetBinError(5,0.001704912);
   hsum__199->SetBinError(6,0.0008766771);
   hsum__199->SetBinError(7,0.0005601008);
   hsum__199->SetBinError(8,0.0005345549);
   hsum__199->SetBinError(9,0.000288236);
   hsum__199->SetBinError(10,0.0003254794);
   hsum__199->SetBinError(11,0.0002209562);
   hsum__199->SetBinError(12,0.0001636486);
   hsum__199->SetBinError(13,0.0001709892);
   hsum__199->SetBinError(14,7.406345e-05);
   hsum__199->SetBinError(15,4.450173e-05);
   hsum__199->SetBinError(16,9.526066e-05);
   hsum__199->SetBinError(17,4.564953e-05);
   hsum__199->SetBinError(18,1.275572e-05);
   hsum__199->SetBinError(19,0.0001901936);
   hsum__199->SetBinError(20,9.601977e-06);
   hsum__199->SetEntries(65);
   hsum__199->SetStats(0);

   ci = 1196;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   hsum__199->SetFillColor(ci);
   hsum__199->SetFillStyle(3003);
   hsum__199->SetLineWidth(0);
   hsum__199->GetXaxis()->SetTitle("leading isojet p_{T} [GeV]");
   hsum__199->GetXaxis()->SetLabelFont(42);
   hsum__199->GetXaxis()->SetLabelOffset(0.007);
   hsum__199->GetXaxis()->SetTitleSize(0.05);
   hsum__199->GetXaxis()->SetTickLength(0.025);
   hsum__199->GetXaxis()->SetTitleFont(42);
   hsum__199->GetYaxis()->SetTitle("a.u.");
   hsum__199->GetYaxis()->SetLabelFont(42);
   hsum__199->GetYaxis()->SetLabelOffset(0.007);
   hsum__199->GetYaxis()->SetTitleSize(0.05);
   hsum__199->GetYaxis()->SetTickLength(0.025);
   hsum__199->GetYaxis()->SetTitleFont(42);
   hsum__199->GetZaxis()->SetLabelFont(42);
   hsum__199->GetZaxis()->SetLabelOffset(0.007);
   hsum__199->GetZaxis()->SetTitleSize(0.05);
   hsum__199->GetZaxis()->SetTickLength(0.025);
   hsum__199->GetZaxis()->SetTitleFont(42);
   hsum__199->Draw("e2 same");
   
   TH1D *h_isojet1Pt_Data__200 = new TH1D("h_isojet1Pt_Data__200","",20,15,1000);
   h_isojet1Pt_Data__200->SetBinContent(1,0.0970979);
   h_isojet1Pt_Data__200->SetBinContent(2,0.2184114);
   h_isojet1Pt_Data__200->SetBinContent(3,0.2697635);
   h_isojet1Pt_Data__200->SetBinContent(4,0.2150664);
   h_isojet1Pt_Data__200->SetBinContent(5,0.1106191);
   h_isojet1Pt_Data__200->SetBinContent(6,0.04254217);
   h_isojet1Pt_Data__200->SetBinContent(7,0.02105908);
   h_isojet1Pt_Data__200->SetBinContent(8,0.01088288);
   h_isojet1Pt_Data__200->SetBinContent(9,0.006171676);
   h_isojet1Pt_Data__200->SetBinContent(10,0.00348629);
   h_isojet1Pt_Data__200->SetBinContent(11,0.001601809);
   h_isojet1Pt_Data__200->SetBinContent(12,0.001083577);
   h_isojet1Pt_Data__200->SetBinContent(13,0.0008480166);
   h_isojet1Pt_Data__200->SetBinContent(14,0.0005653444);
   h_isojet1Pt_Data__200->SetBinContent(15,0.0003297842);
   h_isojet1Pt_Data__200->SetBinContent(16,0.0001413361);
   h_isojet1Pt_Data__200->SetBinContent(17,0.0001413361);
   h_isojet1Pt_Data__200->SetBinContent(18,0.0001413361);
   h_isojet1Pt_Data__200->SetBinContent(19,4.711203e-05);
   h_isojet1Pt_Data__200->SetBinError(1,0.002138803);
   h_isojet1Pt_Data__200->SetBinError(2,0.003207772);
   h_isojet1Pt_Data__200->SetBinError(3,0.003564983);
   h_isojet1Pt_Data__200->SetBinError(4,0.003183114);
   h_isojet1Pt_Data__200->SetBinError(5,0.002282868);
   h_isojet1Pt_Data__200->SetBinError(6,0.001415715);
   h_isojet1Pt_Data__200->SetBinError(7,0.0009960602);
   h_isojet1Pt_Data__200->SetBinError(8,0.0007160409);
   h_isojet1Pt_Data__200->SetBinError(9,0.0005392219);
   h_isojet1Pt_Data__200->SetBinError(10,0.000405273);
   h_isojet1Pt_Data__200->SetBinError(11,0.000274708);
   h_isojet1Pt_Data__200->SetBinError(12,0.0002259414);
   h_isojet1Pt_Data__200->SetBinError(13,0.0001998794);
   h_isojet1Pt_Data__200->SetBinError(14,0.0001632009);
   h_isojet1Pt_Data__200->SetBinError(15,0.0001246467);
   h_isojet1Pt_Data__200->SetBinError(16,8.160043e-05);
   h_isojet1Pt_Data__200->SetBinError(17,8.160043e-05);
   h_isojet1Pt_Data__200->SetBinError(18,8.160043e-05);
   h_isojet1Pt_Data__200->SetBinError(19,4.711203e-05);
   h_isojet1Pt_Data__200->SetEntries(21226);
   h_isojet1Pt_Data__200->SetStats(0);
   h_isojet1Pt_Data__200->SetLineWidth(3);
   h_isojet1Pt_Data__200->SetMarkerStyle(20);
   h_isojet1Pt_Data__200->SetMarkerSize(2);
   h_isojet1Pt_Data__200->GetXaxis()->SetTitle("leading isojet p_{T} [GeV]");
   h_isojet1Pt_Data__200->GetXaxis()->SetLabelFont(42);
   h_isojet1Pt_Data__200->GetXaxis()->SetLabelOffset(0.007);
   h_isojet1Pt_Data__200->GetXaxis()->SetTitleSize(0.05);
   h_isojet1Pt_Data__200->GetXaxis()->SetTickLength(0.025);
   h_isojet1Pt_Data__200->GetXaxis()->SetTitleFont(42);
   h_isojet1Pt_Data__200->GetYaxis()->SetTitle("a.u.");
   h_isojet1Pt_Data__200->GetYaxis()->SetLabelFont(42);
   h_isojet1Pt_Data__200->GetYaxis()->SetLabelOffset(0.007);
   h_isojet1Pt_Data__200->GetYaxis()->SetTitleSize(0.05);
   h_isojet1Pt_Data__200->GetYaxis()->SetTickLength(0.025);
   h_isojet1Pt_Data__200->GetYaxis()->SetTitleFont(42);
   h_isojet1Pt_Data__200->GetZaxis()->SetLabelFont(42);
   h_isojet1Pt_Data__200->GetZaxis()->SetLabelOffset(0.007);
   h_isojet1Pt_Data__200->GetZaxis()->SetTitleSize(0.05);
   h_isojet1Pt_Data__200->GetZaxis()->SetTickLength(0.025);
   h_isojet1Pt_Data__200->GetZaxis()->SetTitleFont(42);
   h_isojet1Pt_Data__200->Draw("elp same");
   
   TLegend *leg = new TLegend(0.6,0.55,0.88,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("h_isojet1Pt_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_isojet1Pt_Top (HF)","Top (HF)","F");

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
   entry=leg->AddEntry("h_isojet1Pt_Top (LF)","Top (LF)","F");

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
   entry=leg->AddEntry("h_isojet1Pt_W+jets","W+jets","F");

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
   entry=leg->AddEntry("h_isojet1Pt_Z+jets","Z+jets","F");

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
   entry=leg->AddEntry("h_isojet1Pt_Diboson","Diboson","F");

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
   entry=leg->AddEntry("h_isojet1Pt_QCD","QCD","F");

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
   entry=leg->AddEntry("h_isojet1Pt_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_isojet1Pt_Top (HF)","Top (HF)","F");

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
   entry=leg->AddEntry("h_isojet1Pt_Top (LF)","Top (LF)","F");

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
   entry=leg->AddEntry("h_isojet1Pt_W+jets","W+jets","F");

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
   entry=leg->AddEntry("h_isojet1Pt_Z+jets","Z+jets","F");

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
   entry=leg->AddEntry("h_isojet1Pt_Diboson","Diboson","F");

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
   entry=leg->AddEntry("h_isojet1Pt_QCD","QCD","F");

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
   
   TH1D *ratio__201 = new TH1D("ratio__201","",20,15,1000);
   ratio__201->SetBinContent(1,0.05076802);
   ratio__201->SetBinContent(2,-0.008403838);
   ratio__201->SetBinContent(3,-0.03760737);
   ratio__201->SetBinContent(4,0.005304575);
   ratio__201->SetBinContent(5,0.04959595);
   ratio__201->SetBinContent(6,0.02478182);
   ratio__201->SetBinContent(7,0.05957723);
   ratio__201->SetBinContent(8,-0.03014219);
   ratio__201->SetBinContent(9,0.08399689);
   ratio__201->SetBinContent(10,-0.05081803);
   ratio__201->SetBinContent(11,-0.159561);
   ratio__201->SetBinContent(12,-0.0859617);
   ratio__201->SetBinContent(13,-0.2017469);
   ratio__201->SetBinContent(14,0.2686845);
   ratio__201->SetBinContent(15,0.09604335);
   ratio__201->SetBinContent(16,-0.5091571);
   ratio__201->SetBinContent(17,-0.1394591);
   ratio__201->SetBinContent(18,2.658866);
   ratio__201->SetBinContent(19,-0.8484385);
   ratio__201->SetBinContent(20,-999);
   ratio__201->SetBinError(1,0.0001);
   ratio__201->SetBinError(2,0.0001);
   ratio__201->SetBinError(3,0.0001);
   ratio__201->SetBinError(4,0.0001);
   ratio__201->SetBinError(5,0.0001);
   ratio__201->SetBinError(6,0.0001);
   ratio__201->SetBinError(7,0.0001);
   ratio__201->SetBinError(8,0.0001);
   ratio__201->SetBinError(9,0.0001);
   ratio__201->SetBinError(10,0.0001);
   ratio__201->SetBinError(11,0.0001);
   ratio__201->SetBinError(12,0.0001);
   ratio__201->SetBinError(13,0.0001);
   ratio__201->SetBinError(14,0.0001);
   ratio__201->SetBinError(15,0.0001);
   ratio__201->SetBinError(16,0.0001);
   ratio__201->SetBinError(17,0.0001);
   ratio__201->SetBinError(18,0.0001);
   ratio__201->SetBinError(19,0.0001);
   ratio__201->SetBinError(20,0.0001);
   ratio__201->SetMinimum(-0.48);
   ratio__201->SetMaximum(0.48);
   ratio__201->SetEntries(21246);
   ratio__201->SetStats(0);
   ratio__201->SetLineWidth(3);
   ratio__201->SetMarkerStyle(20);
   ratio__201->SetMarkerSize(2);
   ratio__201->GetXaxis()->SetTitle("leading isojet p_{T} [GeV]");
   ratio__201->GetXaxis()->SetLabelFont(43);
   ratio__201->GetXaxis()->SetLabelOffset(0.007);
   ratio__201->GetXaxis()->SetLabelSize(30);
   ratio__201->GetXaxis()->SetTitleSize(40);
   ratio__201->GetXaxis()->SetTickLength(0.025);
   ratio__201->GetXaxis()->SetTitleOffset(5);
   ratio__201->GetXaxis()->SetTitleFont(43);
   ratio__201->GetYaxis()->SetTitle("#frac{Data-Exp}{Exp}");
   ratio__201->GetYaxis()->SetNdivisions(5);
   ratio__201->GetYaxis()->SetLabelFont(43);
   ratio__201->GetYaxis()->SetLabelOffset(0.007);
   ratio__201->GetYaxis()->SetLabelSize(30);
   ratio__201->GetYaxis()->SetTitleSize(40);
   ratio__201->GetYaxis()->SetTickLength(0.025);
   ratio__201->GetYaxis()->SetTitleOffset(2.5);
   ratio__201->GetYaxis()->SetTitleFont(43);
   ratio__201->GetZaxis()->SetLabelFont(42);
   ratio__201->GetZaxis()->SetLabelOffset(0.007);
   ratio__201->GetZaxis()->SetTitleSize(0.05);
   ratio__201->GetZaxis()->SetTickLength(0.025);
   ratio__201->GetZaxis()->SetTitleFont(42);
   ratio__201->Draw("elp");
   
   TH1D *zero__202 = new TH1D("zero__202","",20,15,1000);
   zero__202->SetBinError(1,0.002138803);
   zero__202->SetBinError(2,0.003207772);
   zero__202->SetBinError(3,0.003564983);
   zero__202->SetBinError(4,0.003183114);
   zero__202->SetBinError(5,0.002282868);
   zero__202->SetBinError(6,0.001415715);
   zero__202->SetBinError(7,0.0009960602);
   zero__202->SetBinError(8,0.0007160409);
   zero__202->SetBinError(9,0.0005392219);
   zero__202->SetBinError(10,0.000405273);
   zero__202->SetBinError(11,0.000274708);
   zero__202->SetBinError(12,0.0002259414);
   zero__202->SetBinError(13,0.0001998794);
   zero__202->SetBinError(14,0.0001632009);
   zero__202->SetBinError(15,0.0001246467);
   zero__202->SetBinError(16,8.160043e-05);
   zero__202->SetBinError(17,8.160043e-05);
   zero__202->SetBinError(18,8.160043e-05);
   zero__202->SetBinError(19,4.711203e-05);
   zero__202->SetEntries(21246);
   zero__202->SetStats(0);
   zero__202->SetLineWidth(3);
   zero__202->SetMarkerStyle(20);
   zero__202->SetMarkerSize(2);
   zero__202->GetXaxis()->SetTitle("leading isojet p_{T} [GeV]");
   zero__202->GetXaxis()->SetLabelFont(42);
   zero__202->GetXaxis()->SetLabelOffset(0.007);
   zero__202->GetXaxis()->SetTitleSize(0.05);
   zero__202->GetXaxis()->SetTickLength(0.025);
   zero__202->GetXaxis()->SetTitleFont(42);
   zero__202->GetYaxis()->SetTitle("a.u.");
   zero__202->GetYaxis()->SetLabelFont(42);
   zero__202->GetYaxis()->SetLabelOffset(0.007);
   zero__202->GetYaxis()->SetTitleSize(0.05);
   zero__202->GetYaxis()->SetTickLength(0.025);
   zero__202->GetYaxis()->SetTitleFont(42);
   zero__202->GetZaxis()->SetLabelFont(42);
   zero__202->GetZaxis()->SetLabelOffset(0.007);
   zero__202->GetZaxis()->SetTitleSize(0.05);
   zero__202->GetZaxis()->SetTickLength(0.025);
   zero__202->GetZaxis()->SetTitleFont(42);
   zero__202->Draw("hist same");
   
   TH1D *sumratioup__203 = new TH1D("sumratioup__203","",20,15,1000);
   sumratioup__203->SetBinContent(1,0.0186551);
   sumratioup__203->SetBinContent(2,0.01128392);
   sumratioup__203->SetBinContent(3,0.0116019);
   sumratioup__203->SetBinContent(4,0.01147357);
   sumratioup__203->SetBinContent(5,0.01617686);
   sumratioup__203->SetBinContent(6,0.02111793);
   sumratioup__203->SetBinContent(7,0.0281812);
   sumratioup__203->SetBinContent(8,0.04763834);
   sumratioup__203->SetBinContent(9,0.05062594);
   sumratioup__203->SetBinContent(10,0.08861544);
   sumratioup__203->SetBinContent(11,0.1159315);
   sumratioup__203->SetBinContent(12,0.1380438);
   sumratioup__203->SetBinContent(13,0.1609551);
   sumratioup__203->SetBinContent(14,0.1662052);
   sumratioup__203->SetBinContent(15,0.1479023);
   sumratioup__203->SetBinContent(16,0.3308286);
   sumratioup__203->SetBinContent(17,0.2779423);
   sumratioup__203->SetBinContent(18,0.3302161);
   sumratioup__203->SetBinContent(19,0.6118611);
   sumratioup__203->SetBinContent(20,0.39178);
   sumratioup__203->SetBinError(1,0.001723855);
   sumratioup__203->SetBinError(2,0.002485424);
   sumratioup__203->SetBinError(3,0.00325207);
   sumratioup__203->SetBinError(4,0.002454559);
   sumratioup__203->SetBinError(5,0.001704912);
   sumratioup__203->SetBinError(6,0.0008766771);
   sumratioup__203->SetBinError(7,0.0005601008);
   sumratioup__203->SetBinError(8,0.0005345549);
   sumratioup__203->SetBinError(9,0.000288236);
   sumratioup__203->SetBinError(10,0.0003254794);
   sumratioup__203->SetBinError(11,0.0002209562);
   sumratioup__203->SetBinError(12,0.0001636486);
   sumratioup__203->SetBinError(13,0.0001709892);
   sumratioup__203->SetBinError(14,7.406345e-05);
   sumratioup__203->SetBinError(15,4.450173e-05);
   sumratioup__203->SetBinError(16,9.526066e-05);
   sumratioup__203->SetBinError(17,4.564953e-05);
   sumratioup__203->SetBinError(18,1.275572e-05);
   sumratioup__203->SetBinError(19,0.0001901936);
   sumratioup__203->SetBinError(20,9.601977e-06);
   sumratioup__203->SetEntries(85);
   sumratioup__203->SetStats(0);

   ci = 1196;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratioup__203->SetFillColor(ci);
   sumratioup__203->SetFillStyle(3003);
   sumratioup__203->GetXaxis()->SetTitle("leading isojet p_{T} [GeV]");
   sumratioup__203->GetXaxis()->SetLabelFont(42);
   sumratioup__203->GetXaxis()->SetLabelOffset(0.007);
   sumratioup__203->GetXaxis()->SetTitleSize(0.05);
   sumratioup__203->GetXaxis()->SetTickLength(0.025);
   sumratioup__203->GetXaxis()->SetTitleFont(42);
   sumratioup__203->GetYaxis()->SetTitle("a.u.");
   sumratioup__203->GetYaxis()->SetLabelFont(42);
   sumratioup__203->GetYaxis()->SetLabelOffset(0.007);
   sumratioup__203->GetYaxis()->SetTitleSize(0.05);
   sumratioup__203->GetYaxis()->SetTickLength(0.025);
   sumratioup__203->GetYaxis()->SetTitleFont(42);
   sumratioup__203->GetZaxis()->SetLabelFont(42);
   sumratioup__203->GetZaxis()->SetLabelOffset(0.007);
   sumratioup__203->GetZaxis()->SetTitleSize(0.05);
   sumratioup__203->GetZaxis()->SetTickLength(0.025);
   sumratioup__203->GetZaxis()->SetTitleFont(42);
   sumratioup__203->Draw("hist same");
   
   TH1D *sumratiodown__204 = new TH1D("sumratiodown__204","",20,15,1000);
   sumratiodown__204->SetBinContent(1,-0.0186551);
   sumratiodown__204->SetBinContent(2,-0.01128392);
   sumratiodown__204->SetBinContent(3,-0.0116019);
   sumratiodown__204->SetBinContent(4,-0.01147357);
   sumratiodown__204->SetBinContent(5,-0.01617686);
   sumratiodown__204->SetBinContent(6,-0.02111793);
   sumratiodown__204->SetBinContent(7,-0.0281812);
   sumratiodown__204->SetBinContent(8,-0.04763834);
   sumratiodown__204->SetBinContent(9,-0.05062594);
   sumratiodown__204->SetBinContent(10,-0.08861544);
   sumratiodown__204->SetBinContent(11,-0.1159315);
   sumratiodown__204->SetBinContent(12,-0.1380438);
   sumratiodown__204->SetBinContent(13,-0.1609551);
   sumratiodown__204->SetBinContent(14,-0.1662052);
   sumratiodown__204->SetBinContent(15,-0.1479023);
   sumratiodown__204->SetBinContent(16,-0.3308286);
   sumratiodown__204->SetBinContent(17,-0.2779423);
   sumratiodown__204->SetBinContent(18,-0.3302161);
   sumratiodown__204->SetBinContent(19,-0.6118611);
   sumratiodown__204->SetBinContent(20,-0.39178);
   sumratiodown__204->SetBinError(1,0.001723855);
   sumratiodown__204->SetBinError(2,0.002485424);
   sumratiodown__204->SetBinError(3,0.00325207);
   sumratiodown__204->SetBinError(4,0.002454559);
   sumratiodown__204->SetBinError(5,0.001704912);
   sumratiodown__204->SetBinError(6,0.0008766771);
   sumratiodown__204->SetBinError(7,0.0005601008);
   sumratiodown__204->SetBinError(8,0.0005345549);
   sumratiodown__204->SetBinError(9,0.000288236);
   sumratiodown__204->SetBinError(10,0.0003254794);
   sumratiodown__204->SetBinError(11,0.0002209562);
   sumratiodown__204->SetBinError(12,0.0001636486);
   sumratiodown__204->SetBinError(13,0.0001709892);
   sumratiodown__204->SetBinError(14,7.406345e-05);
   sumratiodown__204->SetBinError(15,4.450173e-05);
   sumratiodown__204->SetBinError(16,9.526066e-05);
   sumratiodown__204->SetBinError(17,4.564953e-05);
   sumratiodown__204->SetBinError(18,1.275572e-05);
   sumratiodown__204->SetBinError(19,0.0001901936);
   sumratiodown__204->SetBinError(20,9.601977e-06);
   sumratiodown__204->SetEntries(85);
   sumratiodown__204->SetStats(0);

   ci = 1196;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratiodown__204->SetFillColor(ci);
   sumratiodown__204->SetFillStyle(3003);
   sumratiodown__204->GetXaxis()->SetTitle("leading isojet p_{T} [GeV]");
   sumratiodown__204->GetXaxis()->SetLabelFont(42);
   sumratiodown__204->GetXaxis()->SetLabelOffset(0.007);
   sumratiodown__204->GetXaxis()->SetTitleSize(0.05);
   sumratiodown__204->GetXaxis()->SetTickLength(0.025);
   sumratiodown__204->GetXaxis()->SetTitleFont(42);
   sumratiodown__204->GetYaxis()->SetTitle("a.u.");
   sumratiodown__204->GetYaxis()->SetLabelFont(42);
   sumratiodown__204->GetYaxis()->SetLabelOffset(0.007);
   sumratiodown__204->GetYaxis()->SetTitleSize(0.05);
   sumratiodown__204->GetYaxis()->SetTickLength(0.025);
   sumratiodown__204->GetYaxis()->SetTitleFont(42);
   sumratiodown__204->GetZaxis()->SetLabelFont(42);
   sumratiodown__204->GetZaxis()->SetLabelOffset(0.007);
   sumratiodown__204->GetZaxis()->SetTitleSize(0.05);
   sumratiodown__204->GetZaxis()->SetTickLength(0.025);
   sumratiodown__204->GetZaxis()->SetTitleFont(42);
   sumratiodown__204->Draw("hist same");
   
   Double_t Graph0_fx1017[20] = {
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
   Double_t Graph0_fy1017[20] = {
   0.05076802,
   -0.008403838,
   -0.03760737,
   0.005304575,
   0.04959595,
   0.02478182,
   0.05957723,
   -0.03014219,
   0.08399689,
   -0.05081803,
   -0.159561,
   -0.0859617,
   -0.2017469,
   0.2686845,
   0.09604335,
   -0.5091571,
   -0.1394591,
   2.658866,
   -0.8484385,
   -999};
   Double_t Graph0_fex1017[20] = {
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
   Double_t Graph0_fey1017[20] = {
   0.02314557,
   0.01456341,
   0.01271823,
   0.01487912,
   0.02166073,
   0.0341026,
   0.05011628,
   0.06381196,
   0.09470924,
   0.1103402,
   0.1441341,
   0.1905902,
   0.18815,
   0.3662376,
   0.4142654,
   0.2833883,
   0.4968335,
   2.112447,
   0.1515615,
   0};
   TGraphErrors *gre = new TGraphErrors(20,Graph0_fx1017,Graph0_fy1017,Graph0_fex1017,Graph0_fey1017);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1017 = new TH1F("Graph_Graph1017","Graph",100,0,1068.95);
   Graph_Graph1017->SetMinimum(-1099.377);
   Graph_Graph1017->SetMaximum(105.1484);
   Graph_Graph1017->SetDirectory(0);
   Graph_Graph1017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1017->SetLineColor(ci);
   Graph_Graph1017->GetXaxis()->SetLabelFont(42);
   Graph_Graph1017->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1017->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1017->GetXaxis()->SetTickLength(0.025);
   Graph_Graph1017->GetXaxis()->SetTitleFont(42);
   Graph_Graph1017->GetYaxis()->SetLabelFont(42);
   Graph_Graph1017->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1017->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1017->GetYaxis()->SetTickLength(0.025);
   Graph_Graph1017->GetYaxis()->SetTitleFont(42);
   Graph_Graph1017->GetZaxis()->SetLabelFont(42);
   Graph_Graph1017->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1017->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph1017->GetZaxis()->SetTickLength(0.025);
   Graph_Graph1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1017);
   
   gre->Draw("pe0");
   pad2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
