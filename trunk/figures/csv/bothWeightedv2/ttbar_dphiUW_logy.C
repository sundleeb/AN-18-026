void ttbar_dphiUW_logy()
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
   pad1->Range(-0.58875,-3.247808,3.33625,1.379346);
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
   h->SetMinimum(0.001587675);
   h->SetMaximum(6.59169);
   
   TH1F *h_stack_14 = new TH1F("h_stack_14","",20,0,3.14);
   h_stack_14->SetMinimum(0.0005651866);
   h_stack_14->SetMaximum(11.36175);
   h_stack_14->SetDirectory(0);
   h_stack_14->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h_stack_14->SetLineColor(ci);
   h_stack_14->GetXaxis()->SetLabelFont(42);
   h_stack_14->GetXaxis()->SetLabelOffset(0.007);
   h_stack_14->GetXaxis()->SetTitleSize(0.05);
   h_stack_14->GetXaxis()->SetTickLength(0.025);
   h_stack_14->GetXaxis()->SetTitleFont(42);
   h_stack_14->GetYaxis()->SetTitle("a.u.");
   h_stack_14->GetYaxis()->SetLabelFont(42);
   h_stack_14->GetYaxis()->SetLabelOffset(0.007);
   h_stack_14->GetYaxis()->SetTitleSize(0.05);
   h_stack_14->GetYaxis()->SetTickLength(0.025);
   h_stack_14->GetYaxis()->SetTitleOffset(1.5);
   h_stack_14->GetYaxis()->SetTitleFont(42);
   h_stack_14->GetZaxis()->SetLabelFont(42);
   h_stack_14->GetZaxis()->SetLabelOffset(0.007);
   h_stack_14->GetZaxis()->SetTitleSize(0.05);
   h_stack_14->GetZaxis()->SetTickLength(0.025);
   h_stack_14->GetZaxis()->SetTitleFont(42);
   h->SetHistogram(h_stack_14);
   
   
   TH1D *h_dphiUW_QCD__157 = new TH1D("h_dphiUW_QCD__157","",20,0,3.14);
   h_dphiUW_QCD__157->SetBinContent(1,0.0006324223);
   h_dphiUW_QCD__157->SetBinContent(2,0.001059322);
   h_dphiUW_QCD__157->SetBinContent(3,0.0003599157);
   h_dphiUW_QCD__157->SetBinContent(4,0.0004622145);
   h_dphiUW_QCD__157->SetBinContent(5,0.0004285045);
   h_dphiUW_QCD__157->SetBinContent(6,0.0001784563);
   h_dphiUW_QCD__157->SetBinContent(7,0.0004026872);
   h_dphiUW_QCD__157->SetBinContent(9,0.0008530968);
   h_dphiUW_QCD__157->SetBinContent(11,0.0002178485);
   h_dphiUW_QCD__157->SetBinContent(12,0.0025191);
   h_dphiUW_QCD__157->SetBinContent(13,2.582028e-05);
   h_dphiUW_QCD__157->SetBinContent(14,0.0005078625);
   h_dphiUW_QCD__157->SetBinContent(17,0.002521156);
   h_dphiUW_QCD__157->SetBinContent(18,0.0005745276);
   h_dphiUW_QCD__157->SetBinContent(19,0.0008426245);
   h_dphiUW_QCD__157->SetBinError(1,0.0004709584);
   h_dphiUW_QCD__157->SetBinError(2,0.0006476225);
   h_dphiUW_QCD__157->SetBinError(3,0.0002402041);
   h_dphiUW_QCD__157->SetBinError(4,0.0003813532);
   h_dphiUW_QCD__157->SetBinError(5,0.0003965768);
   h_dphiUW_QCD__157->SetBinError(6,0.0001784563);
   h_dphiUW_QCD__157->SetBinError(7,0.0004026872);
   h_dphiUW_QCD__157->SetBinError(9,0.0008530968);
   h_dphiUW_QCD__157->SetBinError(11,0.0002178485);
   h_dphiUW_QCD__157->SetBinError(12,0.001788107);
   h_dphiUW_QCD__157->SetBinError(13,2.582028e-05);
   h_dphiUW_QCD__157->SetBinError(14,0.0005078625);
   h_dphiUW_QCD__157->SetBinError(17,0.001782758);
   h_dphiUW_QCD__157->SetBinError(18,0.0005745276);
   h_dphiUW_QCD__157->SetBinError(19,0.0008426245);
   h_dphiUW_QCD__157->SetEntries(25);
   h_dphiUW_QCD__157->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_dphiUW_QCD__157->SetFillColor(ci);
   h_dphiUW_QCD__157->GetXaxis()->SetTitle("min#Delta#phi(jet,U(l))");
   h_dphiUW_QCD__157->GetXaxis()->SetLabelFont(42);
   h_dphiUW_QCD__157->GetXaxis()->SetLabelOffset(0.007);
   h_dphiUW_QCD__157->GetXaxis()->SetTitleSize(0.05);
   h_dphiUW_QCD__157->GetXaxis()->SetTickLength(0.025);
   h_dphiUW_QCD__157->GetXaxis()->SetTitleFont(42);
   h_dphiUW_QCD__157->GetYaxis()->SetTitle("a.u.");
   h_dphiUW_QCD__157->GetYaxis()->SetLabelFont(42);
   h_dphiUW_QCD__157->GetYaxis()->SetLabelOffset(0.007);
   h_dphiUW_QCD__157->GetYaxis()->SetTitleSize(0.05);
   h_dphiUW_QCD__157->GetYaxis()->SetTickLength(0.025);
   h_dphiUW_QCD__157->GetYaxis()->SetTitleFont(42);
   h_dphiUW_QCD__157->GetZaxis()->SetLabelFont(42);
   h_dphiUW_QCD__157->GetZaxis()->SetLabelOffset(0.007);
   h_dphiUW_QCD__157->GetZaxis()->SetTitleSize(0.05);
   h_dphiUW_QCD__157->GetZaxis()->SetTickLength(0.025);
   h_dphiUW_QCD__157->GetZaxis()->SetTitleFont(42);
   h->Add(h_dphiUW_QCD,"");
   
   TH1D *h_dphiUW_Diboson__158 = new TH1D("h_dphiUW_Diboson__158","",20,0,3.14);
   h_dphiUW_Diboson__158->SetBinContent(1,0.0006747847);
   h_dphiUW_Diboson__158->SetBinContent(2,0.001022948);
   h_dphiUW_Diboson__158->SetBinContent(3,0.0005031882);
   h_dphiUW_Diboson__158->SetBinContent(4,0.0006261843);
   h_dphiUW_Diboson__158->SetBinContent(5,0.0009911485);
   h_dphiUW_Diboson__158->SetBinContent(6,0.00133169);
   h_dphiUW_Diboson__158->SetBinContent(7,0.001082226);
   h_dphiUW_Diboson__158->SetBinContent(8,0.0004592351);
   h_dphiUW_Diboson__158->SetBinContent(9,0.001375246);
   h_dphiUW_Diboson__158->SetBinContent(10,0.0007095723);
   h_dphiUW_Diboson__158->SetBinContent(11,0.001130761);
   h_dphiUW_Diboson__158->SetBinContent(12,0.001792936);
   h_dphiUW_Diboson__158->SetBinContent(13,0.002052639);
   h_dphiUW_Diboson__158->SetBinContent(14,0.003226842);
   h_dphiUW_Diboson__158->SetBinContent(15,0.002641597);
   h_dphiUW_Diboson__158->SetBinContent(16,0.002671408);
   h_dphiUW_Diboson__158->SetBinContent(17,0.002145901);
   h_dphiUW_Diboson__158->SetBinContent(18,0.001952693);
   h_dphiUW_Diboson__158->SetBinContent(19,0.003447438);
   h_dphiUW_Diboson__158->SetBinContent(20,0.006954743);
   h_dphiUW_Diboson__158->SetBinError(1,0.0003775338);
   h_dphiUW_Diboson__158->SetBinError(2,0.0004895229);
   h_dphiUW_Diboson__158->SetBinError(3,0.0002515995);
   h_dphiUW_Diboson__158->SetBinError(4,0.0002958457);
   h_dphiUW_Diboson__158->SetBinError(5,0.0004522692);
   h_dphiUW_Diboson__158->SetBinError(6,0.0005525561);
   h_dphiUW_Diboson__158->SetBinError(7,0.0003940602);
   h_dphiUW_Diboson__158->SetBinError(8,0.0002457857);
   h_dphiUW_Diboson__158->SetBinError(9,0.0005084272);
   h_dphiUW_Diboson__158->SetBinError(10,0.0003416816);
   h_dphiUW_Diboson__158->SetBinError(11,0.0005116758);
   h_dphiUW_Diboson__158->SetBinError(12,0.0005557375);
   h_dphiUW_Diboson__158->SetBinError(13,0.0006303389);
   h_dphiUW_Diboson__158->SetBinError(14,0.0008284733);
   h_dphiUW_Diboson__158->SetBinError(15,0.0007279604);
   h_dphiUW_Diboson__158->SetBinError(16,0.0006931117);
   h_dphiUW_Diboson__158->SetBinError(17,0.0006723663);
   h_dphiUW_Diboson__158->SetBinError(18,0.0005803495);
   h_dphiUW_Diboson__158->SetBinError(19,0.0008529318);
   h_dphiUW_Diboson__158->SetBinError(20,0.001204595);
   h_dphiUW_Diboson__158->SetEntries(227);
   h_dphiUW_Diboson__158->SetStats(0);

   ci = TColor::GetColor("#9966cc");
   h_dphiUW_Diboson__158->SetFillColor(ci);
   h_dphiUW_Diboson__158->GetXaxis()->SetTitle("min#Delta#phi(jet,U(l))");
   h_dphiUW_Diboson__158->GetXaxis()->SetLabelFont(42);
   h_dphiUW_Diboson__158->GetXaxis()->SetLabelOffset(0.007);
   h_dphiUW_Diboson__158->GetXaxis()->SetTitleSize(0.05);
   h_dphiUW_Diboson__158->GetXaxis()->SetTickLength(0.025);
   h_dphiUW_Diboson__158->GetXaxis()->SetTitleFont(42);
   h_dphiUW_Diboson__158->GetYaxis()->SetTitle("a.u.");
   h_dphiUW_Diboson__158->GetYaxis()->SetLabelFont(42);
   h_dphiUW_Diboson__158->GetYaxis()->SetLabelOffset(0.007);
   h_dphiUW_Diboson__158->GetYaxis()->SetTitleSize(0.05);
   h_dphiUW_Diboson__158->GetYaxis()->SetTickLength(0.025);
   h_dphiUW_Diboson__158->GetYaxis()->SetTitleFont(42);
   h_dphiUW_Diboson__158->GetZaxis()->SetLabelFont(42);
   h_dphiUW_Diboson__158->GetZaxis()->SetLabelOffset(0.007);
   h_dphiUW_Diboson__158->GetZaxis()->SetTitleSize(0.05);
   h_dphiUW_Diboson__158->GetZaxis()->SetTickLength(0.025);
   h_dphiUW_Diboson__158->GetZaxis()->SetTitleFont(42);
   h->Add(h_dphiUW_Diboson,"");
   
   TH1D *h_dphiUW_ZpLjets__159 = new TH1D("h_dphiUW_ZpLjets__159","",20,0,3.14);
   h_dphiUW_ZpLjets__159->SetBinContent(1,0.001469215);
   h_dphiUW_ZpLjets__159->SetBinContent(2,0.001617939);
   h_dphiUW_ZpLjets__159->SetBinContent(3,0.001715189);
   h_dphiUW_ZpLjets__159->SetBinContent(4,0.002029335);
   h_dphiUW_ZpLjets__159->SetBinContent(5,0.001787255);
   h_dphiUW_ZpLjets__159->SetBinContent(6,0.001911936);
   h_dphiUW_ZpLjets__159->SetBinContent(7,0.001875964);
   h_dphiUW_ZpLjets__159->SetBinContent(8,0.00200781);
   h_dphiUW_ZpLjets__159->SetBinContent(9,0.00194902);
   h_dphiUW_ZpLjets__159->SetBinContent(10,0.002101332);
   h_dphiUW_ZpLjets__159->SetBinContent(11,0.002185002);
   h_dphiUW_ZpLjets__159->SetBinContent(12,0.002320707);
   h_dphiUW_ZpLjets__159->SetBinContent(13,0.002204794);
   h_dphiUW_ZpLjets__159->SetBinContent(14,0.002225949);
   h_dphiUW_ZpLjets__159->SetBinContent(15,0.001935541);
   h_dphiUW_ZpLjets__159->SetBinContent(16,0.002200199);
   h_dphiUW_ZpLjets__159->SetBinContent(17,0.00256014);
   h_dphiUW_ZpLjets__159->SetBinContent(18,0.002214438);
   h_dphiUW_ZpLjets__159->SetBinContent(19,0.002660013);
   h_dphiUW_ZpLjets__159->SetBinContent(20,0.008442024);
   h_dphiUW_ZpLjets__159->SetBinError(1,8.046663e-05);
   h_dphiUW_ZpLjets__159->SetBinError(2,8.805983e-05);
   h_dphiUW_ZpLjets__159->SetBinError(3,8.699386e-05);
   h_dphiUW_ZpLjets__159->SetBinError(4,0.0001021329);
   h_dphiUW_ZpLjets__159->SetBinError(5,9.27382e-05);
   h_dphiUW_ZpLjets__159->SetBinError(6,9.962751e-05);
   h_dphiUW_ZpLjets__159->SetBinError(7,9.945341e-05);
   h_dphiUW_ZpLjets__159->SetBinError(8,0.0001066501);
   h_dphiUW_ZpLjets__159->SetBinError(9,0.00010826);
   h_dphiUW_ZpLjets__159->SetBinError(10,0.0001107742);
   h_dphiUW_ZpLjets__159->SetBinError(11,0.0001211116);
   h_dphiUW_ZpLjets__159->SetBinError(12,0.000131826);
   h_dphiUW_ZpLjets__159->SetBinError(13,0.0001311539);
   h_dphiUW_ZpLjets__159->SetBinError(14,0.0001449574);
   h_dphiUW_ZpLjets__159->SetBinError(15,0.000134025);
   h_dphiUW_ZpLjets__159->SetBinError(16,0.0001558158);
   h_dphiUW_ZpLjets__159->SetBinError(17,0.000178466);
   h_dphiUW_ZpLjets__159->SetBinError(18,0.0001593764);
   h_dphiUW_ZpLjets__159->SetBinError(19,0.0001821479);
   h_dphiUW_ZpLjets__159->SetBinError(20,0.0003636443);
   h_dphiUW_ZpLjets__159->SetEntries(24915);
   h_dphiUW_ZpLjets__159->SetStats(0);

   ci = TColor::GetColor("#3399cc");
   h_dphiUW_ZpLjets__159->SetFillColor(ci);
   h_dphiUW_ZpLjets__159->GetXaxis()->SetTitle("min#Delta#phi(jet,U(l))");
   h_dphiUW_ZpLjets__159->GetXaxis()->SetLabelFont(42);
   h_dphiUW_ZpLjets__159->GetXaxis()->SetLabelOffset(0.007);
   h_dphiUW_ZpLjets__159->GetXaxis()->SetTitleSize(0.05);
   h_dphiUW_ZpLjets__159->GetXaxis()->SetTickLength(0.025);
   h_dphiUW_ZpLjets__159->GetXaxis()->SetTitleFont(42);
   h_dphiUW_ZpLjets__159->GetYaxis()->SetTitle("a.u.");
   h_dphiUW_ZpLjets__159->GetYaxis()->SetLabelFont(42);
   h_dphiUW_ZpLjets__159->GetYaxis()->SetLabelOffset(0.007);
   h_dphiUW_ZpLjets__159->GetYaxis()->SetTitleSize(0.05);
   h_dphiUW_ZpLjets__159->GetYaxis()->SetTickLength(0.025);
   h_dphiUW_ZpLjets__159->GetYaxis()->SetTitleFont(42);
   h_dphiUW_ZpLjets__159->GetZaxis()->SetLabelFont(42);
   h_dphiUW_ZpLjets__159->GetZaxis()->SetLabelOffset(0.007);
   h_dphiUW_ZpLjets__159->GetZaxis()->SetTitleSize(0.05);
   h_dphiUW_ZpLjets__159->GetZaxis()->SetTickLength(0.025);
   h_dphiUW_ZpLjets__159->GetZaxis()->SetTitleFont(42);
   h->Add(h_dphiUW_Z+jets,"");
   
   TH1D *h_dphiUW_WpLjets__160 = new TH1D("h_dphiUW_WpLjets__160","",20,0,3.14);
   h_dphiUW_WpLjets__160->SetBinContent(1,0.001804153);
   h_dphiUW_WpLjets__160->SetBinContent(2,0.001514798);
   h_dphiUW_WpLjets__160->SetBinContent(3,0.001591686);
   h_dphiUW_WpLjets__160->SetBinContent(4,0.001481144);
   h_dphiUW_WpLjets__160->SetBinContent(5,0.001198852);
   h_dphiUW_WpLjets__160->SetBinContent(6,0.001820958);
   h_dphiUW_WpLjets__160->SetBinContent(7,0.001356101);
   h_dphiUW_WpLjets__160->SetBinContent(8,0.001413915);
   h_dphiUW_WpLjets__160->SetBinContent(9,0.002010052);
   h_dphiUW_WpLjets__160->SetBinContent(10,0.001823857);
   h_dphiUW_WpLjets__160->SetBinContent(11,0.002409441);
   h_dphiUW_WpLjets__160->SetBinContent(12,0.001827245);
   h_dphiUW_WpLjets__160->SetBinContent(13,0.002233962);
   h_dphiUW_WpLjets__160->SetBinContent(14,0.002257227);
   h_dphiUW_WpLjets__160->SetBinContent(15,0.001863151);
   h_dphiUW_WpLjets__160->SetBinContent(16,0.001865175);
   h_dphiUW_WpLjets__160->SetBinContent(17,0.002124711);
   h_dphiUW_WpLjets__160->SetBinContent(18,0.002667497);
   h_dphiUW_WpLjets__160->SetBinContent(19,0.004119806);
   h_dphiUW_WpLjets__160->SetBinContent(20,0.008299044);
   h_dphiUW_WpLjets__160->SetBinError(1,0.0002726021);
   h_dphiUW_WpLjets__160->SetBinError(2,0.0002627731);
   h_dphiUW_WpLjets__160->SetBinError(3,0.0002655129);
   h_dphiUW_WpLjets__160->SetBinError(4,0.0002397519);
   h_dphiUW_WpLjets__160->SetBinError(5,0.0002167694);
   h_dphiUW_WpLjets__160->SetBinError(6,0.0002893492);
   h_dphiUW_WpLjets__160->SetBinError(7,0.0002363374);
   h_dphiUW_WpLjets__160->SetBinError(8,0.0002650238);
   h_dphiUW_WpLjets__160->SetBinError(9,0.0003195045);
   h_dphiUW_WpLjets__160->SetBinError(10,0.0002949803);
   h_dphiUW_WpLjets__160->SetBinError(11,0.0003715403);
   h_dphiUW_WpLjets__160->SetBinError(12,0.0003159158);
   h_dphiUW_WpLjets__160->SetBinError(13,0.0003628412);
   h_dphiUW_WpLjets__160->SetBinError(14,0.0003554232);
   h_dphiUW_WpLjets__160->SetBinError(15,0.00034149);
   h_dphiUW_WpLjets__160->SetBinError(16,0.0003440447);
   h_dphiUW_WpLjets__160->SetBinError(17,0.0003788563);
   h_dphiUW_WpLjets__160->SetBinError(18,0.0004657685);
   h_dphiUW_WpLjets__160->SetBinError(19,0.0006127735);
   h_dphiUW_WpLjets__160->SetBinError(20,0.0007986481);
   h_dphiUW_WpLjets__160->SetEntries(3309);
   h_dphiUW_WpLjets__160->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   h_dphiUW_WpLjets__160->SetFillColor(ci);
   h_dphiUW_WpLjets__160->GetXaxis()->SetTitle("min#Delta#phi(jet,U(l))");
   h_dphiUW_WpLjets__160->GetXaxis()->SetLabelFont(42);
   h_dphiUW_WpLjets__160->GetXaxis()->SetLabelOffset(0.007);
   h_dphiUW_WpLjets__160->GetXaxis()->SetTitleSize(0.05);
   h_dphiUW_WpLjets__160->GetXaxis()->SetTickLength(0.025);
   h_dphiUW_WpLjets__160->GetXaxis()->SetTitleFont(42);
   h_dphiUW_WpLjets__160->GetYaxis()->SetTitle("a.u.");
   h_dphiUW_WpLjets__160->GetYaxis()->SetLabelFont(42);
   h_dphiUW_WpLjets__160->GetYaxis()->SetLabelOffset(0.007);
   h_dphiUW_WpLjets__160->GetYaxis()->SetTitleSize(0.05);
   h_dphiUW_WpLjets__160->GetYaxis()->SetTickLength(0.025);
   h_dphiUW_WpLjets__160->GetYaxis()->SetTitleFont(42);
   h_dphiUW_WpLjets__160->GetZaxis()->SetLabelFont(42);
   h_dphiUW_WpLjets__160->GetZaxis()->SetLabelOffset(0.007);
   h_dphiUW_WpLjets__160->GetZaxis()->SetTitleSize(0.05);
   h_dphiUW_WpLjets__160->GetZaxis()->SetTickLength(0.025);
   h_dphiUW_WpLjets__160->GetZaxis()->SetTitleFont(42);
   h->Add(h_dphiUW_W+jets,"");
   
   TH1D *h_dphiUW_TopsPoPLFcP__161 = new TH1D("h_dphiUW_TopsPoPLFcP__161","",20,0,3.14);
   h_dphiUW_TopsPoPLFcP__161->SetBinContent(1,0.02173111);
   h_dphiUW_TopsPoPLFcP__161->SetBinContent(2,0.02177744);
   h_dphiUW_TopsPoPLFcP__161->SetBinContent(3,0.02171729);
   h_dphiUW_TopsPoPLFcP__161->SetBinContent(4,0.02187254);
   h_dphiUW_TopsPoPLFcP__161->SetBinContent(5,0.02253576);
   h_dphiUW_TopsPoPLFcP__161->SetBinContent(6,0.02245852);
   h_dphiUW_TopsPoPLFcP__161->SetBinContent(7,0.02171474);
   h_dphiUW_TopsPoPLFcP__161->SetBinContent(8,0.01962116);
   h_dphiUW_TopsPoPLFcP__161->SetBinContent(9,0.01993225);
   h_dphiUW_TopsPoPLFcP__161->SetBinContent(10,0.01964245);
   h_dphiUW_TopsPoPLFcP__161->SetBinContent(11,0.01669176);
   h_dphiUW_TopsPoPLFcP__161->SetBinContent(12,0.01602308);
   h_dphiUW_TopsPoPLFcP__161->SetBinContent(13,0.01554624);
   h_dphiUW_TopsPoPLFcP__161->SetBinContent(14,0.01395314);
   h_dphiUW_TopsPoPLFcP__161->SetBinContent(15,0.01235478);
   h_dphiUW_TopsPoPLFcP__161->SetBinContent(16,0.01070035);
   h_dphiUW_TopsPoPLFcP__161->SetBinContent(17,0.00979596);
   h_dphiUW_TopsPoPLFcP__161->SetBinContent(18,0.008677884);
   h_dphiUW_TopsPoPLFcP__161->SetBinContent(19,0.006601212);
   h_dphiUW_TopsPoPLFcP__161->SetBinContent(20,0.004731493);
   h_dphiUW_TopsPoPLFcP__161->SetBinError(1,0.0004701918);
   h_dphiUW_TopsPoPLFcP__161->SetBinError(2,0.0004746247);
   h_dphiUW_TopsPoPLFcP__161->SetBinError(3,0.0004812713);
   h_dphiUW_TopsPoPLFcP__161->SetBinError(4,0.0004310404);
   h_dphiUW_TopsPoPLFcP__161->SetBinError(5,0.0004704271);
   h_dphiUW_TopsPoPLFcP__161->SetBinError(6,0.0004988691);
   h_dphiUW_TopsPoPLFcP__161->SetBinError(7,0.0005258146);
   h_dphiUW_TopsPoPLFcP__161->SetBinError(8,0.0004411568);
   h_dphiUW_TopsPoPLFcP__161->SetBinError(9,0.0004741666);
   h_dphiUW_TopsPoPLFcP__161->SetBinError(10,0.0004989295);
   h_dphiUW_TopsPoPLFcP__161->SetBinError(11,0.0004306006);
   h_dphiUW_TopsPoPLFcP__161->SetBinError(12,0.0004550642);
   h_dphiUW_TopsPoPLFcP__161->SetBinError(13,0.0004732941);
   h_dphiUW_TopsPoPLFcP__161->SetBinError(14,0.0004203064);
   h_dphiUW_TopsPoPLFcP__161->SetBinError(15,0.0003865903);
   h_dphiUW_TopsPoPLFcP__161->SetBinError(16,0.0003679935);
   h_dphiUW_TopsPoPLFcP__161->SetBinError(17,0.0003803443);
   h_dphiUW_TopsPoPLFcP__161->SetBinError(18,0.0003718611);
   h_dphiUW_TopsPoPLFcP__161->SetBinError(19,0.0002865866);
   h_dphiUW_TopsPoPLFcP__161->SetBinError(20,0.0002807806);
   h_dphiUW_TopsPoPLFcP__161->SetEntries(45754);
   h_dphiUW_TopsPoPLFcP__161->SetStats(0);

   ci = TColor::GetColor("#cc33cc");
   h_dphiUW_TopsPoPLFcP__161->SetFillColor(ci);
   h_dphiUW_TopsPoPLFcP__161->GetXaxis()->SetTitle("min#Delta#phi(jet,U(l))");
   h_dphiUW_TopsPoPLFcP__161->GetXaxis()->SetLabelFont(42);
   h_dphiUW_TopsPoPLFcP__161->GetXaxis()->SetLabelOffset(0.007);
   h_dphiUW_TopsPoPLFcP__161->GetXaxis()->SetTitleSize(0.05);
   h_dphiUW_TopsPoPLFcP__161->GetXaxis()->SetTickLength(0.025);
   h_dphiUW_TopsPoPLFcP__161->GetXaxis()->SetTitleFont(42);
   h_dphiUW_TopsPoPLFcP__161->GetYaxis()->SetTitle("a.u.");
   h_dphiUW_TopsPoPLFcP__161->GetYaxis()->SetLabelFont(42);
   h_dphiUW_TopsPoPLFcP__161->GetYaxis()->SetLabelOffset(0.007);
   h_dphiUW_TopsPoPLFcP__161->GetYaxis()->SetTitleSize(0.05);
   h_dphiUW_TopsPoPLFcP__161->GetYaxis()->SetTickLength(0.025);
   h_dphiUW_TopsPoPLFcP__161->GetYaxis()->SetTitleFont(42);
   h_dphiUW_TopsPoPLFcP__161->GetZaxis()->SetLabelFont(42);
   h_dphiUW_TopsPoPLFcP__161->GetZaxis()->SetLabelOffset(0.007);
   h_dphiUW_TopsPoPLFcP__161->GetZaxis()->SetTitleSize(0.05);
   h_dphiUW_TopsPoPLFcP__161->GetZaxis()->SetTickLength(0.025);
   h_dphiUW_TopsPoPLFcP__161->GetZaxis()->SetTitleFont(42);
   h->Add(h_dphiUW_Top (LF),"");
   
   TH1D *h_dphiUW_TopsPoPHFcP__162 = new TH1D("h_dphiUW_TopsPoPHFcP__162","",20,0,3.14);
   h_dphiUW_TopsPoPHFcP__162->SetBinContent(1,0.03530539);
   h_dphiUW_TopsPoPHFcP__162->SetBinContent(2,0.03578941);
   h_dphiUW_TopsPoPHFcP__162->SetBinContent(3,0.03496043);
   h_dphiUW_TopsPoPHFcP__162->SetBinContent(4,0.03585456);
   h_dphiUW_TopsPoPHFcP__162->SetBinContent(5,0.03578948);
   h_dphiUW_TopsPoPHFcP__162->SetBinContent(6,0.03464241);
   h_dphiUW_TopsPoPHFcP__162->SetBinContent(7,0.03128097);
   h_dphiUW_TopsPoPHFcP__162->SetBinContent(8,0.02849173);
   h_dphiUW_TopsPoPHFcP__162->SetBinContent(9,0.02507668);
   h_dphiUW_TopsPoPHFcP__162->SetBinContent(10,0.02255543);
   h_dphiUW_TopsPoPHFcP__162->SetBinContent(11,0.02037496);
   h_dphiUW_TopsPoPHFcP__162->SetBinContent(12,0.01853401);
   h_dphiUW_TopsPoPHFcP__162->SetBinContent(13,0.0165001);
   h_dphiUW_TopsPoPHFcP__162->SetBinContent(14,0.01691236);
   h_dphiUW_TopsPoPHFcP__162->SetBinContent(15,0.01584405);
   h_dphiUW_TopsPoPHFcP__162->SetBinContent(16,0.01600094);
   h_dphiUW_TopsPoPHFcP__162->SetBinContent(17,0.01725439);
   h_dphiUW_TopsPoPHFcP__162->SetBinContent(18,0.02069117);
   h_dphiUW_TopsPoPHFcP__162->SetBinContent(19,0.03109747);
   h_dphiUW_TopsPoPHFcP__162->SetBinContent(20,0.0374896);
   h_dphiUW_TopsPoPHFcP__162->SetBinError(1,0.0005754158);
   h_dphiUW_TopsPoPHFcP__162->SetBinError(2,0.0006245999);
   h_dphiUW_TopsPoPHFcP__162->SetBinError(3,0.0005651586);
   h_dphiUW_TopsPoPHFcP__162->SetBinError(4,0.0005886094);
   h_dphiUW_TopsPoPHFcP__162->SetBinError(5,0.0005927435);
   h_dphiUW_TopsPoPHFcP__162->SetBinError(6,0.0005766999);
   h_dphiUW_TopsPoPHFcP__162->SetBinError(7,0.0005467157);
   h_dphiUW_TopsPoPHFcP__162->SetBinError(8,0.00055503);
   h_dphiUW_TopsPoPHFcP__162->SetBinError(9,0.00052878);
   h_dphiUW_TopsPoPHFcP__162->SetBinError(10,0.0005123381);
   h_dphiUW_TopsPoPHFcP__162->SetBinError(11,0.0004980707);
   h_dphiUW_TopsPoPHFcP__162->SetBinError(12,0.0005103014);
   h_dphiUW_TopsPoPHFcP__162->SetBinError(13,0.0005128591);
   h_dphiUW_TopsPoPHFcP__162->SetBinError(14,0.0005209661);
   h_dphiUW_TopsPoPHFcP__162->SetBinError(15,0.0005061403);
   h_dphiUW_TopsPoPHFcP__162->SetBinError(16,0.0005112689);
   h_dphiUW_TopsPoPHFcP__162->SetBinError(17,0.0005654936);
   h_dphiUW_TopsPoPHFcP__162->SetBinError(18,0.000544722);
   h_dphiUW_TopsPoPHFcP__162->SetBinError(19,0.0006986065);
   h_dphiUW_TopsPoPHFcP__162->SetBinError(20,0.0007235977);
   h_dphiUW_TopsPoPHFcP__162->SetEntries(77950);
   h_dphiUW_TopsPoPHFcP__162->SetStats(0);

   ci = TColor::GetColor("#ff9900");
   h_dphiUW_TopsPoPHFcP__162->SetFillColor(ci);
   h_dphiUW_TopsPoPHFcP__162->GetXaxis()->SetTitle("min#Delta#phi(jet,U(l))");
   h_dphiUW_TopsPoPHFcP__162->GetXaxis()->SetLabelFont(42);
   h_dphiUW_TopsPoPHFcP__162->GetXaxis()->SetLabelOffset(0.007);
   h_dphiUW_TopsPoPHFcP__162->GetXaxis()->SetTitleSize(0.05);
   h_dphiUW_TopsPoPHFcP__162->GetXaxis()->SetTickLength(0.025);
   h_dphiUW_TopsPoPHFcP__162->GetXaxis()->SetTitleFont(42);
   h_dphiUW_TopsPoPHFcP__162->GetYaxis()->SetTitle("a.u.");
   h_dphiUW_TopsPoPHFcP__162->GetYaxis()->SetLabelFont(42);
   h_dphiUW_TopsPoPHFcP__162->GetYaxis()->SetLabelOffset(0.007);
   h_dphiUW_TopsPoPHFcP__162->GetYaxis()->SetTitleSize(0.05);
   h_dphiUW_TopsPoPHFcP__162->GetYaxis()->SetTickLength(0.025);
   h_dphiUW_TopsPoPHFcP__162->GetYaxis()->SetTitleFont(42);
   h_dphiUW_TopsPoPHFcP__162->GetZaxis()->SetLabelFont(42);
   h_dphiUW_TopsPoPHFcP__162->GetZaxis()->SetLabelOffset(0.007);
   h_dphiUW_TopsPoPHFcP__162->GetZaxis()->SetTitleSize(0.05);
   h_dphiUW_TopsPoPHFcP__162->GetZaxis()->SetTickLength(0.025);
   h_dphiUW_TopsPoPHFcP__162->GetZaxis()->SetTitleFont(42);
   h->Add(h_dphiUW_Top (HF),"");
   h->Draw("hist");
   
   TH1D *hsum__163 = new TH1D("hsum__163","",20,0,3.14);
   hsum__163->SetBinContent(1,0.06161707);
   hsum__163->SetBinContent(2,0.06278186);
   hsum__163->SetBinContent(3,0.0608477);
   hsum__163->SetBinContent(4,0.06232598);
   hsum__163->SetBinContent(5,0.062731);
   hsum__163->SetBinContent(6,0.06234397);
   hsum__163->SetBinContent(7,0.05771269);
   hsum__163->SetBinContent(8,0.05199385);
   hsum__163->SetBinContent(9,0.05119634);
   hsum__163->SetBinContent(10,0.04683264);
   hsum__163->SetBinContent(11,0.04300977);
   hsum__163->SetBinContent(12,0.04301708);
   hsum__163->SetBinContent(13,0.03856355);
   hsum__163->SetBinContent(14,0.03908338);
   hsum__163->SetBinContent(15,0.03463911);
   hsum__163->SetBinContent(16,0.03343807);
   hsum__163->SetBinContent(17,0.03640226);
   hsum__163->SetBinContent(18,0.0367782);
   hsum__163->SetBinContent(19,0.04876857);
   hsum__163->SetBinContent(20,0.0659169);
   hsum__163->SetBinError(1,0.0009986511);
   hsum__163->SetBinError(2,0.001162431);
   hsum__163->SetBinError(3,0.0008660783);
   hsum__163->SetBinError(4,0.0009127562);
   hsum__163->SetBinError(5,0.0009950157);
   hsum__163->SetBinError(6,0.001006115);
   hsum__163->SetBinError(7,0.0009790638);
   hsum__163->SetBinError(8,0.0008029321);
   hsum__163->SetBinError(9,0.001266696);
   hsum__163->SetBinError(10,0.0008529077);
   hsum__163->SetBinError(11,0.0009462936);
   hsum__163->SetBinError(12,0.002022583);
   hsum__163->SetBinError(13,0.001016799);
   hsum__163->SetBinError(14,0.001240844);
   hsum__163->SetBinError(15,0.001034473);
   hsum__163->SetBinError(16,0.001009883);
   hsum__163->SetBinError(17,0.002066429);
   hsum__163->SetBinError(18,0.00115941);
   hsum__163->SetBinError(19,0.001554465);
   hsum__163->SetBinError(20,0.001680344);
   hsum__163->SetEntries(65);
   hsum__163->SetStats(0);

   ci = 1193;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   hsum__163->SetFillColor(ci);
   hsum__163->SetFillStyle(3003);
   hsum__163->SetLineWidth(0);
   hsum__163->GetXaxis()->SetTitle("min#Delta#phi(jet,U(l))");
   hsum__163->GetXaxis()->SetLabelFont(42);
   hsum__163->GetXaxis()->SetLabelOffset(0.007);
   hsum__163->GetXaxis()->SetTitleSize(0.05);
   hsum__163->GetXaxis()->SetTickLength(0.025);
   hsum__163->GetXaxis()->SetTitleFont(42);
   hsum__163->GetYaxis()->SetTitle("a.u.");
   hsum__163->GetYaxis()->SetLabelFont(42);
   hsum__163->GetYaxis()->SetLabelOffset(0.007);
   hsum__163->GetYaxis()->SetTitleSize(0.05);
   hsum__163->GetYaxis()->SetTickLength(0.025);
   hsum__163->GetYaxis()->SetTitleFont(42);
   hsum__163->GetZaxis()->SetLabelFont(42);
   hsum__163->GetZaxis()->SetLabelOffset(0.007);
   hsum__163->GetZaxis()->SetTitleSize(0.05);
   hsum__163->GetZaxis()->SetTickLength(0.025);
   hsum__163->GetZaxis()->SetTitleFont(42);
   hsum__163->Draw("e2 same");
   
   TH1D *h_dphiUW_Data__164 = new TH1D("h_dphiUW_Data__164","",20,0,3.14);
   h_dphiUW_Data__164->SetBinContent(1,0.06444926);
   h_dphiUW_Data__164->SetBinContent(2,0.06053896);
   h_dphiUW_Data__164->SetBinContent(3,0.06397814);
   h_dphiUW_Data__164->SetBinContent(4,0.06680486);
   h_dphiUW_Data__164->SetBinContent(5,0.06426081);
   h_dphiUW_Data__164->SetBinContent(6,0.06388392);
   h_dphiUW_Data__164->SetBinContent(7,0.05921982);
   h_dphiUW_Data__164->SetBinContent(8,0.05125789);
   h_dphiUW_Data__164->SetBinContent(9,0.0516819);
   h_dphiUW_Data__164->SetBinContent(10,0.04588712);
   h_dphiUW_Data__164->SetBinContent(11,0.04329596);
   h_dphiUW_Data__164->SetBinContent(12,0.04141148);
   h_dphiUW_Data__164->SetBinContent(13,0.03787807);
   h_dphiUW_Data__164->SetBinContent(14,0.03589937);
   h_dphiUW_Data__164->SetBinContent(15,0.0336851);
   h_dphiUW_Data__164->SetBinContent(16,0.03175351);
   h_dphiUW_Data__164->SetBinContent(17,0.03198907);
   h_dphiUW_Data__164->SetBinContent(18,0.03957411);
   h_dphiUW_Data__164->SetBinContent(19,0.04635824);
   h_dphiUW_Data__164->SetBinContent(20,0.06619241);
   h_dphiUW_Data__164->SetBinError(1,0.001742508);
   h_dphiUW_Data__164->SetBinError(2,0.00168882);
   h_dphiUW_Data__164->SetBinError(3,0.001736128);
   h_dphiUW_Data__164->SetBinError(4,0.001774067);
   h_dphiUW_Data__164->SetBinError(5,0.001739959);
   h_dphiUW_Data__164->SetBinError(6,0.001734849);
   h_dphiUW_Data__164->SetBinError(7,0.001670319);
   h_dphiUW_Data__164->SetBinError(8,0.001553983);
   h_dphiUW_Data__164->SetBinError(9,0.001560397);
   h_dphiUW_Data__164->SetBinError(10,0.001470318);
   h_dphiUW_Data__164->SetBinError(11,0.001428202);
   h_dphiUW_Data__164->SetBinError(12,0.001396774);
   h_dphiUW_Data__164->SetBinError(13,0.001335857);
   h_dphiUW_Data__164->SetBinError(14,0.001300497);
   h_dphiUW_Data__164->SetBinError(15,0.001259751);
   h_dphiUW_Data__164->SetBinError(16,0.001223099);
   h_dphiUW_Data__164->SetBinError(17,0.001227628);
   h_dphiUW_Data__164->SetBinError(18,0.001365436);
   h_dphiUW_Data__164->SetBinError(19,0.001477847);
   h_dphiUW_Data__164->SetBinError(20,0.001765916);
   h_dphiUW_Data__164->SetEntries(21226);
   h_dphiUW_Data__164->SetStats(0);
   h_dphiUW_Data__164->SetLineWidth(3);
   h_dphiUW_Data__164->SetMarkerStyle(20);
   h_dphiUW_Data__164->SetMarkerSize(2);
   h_dphiUW_Data__164->GetXaxis()->SetTitle("min#Delta#phi(jet,U(l))");
   h_dphiUW_Data__164->GetXaxis()->SetLabelFont(42);
   h_dphiUW_Data__164->GetXaxis()->SetLabelOffset(0.007);
   h_dphiUW_Data__164->GetXaxis()->SetTitleSize(0.05);
   h_dphiUW_Data__164->GetXaxis()->SetTickLength(0.025);
   h_dphiUW_Data__164->GetXaxis()->SetTitleFont(42);
   h_dphiUW_Data__164->GetYaxis()->SetTitle("a.u.");
   h_dphiUW_Data__164->GetYaxis()->SetLabelFont(42);
   h_dphiUW_Data__164->GetYaxis()->SetLabelOffset(0.007);
   h_dphiUW_Data__164->GetYaxis()->SetTitleSize(0.05);
   h_dphiUW_Data__164->GetYaxis()->SetTickLength(0.025);
   h_dphiUW_Data__164->GetYaxis()->SetTitleFont(42);
   h_dphiUW_Data__164->GetZaxis()->SetLabelFont(42);
   h_dphiUW_Data__164->GetZaxis()->SetLabelOffset(0.007);
   h_dphiUW_Data__164->GetZaxis()->SetTitleSize(0.05);
   h_dphiUW_Data__164->GetZaxis()->SetTickLength(0.025);
   h_dphiUW_Data__164->GetZaxis()->SetTitleFont(42);
   h_dphiUW_Data__164->Draw("elp same");
   
   TLegend *leg = new TLegend(0.6,0.55,0.88,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("h_dphiUW_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_dphiUW_Top (HF)","Top (HF)","F");

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
   entry=leg->AddEntry("h_dphiUW_Top (LF)","Top (LF)","F");

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
   entry=leg->AddEntry("h_dphiUW_W+jets","W+jets","F");

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
   entry=leg->AddEntry("h_dphiUW_Z+jets","Z+jets","F");

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
   entry=leg->AddEntry("h_dphiUW_Diboson","Diboson","F");

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
   entry=leg->AddEntry("h_dphiUW_QCD","QCD","F");

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
   entry=leg->AddEntry("h_dphiUW_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_dphiUW_Top (HF)","Top (HF)","F");

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
   entry=leg->AddEntry("h_dphiUW_Top (LF)","Top (LF)","F");

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
   entry=leg->AddEntry("h_dphiUW_W+jets","W+jets","F");

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
   entry=leg->AddEntry("h_dphiUW_Z+jets","Z+jets","F");

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
   entry=leg->AddEntry("h_dphiUW_Diboson","Diboson","F");

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
   entry=leg->AddEntry("h_dphiUW_QCD","QCD","F");

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
   
   TH1D *ratio__165 = new TH1D("ratio__165","",20,0,3.14);
   ratio__165->SetBinContent(1,0.04596436);
   ratio__165->SetBinContent(2,-0.03572518);
   ratio__165->SetBinContent(3,0.05144715);
   ratio__165->SetBinContent(4,0.07186222);
   ratio__165->SetBinContent(5,0.02438688);
   ratio__165->SetBinContent(6,0.02470076);
   ratio__165->SetBinContent(7,0.02611446);
   ratio__165->SetBinContent(8,-0.01415467);
   ratio__165->SetBinContent(9,0.009484172);
   ratio__165->SetBinContent(10,-0.02018923);
   ratio__165->SetBinContent(11,0.006653905);
   ratio__165->SetBinContent(12,-0.03732479);
   ratio__165->SetBinContent(13,-0.01777524);
   ratio__165->SetBinContent(14,-0.08146721);
   ratio__165->SetBinContent(15,-0.0275414);
   ratio__165->SetBinContent(16,-0.05037844);
   ratio__165->SetBinContent(17,-0.1212339);
   ratio__165->SetBinContent(18,0.07602072);
   ratio__165->SetBinContent(19,-0.04942381);
   ratio__165->SetBinContent(20,0.004179478);
   ratio__165->SetBinError(1,0.0001);
   ratio__165->SetBinError(2,0.0001);
   ratio__165->SetBinError(3,0.0001);
   ratio__165->SetBinError(4,0.0001);
   ratio__165->SetBinError(5,0.0001);
   ratio__165->SetBinError(6,0.0001);
   ratio__165->SetBinError(7,0.0001);
   ratio__165->SetBinError(8,0.0001);
   ratio__165->SetBinError(9,0.0001);
   ratio__165->SetBinError(10,0.0001);
   ratio__165->SetBinError(11,0.0001);
   ratio__165->SetBinError(12,0.0001);
   ratio__165->SetBinError(13,0.0001);
   ratio__165->SetBinError(14,0.0001);
   ratio__165->SetBinError(15,0.0001);
   ratio__165->SetBinError(16,0.0001);
   ratio__165->SetBinError(17,0.0001);
   ratio__165->SetBinError(18,0.0001);
   ratio__165->SetBinError(19,0.0001);
   ratio__165->SetBinError(20,0.0001);
   ratio__165->SetMinimum(-0.48);
   ratio__165->SetMaximum(0.48);
   ratio__165->SetEntries(21246);
   ratio__165->SetStats(0);
   ratio__165->SetLineWidth(3);
   ratio__165->SetMarkerStyle(20);
   ratio__165->SetMarkerSize(2);
   ratio__165->GetXaxis()->SetTitle("min#Delta#phi(jet,U(l))");
   ratio__165->GetXaxis()->SetLabelFont(43);
   ratio__165->GetXaxis()->SetLabelOffset(0.007);
   ratio__165->GetXaxis()->SetLabelSize(30);
   ratio__165->GetXaxis()->SetTitleSize(40);
   ratio__165->GetXaxis()->SetTickLength(0.025);
   ratio__165->GetXaxis()->SetTitleOffset(5);
   ratio__165->GetXaxis()->SetTitleFont(43);
   ratio__165->GetYaxis()->SetTitle("#frac{Data-Exp}{Exp}");
   ratio__165->GetYaxis()->SetNdivisions(5);
   ratio__165->GetYaxis()->SetLabelFont(43);
   ratio__165->GetYaxis()->SetLabelOffset(0.007);
   ratio__165->GetYaxis()->SetLabelSize(30);
   ratio__165->GetYaxis()->SetTitleSize(40);
   ratio__165->GetYaxis()->SetTickLength(0.025);
   ratio__165->GetYaxis()->SetTitleOffset(2.5);
   ratio__165->GetYaxis()->SetTitleFont(43);
   ratio__165->GetZaxis()->SetLabelFont(42);
   ratio__165->GetZaxis()->SetLabelOffset(0.007);
   ratio__165->GetZaxis()->SetTitleSize(0.05);
   ratio__165->GetZaxis()->SetTickLength(0.025);
   ratio__165->GetZaxis()->SetTitleFont(42);
   ratio__165->Draw("elp");
   
   TH1D *zero__166 = new TH1D("zero__166","",20,0,3.14);
   zero__166->SetBinError(1,0.001742508);
   zero__166->SetBinError(2,0.00168882);
   zero__166->SetBinError(3,0.001736128);
   zero__166->SetBinError(4,0.001774067);
   zero__166->SetBinError(5,0.001739959);
   zero__166->SetBinError(6,0.001734849);
   zero__166->SetBinError(7,0.001670319);
   zero__166->SetBinError(8,0.001553983);
   zero__166->SetBinError(9,0.001560397);
   zero__166->SetBinError(10,0.001470318);
   zero__166->SetBinError(11,0.001428202);
   zero__166->SetBinError(12,0.001396774);
   zero__166->SetBinError(13,0.001335857);
   zero__166->SetBinError(14,0.001300497);
   zero__166->SetBinError(15,0.001259751);
   zero__166->SetBinError(16,0.001223099);
   zero__166->SetBinError(17,0.001227628);
   zero__166->SetBinError(18,0.001365436);
   zero__166->SetBinError(19,0.001477847);
   zero__166->SetBinError(20,0.001765916);
   zero__166->SetEntries(21246);
   zero__166->SetStats(0);
   zero__166->SetLineWidth(3);
   zero__166->SetMarkerStyle(20);
   zero__166->SetMarkerSize(2);
   zero__166->GetXaxis()->SetTitle("min#Delta#phi(jet,U(l))");
   zero__166->GetXaxis()->SetLabelFont(42);
   zero__166->GetXaxis()->SetLabelOffset(0.007);
   zero__166->GetXaxis()->SetTitleSize(0.05);
   zero__166->GetXaxis()->SetTickLength(0.025);
   zero__166->GetXaxis()->SetTitleFont(42);
   zero__166->GetYaxis()->SetTitle("a.u.");
   zero__166->GetYaxis()->SetLabelFont(42);
   zero__166->GetYaxis()->SetLabelOffset(0.007);
   zero__166->GetYaxis()->SetTitleSize(0.05);
   zero__166->GetYaxis()->SetTickLength(0.025);
   zero__166->GetYaxis()->SetTitleFont(42);
   zero__166->GetZaxis()->SetLabelFont(42);
   zero__166->GetZaxis()->SetLabelOffset(0.007);
   zero__166->GetZaxis()->SetTitleSize(0.05);
   zero__166->GetZaxis()->SetTickLength(0.025);
   zero__166->GetZaxis()->SetTitleFont(42);
   zero__166->Draw("hist same");
   
   TH1D *sumratioup__167 = new TH1D("sumratioup__167","",20,0,3.14);
   sumratioup__167->SetBinContent(1,0.01620738);
   sumratioup__167->SetBinContent(2,0.0185154);
   sumratioup__167->SetBinContent(3,0.01423354);
   sumratioup__167->SetBinContent(4,0.01464488);
   sumratioup__167->SetBinContent(5,0.01586163);
   sumratioup__167->SetBinContent(6,0.01613812);
   sumratioup__167->SetBinContent(7,0.01696445);
   sumratioup__167->SetBinContent(8,0.01544283);
   sumratioup__167->SetBinContent(9,0.02474192);
   sumratioup__167->SetBinContent(10,0.01821182);
   sumratioup__167->SetBinContent(11,0.02200183);
   sumratioup__167->SetBinContent(12,0.04701814);
   sumratioup__167->SetBinContent(13,0.02636685);
   sumratioup__167->SetBinContent(14,0.03174864);
   sumratioup__167->SetBinContent(15,0.02986431);
   sumratioup__167->SetBinContent(16,0.0302016);
   sumratioup__167->SetBinContent(17,0.0567665);
   sumratioup__167->SetBinContent(18,0.03152438);
   sumratioup__167->SetBinContent(19,0.03187432);
   sumratioup__167->SetBinContent(20,0.02549186);
   sumratioup__167->SetBinError(1,0.0009986511);
   sumratioup__167->SetBinError(2,0.001162431);
   sumratioup__167->SetBinError(3,0.0008660783);
   sumratioup__167->SetBinError(4,0.0009127562);
   sumratioup__167->SetBinError(5,0.0009950157);
   sumratioup__167->SetBinError(6,0.001006115);
   sumratioup__167->SetBinError(7,0.0009790638);
   sumratioup__167->SetBinError(8,0.0008029321);
   sumratioup__167->SetBinError(9,0.001266696);
   sumratioup__167->SetBinError(10,0.0008529077);
   sumratioup__167->SetBinError(11,0.0009462936);
   sumratioup__167->SetBinError(12,0.002022583);
   sumratioup__167->SetBinError(13,0.001016799);
   sumratioup__167->SetBinError(14,0.001240844);
   sumratioup__167->SetBinError(15,0.001034473);
   sumratioup__167->SetBinError(16,0.001009883);
   sumratioup__167->SetBinError(17,0.002066429);
   sumratioup__167->SetBinError(18,0.00115941);
   sumratioup__167->SetBinError(19,0.001554465);
   sumratioup__167->SetBinError(20,0.001680344);
   sumratioup__167->SetEntries(85);
   sumratioup__167->SetStats(0);

   ci = 1193;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratioup__167->SetFillColor(ci);
   sumratioup__167->SetFillStyle(3003);
   sumratioup__167->GetXaxis()->SetTitle("min#Delta#phi(jet,U(l))");
   sumratioup__167->GetXaxis()->SetLabelFont(42);
   sumratioup__167->GetXaxis()->SetLabelOffset(0.007);
   sumratioup__167->GetXaxis()->SetTitleSize(0.05);
   sumratioup__167->GetXaxis()->SetTickLength(0.025);
   sumratioup__167->GetXaxis()->SetTitleFont(42);
   sumratioup__167->GetYaxis()->SetTitle("a.u.");
   sumratioup__167->GetYaxis()->SetLabelFont(42);
   sumratioup__167->GetYaxis()->SetLabelOffset(0.007);
   sumratioup__167->GetYaxis()->SetTitleSize(0.05);
   sumratioup__167->GetYaxis()->SetTickLength(0.025);
   sumratioup__167->GetYaxis()->SetTitleFont(42);
   sumratioup__167->GetZaxis()->SetLabelFont(42);
   sumratioup__167->GetZaxis()->SetLabelOffset(0.007);
   sumratioup__167->GetZaxis()->SetTitleSize(0.05);
   sumratioup__167->GetZaxis()->SetTickLength(0.025);
   sumratioup__167->GetZaxis()->SetTitleFont(42);
   sumratioup__167->Draw("hist same");
   
   TH1D *sumratiodown__168 = new TH1D("sumratiodown__168","",20,0,3.14);
   sumratiodown__168->SetBinContent(1,-0.01620738);
   sumratiodown__168->SetBinContent(2,-0.0185154);
   sumratiodown__168->SetBinContent(3,-0.01423354);
   sumratiodown__168->SetBinContent(4,-0.01464488);
   sumratiodown__168->SetBinContent(5,-0.01586163);
   sumratiodown__168->SetBinContent(6,-0.01613812);
   sumratiodown__168->SetBinContent(7,-0.01696445);
   sumratiodown__168->SetBinContent(8,-0.01544283);
   sumratiodown__168->SetBinContent(9,-0.02474192);
   sumratiodown__168->SetBinContent(10,-0.01821182);
   sumratiodown__168->SetBinContent(11,-0.02200183);
   sumratiodown__168->SetBinContent(12,-0.04701814);
   sumratiodown__168->SetBinContent(13,-0.02636685);
   sumratiodown__168->SetBinContent(14,-0.03174864);
   sumratiodown__168->SetBinContent(15,-0.02986431);
   sumratiodown__168->SetBinContent(16,-0.0302016);
   sumratiodown__168->SetBinContent(17,-0.0567665);
   sumratiodown__168->SetBinContent(18,-0.03152438);
   sumratiodown__168->SetBinContent(19,-0.03187432);
   sumratiodown__168->SetBinContent(20,-0.02549186);
   sumratiodown__168->SetBinError(1,0.0009986511);
   sumratiodown__168->SetBinError(2,0.001162431);
   sumratiodown__168->SetBinError(3,0.0008660783);
   sumratiodown__168->SetBinError(4,0.0009127562);
   sumratiodown__168->SetBinError(5,0.0009950157);
   sumratiodown__168->SetBinError(6,0.001006115);
   sumratiodown__168->SetBinError(7,0.0009790638);
   sumratiodown__168->SetBinError(8,0.0008029321);
   sumratiodown__168->SetBinError(9,0.001266696);
   sumratiodown__168->SetBinError(10,0.0008529077);
   sumratiodown__168->SetBinError(11,0.0009462936);
   sumratiodown__168->SetBinError(12,0.002022583);
   sumratiodown__168->SetBinError(13,0.001016799);
   sumratiodown__168->SetBinError(14,0.001240844);
   sumratiodown__168->SetBinError(15,0.001034473);
   sumratiodown__168->SetBinError(16,0.001009883);
   sumratiodown__168->SetBinError(17,0.002066429);
   sumratiodown__168->SetBinError(18,0.00115941);
   sumratiodown__168->SetBinError(19,0.001554465);
   sumratiodown__168->SetBinError(20,0.001680344);
   sumratiodown__168->SetEntries(85);
   sumratiodown__168->SetStats(0);

   ci = 1193;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratiodown__168->SetFillColor(ci);
   sumratiodown__168->SetFillStyle(3003);
   sumratiodown__168->GetXaxis()->SetTitle("min#Delta#phi(jet,U(l))");
   sumratiodown__168->GetXaxis()->SetLabelFont(42);
   sumratiodown__168->GetXaxis()->SetLabelOffset(0.007);
   sumratiodown__168->GetXaxis()->SetTitleSize(0.05);
   sumratiodown__168->GetXaxis()->SetTickLength(0.025);
   sumratiodown__168->GetXaxis()->SetTitleFont(42);
   sumratiodown__168->GetYaxis()->SetTitle("a.u.");
   sumratiodown__168->GetYaxis()->SetLabelFont(42);
   sumratiodown__168->GetYaxis()->SetLabelOffset(0.007);
   sumratiodown__168->GetYaxis()->SetTitleSize(0.05);
   sumratiodown__168->GetYaxis()->SetTickLength(0.025);
   sumratiodown__168->GetYaxis()->SetTitleFont(42);
   sumratiodown__168->GetZaxis()->SetLabelFont(42);
   sumratiodown__168->GetZaxis()->SetLabelOffset(0.007);
   sumratiodown__168->GetZaxis()->SetTitleSize(0.05);
   sumratiodown__168->GetZaxis()->SetTickLength(0.025);
   sumratiodown__168->GetZaxis()->SetTitleFont(42);
   sumratiodown__168->Draw("hist same");
   
   Double_t Graph0_fx1014[20] = {
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
   Double_t Graph0_fy1014[20] = {
   0.04596436,
   -0.03572518,
   0.05144715,
   0.07186222,
   0.02438688,
   0.02470076,
   0.02611446,
   -0.01415467,
   0.009484172,
   -0.02018923,
   0.006653905,
   -0.03732479,
   -0.01777524,
   -0.08146721,
   -0.0275414,
   -0.05037844,
   -0.1212339,
   0.07602072,
   -0.04942381,
   0.004179478};
   Double_t Graph0_fex1014[20] = {
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
   Double_t Graph0_fey1014[20] = {
   0.02827964,
   0.02689981,
   0.02853235,
   0.02846432,
   0.02773683,
   0.02782705,
   0.02894198,
   0.02988783,
   0.03047868,
   0.03139516,
   0.03320645,
   0.03247023,
   0.03464039,
   0.03327493,
   0.03636789,
   0.03657806,
   0.03372395,
   0.03712624,
   0.03030326,
   0.02679003};
   TGraphErrors *gre = new TGraphErrors(20,Graph0_fx1014,Graph0_fy1014,Graph0_fex1014,Graph0_fey1014);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1014 = new TH1F("Graph_Graph1014","Graph",100,0,3.3598);
   Graph_Graph1014->SetMinimum(-0.1817683);
   Graph_Graph1014->SetMaximum(0.1399574);
   Graph_Graph1014->SetDirectory(0);
   Graph_Graph1014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1014->SetLineColor(ci);
   Graph_Graph1014->GetXaxis()->SetLabelFont(42);
   Graph_Graph1014->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1014->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1014->GetXaxis()->SetTickLength(0.025);
   Graph_Graph1014->GetXaxis()->SetTitleFont(42);
   Graph_Graph1014->GetYaxis()->SetLabelFont(42);
   Graph_Graph1014->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1014->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1014->GetYaxis()->SetTickLength(0.025);
   Graph_Graph1014->GetYaxis()->SetTitleFont(42);
   Graph_Graph1014->GetZaxis()->SetLabelFont(42);
   Graph_Graph1014->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1014->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph1014->GetZaxis()->SetTickLength(0.025);
   Graph_Graph1014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1014);
   
   gre->Draw("pe0");
   pad2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
