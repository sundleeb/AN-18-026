void ttbar_looseLep1Eta_logy()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sun Dec 11 15:16:17 2016) by ROOT version6.06/01
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
   pad1->Range(-3.4375,-3.952922,2.8125,1.595963);
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
   h->SetMinimum(0.0003556958);
   h->SetMaximum(8.593402);
   
   TH1F *h_stack_6 = new TH1F("h_stack_6","",20,-2.5,2.5);
   h_stack_6->SetMinimum(0.0001114495);
   h_stack_6->SetMaximum(16.12653);
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
   
   
   TH1D *h_looseLep1Eta_QCD__61 = new TH1D("h_looseLep1Eta_QCD__61","",20,-2.5,2.5);
   h_looseLep1Eta_QCD__61->SetBinContent(3,0.000688303);
   h_looseLep1Eta_QCD__61->SetBinContent(4,0.002637982);
   h_looseLep1Eta_QCD__61->SetBinContent(5,0.0005464194);
   h_looseLep1Eta_QCD__61->SetBinContent(7,0.0005745276);
   h_looseLep1Eta_QCD__61->SetBinContent(8,0.0004026872);
   h_looseLep1Eta_QCD__61->SetBinContent(9,0.001237798);
   h_looseLep1Eta_QCD__61->SetBinContent(10,0.0009690918);
   h_looseLep1Eta_QCD__61->SetBinContent(12,0.0001320254);
   h_looseLep1Eta_QCD__61->SetBinContent(13,0.001282548);
   h_looseLep1Eta_QCD__61->SetBinContent(14,0.000878917);
   h_looseLep1Eta_QCD__61->SetBinContent(16,0.001149113);
   h_looseLep1Eta_QCD__61->SetBinContent(17,0.0002887411);
   h_looseLep1Eta_QCD__61->SetBinContent(18,0.0004273574);
   h_looseLep1Eta_QCD__61->SetBinContent(19,0.0003700481);
   h_looseLep1Eta_QCD__61->SetBinError(3,0.0005401761);
   h_looseLep1Eta_QCD__61->SetBinError(4,0.001866729);
   h_looseLep1Eta_QCD__61->SetBinError(5,0.0003937565);
   h_looseLep1Eta_QCD__61->SetBinError(7,0.0005745276);
   h_looseLep1Eta_QCD__61->SetBinError(8,0.0004026872);
   h_looseLep1Eta_QCD__61->SetBinError(9,0.000930687);
   h_looseLep1Eta_QCD__61->SetBinError(10,0.0006649303);
   h_looseLep1Eta_QCD__61->SetBinError(12,0.0001320254);
   h_looseLep1Eta_QCD__61->SetBinError(13,0.001253506);
   h_looseLep1Eta_QCD__61->SetBinError(14,0.0008534874);
   h_looseLep1Eta_QCD__61->SetBinError(16,0.001149113);
   h_looseLep1Eta_QCD__61->SetBinError(17,0.0002171089);
   h_looseLep1Eta_QCD__61->SetBinError(18,0.0003022448);
   h_looseLep1Eta_QCD__61->SetBinError(19,0.0003700481);
   h_looseLep1Eta_QCD__61->SetEntries(25);
   h_looseLep1Eta_QCD__61->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_looseLep1Eta_QCD__61->SetFillColor(ci);
   h_looseLep1Eta_QCD__61->GetXaxis()->SetTitle("Leading lep #eta");
   h_looseLep1Eta_QCD__61->GetXaxis()->SetLabelFont(42);
   h_looseLep1Eta_QCD__61->GetXaxis()->SetLabelOffset(0.007);
   h_looseLep1Eta_QCD__61->GetXaxis()->SetTitleSize(0.05);
   h_looseLep1Eta_QCD__61->GetXaxis()->SetTickLength(0.025);
   h_looseLep1Eta_QCD__61->GetXaxis()->SetTitleFont(42);
   h_looseLep1Eta_QCD__61->GetYaxis()->SetTitle("a.u.");
   h_looseLep1Eta_QCD__61->GetYaxis()->SetLabelFont(42);
   h_looseLep1Eta_QCD__61->GetYaxis()->SetLabelOffset(0.007);
   h_looseLep1Eta_QCD__61->GetYaxis()->SetTitleSize(0.05);
   h_looseLep1Eta_QCD__61->GetYaxis()->SetTickLength(0.025);
   h_looseLep1Eta_QCD__61->GetYaxis()->SetTitleFont(42);
   h_looseLep1Eta_QCD__61->GetZaxis()->SetLabelFont(42);
   h_looseLep1Eta_QCD__61->GetZaxis()->SetLabelOffset(0.007);
   h_looseLep1Eta_QCD__61->GetZaxis()->SetTitleSize(0.05);
   h_looseLep1Eta_QCD__61->GetZaxis()->SetTickLength(0.025);
   h_looseLep1Eta_QCD__61->GetZaxis()->SetTitleFont(42);
   h->Add(h_looseLep1Eta_QCD,"");
   
   TH1D *h_looseLep1Eta_Diboson__62 = new TH1D("h_looseLep1Eta_Diboson__62","",20,-2.5,2.5);
   h_looseLep1Eta_Diboson__62->SetBinContent(2,0.002004088);
   h_looseLep1Eta_Diboson__62->SetBinContent(3,0.0007943682);
   h_looseLep1Eta_Diboson__62->SetBinContent(4,0.001752779);
   h_looseLep1Eta_Diboson__62->SetBinContent(5,0.001855847);
   h_looseLep1Eta_Diboson__62->SetBinContent(6,0.003394227);
   h_looseLep1Eta_Diboson__62->SetBinContent(7,0.002409353);
   h_looseLep1Eta_Diboson__62->SetBinContent(8,0.00205755);
   h_looseLep1Eta_Diboson__62->SetBinContent(9,0.001685184);
   h_looseLep1Eta_Diboson__62->SetBinContent(10,0.002513085);
   h_looseLep1Eta_Diboson__62->SetBinContent(11,0.003724252);
   h_looseLep1Eta_Diboson__62->SetBinContent(12,0.002063143);
   h_looseLep1Eta_Diboson__62->SetBinContent(13,0.002689309);
   h_looseLep1Eta_Diboson__62->SetBinContent(14,0.00198297);
   h_looseLep1Eta_Diboson__62->SetBinContent(15,0.002454232);
   h_looseLep1Eta_Diboson__62->SetBinContent(16,0.001889327);
   h_looseLep1Eta_Diboson__62->SetBinContent(17,0.00152371);
   h_looseLep1Eta_Diboson__62->SetBinContent(18,0.00110276);
   h_looseLep1Eta_Diboson__62->SetBinContent(19,0.0006409927);
   h_looseLep1Eta_Diboson__62->SetBinContent(20,0.0002560037);
   h_looseLep1Eta_Diboson__62->SetBinError(2,0.0006388072);
   h_looseLep1Eta_Diboson__62->SetBinError(3,0.0003640648);
   h_looseLep1Eta_Diboson__62->SetBinError(4,0.0005782741);
   h_looseLep1Eta_Diboson__62->SetBinError(5,0.0006030757);
   h_looseLep1Eta_Diboson__62->SetBinError(6,0.0008410199);
   h_looseLep1Eta_Diboson__62->SetBinError(7,0.0006376974);
   h_looseLep1Eta_Diboson__62->SetBinError(8,0.000626938);
   h_looseLep1Eta_Diboson__62->SetBinError(9,0.0005900842);
   h_looseLep1Eta_Diboson__62->SetBinError(10,0.0007179863);
   h_looseLep1Eta_Diboson__62->SetBinError(11,0.0008466301);
   h_looseLep1Eta_Diboson__62->SetBinError(12,0.0006223139);
   h_looseLep1Eta_Diboson__62->SetBinError(13,0.0007488788);
   h_looseLep1Eta_Diboson__62->SetBinError(14,0.0005869832);
   h_looseLep1Eta_Diboson__62->SetBinError(15,0.000732877);
   h_looseLep1Eta_Diboson__62->SetBinError(16,0.0006268704);
   h_looseLep1Eta_Diboson__62->SetBinError(17,0.0005241852);
   h_looseLep1Eta_Diboson__62->SetBinError(18,0.0005098731);
   h_looseLep1Eta_Diboson__62->SetBinError(19,0.0004034904);
   h_looseLep1Eta_Diboson__62->SetBinError(20,0.0001393168);
   h_looseLep1Eta_Diboson__62->SetEntries(227);
   h_looseLep1Eta_Diboson__62->SetStats(0);

   ci = TColor::GetColor("#9966cc");
   h_looseLep1Eta_Diboson__62->SetFillColor(ci);
   h_looseLep1Eta_Diboson__62->GetXaxis()->SetTitle("Leading lep #eta");
   h_looseLep1Eta_Diboson__62->GetXaxis()->SetLabelFont(42);
   h_looseLep1Eta_Diboson__62->GetXaxis()->SetLabelOffset(0.007);
   h_looseLep1Eta_Diboson__62->GetXaxis()->SetTitleSize(0.05);
   h_looseLep1Eta_Diboson__62->GetXaxis()->SetTickLength(0.025);
   h_looseLep1Eta_Diboson__62->GetXaxis()->SetTitleFont(42);
   h_looseLep1Eta_Diboson__62->GetYaxis()->SetTitle("a.u.");
   h_looseLep1Eta_Diboson__62->GetYaxis()->SetLabelFont(42);
   h_looseLep1Eta_Diboson__62->GetYaxis()->SetLabelOffset(0.007);
   h_looseLep1Eta_Diboson__62->GetYaxis()->SetTitleSize(0.05);
   h_looseLep1Eta_Diboson__62->GetYaxis()->SetTickLength(0.025);
   h_looseLep1Eta_Diboson__62->GetYaxis()->SetTitleFont(42);
   h_looseLep1Eta_Diboson__62->GetZaxis()->SetLabelFont(42);
   h_looseLep1Eta_Diboson__62->GetZaxis()->SetLabelOffset(0.007);
   h_looseLep1Eta_Diboson__62->GetZaxis()->SetTitleSize(0.05);
   h_looseLep1Eta_Diboson__62->GetZaxis()->SetTickLength(0.025);
   h_looseLep1Eta_Diboson__62->GetZaxis()->SetTitleFont(42);
   h->Add(h_looseLep1Eta_Diboson,"");
   
   TH1D *h_looseLep1Eta_ZpLjets__63 = new TH1D("h_looseLep1Eta_ZpLjets__63","",20,-2.5,2.5);
   h_looseLep1Eta_ZpLjets__63->SetBinContent(1,0.0006374173);
   h_looseLep1Eta_ZpLjets__63->SetBinContent(2,0.001443487);
   h_looseLep1Eta_ZpLjets__63->SetBinContent(3,0.001991701);
   h_looseLep1Eta_ZpLjets__63->SetBinContent(4,0.002235686);
   h_looseLep1Eta_ZpLjets__63->SetBinContent(5,0.002539241);
   h_looseLep1Eta_ZpLjets__63->SetBinContent(6,0.002723518);
   h_looseLep1Eta_ZpLjets__63->SetBinContent(7,0.003076803);
   h_looseLep1Eta_ZpLjets__63->SetBinContent(8,0.003101942);
   h_looseLep1Eta_ZpLjets__63->SetBinContent(9,0.002956515);
   h_looseLep1Eta_ZpLjets__63->SetBinContent(10,0.003026006);
   h_looseLep1Eta_ZpLjets__63->SetBinContent(11,0.003089082);
   h_looseLep1Eta_ZpLjets__63->SetBinContent(12,0.003071147);
   h_looseLep1Eta_ZpLjets__63->SetBinContent(13,0.003076409);
   h_looseLep1Eta_ZpLjets__63->SetBinContent(14,0.003142254);
   h_looseLep1Eta_ZpLjets__63->SetBinContent(15,0.002995478);
   h_looseLep1Eta_ZpLjets__63->SetBinContent(16,0.002328927);
   h_looseLep1Eta_ZpLjets__63->SetBinContent(17,0.002198431);
   h_looseLep1Eta_ZpLjets__63->SetBinContent(18,0.001846794);
   h_looseLep1Eta_ZpLjets__63->SetBinContent(19,0.001201434);
   h_looseLep1Eta_ZpLjets__63->SetBinContent(20,0.000731532);
   h_looseLep1Eta_ZpLjets__63->SetBinError(1,7.248384e-05);
   h_looseLep1Eta_ZpLjets__63->SetBinError(2,0.000110196);
   h_looseLep1Eta_ZpLjets__63->SetBinError(3,0.0001381556);
   h_looseLep1Eta_ZpLjets__63->SetBinError(4,0.0001379389);
   h_looseLep1Eta_ZpLjets__63->SetBinError(5,0.0001551444);
   h_looseLep1Eta_ZpLjets__63->SetBinError(6,0.0001581261);
   h_looseLep1Eta_ZpLjets__63->SetBinError(7,0.0001731896);
   h_looseLep1Eta_ZpLjets__63->SetBinError(8,0.0001726791);
   h_looseLep1Eta_ZpLjets__63->SetBinError(9,0.000157057);
   h_looseLep1Eta_ZpLjets__63->SetBinError(10,0.0001657262);
   h_looseLep1Eta_ZpLjets__63->SetBinError(11,0.0001584854);
   h_looseLep1Eta_ZpLjets__63->SetBinError(12,0.0001636098);
   h_looseLep1Eta_ZpLjets__63->SetBinError(13,0.000173582);
   h_looseLep1Eta_ZpLjets__63->SetBinError(14,0.0001834012);
   h_looseLep1Eta_ZpLjets__63->SetBinError(15,0.0001580319);
   h_looseLep1Eta_ZpLjets__63->SetBinError(16,0.0001390393);
   h_looseLep1Eta_ZpLjets__63->SetBinError(17,0.0001319173);
   h_looseLep1Eta_ZpLjets__63->SetBinError(18,0.0001340132);
   h_looseLep1Eta_ZpLjets__63->SetBinError(19,0.0001097334);
   h_looseLep1Eta_ZpLjets__63->SetBinError(20,8.536357e-05);
   h_looseLep1Eta_ZpLjets__63->SetEntries(24915);
   h_looseLep1Eta_ZpLjets__63->SetStats(0);

   ci = TColor::GetColor("#3399cc");
   h_looseLep1Eta_ZpLjets__63->SetFillColor(ci);
   h_looseLep1Eta_ZpLjets__63->GetXaxis()->SetTitle("Leading lep #eta");
   h_looseLep1Eta_ZpLjets__63->GetXaxis()->SetLabelFont(42);
   h_looseLep1Eta_ZpLjets__63->GetXaxis()->SetLabelOffset(0.007);
   h_looseLep1Eta_ZpLjets__63->GetXaxis()->SetTitleSize(0.05);
   h_looseLep1Eta_ZpLjets__63->GetXaxis()->SetTickLength(0.025);
   h_looseLep1Eta_ZpLjets__63->GetXaxis()->SetTitleFont(42);
   h_looseLep1Eta_ZpLjets__63->GetYaxis()->SetTitle("a.u.");
   h_looseLep1Eta_ZpLjets__63->GetYaxis()->SetLabelFont(42);
   h_looseLep1Eta_ZpLjets__63->GetYaxis()->SetLabelOffset(0.007);
   h_looseLep1Eta_ZpLjets__63->GetYaxis()->SetTitleSize(0.05);
   h_looseLep1Eta_ZpLjets__63->GetYaxis()->SetTickLength(0.025);
   h_looseLep1Eta_ZpLjets__63->GetYaxis()->SetTitleFont(42);
   h_looseLep1Eta_ZpLjets__63->GetZaxis()->SetLabelFont(42);
   h_looseLep1Eta_ZpLjets__63->GetZaxis()->SetLabelOffset(0.007);
   h_looseLep1Eta_ZpLjets__63->GetZaxis()->SetTitleSize(0.05);
   h_looseLep1Eta_ZpLjets__63->GetZaxis()->SetTickLength(0.025);
   h_looseLep1Eta_ZpLjets__63->GetZaxis()->SetTitleFont(42);
   h->Add(h_looseLep1Eta_Z+jets,"");
   
   TH1D *h_looseLep1Eta_WpLjets__64 = new TH1D("h_looseLep1Eta_WpLjets__64","",20,-2.5,2.5);
   h_looseLep1Eta_WpLjets__64->SetBinContent(1,0.001181029);
   h_looseLep1Eta_WpLjets__64->SetBinContent(2,0.002209013);
   h_looseLep1Eta_WpLjets__64->SetBinContent(3,0.003294726);
   h_looseLep1Eta_WpLjets__64->SetBinContent(4,0.002278618);
   h_looseLep1Eta_WpLjets__64->SetBinContent(5,0.002028657);
   h_looseLep1Eta_WpLjets__64->SetBinContent(6,0.002759041);
   h_looseLep1Eta_WpLjets__64->SetBinContent(7,0.003133069);
   h_looseLep1Eta_WpLjets__64->SetBinContent(8,0.002172836);
   h_looseLep1Eta_WpLjets__64->SetBinContent(9,0.002517427);
   h_looseLep1Eta_WpLjets__64->SetBinContent(10,0.001961739);
   h_looseLep1Eta_WpLjets__64->SetBinContent(11,0.002486169);
   h_looseLep1Eta_WpLjets__64->SetBinContent(12,0.002122683);
   h_looseLep1Eta_WpLjets__64->SetBinContent(13,0.002963917);
   h_looseLep1Eta_WpLjets__64->SetBinContent(14,0.002681675);
   h_looseLep1Eta_WpLjets__64->SetBinContent(15,0.002474345);
   h_looseLep1Eta_WpLjets__64->SetBinContent(16,0.002230761);
   h_looseLep1Eta_WpLjets__64->SetBinContent(17,0.002522173);
   h_looseLep1Eta_WpLjets__64->SetBinContent(18,0.002278571);
   h_looseLep1Eta_WpLjets__64->SetBinContent(19,0.001268225);
   h_looseLep1Eta_WpLjets__64->SetBinContent(20,0.001118104);
   h_looseLep1Eta_WpLjets__64->SetBinError(1,0.0003084996);
   h_looseLep1Eta_WpLjets__64->SetBinError(2,0.0003824054);
   h_looseLep1Eta_WpLjets__64->SetBinError(3,0.0004845723);
   h_looseLep1Eta_WpLjets__64->SetBinError(4,0.0003653721);
   h_looseLep1Eta_WpLjets__64->SetBinError(5,0.0003518159);
   h_looseLep1Eta_WpLjets__64->SetBinError(6,0.0004256666);
   h_looseLep1Eta_WpLjets__64->SetBinError(7,0.0004520791);
   h_looseLep1Eta_WpLjets__64->SetBinError(8,0.0003813826);
   h_looseLep1Eta_WpLjets__64->SetBinError(9,0.0003798871);
   h_looseLep1Eta_WpLjets__64->SetBinError(10,0.0003143365);
   h_looseLep1Eta_WpLjets__64->SetBinError(11,0.0003648755);
   h_looseLep1Eta_WpLjets__64->SetBinError(12,0.0003327737);
   h_looseLep1Eta_WpLjets__64->SetBinError(13,0.0004089461);
   h_looseLep1Eta_WpLjets__64->SetBinError(14,0.0004341917);
   h_looseLep1Eta_WpLjets__64->SetBinError(15,0.0003539047);
   h_looseLep1Eta_WpLjets__64->SetBinError(16,0.0003383023);
   h_looseLep1Eta_WpLjets__64->SetBinError(17,0.0004241221);
   h_looseLep1Eta_WpLjets__64->SetBinError(18,0.0003794876);
   h_looseLep1Eta_WpLjets__64->SetBinError(19,0.0002773743);
   h_looseLep1Eta_WpLjets__64->SetBinError(20,0.0002721493);
   h_looseLep1Eta_WpLjets__64->SetEntries(3309);
   h_looseLep1Eta_WpLjets__64->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   h_looseLep1Eta_WpLjets__64->SetFillColor(ci);
   h_looseLep1Eta_WpLjets__64->GetXaxis()->SetTitle("Leading lep #eta");
   h_looseLep1Eta_WpLjets__64->GetXaxis()->SetLabelFont(42);
   h_looseLep1Eta_WpLjets__64->GetXaxis()->SetLabelOffset(0.007);
   h_looseLep1Eta_WpLjets__64->GetXaxis()->SetTitleSize(0.05);
   h_looseLep1Eta_WpLjets__64->GetXaxis()->SetTickLength(0.025);
   h_looseLep1Eta_WpLjets__64->GetXaxis()->SetTitleFont(42);
   h_looseLep1Eta_WpLjets__64->GetYaxis()->SetTitle("a.u.");
   h_looseLep1Eta_WpLjets__64->GetYaxis()->SetLabelFont(42);
   h_looseLep1Eta_WpLjets__64->GetYaxis()->SetLabelOffset(0.007);
   h_looseLep1Eta_WpLjets__64->GetYaxis()->SetTitleSize(0.05);
   h_looseLep1Eta_WpLjets__64->GetYaxis()->SetTickLength(0.025);
   h_looseLep1Eta_WpLjets__64->GetYaxis()->SetTitleFont(42);
   h_looseLep1Eta_WpLjets__64->GetZaxis()->SetLabelFont(42);
   h_looseLep1Eta_WpLjets__64->GetZaxis()->SetLabelOffset(0.007);
   h_looseLep1Eta_WpLjets__64->GetZaxis()->SetTitleSize(0.05);
   h_looseLep1Eta_WpLjets__64->GetZaxis()->SetTickLength(0.025);
   h_looseLep1Eta_WpLjets__64->GetZaxis()->SetTitleFont(42);
   h->Add(h_looseLep1Eta_W+jets,"");
   
   TH1D *h_looseLep1Eta_TopsPoPLFcP__65 = new TH1D("h_looseLep1Eta_TopsPoPLFcP__65","",20,-2.5,2.5);
   h_looseLep1Eta_TopsPoPLFcP__65->SetBinContent(1,0.002218158);
   h_looseLep1Eta_TopsPoPLFcP__65->SetBinContent(2,0.004711876);
   h_looseLep1Eta_TopsPoPLFcP__65->SetBinContent(3,0.007678215);
   h_looseLep1Eta_TopsPoPLFcP__65->SetBinContent(4,0.01063044);
   h_looseLep1Eta_TopsPoPLFcP__65->SetBinContent(5,0.01440683);
   h_looseLep1Eta_TopsPoPLFcP__65->SetBinContent(6,0.01889272);
   h_looseLep1Eta_TopsPoPLFcP__65->SetBinContent(7,0.02288967);
   h_looseLep1Eta_TopsPoPLFcP__65->SetBinContent(8,0.02710729);
   h_looseLep1Eta_TopsPoPLFcP__65->SetBinContent(9,0.02799423);
   h_looseLep1Eta_TopsPoPLFcP__65->SetBinContent(10,0.02822084);
   h_looseLep1Eta_TopsPoPLFcP__65->SetBinContent(11,0.02863724);
   h_looseLep1Eta_TopsPoPLFcP__65->SetBinContent(12,0.02781563);
   h_looseLep1Eta_TopsPoPLFcP__65->SetBinContent(13,0.02582569);
   h_looseLep1Eta_TopsPoPLFcP__65->SetBinContent(14,0.02170511);
   h_looseLep1Eta_TopsPoPLFcP__65->SetBinContent(15,0.01881849);
   h_looseLep1Eta_TopsPoPLFcP__65->SetBinContent(16,0.01503088);
   h_looseLep1Eta_TopsPoPLFcP__65->SetBinContent(17,0.01059205);
   h_looseLep1Eta_TopsPoPLFcP__65->SetBinContent(18,0.007736429);
   h_looseLep1Eta_TopsPoPLFcP__65->SetBinContent(19,0.005042813);
   h_looseLep1Eta_TopsPoPLFcP__65->SetBinContent(20,0.002124549);
   h_looseLep1Eta_TopsPoPLFcP__65->SetBinError(1,0.0001676337);
   h_looseLep1Eta_TopsPoPLFcP__65->SetBinError(2,0.0002229635);
   h_looseLep1Eta_TopsPoPLFcP__65->SetBinError(3,0.000291544);
   h_looseLep1Eta_TopsPoPLFcP__65->SetBinError(4,0.0003091197);
   h_looseLep1Eta_TopsPoPLFcP__65->SetBinError(5,0.0004130364);
   h_looseLep1Eta_TopsPoPLFcP__65->SetBinError(6,0.0004676703);
   h_looseLep1Eta_TopsPoPLFcP__65->SetBinError(7,0.000506307);
   h_looseLep1Eta_TopsPoPLFcP__65->SetBinError(8,0.0005620204);
   h_looseLep1Eta_TopsPoPLFcP__65->SetBinError(9,0.0005999206);
   h_looseLep1Eta_TopsPoPLFcP__65->SetBinError(10,0.0005702365);
   h_looseLep1Eta_TopsPoPLFcP__65->SetBinError(11,0.0005731203);
   h_looseLep1Eta_TopsPoPLFcP__65->SetBinError(12,0.0005655518);
   h_looseLep1Eta_TopsPoPLFcP__65->SetBinError(13,0.0005617157);
   h_looseLep1Eta_TopsPoPLFcP__65->SetBinError(14,0.000502641);
   h_looseLep1Eta_TopsPoPLFcP__65->SetBinError(15,0.0004845442);
   h_looseLep1Eta_TopsPoPLFcP__65->SetBinError(16,0.0004121342);
   h_looseLep1Eta_TopsPoPLFcP__65->SetBinError(17,0.0003433876);
   h_looseLep1Eta_TopsPoPLFcP__65->SetBinError(18,0.0002933214);
   h_looseLep1Eta_TopsPoPLFcP__65->SetBinError(19,0.000221424);
   h_looseLep1Eta_TopsPoPLFcP__65->SetBinError(20,0.0001472279);
   h_looseLep1Eta_TopsPoPLFcP__65->SetEntries(45754);
   h_looseLep1Eta_TopsPoPLFcP__65->SetStats(0);

   ci = TColor::GetColor("#cc33cc");
   h_looseLep1Eta_TopsPoPLFcP__65->SetFillColor(ci);
   h_looseLep1Eta_TopsPoPLFcP__65->GetXaxis()->SetTitle("Leading lep #eta");
   h_looseLep1Eta_TopsPoPLFcP__65->GetXaxis()->SetLabelFont(42);
   h_looseLep1Eta_TopsPoPLFcP__65->GetXaxis()->SetLabelOffset(0.007);
   h_looseLep1Eta_TopsPoPLFcP__65->GetXaxis()->SetTitleSize(0.05);
   h_looseLep1Eta_TopsPoPLFcP__65->GetXaxis()->SetTickLength(0.025);
   h_looseLep1Eta_TopsPoPLFcP__65->GetXaxis()->SetTitleFont(42);
   h_looseLep1Eta_TopsPoPLFcP__65->GetYaxis()->SetTitle("a.u.");
   h_looseLep1Eta_TopsPoPLFcP__65->GetYaxis()->SetLabelFont(42);
   h_looseLep1Eta_TopsPoPLFcP__65->GetYaxis()->SetLabelOffset(0.007);
   h_looseLep1Eta_TopsPoPLFcP__65->GetYaxis()->SetTitleSize(0.05);
   h_looseLep1Eta_TopsPoPLFcP__65->GetYaxis()->SetTickLength(0.025);
   h_looseLep1Eta_TopsPoPLFcP__65->GetYaxis()->SetTitleFont(42);
   h_looseLep1Eta_TopsPoPLFcP__65->GetZaxis()->SetLabelFont(42);
   h_looseLep1Eta_TopsPoPLFcP__65->GetZaxis()->SetLabelOffset(0.007);
   h_looseLep1Eta_TopsPoPLFcP__65->GetZaxis()->SetTitleSize(0.05);
   h_looseLep1Eta_TopsPoPLFcP__65->GetZaxis()->SetTickLength(0.025);
   h_looseLep1Eta_TopsPoPLFcP__65->GetZaxis()->SetTitleFont(42);
   h->Add(h_looseLep1Eta_Top (LF),"");
   
   TH1D *h_looseLep1Eta_TopsPoPHFcP__66 = new TH1D("h_looseLep1Eta_TopsPoPHFcP__66","",20,-2.5,2.5);
   h_looseLep1Eta_TopsPoPHFcP__66->SetBinContent(1,0.003157813);
   h_looseLep1Eta_TopsPoPHFcP__66->SetBinContent(2,0.008029803);
   h_looseLep1Eta_TopsPoPHFcP__66->SetBinContent(3,0.01262287);
   h_looseLep1Eta_TopsPoPHFcP__66->SetBinContent(4,0.01635418);
   h_looseLep1Eta_TopsPoPHFcP__66->SetBinContent(5,0.02287033);
   h_looseLep1Eta_TopsPoPHFcP__66->SetBinContent(6,0.03025268);
   h_looseLep1Eta_TopsPoPHFcP__66->SetBinContent(7,0.03609514);
   h_looseLep1Eta_TopsPoPHFcP__66->SetBinContent(8,0.04123852);
   h_looseLep1Eta_TopsPoPHFcP__66->SetBinContent(9,0.04537605);
   h_looseLep1Eta_TopsPoPHFcP__66->SetBinContent(10,0.04819318);
   h_looseLep1Eta_TopsPoPHFcP__66->SetBinContent(11,0.04799727);
   h_looseLep1Eta_TopsPoPHFcP__66->SetBinContent(12,0.04439693);
   h_looseLep1Eta_TopsPoPHFcP__66->SetBinContent(13,0.04274929);
   h_looseLep1Eta_TopsPoPHFcP__66->SetBinContent(14,0.03576702);
   h_looseLep1Eta_TopsPoPHFcP__66->SetBinContent(15,0.0304345);
   h_looseLep1Eta_TopsPoPHFcP__66->SetBinContent(16,0.02357761);
   h_looseLep1Eta_TopsPoPHFcP__66->SetBinContent(17,0.01728865);
   h_looseLep1Eta_TopsPoPHFcP__66->SetBinContent(18,0.01270009);
   h_looseLep1Eta_TopsPoPHFcP__66->SetBinContent(19,0.008033362);
   h_looseLep1Eta_TopsPoPHFcP__66->SetBinContent(20,0.003310244);
   h_looseLep1Eta_TopsPoPHFcP__66->SetBinError(1,0.0001945);
   h_looseLep1Eta_TopsPoPHFcP__66->SetBinError(2,0.0003111774);
   h_looseLep1Eta_TopsPoPHFcP__66->SetBinError(3,0.0003894558);
   h_looseLep1Eta_TopsPoPHFcP__66->SetBinError(4,0.0004552467);
   h_looseLep1Eta_TopsPoPHFcP__66->SetBinError(5,0.0005128227);
   h_looseLep1Eta_TopsPoPHFcP__66->SetBinError(6,0.0006269657);
   h_looseLep1Eta_TopsPoPHFcP__66->SetBinError(7,0.0006591842);
   h_looseLep1Eta_TopsPoPHFcP__66->SetBinError(8,0.0006893289);
   h_looseLep1Eta_TopsPoPHFcP__66->SetBinError(9,0.0007429717);
   h_looseLep1Eta_TopsPoPHFcP__66->SetBinError(10,0.0007777433);
   h_looseLep1Eta_TopsPoPHFcP__66->SetBinError(11,0.0007775761);
   h_looseLep1Eta_TopsPoPHFcP__66->SetBinError(12,0.0007349302);
   h_looseLep1Eta_TopsPoPHFcP__66->SetBinError(13,0.0007462477);
   h_looseLep1Eta_TopsPoPHFcP__66->SetBinError(14,0.0006184436);
   h_looseLep1Eta_TopsPoPHFcP__66->SetBinError(15,0.0005952445);
   h_looseLep1Eta_TopsPoPHFcP__66->SetBinError(16,0.0005281941);
   h_looseLep1Eta_TopsPoPHFcP__66->SetBinError(17,0.0004635793);
   h_looseLep1Eta_TopsPoPHFcP__66->SetBinError(18,0.0003520021);
   h_looseLep1Eta_TopsPoPHFcP__66->SetBinError(19,0.0003167897);
   h_looseLep1Eta_TopsPoPHFcP__66->SetBinError(20,0.0001894341);
   h_looseLep1Eta_TopsPoPHFcP__66->SetEntries(77950);
   h_looseLep1Eta_TopsPoPHFcP__66->SetStats(0);

   ci = TColor::GetColor("#ff9900");
   h_looseLep1Eta_TopsPoPHFcP__66->SetFillColor(ci);
   h_looseLep1Eta_TopsPoPHFcP__66->GetXaxis()->SetTitle("Leading lep #eta");
   h_looseLep1Eta_TopsPoPHFcP__66->GetXaxis()->SetLabelFont(42);
   h_looseLep1Eta_TopsPoPHFcP__66->GetXaxis()->SetLabelOffset(0.007);
   h_looseLep1Eta_TopsPoPHFcP__66->GetXaxis()->SetTitleSize(0.05);
   h_looseLep1Eta_TopsPoPHFcP__66->GetXaxis()->SetTickLength(0.025);
   h_looseLep1Eta_TopsPoPHFcP__66->GetXaxis()->SetTitleFont(42);
   h_looseLep1Eta_TopsPoPHFcP__66->GetYaxis()->SetTitle("a.u.");
   h_looseLep1Eta_TopsPoPHFcP__66->GetYaxis()->SetLabelFont(42);
   h_looseLep1Eta_TopsPoPHFcP__66->GetYaxis()->SetLabelOffset(0.007);
   h_looseLep1Eta_TopsPoPHFcP__66->GetYaxis()->SetTitleSize(0.05);
   h_looseLep1Eta_TopsPoPHFcP__66->GetYaxis()->SetTickLength(0.025);
   h_looseLep1Eta_TopsPoPHFcP__66->GetYaxis()->SetTitleFont(42);
   h_looseLep1Eta_TopsPoPHFcP__66->GetZaxis()->SetLabelFont(42);
   h_looseLep1Eta_TopsPoPHFcP__66->GetZaxis()->SetLabelOffset(0.007);
   h_looseLep1Eta_TopsPoPHFcP__66->GetZaxis()->SetTitleSize(0.05);
   h_looseLep1Eta_TopsPoPHFcP__66->GetZaxis()->SetTickLength(0.025);
   h_looseLep1Eta_TopsPoPHFcP__66->GetZaxis()->SetTitleFont(42);
   h->Add(h_looseLep1Eta_Top (HF),"");
   h->Draw("hist");
   
   TH1D *hsum__67 = new TH1D("hsum__67","",20,-2.5,2.5);
   hsum__67->SetBinContent(1,0.007194417);
   hsum__67->SetBinContent(2,0.01839827);
   hsum__67->SetBinContent(3,0.02707018);
   hsum__67->SetBinContent(4,0.03588969);
   hsum__67->SetBinContent(5,0.04424732);
   hsum__67->SetBinContent(6,0.05802219);
   hsum__67->SetBinContent(7,0.06817856);
   hsum__67->SetBinContent(8,0.07608082);
   hsum__67->SetBinContent(9,0.0817672);
   hsum__67->SetBinContent(10,0.08488394);
   hsum__67->SetBinContent(11,0.08593402);
   hsum__67->SetBinContent(12,0.07960156);
   hsum__67->SetBinContent(13,0.07858717);
   hsum__67->SetBinContent(14,0.06615795);
   hsum__67->SetBinContent(15,0.05717704);
   hsum__67->SetBinContent(16,0.04620662);
   hsum__67->SetBinContent(17,0.03441376);
   hsum__67->SetBinContent(18,0.026092);
   hsum__67->SetBinContent(19,0.01655687);
   hsum__67->SetBinContent(20,0.007540432);
   hsum__67->SetBinError(1,0.0004078691);
   hsum__67->SetBinError(2,0.0008443908);
   hsum__67->SetBinError(3,0.0009565064);
   hsum__67->SetBinError(4,0.002067464);
   hsum__67->SetBinError(5,0.001048892);
   hsum__67->SetBinError(6,0.001235035);
   hsum__67->SetBinError(7,0.001289178);
   hsum__67->SetBinError(8,0.001233499);
   hsum__67->SetBinError(9,0.001515015);
   hsum__67->SetBinError(10,0.001419142);
   hsum__67->SetBinError(11,0.001344666);
   hsum__67->SetBinError(12,0.001184138);
   hsum__67->SetBinError(13,0.001789378);
   hsum__67->SetBinError(14,0.001389341);
   hsum__67->SetBinError(15,0.001129792);
   hsum__67->SetBinError(16,0.001515273);
   hsum__67->SetBinError(17,0.0009230433);
   hsum__67->SetBinError(18,0.0008504327);
   hsum__67->SetBinError(19,0.0007335546);
   hsum__67->SetBinError(20,0.0003978978);
   hsum__67->SetEntries(65);
   hsum__67->SetStats(0);

   ci = 1185;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   hsum__67->SetFillColor(ci);
   hsum__67->SetFillStyle(3003);
   hsum__67->SetLineWidth(0);
   hsum__67->GetXaxis()->SetTitle("Leading lep #eta");
   hsum__67->GetXaxis()->SetLabelFont(42);
   hsum__67->GetXaxis()->SetLabelOffset(0.007);
   hsum__67->GetXaxis()->SetTitleSize(0.05);
   hsum__67->GetXaxis()->SetTickLength(0.025);
   hsum__67->GetXaxis()->SetTitleFont(42);
   hsum__67->GetYaxis()->SetTitle("a.u.");
   hsum__67->GetYaxis()->SetLabelFont(42);
   hsum__67->GetYaxis()->SetLabelOffset(0.007);
   hsum__67->GetYaxis()->SetTitleSize(0.05);
   hsum__67->GetYaxis()->SetTickLength(0.025);
   hsum__67->GetYaxis()->SetTitleFont(42);
   hsum__67->GetZaxis()->SetLabelFont(42);
   hsum__67->GetZaxis()->SetLabelOffset(0.007);
   hsum__67->GetZaxis()->SetTitleSize(0.05);
   hsum__67->GetZaxis()->SetTickLength(0.025);
   hsum__67->GetZaxis()->SetTitleFont(42);
   hsum__67->Draw("e2 same");
   
   TH1D *h_looseLep1Eta_Data__68 = new TH1D("h_looseLep1Eta_Data__68","",20,-2.5,2.5);
   h_looseLep1Eta_Data__68->SetBinContent(1,0.007632149);
   h_looseLep1Eta_Data__68->SetBinContent(2,0.01714878);
   h_looseLep1Eta_Data__68->SetBinContent(3,0.02784321);
   h_looseLep1Eta_Data__68->SetBinContent(4,0.03491002);
   h_looseLep1Eta_Data__68->SetBinContent(5,0.04645246);
   h_looseLep1Eta_Data__68->SetBinContent(6,0.05686422);
   h_looseLep1Eta_Data__68->SetBinContent(7,0.06859512);
   h_looseLep1Eta_Data__68->SetBinContent(8,0.07764063);
   h_looseLep1Eta_Data__68->SetBinContent(9,0.07943089);
   h_looseLep1Eta_Data__68->SetBinContent(10,0.08206916);
   h_looseLep1Eta_Data__68->SetBinContent(11,0.08423631);
   h_looseLep1Eta_Data__68->SetBinContent(12,0.08291718);
   h_looseLep1Eta_Data__68->SetBinContent(13,0.0779233);
   h_looseLep1Eta_Data__68->SetBinContent(14,0.06666353);
   h_looseLep1Eta_Data__68->SetBinContent(15,0.05785358);
   h_looseLep1Eta_Data__68->SetBinContent(16,0.04508622);
   h_looseLep1Eta_Data__68->SetBinContent(17,0.0348629);
   h_looseLep1Eta_Data__68->SetBinContent(18,0.0266183);
   h_looseLep1Eta_Data__68->SetBinContent(19,0.01813813);
   h_looseLep1Eta_Data__68->SetBinContent(20,0.007113917);
   h_looseLep1Eta_Data__68->SetBinError(1,0.0005996383);
   h_looseLep1Eta_Data__68->SetBinError(2,0.0008988403);
   h_looseLep1Eta_Data__68->SetBinError(3,0.001145317);
   h_looseLep1Eta_Data__68->SetBinError(4,0.001282451);
   h_looseLep1Eta_Data__68->SetBinError(5,0.001479348);
   h_looseLep1Eta_Data__68->SetBinError(6,0.001636762);
   h_looseLep1Eta_Data__68->SetBinError(7,0.001797681);
   h_looseLep1Eta_Data__68->SetBinError(8,0.00191254);
   h_looseLep1Eta_Data__68->SetBinError(9,0.001934464);
   h_looseLep1Eta_Data__68->SetBinError(10,0.001966328);
   h_looseLep1Eta_Data__68->SetBinError(11,0.00199212);
   h_looseLep1Eta_Data__68->SetBinError(12,0.001976461);
   h_looseLep1Eta_Data__68->SetBinError(13,0.001916018);
   h_looseLep1Eta_Data__68->SetBinError(14,0.001772189);
   h_looseLep1Eta_Data__68->SetBinError(15,0.001650939);
   h_looseLep1Eta_Data__68->SetBinError(16,0.00145743);
   h_looseLep1Eta_Data__68->SetBinError(17,0.001281586);
   h_looseLep1Eta_Data__68->SetBinError(18,0.00111984);
   h_looseLep1Eta_Data__68->SetBinError(19,0.0009244048);
   h_looseLep1Eta_Data__68->SetBinError(20,0.0005789223);
   h_looseLep1Eta_Data__68->SetEntries(21226);
   h_looseLep1Eta_Data__68->SetStats(0);
   h_looseLep1Eta_Data__68->SetLineWidth(3);
   h_looseLep1Eta_Data__68->SetMarkerStyle(20);
   h_looseLep1Eta_Data__68->SetMarkerSize(2);
   h_looseLep1Eta_Data__68->GetXaxis()->SetTitle("Leading lep #eta");
   h_looseLep1Eta_Data__68->GetXaxis()->SetLabelFont(42);
   h_looseLep1Eta_Data__68->GetXaxis()->SetLabelOffset(0.007);
   h_looseLep1Eta_Data__68->GetXaxis()->SetTitleSize(0.05);
   h_looseLep1Eta_Data__68->GetXaxis()->SetTickLength(0.025);
   h_looseLep1Eta_Data__68->GetXaxis()->SetTitleFont(42);
   h_looseLep1Eta_Data__68->GetYaxis()->SetTitle("a.u.");
   h_looseLep1Eta_Data__68->GetYaxis()->SetLabelFont(42);
   h_looseLep1Eta_Data__68->GetYaxis()->SetLabelOffset(0.007);
   h_looseLep1Eta_Data__68->GetYaxis()->SetTitleSize(0.05);
   h_looseLep1Eta_Data__68->GetYaxis()->SetTickLength(0.025);
   h_looseLep1Eta_Data__68->GetYaxis()->SetTitleFont(42);
   h_looseLep1Eta_Data__68->GetZaxis()->SetLabelFont(42);
   h_looseLep1Eta_Data__68->GetZaxis()->SetLabelOffset(0.007);
   h_looseLep1Eta_Data__68->GetZaxis()->SetTitleSize(0.05);
   h_looseLep1Eta_Data__68->GetZaxis()->SetTickLength(0.025);
   h_looseLep1Eta_Data__68->GetZaxis()->SetTitleFont(42);
   h_looseLep1Eta_Data__68->Draw("elp same");
   
   TLegend *leg = new TLegend(0.6,0.55,0.88,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("h_looseLep1Eta_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_looseLep1Eta_Top (HF)","Top (HF)","F");

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
   entry=leg->AddEntry("h_looseLep1Eta_Top (LF)","Top (LF)","F");

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
   entry=leg->AddEntry("h_looseLep1Eta_W+jets","W+jets","F");

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
   entry=leg->AddEntry("h_looseLep1Eta_Z+jets","Z+jets","F");

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
   entry=leg->AddEntry("h_looseLep1Eta_Diboson","Diboson","F");

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
   entry=leg->AddEntry("h_looseLep1Eta_QCD","QCD","F");

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
   entry=leg->AddEntry("h_looseLep1Eta_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_looseLep1Eta_Top (HF)","Top (HF)","F");

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
   entry=leg->AddEntry("h_looseLep1Eta_Top (LF)","Top (LF)","F");

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
   entry=leg->AddEntry("h_looseLep1Eta_W+jets","W+jets","F");

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
   entry=leg->AddEntry("h_looseLep1Eta_Z+jets","Z+jets","F");

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
   entry=leg->AddEntry("h_looseLep1Eta_Diboson","Diboson","F");

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
   entry=leg->AddEntry("h_looseLep1Eta_QCD","QCD","F");

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
   
   TH1D *ratio__69 = new TH1D("ratio__69","",20,-2.5,2.5);
   ratio__69->SetBinContent(1,0.06084335);
   ratio__69->SetBinContent(2,-0.06791329);
   ratio__69->SetBinContent(3,0.02855659);
   ratio__69->SetBinContent(4,-0.02729666);
   ratio__69->SetBinContent(5,0.04983675);
   ratio__69->SetBinContent(6,-0.0199573);
   ratio__69->SetBinContent(7,0.006109834);
   ratio__69->SetBinContent(8,0.02050197);
   ratio__69->SetBinContent(9,-0.0285728);
   ratio__69->SetBinContent(10,-0.03316039);
   ratio__69->SetBinContent(11,-0.0197559);
   ratio__69->SetBinContent(12,0.04165256);
   ratio__69->SetBinContent(13,-0.008447468);
   ratio__69->SetBinContent(14,0.007641912);
   ratio__69->SetBinContent(15,0.01183224);
   ratio__69->SetBinContent(16,-0.02424777);
   ratio__69->SetBinContent(17,0.01305139);
   ratio__69->SetBinContent(18,0.02017069);
   ratio__69->SetBinContent(19,0.09550464);
   ratio__69->SetBinContent(20,-0.05656379);
   ratio__69->SetBinError(1,0.0001);
   ratio__69->SetBinError(2,0.0001);
   ratio__69->SetBinError(3,0.0001);
   ratio__69->SetBinError(4,0.0001);
   ratio__69->SetBinError(5,0.0001);
   ratio__69->SetBinError(6,0.0001);
   ratio__69->SetBinError(7,0.0001);
   ratio__69->SetBinError(8,0.0001);
   ratio__69->SetBinError(9,0.0001);
   ratio__69->SetBinError(10,0.0001);
   ratio__69->SetBinError(11,0.0001);
   ratio__69->SetBinError(12,0.0001);
   ratio__69->SetBinError(13,0.0001);
   ratio__69->SetBinError(14,0.0001);
   ratio__69->SetBinError(15,0.0001);
   ratio__69->SetBinError(16,0.0001);
   ratio__69->SetBinError(17,0.0001);
   ratio__69->SetBinError(18,0.0001);
   ratio__69->SetBinError(19,0.0001);
   ratio__69->SetBinError(20,0.0001);
   ratio__69->SetMinimum(-0.48);
   ratio__69->SetMaximum(0.48);
   ratio__69->SetEntries(21246);
   ratio__69->SetStats(0);
   ratio__69->SetLineWidth(3);
   ratio__69->SetMarkerStyle(20);
   ratio__69->SetMarkerSize(2);
   ratio__69->GetXaxis()->SetTitle("Leading lep #eta");
   ratio__69->GetXaxis()->SetLabelFont(43);
   ratio__69->GetXaxis()->SetLabelOffset(0.007);
   ratio__69->GetXaxis()->SetLabelSize(30);
   ratio__69->GetXaxis()->SetTitleSize(40);
   ratio__69->GetXaxis()->SetTickLength(0.025);
   ratio__69->GetXaxis()->SetTitleOffset(5);
   ratio__69->GetXaxis()->SetTitleFont(43);
   ratio__69->GetYaxis()->SetTitle("#frac{Data-Exp}{Exp}");
   ratio__69->GetYaxis()->SetNdivisions(5);
   ratio__69->GetYaxis()->SetLabelFont(43);
   ratio__69->GetYaxis()->SetLabelOffset(0.007);
   ratio__69->GetYaxis()->SetLabelSize(30);
   ratio__69->GetYaxis()->SetTitleSize(40);
   ratio__69->GetYaxis()->SetTickLength(0.025);
   ratio__69->GetYaxis()->SetTitleOffset(2.5);
   ratio__69->GetYaxis()->SetTitleFont(43);
   ratio__69->GetZaxis()->SetLabelFont(42);
   ratio__69->GetZaxis()->SetLabelOffset(0.007);
   ratio__69->GetZaxis()->SetTitleSize(0.05);
   ratio__69->GetZaxis()->SetTickLength(0.025);
   ratio__69->GetZaxis()->SetTitleFont(42);
   ratio__69->Draw("elp");
   
   TH1D *zero__70 = new TH1D("zero__70","",20,-2.5,2.5);
   zero__70->SetBinError(1,0.0005996383);
   zero__70->SetBinError(2,0.0008988403);
   zero__70->SetBinError(3,0.001145317);
   zero__70->SetBinError(4,0.001282451);
   zero__70->SetBinError(5,0.001479348);
   zero__70->SetBinError(6,0.001636762);
   zero__70->SetBinError(7,0.001797681);
   zero__70->SetBinError(8,0.00191254);
   zero__70->SetBinError(9,0.001934464);
   zero__70->SetBinError(10,0.001966328);
   zero__70->SetBinError(11,0.00199212);
   zero__70->SetBinError(12,0.001976461);
   zero__70->SetBinError(13,0.001916018);
   zero__70->SetBinError(14,0.001772189);
   zero__70->SetBinError(15,0.001650939);
   zero__70->SetBinError(16,0.00145743);
   zero__70->SetBinError(17,0.001281586);
   zero__70->SetBinError(18,0.00111984);
   zero__70->SetBinError(19,0.0009244048);
   zero__70->SetBinError(20,0.0005789223);
   zero__70->SetEntries(21246);
   zero__70->SetStats(0);
   zero__70->SetLineWidth(3);
   zero__70->SetMarkerStyle(20);
   zero__70->SetMarkerSize(2);
   zero__70->GetXaxis()->SetTitle("Leading lep #eta");
   zero__70->GetXaxis()->SetLabelFont(42);
   zero__70->GetXaxis()->SetLabelOffset(0.007);
   zero__70->GetXaxis()->SetTitleSize(0.05);
   zero__70->GetXaxis()->SetTickLength(0.025);
   zero__70->GetXaxis()->SetTitleFont(42);
   zero__70->GetYaxis()->SetTitle("a.u.");
   zero__70->GetYaxis()->SetLabelFont(42);
   zero__70->GetYaxis()->SetLabelOffset(0.007);
   zero__70->GetYaxis()->SetTitleSize(0.05);
   zero__70->GetYaxis()->SetTickLength(0.025);
   zero__70->GetYaxis()->SetTitleFont(42);
   zero__70->GetZaxis()->SetLabelFont(42);
   zero__70->GetZaxis()->SetLabelOffset(0.007);
   zero__70->GetZaxis()->SetTitleSize(0.05);
   zero__70->GetZaxis()->SetTickLength(0.025);
   zero__70->GetZaxis()->SetTitleFont(42);
   zero__70->Draw("hist same");
   
   TH1D *sumratioup__71 = new TH1D("sumratioup__71","",20,-2.5,2.5);
   sumratioup__71->SetBinContent(1,0.05669244);
   sumratioup__71->SetBinContent(2,0.04589513);
   sumratioup__71->SetBinContent(3,0.03533432);
   sumratioup__71->SetBinContent(4,0.05760607);
   sumratioup__71->SetBinContent(5,0.02370521);
   sumratioup__71->SetBinContent(6,0.02128557);
   sumratioup__71->SetBinContent(7,0.01890885);
   sumratioup__71->SetBinContent(8,0.01621301);
   sumratioup__71->SetBinContent(9,0.01852839);
   sumratioup__71->SetBinContent(10,0.01671861);
   sumratioup__71->SetBinContent(11,0.01564765);
   sumratioup__71->SetBinContent(12,0.01487582);
   sumratioup__71->SetBinContent(13,0.02276934);
   sumratioup__71->SetBinContent(14,0.02100037);
   sumratioup__71->SetBinContent(15,0.01975954);
   sumratioup__71->SetBinContent(16,0.03279341);
   sumratioup__71->SetBinContent(17,0.02682193);
   sumratioup__71->SetBinContent(18,0.03259362);
   sumratioup__71->SetBinContent(19,0.04430514);
   sumratioup__71->SetBinContent(20,0.05276857);
   sumratioup__71->SetBinError(1,0.0004078691);
   sumratioup__71->SetBinError(2,0.0008443908);
   sumratioup__71->SetBinError(3,0.0009565064);
   sumratioup__71->SetBinError(4,0.002067464);
   sumratioup__71->SetBinError(5,0.001048892);
   sumratioup__71->SetBinError(6,0.001235035);
   sumratioup__71->SetBinError(7,0.001289178);
   sumratioup__71->SetBinError(8,0.001233499);
   sumratioup__71->SetBinError(9,0.001515015);
   sumratioup__71->SetBinError(10,0.001419142);
   sumratioup__71->SetBinError(11,0.001344666);
   sumratioup__71->SetBinError(12,0.001184138);
   sumratioup__71->SetBinError(13,0.001789378);
   sumratioup__71->SetBinError(14,0.001389341);
   sumratioup__71->SetBinError(15,0.001129792);
   sumratioup__71->SetBinError(16,0.001515273);
   sumratioup__71->SetBinError(17,0.0009230433);
   sumratioup__71->SetBinError(18,0.0008504327);
   sumratioup__71->SetBinError(19,0.0007335546);
   sumratioup__71->SetBinError(20,0.0003978978);
   sumratioup__71->SetEntries(85);
   sumratioup__71->SetStats(0);

   ci = 1185;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratioup__71->SetFillColor(ci);
   sumratioup__71->SetFillStyle(3003);
   sumratioup__71->GetXaxis()->SetTitle("Leading lep #eta");
   sumratioup__71->GetXaxis()->SetLabelFont(42);
   sumratioup__71->GetXaxis()->SetLabelOffset(0.007);
   sumratioup__71->GetXaxis()->SetTitleSize(0.05);
   sumratioup__71->GetXaxis()->SetTickLength(0.025);
   sumratioup__71->GetXaxis()->SetTitleFont(42);
   sumratioup__71->GetYaxis()->SetTitle("a.u.");
   sumratioup__71->GetYaxis()->SetLabelFont(42);
   sumratioup__71->GetYaxis()->SetLabelOffset(0.007);
   sumratioup__71->GetYaxis()->SetTitleSize(0.05);
   sumratioup__71->GetYaxis()->SetTickLength(0.025);
   sumratioup__71->GetYaxis()->SetTitleFont(42);
   sumratioup__71->GetZaxis()->SetLabelFont(42);
   sumratioup__71->GetZaxis()->SetLabelOffset(0.007);
   sumratioup__71->GetZaxis()->SetTitleSize(0.05);
   sumratioup__71->GetZaxis()->SetTickLength(0.025);
   sumratioup__71->GetZaxis()->SetTitleFont(42);
   sumratioup__71->Draw("hist same");
   
   TH1D *sumratiodown__72 = new TH1D("sumratiodown__72","",20,-2.5,2.5);
   sumratiodown__72->SetBinContent(1,-0.05669244);
   sumratiodown__72->SetBinContent(2,-0.04589513);
   sumratiodown__72->SetBinContent(3,-0.03533432);
   sumratiodown__72->SetBinContent(4,-0.05760607);
   sumratiodown__72->SetBinContent(5,-0.02370521);
   sumratiodown__72->SetBinContent(6,-0.02128557);
   sumratiodown__72->SetBinContent(7,-0.01890885);
   sumratiodown__72->SetBinContent(8,-0.01621301);
   sumratiodown__72->SetBinContent(9,-0.01852839);
   sumratiodown__72->SetBinContent(10,-0.01671861);
   sumratiodown__72->SetBinContent(11,-0.01564765);
   sumratiodown__72->SetBinContent(12,-0.01487582);
   sumratiodown__72->SetBinContent(13,-0.02276934);
   sumratiodown__72->SetBinContent(14,-0.02100037);
   sumratiodown__72->SetBinContent(15,-0.01975954);
   sumratiodown__72->SetBinContent(16,-0.03279341);
   sumratiodown__72->SetBinContent(17,-0.02682193);
   sumratiodown__72->SetBinContent(18,-0.03259362);
   sumratiodown__72->SetBinContent(19,-0.04430514);
   sumratiodown__72->SetBinContent(20,-0.05276857);
   sumratiodown__72->SetBinError(1,0.0004078691);
   sumratiodown__72->SetBinError(2,0.0008443908);
   sumratiodown__72->SetBinError(3,0.0009565064);
   sumratiodown__72->SetBinError(4,0.002067464);
   sumratiodown__72->SetBinError(5,0.001048892);
   sumratiodown__72->SetBinError(6,0.001235035);
   sumratiodown__72->SetBinError(7,0.001289178);
   sumratiodown__72->SetBinError(8,0.001233499);
   sumratiodown__72->SetBinError(9,0.001515015);
   sumratiodown__72->SetBinError(10,0.001419142);
   sumratiodown__72->SetBinError(11,0.001344666);
   sumratiodown__72->SetBinError(12,0.001184138);
   sumratiodown__72->SetBinError(13,0.001789378);
   sumratiodown__72->SetBinError(14,0.001389341);
   sumratiodown__72->SetBinError(15,0.001129792);
   sumratiodown__72->SetBinError(16,0.001515273);
   sumratiodown__72->SetBinError(17,0.0009230433);
   sumratiodown__72->SetBinError(18,0.0008504327);
   sumratiodown__72->SetBinError(19,0.0007335546);
   sumratiodown__72->SetBinError(20,0.0003978978);
   sumratiodown__72->SetEntries(85);
   sumratiodown__72->SetStats(0);

   ci = 1185;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratiodown__72->SetFillColor(ci);
   sumratiodown__72->SetFillStyle(3003);
   sumratiodown__72->GetXaxis()->SetTitle("Leading lep #eta");
   sumratiodown__72->GetXaxis()->SetLabelFont(42);
   sumratiodown__72->GetXaxis()->SetLabelOffset(0.007);
   sumratiodown__72->GetXaxis()->SetTitleSize(0.05);
   sumratiodown__72->GetXaxis()->SetTickLength(0.025);
   sumratiodown__72->GetXaxis()->SetTitleFont(42);
   sumratiodown__72->GetYaxis()->SetTitle("a.u.");
   sumratiodown__72->GetYaxis()->SetLabelFont(42);
   sumratiodown__72->GetYaxis()->SetLabelOffset(0.007);
   sumratiodown__72->GetYaxis()->SetTitleSize(0.05);
   sumratiodown__72->GetYaxis()->SetTickLength(0.025);
   sumratiodown__72->GetYaxis()->SetTitleFont(42);
   sumratiodown__72->GetZaxis()->SetLabelFont(42);
   sumratiodown__72->GetZaxis()->SetLabelOffset(0.007);
   sumratiodown__72->GetZaxis()->SetTitleSize(0.05);
   sumratiodown__72->GetZaxis()->SetTickLength(0.025);
   sumratiodown__72->GetZaxis()->SetTitleFont(42);
   sumratiodown__72->Draw("hist same");
   
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
   0.06084335,
   -0.06791329,
   0.02855659,
   -0.02729666,
   0.04983675,
   -0.0199573,
   0.006109834,
   0.02050197,
   -0.0285728,
   -0.03316039,
   -0.0197559,
   0.04165256,
   -0.008447468,
   0.007641912,
   0.01183224,
   -0.02424777,
   0.01305139,
   0.02017069,
   0.09550464,
   -0.05656379};
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
   0.08334772,
   0.04885462,
   0.04230916,
   0.03573315,
   0.03343362,
   0.02820924,
   0.02636724,
   0.02513826,
   0.02365819,
   0.0231649,
   0.02318198,
   0.02482942,
   0.0243808,
   0.02678724,
   0.02887416,
   0.03154159,
   0.03724051,
   0.0429189,
   0.05583209,
   0.07677575};
   TGraphErrors *gre = new TGraphErrors(20,Graph0_fx1006,Graph0_fy1006,Graph0_fex1006,Graph0_fey1006);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1006 = new TH1F("Graph_Graph1006","Graph",100,-2.85,2.85);
   Graph_Graph1006->SetMinimum(-0.1618072);
   Graph_Graph1006->SetMaximum(0.1798044);
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
