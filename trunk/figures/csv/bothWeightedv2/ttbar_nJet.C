void ttbar_nJet()
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
   pad1->Range(-2.1875,0,9.0625,0.5878968);
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
   h->SetMaximum(0.5207086);
   
   TH1F *h_stack_19 = new TH1F("h_stack_19","",9,-0.5,8.5);
   h_stack_19->SetMinimum(0);
   h_stack_19->SetMaximum(0.546744);
   h_stack_19->SetDirectory(0);
   h_stack_19->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h_stack_19->SetLineColor(ci);
   h_stack_19->GetXaxis()->SetLabelFont(42);
   h_stack_19->GetXaxis()->SetLabelOffset(0.007);
   h_stack_19->GetXaxis()->SetTitleSize(0.05);
   h_stack_19->GetXaxis()->SetTickLength(0.025);
   h_stack_19->GetXaxis()->SetTitleFont(42);
   h_stack_19->GetYaxis()->SetTitle("a.u.");
   h_stack_19->GetYaxis()->SetLabelFont(42);
   h_stack_19->GetYaxis()->SetLabelOffset(0.007);
   h_stack_19->GetYaxis()->SetTitleSize(0.05);
   h_stack_19->GetYaxis()->SetTickLength(0.025);
   h_stack_19->GetYaxis()->SetTitleOffset(1.5);
   h_stack_19->GetYaxis()->SetTitleFont(42);
   h_stack_19->GetZaxis()->SetLabelFont(42);
   h_stack_19->GetZaxis()->SetLabelOffset(0.007);
   h_stack_19->GetZaxis()->SetTitleSize(0.05);
   h_stack_19->GetZaxis()->SetTickLength(0.025);
   h_stack_19->GetZaxis()->SetTitleFont(42);
   h->SetHistogram(h_stack_19);
   
   
   TH1D *h_nJet_QCD__217 = new TH1D("h_nJet_QCD__217","",9,-0.5,8.5);
   h_nJet_QCD__217->SetBinContent(2,0.001991738);
   h_nJet_QCD__217->SetBinContent(3,0.0005078625);
   h_nJet_QCD__217->SetBinContent(4,0.006489724);
   h_nJet_QCD__217->SetBinContent(5,0.001899386);
   h_nJet_QCD__217->SetBinContent(6,0.000696849);
   h_nJet_QCD__217->SetBinError(2,0.001424948);
   h_nJet_QCD__217->SetBinError(3,0.0005078625);
   h_nJet_QCD__217->SetBinError(4,0.00246407);
   h_nJet_QCD__217->SetBinError(5,0.001037545);
   h_nJet_QCD__217->SetBinError(6,0.0004566736);
   h_nJet_QCD__217->SetEntries(25);
   h_nJet_QCD__217->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_nJet_QCD__217->SetFillColor(ci);
   h_nJet_QCD__217->GetXaxis()->SetTitle("N_{jet}");
   h_nJet_QCD__217->GetXaxis()->SetLabelFont(42);
   h_nJet_QCD__217->GetXaxis()->SetLabelOffset(0.007);
   h_nJet_QCD__217->GetXaxis()->SetTitleSize(0.05);
   h_nJet_QCD__217->GetXaxis()->SetTickLength(0.025);
   h_nJet_QCD__217->GetXaxis()->SetTitleFont(42);
   h_nJet_QCD__217->GetYaxis()->SetTitle("a.u.");
   h_nJet_QCD__217->GetYaxis()->SetLabelFont(42);
   h_nJet_QCD__217->GetYaxis()->SetLabelOffset(0.007);
   h_nJet_QCD__217->GetYaxis()->SetTitleSize(0.05);
   h_nJet_QCD__217->GetYaxis()->SetTickLength(0.025);
   h_nJet_QCD__217->GetYaxis()->SetTitleFont(42);
   h_nJet_QCD__217->GetZaxis()->SetLabelFont(42);
   h_nJet_QCD__217->GetZaxis()->SetLabelOffset(0.007);
   h_nJet_QCD__217->GetZaxis()->SetTitleSize(0.05);
   h_nJet_QCD__217->GetZaxis()->SetTickLength(0.025);
   h_nJet_QCD__217->GetZaxis()->SetTitleFont(42);
   h->Add(h_nJet_QCD,"");
   
   TH1D *h_nJet_Diboson__218 = new TH1D("h_nJet_Diboson__218","",9,-0.5,8.5);
   h_nJet_Diboson__218->SetBinContent(2,0.009906449);
   h_nJet_Diboson__218->SetBinContent(3,0.01358602);
   h_nJet_Diboson__218->SetBinContent(4,0.008915388);
   h_nJet_Diboson__218->SetBinContent(5,0.003026678);
   h_nJet_Diboson__218->SetBinContent(6,0.001043565);
   h_nJet_Diboson__218->SetBinContent(7,0.0001748174);
   h_nJet_Diboson__218->SetBinContent(9,0.0001402611);
   h_nJet_Diboson__218->SetBinError(2,0.001411368);
   h_nJet_Diboson__218->SetBinError(3,0.001644099);
   h_nJet_Diboson__218->SetBinError(4,0.001329375);
   h_nJet_Diboson__218->SetBinError(5,0.0007635958);
   h_nJet_Diboson__218->SetBinError(6,0.0004304521);
   h_nJet_Diboson__218->SetBinError(7,0.0001249106);
   h_nJet_Diboson__218->SetBinError(9,0.0001402611);
   h_nJet_Diboson__218->SetEntries(227);
   h_nJet_Diboson__218->SetStats(0);

   ci = TColor::GetColor("#9966cc");
   h_nJet_Diboson__218->SetFillColor(ci);
   h_nJet_Diboson__218->GetXaxis()->SetTitle("N_{jet}");
   h_nJet_Diboson__218->GetXaxis()->SetLabelFont(42);
   h_nJet_Diboson__218->GetXaxis()->SetLabelOffset(0.007);
   h_nJet_Diboson__218->GetXaxis()->SetTitleSize(0.05);
   h_nJet_Diboson__218->GetXaxis()->SetTickLength(0.025);
   h_nJet_Diboson__218->GetXaxis()->SetTitleFont(42);
   h_nJet_Diboson__218->GetYaxis()->SetTitle("a.u.");
   h_nJet_Diboson__218->GetYaxis()->SetLabelFont(42);
   h_nJet_Diboson__218->GetYaxis()->SetLabelOffset(0.007);
   h_nJet_Diboson__218->GetYaxis()->SetTitleSize(0.05);
   h_nJet_Diboson__218->GetYaxis()->SetTickLength(0.025);
   h_nJet_Diboson__218->GetYaxis()->SetTitleFont(42);
   h_nJet_Diboson__218->GetZaxis()->SetLabelFont(42);
   h_nJet_Diboson__218->GetZaxis()->SetLabelOffset(0.007);
   h_nJet_Diboson__218->GetZaxis()->SetTitleSize(0.05);
   h_nJet_Diboson__218->GetZaxis()->SetTickLength(0.025);
   h_nJet_Diboson__218->GetZaxis()->SetTitleFont(42);
   h->Add(h_nJet_Diboson,"");
   
   TH1D *h_nJet_ZpLjets__219 = new TH1D("h_nJet_ZpLjets__219","",9,-0.5,8.5);
   h_nJet_ZpLjets__219->SetBinContent(2,0.008808307);
   h_nJet_ZpLjets__219->SetBinContent(3,0.01602806);
   h_nJet_ZpLjets__219->SetBinContent(4,0.01236436);
   h_nJet_ZpLjets__219->SetBinContent(5,0.006259341);
   h_nJet_ZpLjets__219->SetBinContent(6,0.002572435);
   h_nJet_ZpLjets__219->SetBinContent(7,0.0009920883);
   h_nJet_ZpLjets__219->SetBinContent(8,0.0002993959);
   h_nJet_ZpLjets__219->SetBinContent(9,8.98201e-05);
   h_nJet_ZpLjets__219->SetBinError(2,0.0003706893);
   h_nJet_ZpLjets__219->SetBinError(3,0.0003944594);
   h_nJet_ZpLjets__219->SetBinError(4,0.0003001856);
   h_nJet_ZpLjets__219->SetBinError(5,0.0001834367);
   h_nJet_ZpLjets__219->SetBinError(6,0.0001013424);
   h_nJet_ZpLjets__219->SetBinError(7,5.882736e-05);
   h_nJet_ZpLjets__219->SetBinError(8,2.500891e-05);
   h_nJet_ZpLjets__219->SetBinError(9,7.251011e-06);
   h_nJet_ZpLjets__219->SetEntries(24915);
   h_nJet_ZpLjets__219->SetStats(0);

   ci = TColor::GetColor("#3399cc");
   h_nJet_ZpLjets__219->SetFillColor(ci);
   h_nJet_ZpLjets__219->GetXaxis()->SetTitle("N_{jet}");
   h_nJet_ZpLjets__219->GetXaxis()->SetLabelFont(42);
   h_nJet_ZpLjets__219->GetXaxis()->SetLabelOffset(0.007);
   h_nJet_ZpLjets__219->GetXaxis()->SetTitleSize(0.05);
   h_nJet_ZpLjets__219->GetXaxis()->SetTickLength(0.025);
   h_nJet_ZpLjets__219->GetXaxis()->SetTitleFont(42);
   h_nJet_ZpLjets__219->GetYaxis()->SetTitle("a.u.");
   h_nJet_ZpLjets__219->GetYaxis()->SetLabelFont(42);
   h_nJet_ZpLjets__219->GetYaxis()->SetLabelOffset(0.007);
   h_nJet_ZpLjets__219->GetYaxis()->SetTitleSize(0.05);
   h_nJet_ZpLjets__219->GetYaxis()->SetTickLength(0.025);
   h_nJet_ZpLjets__219->GetYaxis()->SetTitleFont(42);
   h_nJet_ZpLjets__219->GetZaxis()->SetLabelFont(42);
   h_nJet_ZpLjets__219->GetZaxis()->SetLabelOffset(0.007);
   h_nJet_ZpLjets__219->GetZaxis()->SetTitleSize(0.05);
   h_nJet_ZpLjets__219->GetZaxis()->SetTickLength(0.025);
   h_nJet_ZpLjets__219->GetZaxis()->SetTitleFont(42);
   h->Add(h_nJet_Z+jets,"");
   
   TH1D *h_nJet_WpLjets__220 = new TH1D("h_nJet_WpLjets__220","",9,-0.5,8.5);
   h_nJet_WpLjets__220->SetBinContent(2,0.01228717);
   h_nJet_WpLjets__220->SetBinContent(3,0.01478108);
   h_nJet_WpLjets__220->SetBinContent(4,0.01095229);
   h_nJet_WpLjets__220->SetBinContent(5,0.004774536);
   h_nJet_WpLjets__220->SetBinContent(6,0.00183733);
   h_nJet_WpLjets__220->SetBinContent(7,0.0008017153);
   h_nJet_WpLjets__220->SetBinContent(8,0.0001693615);
   h_nJet_WpLjets__220->SetBinContent(9,7.928654e-05);
   h_nJet_WpLjets__220->SetBinError(2,0.0009957224);
   h_nJet_WpLjets__220->SetBinError(3,0.0009641816);
   h_nJet_WpLjets__220->SetBinError(4,0.0007772887);
   h_nJet_WpLjets__220->SetBinError(5,0.0004513384);
   h_nJet_WpLjets__220->SetBinError(6,0.0002602176);
   h_nJet_WpLjets__220->SetBinError(7,0.0001551598);
   h_nJet_WpLjets__220->SetBinError(8,2.724934e-05);
   h_nJet_WpLjets__220->SetBinError(9,1.806879e-05);
   h_nJet_WpLjets__220->SetEntries(3309);
   h_nJet_WpLjets__220->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   h_nJet_WpLjets__220->SetFillColor(ci);
   h_nJet_WpLjets__220->GetXaxis()->SetTitle("N_{jet}");
   h_nJet_WpLjets__220->GetXaxis()->SetLabelFont(42);
   h_nJet_WpLjets__220->GetXaxis()->SetLabelOffset(0.007);
   h_nJet_WpLjets__220->GetXaxis()->SetTitleSize(0.05);
   h_nJet_WpLjets__220->GetXaxis()->SetTickLength(0.025);
   h_nJet_WpLjets__220->GetXaxis()->SetTitleFont(42);
   h_nJet_WpLjets__220->GetYaxis()->SetTitle("a.u.");
   h_nJet_WpLjets__220->GetYaxis()->SetLabelFont(42);
   h_nJet_WpLjets__220->GetYaxis()->SetLabelOffset(0.007);
   h_nJet_WpLjets__220->GetYaxis()->SetTitleSize(0.05);
   h_nJet_WpLjets__220->GetYaxis()->SetTickLength(0.025);
   h_nJet_WpLjets__220->GetYaxis()->SetTitleFont(42);
   h_nJet_WpLjets__220->GetZaxis()->SetLabelFont(42);
   h_nJet_WpLjets__220->GetZaxis()->SetLabelOffset(0.007);
   h_nJet_WpLjets__220->GetZaxis()->SetTitleSize(0.05);
   h_nJet_WpLjets__220->GetZaxis()->SetTickLength(0.025);
   h_nJet_WpLjets__220->GetZaxis()->SetTitleFont(42);
   h->Add(h_nJet_W+jets,"");
   
   TH1D *h_nJet_TopsPoPLFcP__221 = new TH1D("h_nJet_TopsPoPLFcP__221","",9,-0.5,8.5);
   h_nJet_TopsPoPLFcP__221->SetBinContent(2,0.008309954);
   h_nJet_TopsPoPLFcP__221->SetBinContent(3,0.04226496);
   h_nJet_TopsPoPLFcP__221->SetBinContent(4,0.08832035);
   h_nJet_TopsPoPLFcP__221->SetBinContent(5,0.08533392);
   h_nJet_TopsPoPLFcP__221->SetBinContent(6,0.05734558);
   h_nJet_TopsPoPLFcP__221->SetBinContent(7,0.02841211);
   h_nJet_TopsPoPLFcP__221->SetBinContent(8,0.01180029);
   h_nJet_TopsPoPLFcP__221->SetBinContent(9,0.006291982);
   h_nJet_TopsPoPLFcP__221->SetBinError(2,0.0003851356);
   h_nJet_TopsPoPLFcP__221->SetBinError(3,0.0007306422);
   h_nJet_TopsPoPLFcP__221->SetBinError(4,0.001088888);
   h_nJet_TopsPoPLFcP__221->SetBinError(5,0.0009551542);
   h_nJet_TopsPoPLFcP__221->SetBinError(6,0.0007663072);
   h_nJet_TopsPoPLFcP__221->SetBinError(7,0.0005284013);
   h_nJet_TopsPoPLFcP__221->SetBinError(8,0.0003199885);
   h_nJet_TopsPoPLFcP__221->SetBinError(9,0.0002275074);
   h_nJet_TopsPoPLFcP__221->SetEntries(45754);
   h_nJet_TopsPoPLFcP__221->SetStats(0);

   ci = TColor::GetColor("#cc33cc");
   h_nJet_TopsPoPLFcP__221->SetFillColor(ci);
   h_nJet_TopsPoPLFcP__221->GetXaxis()->SetTitle("N_{jet}");
   h_nJet_TopsPoPLFcP__221->GetXaxis()->SetLabelFont(42);
   h_nJet_TopsPoPLFcP__221->GetXaxis()->SetLabelOffset(0.007);
   h_nJet_TopsPoPLFcP__221->GetXaxis()->SetTitleSize(0.05);
   h_nJet_TopsPoPLFcP__221->GetXaxis()->SetTickLength(0.025);
   h_nJet_TopsPoPLFcP__221->GetXaxis()->SetTitleFont(42);
   h_nJet_TopsPoPLFcP__221->GetYaxis()->SetTitle("a.u.");
   h_nJet_TopsPoPLFcP__221->GetYaxis()->SetLabelFont(42);
   h_nJet_TopsPoPLFcP__221->GetYaxis()->SetLabelOffset(0.007);
   h_nJet_TopsPoPLFcP__221->GetYaxis()->SetTitleSize(0.05);
   h_nJet_TopsPoPLFcP__221->GetYaxis()->SetTickLength(0.025);
   h_nJet_TopsPoPLFcP__221->GetYaxis()->SetTitleFont(42);
   h_nJet_TopsPoPLFcP__221->GetZaxis()->SetLabelFont(42);
   h_nJet_TopsPoPLFcP__221->GetZaxis()->SetLabelOffset(0.007);
   h_nJet_TopsPoPLFcP__221->GetZaxis()->SetTitleSize(0.05);
   h_nJet_TopsPoPLFcP__221->GetZaxis()->SetTickLength(0.025);
   h_nJet_TopsPoPLFcP__221->GetZaxis()->SetTitleFont(42);
   h->Add(h_nJet_Top (LF),"");
   
   TH1D *h_nJet_TopsPoPHFcP__222 = new TH1D("h_nJet_TopsPoPHFcP__222","",9,-0.5,8.5);
   h_nJet_TopsPoPHFcP__222->SetBinContent(2,0.07376031);
   h_nJet_TopsPoPHFcP__222->SetBinContent(3,0.1364258);
   h_nJet_TopsPoPHFcP__222->SetBinContent(4,0.1333122);
   h_nJet_TopsPoPHFcP__222->SetBinContent(5,0.09566011);
   h_nJet_TopsPoPHFcP__222->SetBinContent(6,0.05315604);
   h_nJet_TopsPoPHFcP__222->SetBinContent(7,0.02411419);
   h_nJet_TopsPoPHFcP__222->SetBinContent(8,0.009464359);
   h_nJet_TopsPoPHFcP__222->SetBinContent(9,0.004552595);
   h_nJet_TopsPoPHFcP__222->SetBinError(2,0.00103096);
   h_nJet_TopsPoPHFcP__222->SetBinError(3,0.001340864);
   h_nJet_TopsPoPHFcP__222->SetBinError(4,0.001254557);
   h_nJet_TopsPoPHFcP__222->SetBinError(5,0.001028784);
   h_nJet_TopsPoPHFcP__222->SetBinError(6,0.0007477547);
   h_nJet_TopsPoPHFcP__222->SetBinError(7,0.0004712842);
   h_nJet_TopsPoPHFcP__222->SetBinError(8,0.0003185909);
   h_nJet_TopsPoPHFcP__222->SetBinError(9,0.0001812819);
   h_nJet_TopsPoPHFcP__222->SetEntries(77950);
   h_nJet_TopsPoPHFcP__222->SetStats(0);

   ci = TColor::GetColor("#ff9900");
   h_nJet_TopsPoPHFcP__222->SetFillColor(ci);
   h_nJet_TopsPoPHFcP__222->GetXaxis()->SetTitle("N_{jet}");
   h_nJet_TopsPoPHFcP__222->GetXaxis()->SetLabelFont(42);
   h_nJet_TopsPoPHFcP__222->GetXaxis()->SetLabelOffset(0.007);
   h_nJet_TopsPoPHFcP__222->GetXaxis()->SetTitleSize(0.05);
   h_nJet_TopsPoPHFcP__222->GetXaxis()->SetTickLength(0.025);
   h_nJet_TopsPoPHFcP__222->GetXaxis()->SetTitleFont(42);
   h_nJet_TopsPoPHFcP__222->GetYaxis()->SetTitle("a.u.");
   h_nJet_TopsPoPHFcP__222->GetYaxis()->SetLabelFont(42);
   h_nJet_TopsPoPHFcP__222->GetYaxis()->SetLabelOffset(0.007);
   h_nJet_TopsPoPHFcP__222->GetYaxis()->SetTitleSize(0.05);
   h_nJet_TopsPoPHFcP__222->GetYaxis()->SetTickLength(0.025);
   h_nJet_TopsPoPHFcP__222->GetYaxis()->SetTitleFont(42);
   h_nJet_TopsPoPHFcP__222->GetZaxis()->SetLabelFont(42);
   h_nJet_TopsPoPHFcP__222->GetZaxis()->SetLabelOffset(0.007);
   h_nJet_TopsPoPHFcP__222->GetZaxis()->SetTitleSize(0.05);
   h_nJet_TopsPoPHFcP__222->GetZaxis()->SetTickLength(0.025);
   h_nJet_TopsPoPHFcP__222->GetZaxis()->SetTitleFont(42);
   h->Add(h_nJet_Top (HF),"");
   h->Draw("hist");
   
   TH1D *hsum__223 = new TH1D("hsum__223","",9,-0.5,8.5);
   hsum__223->SetBinContent(2,0.1150639);
   hsum__223->SetBinContent(3,0.2235937);
   hsum__223->SetBinContent(4,0.2603543);
   hsum__223->SetBinContent(5,0.196954);
   hsum__223->SetBinContent(6,0.1166518);
   hsum__223->SetBinContent(7,0.05449491);
   hsum__223->SetBinContent(8,0.0217334);
   hsum__223->SetBinContent(9,0.01115394);
   hsum__223->SetBinError(2,0.002522403);
   hsum__223->SetBinError(3,0.002525467);
   hsum__223->SetBinError(4,0.00336047);
   hsum__223->SetBinError(5,0.001966634);
   hsum__223->SetBinError(6,0.00127208);
   hsum__223->SetBinError(7,0.0007378717);
   hsum__223->SetBinError(8,0.0004530571);
   hsum__223->SetBinError(9,0.0003235352);
   hsum__223->SetEntries(43);
   hsum__223->SetStats(0);

   ci = 1198;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   hsum__223->SetFillColor(ci);
   hsum__223->SetFillStyle(3003);
   hsum__223->SetLineWidth(0);
   hsum__223->GetXaxis()->SetTitle("N_{jet}");
   hsum__223->GetXaxis()->SetLabelFont(42);
   hsum__223->GetXaxis()->SetLabelOffset(0.007);
   hsum__223->GetXaxis()->SetTitleSize(0.05);
   hsum__223->GetXaxis()->SetTickLength(0.025);
   hsum__223->GetXaxis()->SetTitleFont(42);
   hsum__223->GetYaxis()->SetTitle("a.u.");
   hsum__223->GetYaxis()->SetLabelFont(42);
   hsum__223->GetYaxis()->SetLabelOffset(0.007);
   hsum__223->GetYaxis()->SetTitleSize(0.05);
   hsum__223->GetYaxis()->SetTickLength(0.025);
   hsum__223->GetYaxis()->SetTitleFont(42);
   hsum__223->GetZaxis()->SetLabelFont(42);
   hsum__223->GetZaxis()->SetLabelOffset(0.007);
   hsum__223->GetZaxis()->SetTitleSize(0.05);
   hsum__223->GetZaxis()->SetTickLength(0.025);
   hsum__223->GetZaxis()->SetTitleFont(42);
   hsum__223->Draw("e2 same");
   
   TH1D *h_nJet_Data__224 = new TH1D("h_nJet_Data__224","",9,-0.5,8.5);
   h_nJet_Data__224->SetBinContent(2,0.1095355);
   h_nJet_Data__224->SetBinContent(3,0.2408367);
   h_nJet_Data__224->SetBinContent(4,0.2713182);
   h_nJet_Data__224->SetBinContent(5,0.1982945);
   h_nJet_Data__224->SetBinContent(6,0.1091115);
   h_nJet_Data__224->SetBinContent(7,0.04494488);
   h_nJet_Data__224->SetBinContent(8,0.017243);
   h_nJet_Data__224->SetBinContent(9,0.008715726);
   h_nJet_Data__224->SetBinError(2,0.00227166);
   h_nJet_Data__224->SetBinError(3,0.003368428);
   h_nJet_Data__224->SetBinError(4,0.003575241);
   h_nJet_Data__224->SetBinError(5,0.003056478);
   h_nJet_Data__224->SetBinError(6,0.002267259);
   h_nJet_Data__224->SetBinError(7,0.001455144);
   h_nJet_Data__224->SetBinError(8,0.0009013063);
   h_nJet_Data__224->SetBinError(9,0.0006407929);
   h_nJet_Data__224->SetEntries(21226);
   h_nJet_Data__224->SetStats(0);
   h_nJet_Data__224->SetLineWidth(3);
   h_nJet_Data__224->SetMarkerStyle(20);
   h_nJet_Data__224->SetMarkerSize(2);
   h_nJet_Data__224->GetXaxis()->SetTitle("N_{jet}");
   h_nJet_Data__224->GetXaxis()->SetLabelFont(42);
   h_nJet_Data__224->GetXaxis()->SetLabelOffset(0.007);
   h_nJet_Data__224->GetXaxis()->SetTitleSize(0.05);
   h_nJet_Data__224->GetXaxis()->SetTickLength(0.025);
   h_nJet_Data__224->GetXaxis()->SetTitleFont(42);
   h_nJet_Data__224->GetYaxis()->SetTitle("a.u.");
   h_nJet_Data__224->GetYaxis()->SetLabelFont(42);
   h_nJet_Data__224->GetYaxis()->SetLabelOffset(0.007);
   h_nJet_Data__224->GetYaxis()->SetTitleSize(0.05);
   h_nJet_Data__224->GetYaxis()->SetTickLength(0.025);
   h_nJet_Data__224->GetYaxis()->SetTitleFont(42);
   h_nJet_Data__224->GetZaxis()->SetLabelFont(42);
   h_nJet_Data__224->GetZaxis()->SetLabelOffset(0.007);
   h_nJet_Data__224->GetZaxis()->SetTitleSize(0.05);
   h_nJet_Data__224->GetZaxis()->SetTickLength(0.025);
   h_nJet_Data__224->GetZaxis()->SetTitleFont(42);
   h_nJet_Data__224->Draw("elp same");
   
   TLegend *leg = new TLegend(0.6,0.55,0.88,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("h_nJet_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_nJet_Top (HF)","Top (HF)","F");

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
   entry=leg->AddEntry("h_nJet_Top (LF)","Top (LF)","F");

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
   entry=leg->AddEntry("h_nJet_W+jets","W+jets","F");

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
   entry=leg->AddEntry("h_nJet_Z+jets","Z+jets","F");

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
   entry=leg->AddEntry("h_nJet_Diboson","Diboson","F");

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
   entry=leg->AddEntry("h_nJet_QCD","QCD","F");

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
   entry=leg->AddEntry("h_nJet_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_nJet_Top (HF)","Top (HF)","F");

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
   entry=leg->AddEntry("h_nJet_Top (LF)","Top (LF)","F");

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
   entry=leg->AddEntry("h_nJet_W+jets","W+jets","F");

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
   entry=leg->AddEntry("h_nJet_Z+jets","Z+jets","F");

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
   entry=leg->AddEntry("h_nJet_Diboson","Diboson","F");

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
   entry=leg->AddEntry("h_nJet_QCD","QCD","F");

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
   pad2->Range(-2.1875,-0.8914286,9.0625,0.48);
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
   
   TH1D *ratio__225 = new TH1D("ratio__225","",9,-0.5,8.5);
   ratio__225->SetBinContent(1,-999);
   ratio__225->SetBinContent(2,-0.04804683);
   ratio__225->SetBinContent(3,0.07711744);
   ratio__225->SetBinContent(4,0.0421114);
   ratio__225->SetBinContent(5,0.006806612);
   ratio__225->SetBinContent(6,-0.06463963);
   ratio__225->SetBinContent(7,-0.1752464);
   ratio__225->SetBinContent(8,-0.2066128);
   ratio__225->SetBinContent(9,-0.2185969);
   ratio__225->SetBinError(1,0.0001);
   ratio__225->SetBinError(2,0.0001);
   ratio__225->SetBinError(3,0.0001);
   ratio__225->SetBinError(4,0.0001);
   ratio__225->SetBinError(5,0.0001);
   ratio__225->SetBinError(6,0.0001);
   ratio__225->SetBinError(7,0.0001);
   ratio__225->SetBinError(8,0.0001);
   ratio__225->SetBinError(9,0.0001);
   ratio__225->SetMinimum(-0.48);
   ratio__225->SetMaximum(0.48);
   ratio__225->SetEntries(21235);
   ratio__225->SetStats(0);
   ratio__225->SetLineWidth(3);
   ratio__225->SetMarkerStyle(20);
   ratio__225->SetMarkerSize(2);
   ratio__225->GetXaxis()->SetTitle("N_{jet}");
   ratio__225->GetXaxis()->SetLabelFont(43);
   ratio__225->GetXaxis()->SetLabelOffset(0.007);
   ratio__225->GetXaxis()->SetLabelSize(30);
   ratio__225->GetXaxis()->SetTitleSize(40);
   ratio__225->GetXaxis()->SetTickLength(0.025);
   ratio__225->GetXaxis()->SetTitleOffset(5);
   ratio__225->GetXaxis()->SetTitleFont(43);
   ratio__225->GetYaxis()->SetTitle("#frac{Data-Exp}{Exp}");
   ratio__225->GetYaxis()->SetNdivisions(5);
   ratio__225->GetYaxis()->SetLabelFont(43);
   ratio__225->GetYaxis()->SetLabelOffset(0.007);
   ratio__225->GetYaxis()->SetLabelSize(30);
   ratio__225->GetYaxis()->SetTitleSize(40);
   ratio__225->GetYaxis()->SetTickLength(0.025);
   ratio__225->GetYaxis()->SetTitleOffset(2.5);
   ratio__225->GetYaxis()->SetTitleFont(43);
   ratio__225->GetZaxis()->SetLabelFont(42);
   ratio__225->GetZaxis()->SetLabelOffset(0.007);
   ratio__225->GetZaxis()->SetTitleSize(0.05);
   ratio__225->GetZaxis()->SetTickLength(0.025);
   ratio__225->GetZaxis()->SetTitleFont(42);
   ratio__225->Draw("elp");
   
   TH1D *zero__226 = new TH1D("zero__226","",9,-0.5,8.5);
   zero__226->SetBinError(2,0.00227166);
   zero__226->SetBinError(3,0.003368428);
   zero__226->SetBinError(4,0.003575241);
   zero__226->SetBinError(5,0.003056478);
   zero__226->SetBinError(6,0.002267259);
   zero__226->SetBinError(7,0.001455144);
   zero__226->SetBinError(8,0.0009013063);
   zero__226->SetBinError(9,0.0006407929);
   zero__226->SetEntries(21235);
   zero__226->SetStats(0);
   zero__226->SetLineWidth(3);
   zero__226->SetMarkerStyle(20);
   zero__226->SetMarkerSize(2);
   zero__226->GetXaxis()->SetTitle("N_{jet}");
   zero__226->GetXaxis()->SetLabelFont(42);
   zero__226->GetXaxis()->SetLabelOffset(0.007);
   zero__226->GetXaxis()->SetTitleSize(0.05);
   zero__226->GetXaxis()->SetTickLength(0.025);
   zero__226->GetXaxis()->SetTitleFont(42);
   zero__226->GetYaxis()->SetTitle("a.u.");
   zero__226->GetYaxis()->SetLabelFont(42);
   zero__226->GetYaxis()->SetLabelOffset(0.007);
   zero__226->GetYaxis()->SetTitleSize(0.05);
   zero__226->GetYaxis()->SetTickLength(0.025);
   zero__226->GetYaxis()->SetTitleFont(42);
   zero__226->GetZaxis()->SetLabelFont(42);
   zero__226->GetZaxis()->SetLabelOffset(0.007);
   zero__226->GetZaxis()->SetTitleSize(0.05);
   zero__226->GetZaxis()->SetTickLength(0.025);
   zero__226->GetZaxis()->SetTitleFont(42);
   zero__226->Draw("hist same");
   
   TH1D *sumratioup__227 = new TH1D("sumratioup__227","",9,-0.5,8.5);
   sumratioup__227->SetBinContent(2,0.02192175);
   sumratioup__227->SetBinContent(3,0.01129489);
   sumratioup__227->SetBinContent(4,0.0129073);
   sumratioup__227->SetBinContent(5,0.009985248);
   sumratioup__227->SetBinContent(6,0.01090493);
   sumratioup__227->SetBinContent(7,0.01354019);
   sumratioup__227->SetBinContent(8,0.02084612);
   sumratioup__227->SetBinContent(9,0.02900635);
   sumratioup__227->SetBinError(2,0.002522403);
   sumratioup__227->SetBinError(3,0.002525467);
   sumratioup__227->SetBinError(4,0.00336047);
   sumratioup__227->SetBinError(5,0.001966634);
   sumratioup__227->SetBinError(6,0.00127208);
   sumratioup__227->SetBinError(7,0.0007378717);
   sumratioup__227->SetBinError(8,0.0004530571);
   sumratioup__227->SetBinError(9,0.0003235352);
   sumratioup__227->SetEntries(52);
   sumratioup__227->SetStats(0);

   ci = 1198;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratioup__227->SetFillColor(ci);
   sumratioup__227->SetFillStyle(3003);
   sumratioup__227->GetXaxis()->SetTitle("N_{jet}");
   sumratioup__227->GetXaxis()->SetLabelFont(42);
   sumratioup__227->GetXaxis()->SetLabelOffset(0.007);
   sumratioup__227->GetXaxis()->SetTitleSize(0.05);
   sumratioup__227->GetXaxis()->SetTickLength(0.025);
   sumratioup__227->GetXaxis()->SetTitleFont(42);
   sumratioup__227->GetYaxis()->SetTitle("a.u.");
   sumratioup__227->GetYaxis()->SetLabelFont(42);
   sumratioup__227->GetYaxis()->SetLabelOffset(0.007);
   sumratioup__227->GetYaxis()->SetTitleSize(0.05);
   sumratioup__227->GetYaxis()->SetTickLength(0.025);
   sumratioup__227->GetYaxis()->SetTitleFont(42);
   sumratioup__227->GetZaxis()->SetLabelFont(42);
   sumratioup__227->GetZaxis()->SetLabelOffset(0.007);
   sumratioup__227->GetZaxis()->SetTitleSize(0.05);
   sumratioup__227->GetZaxis()->SetTickLength(0.025);
   sumratioup__227->GetZaxis()->SetTitleFont(42);
   sumratioup__227->Draw("hist same");
   
   TH1D *sumratiodown__228 = new TH1D("sumratiodown__228","",9,-0.5,8.5);
   sumratiodown__228->SetBinContent(2,-0.02192175);
   sumratiodown__228->SetBinContent(3,-0.01129489);
   sumratiodown__228->SetBinContent(4,-0.0129073);
   sumratiodown__228->SetBinContent(5,-0.009985248);
   sumratiodown__228->SetBinContent(6,-0.01090493);
   sumratiodown__228->SetBinContent(7,-0.01354019);
   sumratiodown__228->SetBinContent(8,-0.02084612);
   sumratiodown__228->SetBinContent(9,-0.02900635);
   sumratiodown__228->SetBinError(2,0.002522403);
   sumratiodown__228->SetBinError(3,0.002525467);
   sumratiodown__228->SetBinError(4,0.00336047);
   sumratiodown__228->SetBinError(5,0.001966634);
   sumratiodown__228->SetBinError(6,0.00127208);
   sumratiodown__228->SetBinError(7,0.0007378717);
   sumratiodown__228->SetBinError(8,0.0004530571);
   sumratiodown__228->SetBinError(9,0.0003235352);
   sumratiodown__228->SetEntries(52);
   sumratiodown__228->SetStats(0);

   ci = 1198;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratiodown__228->SetFillColor(ci);
   sumratiodown__228->SetFillStyle(3003);
   sumratiodown__228->GetXaxis()->SetTitle("N_{jet}");
   sumratiodown__228->GetXaxis()->SetLabelFont(42);
   sumratiodown__228->GetXaxis()->SetLabelOffset(0.007);
   sumratiodown__228->GetXaxis()->SetTitleSize(0.05);
   sumratiodown__228->GetXaxis()->SetTickLength(0.025);
   sumratiodown__228->GetXaxis()->SetTitleFont(42);
   sumratiodown__228->GetYaxis()->SetTitle("a.u.");
   sumratiodown__228->GetYaxis()->SetLabelFont(42);
   sumratiodown__228->GetYaxis()->SetLabelOffset(0.007);
   sumratiodown__228->GetYaxis()->SetTitleSize(0.05);
   sumratiodown__228->GetYaxis()->SetTickLength(0.025);
   sumratiodown__228->GetYaxis()->SetTitleFont(42);
   sumratiodown__228->GetZaxis()->SetLabelFont(42);
   sumratiodown__228->GetZaxis()->SetLabelOffset(0.007);
   sumratiodown__228->GetZaxis()->SetTitleSize(0.05);
   sumratiodown__228->GetZaxis()->SetTickLength(0.025);
   sumratiodown__228->GetZaxis()->SetTitleFont(42);
   sumratiodown__228->Draw("hist same");
   
   Double_t Graph0_fx1019[9] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t Graph0_fy1019[9] = {
   -999,
   -0.04804683,
   0.07711744,
   0.0421114,
   0.006806612,
   -0.06463963,
   -0.1752464,
   -0.2066128,
   -0.2185969};
   Double_t Graph0_fex1019[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1019[9] = {
   0,
   0.01974259,
   0.01506495,
   0.01373222,
   0.01551874,
   0.01943612,
   0.02670239,
   0.04147102,
   0.0574499};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1019,Graph0_fy1019,Graph0_fex1019,Graph0_fey1019);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1019 = new TH1F("Graph_Graph1019","Graph",100,0,8.8);
   Graph_Graph1019->SetMinimum(-1098.909);
   Graph_Graph1019->SetMaximum(100.0014);
   Graph_Graph1019->SetDirectory(0);
   Graph_Graph1019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1019->SetLineColor(ci);
   Graph_Graph1019->GetXaxis()->SetLabelFont(42);
   Graph_Graph1019->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1019->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1019->GetXaxis()->SetTickLength(0.025);
   Graph_Graph1019->GetXaxis()->SetTitleFont(42);
   Graph_Graph1019->GetYaxis()->SetLabelFont(42);
   Graph_Graph1019->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1019->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1019->GetYaxis()->SetTickLength(0.025);
   Graph_Graph1019->GetYaxis()->SetTitleFont(42);
   Graph_Graph1019->GetZaxis()->SetLabelFont(42);
   Graph_Graph1019->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1019->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph1019->GetZaxis()->SetTickLength(0.025);
   Graph_Graph1019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1019);
   
   gre->Draw("pe0");
   pad2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
