void ttbar_jet1CSV()
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
   pad1->Range(-0.1875,0,1.0625,0.5424993);
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
   h->SetMaximum(0.4804993);
   
   TH1F *h_stack_21 = new TH1F("h_stack_21","",10,0,1);
   h_stack_21->SetMinimum(0);
   h_stack_21->SetMaximum(0.5045243);
   h_stack_21->SetDirectory(0);
   h_stack_21->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h_stack_21->SetLineColor(ci);
   h_stack_21->GetXaxis()->SetLabelFont(42);
   h_stack_21->GetXaxis()->SetLabelOffset(0.007);
   h_stack_21->GetXaxis()->SetTitleSize(0.05);
   h_stack_21->GetXaxis()->SetTickLength(0.025);
   h_stack_21->GetXaxis()->SetTitleFont(42);
   h_stack_21->GetYaxis()->SetTitle("a.u.");
   h_stack_21->GetYaxis()->SetLabelFont(42);
   h_stack_21->GetYaxis()->SetLabelOffset(0.007);
   h_stack_21->GetYaxis()->SetTitleSize(0.05);
   h_stack_21->GetYaxis()->SetTickLength(0.025);
   h_stack_21->GetYaxis()->SetTitleOffset(1.5);
   h_stack_21->GetYaxis()->SetTitleFont(42);
   h_stack_21->GetZaxis()->SetLabelFont(42);
   h_stack_21->GetZaxis()->SetLabelOffset(0.007);
   h_stack_21->GetZaxis()->SetTitleSize(0.05);
   h_stack_21->GetZaxis()->SetTickLength(0.025);
   h_stack_21->GetZaxis()->SetTitleFont(42);
   h->SetHistogram(h_stack_21);
   
   
   TH1D *h_jet1CSV_QCD__241 = new TH1D("h_jet1CSV_QCD__241","",10,0,1);
   h_jet1CSV_QCD__241->SetBinContent(1,0.001669958);
   h_jet1CSV_QCD__241->SetBinContent(2,0.001297151);
   h_jet1CSV_QCD__241->SetBinContent(3,0.0001985037);
   h_jet1CSV_QCD__241->SetBinContent(4,0.001317617);
   h_jet1CSV_QCD__241->SetBinContent(5,0.001460061);
   h_jet1CSV_QCD__241->SetBinContent(6,0.0005098467);
   h_jet1CSV_QCD__241->SetBinContent(8,9.216642e-05);
   h_jet1CSV_QCD__241->SetBinContent(10,0.005040257);
   h_jet1CSV_QCD__241->SetBinError(1,0.001015339);
   h_jet1CSV_QCD__241->SetBinError(2,0.0006375418);
   h_jet1CSV_QCD__241->SetBinError(3,0.0001985037);
   h_jet1CSV_QCD__241->SetBinError(4,0.0007758122);
   h_jet1CSV_QCD__241->SetBinError(5,0.0009604397);
   h_jet1CSV_QCD__241->SetBinError(6,0.0005098467);
   h_jet1CSV_QCD__241->SetBinError(8,9.216642e-05);
   h_jet1CSV_QCD__241->SetBinError(10,0.002524985);
   h_jet1CSV_QCD__241->SetEntries(25);
   h_jet1CSV_QCD__241->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_jet1CSV_QCD__241->SetFillColor(ci);
   h_jet1CSV_QCD__241->GetXaxis()->SetTitle("jet 1 CSV");
   h_jet1CSV_QCD__241->GetXaxis()->SetLabelFont(42);
   h_jet1CSV_QCD__241->GetXaxis()->SetLabelOffset(0.007);
   h_jet1CSV_QCD__241->GetXaxis()->SetTitleSize(0.05);
   h_jet1CSV_QCD__241->GetXaxis()->SetTickLength(0.025);
   h_jet1CSV_QCD__241->GetXaxis()->SetTitleFont(42);
   h_jet1CSV_QCD__241->GetYaxis()->SetTitle("a.u.");
   h_jet1CSV_QCD__241->GetYaxis()->SetLabelFont(42);
   h_jet1CSV_QCD__241->GetYaxis()->SetLabelOffset(0.007);
   h_jet1CSV_QCD__241->GetYaxis()->SetTitleSize(0.05);
   h_jet1CSV_QCD__241->GetYaxis()->SetTickLength(0.025);
   h_jet1CSV_QCD__241->GetYaxis()->SetTitleFont(42);
   h_jet1CSV_QCD__241->GetZaxis()->SetLabelFont(42);
   h_jet1CSV_QCD__241->GetZaxis()->SetLabelOffset(0.007);
   h_jet1CSV_QCD__241->GetZaxis()->SetTitleSize(0.05);
   h_jet1CSV_QCD__241->GetZaxis()->SetTickLength(0.025);
   h_jet1CSV_QCD__241->GetZaxis()->SetTitleFont(42);
   h->Add(h_jet1CSV_QCD,"");
   
   TH1D *h_jet1CSV_Diboson__242 = new TH1D("h_jet1CSV_Diboson__242","",10,0,1);
   h_jet1CSV_Diboson__242->SetBinContent(1,0.007902013);
   h_jet1CSV_Diboson__242->SetBinContent(2,0.01070993);
   h_jet1CSV_Diboson__242->SetBinContent(3,0.004898623);
   h_jet1CSV_Diboson__242->SetBinContent(4,0.00384298);
   h_jet1CSV_Diboson__242->SetBinContent(5,0.002613524);
   h_jet1CSV_Diboson__242->SetBinContent(6,0.002368716);
   h_jet1CSV_Diboson__242->SetBinContent(7,0.001456544);
   h_jet1CSV_Diboson__242->SetBinContent(8,0.001323376);
   h_jet1CSV_Diboson__242->SetBinContent(9,0.0003980073);
   h_jet1CSV_Diboson__242->SetBinContent(10,0.001279463);
   h_jet1CSV_Diboson__242->SetBinError(1,0.001211187);
   h_jet1CSV_Diboson__242->SetBinError(2,0.001421911);
   h_jet1CSV_Diboson__242->SetBinError(3,0.0009606959);
   h_jet1CSV_Diboson__242->SetBinError(4,0.0008875179);
   h_jet1CSV_Diboson__242->SetBinError(5,0.0007683429);
   h_jet1CSV_Diboson__242->SetBinError(6,0.0007114388);
   h_jet1CSV_Diboson__242->SetBinError(7,0.0005740134);
   h_jet1CSV_Diboson__242->SetBinError(8,0.0005780429);
   h_jet1CSV_Diboson__242->SetBinError(9,0.0002452434);
   h_jet1CSV_Diboson__242->SetBinError(10,0.000496194);
   h_jet1CSV_Diboson__242->SetEntries(227);
   h_jet1CSV_Diboson__242->SetStats(0);

   ci = TColor::GetColor("#9966cc");
   h_jet1CSV_Diboson__242->SetFillColor(ci);
   h_jet1CSV_Diboson__242->GetXaxis()->SetTitle("jet 1 CSV");
   h_jet1CSV_Diboson__242->GetXaxis()->SetLabelFont(42);
   h_jet1CSV_Diboson__242->GetXaxis()->SetLabelOffset(0.007);
   h_jet1CSV_Diboson__242->GetXaxis()->SetTitleSize(0.05);
   h_jet1CSV_Diboson__242->GetXaxis()->SetTickLength(0.025);
   h_jet1CSV_Diboson__242->GetXaxis()->SetTitleFont(42);
   h_jet1CSV_Diboson__242->GetYaxis()->SetTitle("a.u.");
   h_jet1CSV_Diboson__242->GetYaxis()->SetLabelFont(42);
   h_jet1CSV_Diboson__242->GetYaxis()->SetLabelOffset(0.007);
   h_jet1CSV_Diboson__242->GetYaxis()->SetTitleSize(0.05);
   h_jet1CSV_Diboson__242->GetYaxis()->SetTickLength(0.025);
   h_jet1CSV_Diboson__242->GetYaxis()->SetTitleFont(42);
   h_jet1CSV_Diboson__242->GetZaxis()->SetLabelFont(42);
   h_jet1CSV_Diboson__242->GetZaxis()->SetLabelOffset(0.007);
   h_jet1CSV_Diboson__242->GetZaxis()->SetTitleSize(0.05);
   h_jet1CSV_Diboson__242->GetZaxis()->SetTickLength(0.025);
   h_jet1CSV_Diboson__242->GetZaxis()->SetTitleFont(42);
   h->Add(h_jet1CSV_Diboson,"");
   
   TH1D *h_jet1CSV_ZpLjets__243 = new TH1D("h_jet1CSV_ZpLjets__243","",10,0,1);
   h_jet1CSV_ZpLjets__243->SetBinContent(1,0.0105581);
   h_jet1CSV_ZpLjets__243->SetBinContent(2,0.0149804);
   h_jet1CSV_ZpLjets__243->SetBinContent(3,0.006136762);
   h_jet1CSV_ZpLjets__243->SetBinContent(4,0.003962296);
   h_jet1CSV_ZpLjets__243->SetBinContent(5,0.003417574);
   h_jet1CSV_ZpLjets__243->SetBinContent(6,0.002305365);
   h_jet1CSV_ZpLjets__243->SetBinContent(7,0.001793532);
   h_jet1CSV_ZpLjets__243->SetBinContent(8,0.001236405);
   h_jet1CSV_ZpLjets__243->SetBinContent(9,0.001335452);
   h_jet1CSV_ZpLjets__243->SetBinContent(10,0.001687921);
   h_jet1CSV_ZpLjets__243->SetBinError(1,0.0002993944);
   h_jet1CSV_ZpLjets__243->SetBinError(2,0.0003673727);
   h_jet1CSV_ZpLjets__243->SetBinError(3,0.0002261915);
   h_jet1CSV_ZpLjets__243->SetBinError(4,0.0001994505);
   h_jet1CSV_ZpLjets__243->SetBinError(5,0.000185805);
   h_jet1CSV_ZpLjets__243->SetBinError(6,0.0001426398);
   h_jet1CSV_ZpLjets__243->SetBinError(7,0.0001285193);
   h_jet1CSV_ZpLjets__243->SetBinError(8,0.0001016587);
   h_jet1CSV_ZpLjets__243->SetBinError(9,0.0001150635);
   h_jet1CSV_ZpLjets__243->SetBinError(10,0.0001437861);
   h_jet1CSV_ZpLjets__243->SetEntries(24915);
   h_jet1CSV_ZpLjets__243->SetStats(0);

   ci = TColor::GetColor("#3399cc");
   h_jet1CSV_ZpLjets__243->SetFillColor(ci);
   h_jet1CSV_ZpLjets__243->GetXaxis()->SetTitle("jet 1 CSV");
   h_jet1CSV_ZpLjets__243->GetXaxis()->SetLabelFont(42);
   h_jet1CSV_ZpLjets__243->GetXaxis()->SetLabelOffset(0.007);
   h_jet1CSV_ZpLjets__243->GetXaxis()->SetTitleSize(0.05);
   h_jet1CSV_ZpLjets__243->GetXaxis()->SetTickLength(0.025);
   h_jet1CSV_ZpLjets__243->GetXaxis()->SetTitleFont(42);
   h_jet1CSV_ZpLjets__243->GetYaxis()->SetTitle("a.u.");
   h_jet1CSV_ZpLjets__243->GetYaxis()->SetLabelFont(42);
   h_jet1CSV_ZpLjets__243->GetYaxis()->SetLabelOffset(0.007);
   h_jet1CSV_ZpLjets__243->GetYaxis()->SetTitleSize(0.05);
   h_jet1CSV_ZpLjets__243->GetYaxis()->SetTickLength(0.025);
   h_jet1CSV_ZpLjets__243->GetYaxis()->SetTitleFont(42);
   h_jet1CSV_ZpLjets__243->GetZaxis()->SetLabelFont(42);
   h_jet1CSV_ZpLjets__243->GetZaxis()->SetLabelOffset(0.007);
   h_jet1CSV_ZpLjets__243->GetZaxis()->SetTitleSize(0.05);
   h_jet1CSV_ZpLjets__243->GetZaxis()->SetTickLength(0.025);
   h_jet1CSV_ZpLjets__243->GetZaxis()->SetTitleFont(42);
   h->Add(h_jet1CSV_Z+jets,"");
   
   TH1D *h_jet1CSV_WpLjets__244 = new TH1D("h_jet1CSV_WpLjets__244","",10,0,1);
   h_jet1CSV_WpLjets__244->SetBinContent(1,0.0105647);
   h_jet1CSV_WpLjets__244->SetBinContent(2,0.01249913);
   h_jet1CSV_WpLjets__244->SetBinContent(3,0.007002216);
   h_jet1CSV_WpLjets__244->SetBinContent(4,0.004496839);
   h_jet1CSV_WpLjets__244->SetBinContent(5,0.003373536);
   h_jet1CSV_WpLjets__244->SetBinContent(6,0.00194438);
   h_jet1CSV_WpLjets__244->SetBinContent(7,0.001499895);
   h_jet1CSV_WpLjets__244->SetBinContent(8,0.001552581);
   h_jet1CSV_WpLjets__244->SetBinContent(9,0.001498434);
   h_jet1CSV_WpLjets__244->SetBinContent(10,0.001251066);
   h_jet1CSV_WpLjets__244->SetBinError(1,0.0007887323);
   h_jet1CSV_WpLjets__244->SetBinError(2,0.0008242009);
   h_jet1CSV_WpLjets__244->SetBinError(3,0.0006456304);
   h_jet1CSV_WpLjets__244->SetBinError(4,0.0005750342);
   h_jet1CSV_WpLjets__244->SetBinError(5,0.0004846149);
   h_jet1CSV_WpLjets__244->SetBinError(6,0.0003336262);
   h_jet1CSV_WpLjets__244->SetBinError(7,0.0003618074);
   h_jet1CSV_WpLjets__244->SetBinError(8,0.000356322);
   h_jet1CSV_WpLjets__244->SetBinError(9,0.000315267);
   h_jet1CSV_WpLjets__244->SetBinError(10,0.0002636669);
   h_jet1CSV_WpLjets__244->SetEntries(3309);
   h_jet1CSV_WpLjets__244->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   h_jet1CSV_WpLjets__244->SetFillColor(ci);
   h_jet1CSV_WpLjets__244->GetXaxis()->SetTitle("jet 1 CSV");
   h_jet1CSV_WpLjets__244->GetXaxis()->SetLabelFont(42);
   h_jet1CSV_WpLjets__244->GetXaxis()->SetLabelOffset(0.007);
   h_jet1CSV_WpLjets__244->GetXaxis()->SetTitleSize(0.05);
   h_jet1CSV_WpLjets__244->GetXaxis()->SetTickLength(0.025);
   h_jet1CSV_WpLjets__244->GetXaxis()->SetTitleFont(42);
   h_jet1CSV_WpLjets__244->GetYaxis()->SetTitle("a.u.");
   h_jet1CSV_WpLjets__244->GetYaxis()->SetLabelFont(42);
   h_jet1CSV_WpLjets__244->GetYaxis()->SetLabelOffset(0.007);
   h_jet1CSV_WpLjets__244->GetYaxis()->SetTitleSize(0.05);
   h_jet1CSV_WpLjets__244->GetYaxis()->SetTickLength(0.025);
   h_jet1CSV_WpLjets__244->GetYaxis()->SetTitleFont(42);
   h_jet1CSV_WpLjets__244->GetZaxis()->SetLabelFont(42);
   h_jet1CSV_WpLjets__244->GetZaxis()->SetLabelOffset(0.007);
   h_jet1CSV_WpLjets__244->GetZaxis()->SetTitleSize(0.05);
   h_jet1CSV_WpLjets__244->GetZaxis()->SetTickLength(0.025);
   h_jet1CSV_WpLjets__244->GetZaxis()->SetTitleFont(42);
   h->Add(h_jet1CSV_W+jets,"");
   
   TH1D *h_jet1CSV_TopsPoPLFcP__245 = new TH1D("h_jet1CSV_TopsPoPLFcP__245","",10,0,1);
   h_jet1CSV_TopsPoPLFcP__245->SetBinContent(1,0.05724676);
   h_jet1CSV_TopsPoPLFcP__245->SetBinContent(2,0.09449115);
   h_jet1CSV_TopsPoPLFcP__245->SetBinContent(3,0.04295219);
   h_jet1CSV_TopsPoPLFcP__245->SetBinContent(4,0.02886478);
   h_jet1CSV_TopsPoPLFcP__245->SetBinContent(5,0.02197153);
   h_jet1CSV_TopsPoPLFcP__245->SetBinContent(6,0.01676184);
   h_jet1CSV_TopsPoPLFcP__245->SetBinContent(7,0.01344738);
   h_jet1CSV_TopsPoPLFcP__245->SetBinContent(8,0.01147171);
   h_jet1CSV_TopsPoPLFcP__245->SetBinContent(9,0.01188168);
   h_jet1CSV_TopsPoPLFcP__245->SetBinContent(10,0.02899011);
   h_jet1CSV_TopsPoPLFcP__245->SetBinError(1,0.000729733);
   h_jet1CSV_TopsPoPLFcP__245->SetBinError(2,0.0009659214);
   h_jet1CSV_TopsPoPLFcP__245->SetBinError(3,0.000703275);
   h_jet1CSV_TopsPoPLFcP__245->SetBinError(4,0.0005973511);
   h_jet1CSV_TopsPoPLFcP__245->SetBinError(5,0.0005112767);
   h_jet1CSV_TopsPoPLFcP__245->SetBinError(6,0.0004554214);
   h_jet1CSV_TopsPoPLFcP__245->SetBinError(7,0.000425343);
   h_jet1CSV_TopsPoPLFcP__245->SetBinError(8,0.0004081547);
   h_jet1CSV_TopsPoPLFcP__245->SetBinError(9,0.0004352084);
   h_jet1CSV_TopsPoPLFcP__245->SetBinError(10,0.0006914391);
   h_jet1CSV_TopsPoPLFcP__245->SetEntries(45754);
   h_jet1CSV_TopsPoPLFcP__245->SetStats(0);

   ci = TColor::GetColor("#cc33cc");
   h_jet1CSV_TopsPoPLFcP__245->SetFillColor(ci);
   h_jet1CSV_TopsPoPLFcP__245->GetXaxis()->SetTitle("jet 1 CSV");
   h_jet1CSV_TopsPoPLFcP__245->GetXaxis()->SetLabelFont(42);
   h_jet1CSV_TopsPoPLFcP__245->GetXaxis()->SetLabelOffset(0.007);
   h_jet1CSV_TopsPoPLFcP__245->GetXaxis()->SetTitleSize(0.05);
   h_jet1CSV_TopsPoPLFcP__245->GetXaxis()->SetTickLength(0.025);
   h_jet1CSV_TopsPoPLFcP__245->GetXaxis()->SetTitleFont(42);
   h_jet1CSV_TopsPoPLFcP__245->GetYaxis()->SetTitle("a.u.");
   h_jet1CSV_TopsPoPLFcP__245->GetYaxis()->SetLabelFont(42);
   h_jet1CSV_TopsPoPLFcP__245->GetYaxis()->SetLabelOffset(0.007);
   h_jet1CSV_TopsPoPLFcP__245->GetYaxis()->SetTitleSize(0.05);
   h_jet1CSV_TopsPoPLFcP__245->GetYaxis()->SetTickLength(0.025);
   h_jet1CSV_TopsPoPLFcP__245->GetYaxis()->SetTitleFont(42);
   h_jet1CSV_TopsPoPLFcP__245->GetZaxis()->SetLabelFont(42);
   h_jet1CSV_TopsPoPLFcP__245->GetZaxis()->SetLabelOffset(0.007);
   h_jet1CSV_TopsPoPLFcP__245->GetZaxis()->SetTitleSize(0.05);
   h_jet1CSV_TopsPoPLFcP__245->GetZaxis()->SetTickLength(0.025);
   h_jet1CSV_TopsPoPLFcP__245->GetZaxis()->SetTitleFont(42);
   h->Add(h_jet1CSV_Top (LF),"");
   
   TH1D *h_jet1CSV_TopsPoPHFcP__246 = new TH1D("h_jet1CSV_TopsPoPHFcP__246","",10,0,1);
   h_jet1CSV_TopsPoPHFcP__246->SetBinContent(1,0.03716431);
   h_jet1CSV_TopsPoPHFcP__246->SetBinContent(2,0.06356179);
   h_jet1CSV_TopsPoPHFcP__246->SetBinContent(3,0.03422285);
   h_jet1CSV_TopsPoPHFcP__246->SetBinContent(4,0.02759495);
   h_jet1CSV_TopsPoPHFcP__246->SetBinContent(5,0.02467271);
   h_jet1CSV_TopsPoPHFcP__246->SetBinContent(6,0.02266566);
   h_jet1CSV_TopsPoPHFcP__246->SetBinContent(7,0.02783972);
   h_jet1CSV_TopsPoPHFcP__246->SetBinContent(8,0.03184351);
   h_jet1CSV_TopsPoPHFcP__246->SetBinContent(9,0.05887917);
   h_jet1CSV_TopsPoPHFcP__246->SetBinContent(10,0.2020009);
   h_jet1CSV_TopsPoPHFcP__246->SetBinError(1,0.0006192109);
   h_jet1CSV_TopsPoPHFcP__246->SetBinError(2,0.0008097774);
   h_jet1CSV_TopsPoPHFcP__246->SetBinError(3,0.0006131987);
   h_jet1CSV_TopsPoPHFcP__246->SetBinError(4,0.0005808687);
   h_jet1CSV_TopsPoPHFcP__246->SetBinError(5,0.0005375401);
   h_jet1CSV_TopsPoPHFcP__246->SetBinError(6,0.0005302149);
   h_jet1CSV_TopsPoPHFcP__246->SetBinError(7,0.0006356258);
   h_jet1CSV_TopsPoPHFcP__246->SetBinError(8,0.0006542281);
   h_jet1CSV_TopsPoPHFcP__246->SetBinError(9,0.0009161931);
   h_jet1CSV_TopsPoPHFcP__246->SetBinError(10,0.001553901);
   h_jet1CSV_TopsPoPHFcP__246->SetEntries(77950);
   h_jet1CSV_TopsPoPHFcP__246->SetStats(0);

   ci = TColor::GetColor("#ff9900");
   h_jet1CSV_TopsPoPHFcP__246->SetFillColor(ci);
   h_jet1CSV_TopsPoPHFcP__246->GetXaxis()->SetTitle("jet 1 CSV");
   h_jet1CSV_TopsPoPHFcP__246->GetXaxis()->SetLabelFont(42);
   h_jet1CSV_TopsPoPHFcP__246->GetXaxis()->SetLabelOffset(0.007);
   h_jet1CSV_TopsPoPHFcP__246->GetXaxis()->SetTitleSize(0.05);
   h_jet1CSV_TopsPoPHFcP__246->GetXaxis()->SetTickLength(0.025);
   h_jet1CSV_TopsPoPHFcP__246->GetXaxis()->SetTitleFont(42);
   h_jet1CSV_TopsPoPHFcP__246->GetYaxis()->SetTitle("a.u.");
   h_jet1CSV_TopsPoPHFcP__246->GetYaxis()->SetLabelFont(42);
   h_jet1CSV_TopsPoPHFcP__246->GetYaxis()->SetLabelOffset(0.007);
   h_jet1CSV_TopsPoPHFcP__246->GetYaxis()->SetTitleSize(0.05);
   h_jet1CSV_TopsPoPHFcP__246->GetYaxis()->SetTickLength(0.025);
   h_jet1CSV_TopsPoPHFcP__246->GetYaxis()->SetTitleFont(42);
   h_jet1CSV_TopsPoPHFcP__246->GetZaxis()->SetLabelFont(42);
   h_jet1CSV_TopsPoPHFcP__246->GetZaxis()->SetLabelOffset(0.007);
   h_jet1CSV_TopsPoPHFcP__246->GetZaxis()->SetTitleSize(0.05);
   h_jet1CSV_TopsPoPHFcP__246->GetZaxis()->SetTickLength(0.025);
   h_jet1CSV_TopsPoPHFcP__246->GetZaxis()->SetTitleFont(42);
   h->Add(h_jet1CSV_Top (HF),"");
   h->Draw("hist");
   
   TH1D *hsum__247 = new TH1D("hsum__247","",10,0,1);
   hsum__247->SetBinContent(1,0.1251058);
   hsum__247->SetBinContent(2,0.1975396);
   hsum__247->SetBinContent(3,0.09541114);
   hsum__247->SetBinContent(4,0.07007946);
   hsum__247->SetBinContent(5,0.05750894);
   hsum__247->SetBinContent(6,0.04655581);
   hsum__247->SetBinContent(7,0.04603708);
   hsum__247->SetBinContent(8,0.04751975);
   hsum__247->SetBinContent(9,0.07399275);
   hsum__247->SetBinContent(10,0.2402497);
   hsum__247->SetBinError(1,0.002031146);
   hsum__247->SetBinError(2,0.002198023);
   hsum__247->SetBinError(3,0.001516888);
   hsum__247->SetBinError(4,0.001566606);
   hsum__247->SetBinError(5,0.00152726);
   hsum__247->SetBinError(6,0.001177403);
   hsum__247->SetBinError(7,0.001030461);
   hsum__247->SetBinError(8,0.001036597);
   hsum__247->SetBinError(9,0.001096172);
   hsum__247->SetBinError(10,0.003099137);
   hsum__247->SetEntries(45);
   hsum__247->SetStats(0);

   ci = 1200;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   hsum__247->SetFillColor(ci);
   hsum__247->SetFillStyle(3003);
   hsum__247->SetLineWidth(0);
   hsum__247->GetXaxis()->SetTitle("jet 1 CSV");
   hsum__247->GetXaxis()->SetLabelFont(42);
   hsum__247->GetXaxis()->SetLabelOffset(0.007);
   hsum__247->GetXaxis()->SetTitleSize(0.05);
   hsum__247->GetXaxis()->SetTickLength(0.025);
   hsum__247->GetXaxis()->SetTitleFont(42);
   hsum__247->GetYaxis()->SetTitle("a.u.");
   hsum__247->GetYaxis()->SetLabelFont(42);
   hsum__247->GetYaxis()->SetLabelOffset(0.007);
   hsum__247->GetYaxis()->SetTitleSize(0.05);
   hsum__247->GetYaxis()->SetTickLength(0.025);
   hsum__247->GetYaxis()->SetTitleFont(42);
   hsum__247->GetZaxis()->SetLabelFont(42);
   hsum__247->GetZaxis()->SetLabelOffset(0.007);
   hsum__247->GetZaxis()->SetTitleSize(0.05);
   hsum__247->GetZaxis()->SetTickLength(0.025);
   hsum__247->GetZaxis()->SetTitleFont(42);
   hsum__247->Draw("e2 same");
   
   TH1D *h_jet1CSV_Data__248 = new TH1D("h_jet1CSV_Data__248","",10,0,1);
   h_jet1CSV_Data__248->SetBinContent(1,0.1217846);
   h_jet1CSV_Data__248->SetBinContent(2,0.2002261);
   h_jet1CSV_Data__248->SetBinContent(3,0.09935928);
   h_jet1CSV_Data__248->SetBinContent(4,0.07382455);
   h_jet1CSV_Data__248->SetBinContent(5,0.06336568);
   h_jet1CSV_Data__248->SetBinContent(6,0.04781871);
   h_jet1CSV_Data__248->SetBinContent(7,0.04861962);
   h_jet1CSV_Data__248->SetBinContent(8,0.04786582);
   h_jet1CSV_Data__248->SetBinContent(9,0.07109206);
   h_jet1CSV_Data__248->SetBinContent(10,0.2260435);
   h_jet1CSV_Data__248->SetBinError(1,0.002395312);
   h_jet1CSV_Data__248->SetBinError(2,0.003071329);
   h_jet1CSV_Data__248->SetBinError(3,0.002163566);
   h_jet1CSV_Data__248->SetBinError(4,0.001864946);
   h_jet1CSV_Data__248->SetBinError(5,0.001727798);
   h_jet1CSV_Data__248->SetBinError(6,0.001500945);
   h_jet1CSV_Data__248->SetBinError(7,0.001513463);
   h_jet1CSV_Data__248->SetBinError(8,0.001501684);
   h_jet1CSV_Data__248->SetBinError(9,0.001830107);
   h_jet1CSV_Data__248->SetBinError(10,0.003263337);
   h_jet1CSV_Data__248->SetEntries(21226);
   h_jet1CSV_Data__248->SetStats(0);
   h_jet1CSV_Data__248->SetLineWidth(3);
   h_jet1CSV_Data__248->SetMarkerStyle(20);
   h_jet1CSV_Data__248->SetMarkerSize(2);
   h_jet1CSV_Data__248->GetXaxis()->SetTitle("jet 1 CSV");
   h_jet1CSV_Data__248->GetXaxis()->SetLabelFont(42);
   h_jet1CSV_Data__248->GetXaxis()->SetLabelOffset(0.007);
   h_jet1CSV_Data__248->GetXaxis()->SetTitleSize(0.05);
   h_jet1CSV_Data__248->GetXaxis()->SetTickLength(0.025);
   h_jet1CSV_Data__248->GetXaxis()->SetTitleFont(42);
   h_jet1CSV_Data__248->GetYaxis()->SetTitle("a.u.");
   h_jet1CSV_Data__248->GetYaxis()->SetLabelFont(42);
   h_jet1CSV_Data__248->GetYaxis()->SetLabelOffset(0.007);
   h_jet1CSV_Data__248->GetYaxis()->SetTitleSize(0.05);
   h_jet1CSV_Data__248->GetYaxis()->SetTickLength(0.025);
   h_jet1CSV_Data__248->GetYaxis()->SetTitleFont(42);
   h_jet1CSV_Data__248->GetZaxis()->SetLabelFont(42);
   h_jet1CSV_Data__248->GetZaxis()->SetLabelOffset(0.007);
   h_jet1CSV_Data__248->GetZaxis()->SetTitleSize(0.05);
   h_jet1CSV_Data__248->GetZaxis()->SetTickLength(0.025);
   h_jet1CSV_Data__248->GetZaxis()->SetTitleFont(42);
   h_jet1CSV_Data__248->Draw("elp same");
   
   TLegend *leg = new TLegend(0.6,0.55,0.88,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("h_jet1CSV_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_jet1CSV_Top (HF)","Top (HF)","F");

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
   entry=leg->AddEntry("h_jet1CSV_Top (LF)","Top (LF)","F");

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
   entry=leg->AddEntry("h_jet1CSV_W+jets","W+jets","F");

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
   entry=leg->AddEntry("h_jet1CSV_Z+jets","Z+jets","F");

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
   entry=leg->AddEntry("h_jet1CSV_Diboson","Diboson","F");

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
   entry=leg->AddEntry("h_jet1CSV_QCD","QCD","F");

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
   entry=leg->AddEntry("h_jet1CSV_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_jet1CSV_Top (HF)","Top (HF)","F");

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
   entry=leg->AddEntry("h_jet1CSV_Top (LF)","Top (LF)","F");

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
   entry=leg->AddEntry("h_jet1CSV_W+jets","W+jets","F");

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
   entry=leg->AddEntry("h_jet1CSV_Z+jets","Z+jets","F");

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
   entry=leg->AddEntry("h_jet1CSV_Diboson","Diboson","F");

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
   entry=leg->AddEntry("h_jet1CSV_QCD","QCD","F");

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
   pad2->Range(-0.1875,-0.8914286,1.0625,0.48);
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
   
   TH1D *ratio__249 = new TH1D("ratio__249","",10,0,1);
   ratio__249->SetBinContent(1,-0.02654743);
   ratio__249->SetBinContent(2,0.01360023);
   ratio__249->SetBinContent(3,0.04138029);
   ratio__249->SetBinContent(4,0.05344069);
   ratio__249->SetBinContent(5,0.1018405);
   ratio__249->SetBinContent(6,0.02712655);
   ratio__249->SetBinContent(7,0.05609691);
   ratio__249->SetBinContent(8,0.007282734);
   ratio__249->SetBinContent(9,-0.03920245);
   ratio__249->SetBinContent(10,-0.05913073);
   ratio__249->SetBinError(1,0.0001);
   ratio__249->SetBinError(2,0.0001);
   ratio__249->SetBinError(3,0.0001);
   ratio__249->SetBinError(4,0.0001);
   ratio__249->SetBinError(5,0.0001);
   ratio__249->SetBinError(6,0.0001);
   ratio__249->SetBinError(7,0.0001);
   ratio__249->SetBinError(8,0.0001);
   ratio__249->SetBinError(9,0.0001);
   ratio__249->SetBinError(10,0.0001);
   ratio__249->SetMinimum(-0.48);
   ratio__249->SetMaximum(0.48);
   ratio__249->SetEntries(21236);
   ratio__249->SetStats(0);
   ratio__249->SetLineWidth(3);
   ratio__249->SetMarkerStyle(20);
   ratio__249->SetMarkerSize(2);
   ratio__249->GetXaxis()->SetTitle("jet 1 CSV");
   ratio__249->GetXaxis()->SetLabelFont(43);
   ratio__249->GetXaxis()->SetLabelOffset(0.007);
   ratio__249->GetXaxis()->SetLabelSize(30);
   ratio__249->GetXaxis()->SetTitleSize(40);
   ratio__249->GetXaxis()->SetTickLength(0.025);
   ratio__249->GetXaxis()->SetTitleOffset(5);
   ratio__249->GetXaxis()->SetTitleFont(43);
   ratio__249->GetYaxis()->SetTitle("#frac{Data-Exp}{Exp}");
   ratio__249->GetYaxis()->SetNdivisions(5);
   ratio__249->GetYaxis()->SetLabelFont(43);
   ratio__249->GetYaxis()->SetLabelOffset(0.007);
   ratio__249->GetYaxis()->SetLabelSize(30);
   ratio__249->GetYaxis()->SetTitleSize(40);
   ratio__249->GetYaxis()->SetTickLength(0.025);
   ratio__249->GetYaxis()->SetTitleOffset(2.5);
   ratio__249->GetYaxis()->SetTitleFont(43);
   ratio__249->GetZaxis()->SetLabelFont(42);
   ratio__249->GetZaxis()->SetLabelOffset(0.007);
   ratio__249->GetZaxis()->SetTitleSize(0.05);
   ratio__249->GetZaxis()->SetTickLength(0.025);
   ratio__249->GetZaxis()->SetTitleFont(42);
   ratio__249->Draw("elp");
   
   TH1D *zero__250 = new TH1D("zero__250","",10,0,1);
   zero__250->SetBinError(1,0.002395312);
   zero__250->SetBinError(2,0.003071329);
   zero__250->SetBinError(3,0.002163566);
   zero__250->SetBinError(4,0.001864946);
   zero__250->SetBinError(5,0.001727798);
   zero__250->SetBinError(6,0.001500945);
   zero__250->SetBinError(7,0.001513463);
   zero__250->SetBinError(8,0.001501684);
   zero__250->SetBinError(9,0.001830107);
   zero__250->SetBinError(10,0.003263337);
   zero__250->SetEntries(21236);
   zero__250->SetStats(0);
   zero__250->SetLineWidth(3);
   zero__250->SetMarkerStyle(20);
   zero__250->SetMarkerSize(2);
   zero__250->GetXaxis()->SetTitle("jet 1 CSV");
   zero__250->GetXaxis()->SetLabelFont(42);
   zero__250->GetXaxis()->SetLabelOffset(0.007);
   zero__250->GetXaxis()->SetTitleSize(0.05);
   zero__250->GetXaxis()->SetTickLength(0.025);
   zero__250->GetXaxis()->SetTitleFont(42);
   zero__250->GetYaxis()->SetTitle("a.u.");
   zero__250->GetYaxis()->SetLabelFont(42);
   zero__250->GetYaxis()->SetLabelOffset(0.007);
   zero__250->GetYaxis()->SetTitleSize(0.05);
   zero__250->GetYaxis()->SetTickLength(0.025);
   zero__250->GetYaxis()->SetTitleFont(42);
   zero__250->GetZaxis()->SetLabelFont(42);
   zero__250->GetZaxis()->SetLabelOffset(0.007);
   zero__250->GetZaxis()->SetTitleSize(0.05);
   zero__250->GetZaxis()->SetTickLength(0.025);
   zero__250->GetZaxis()->SetTitleFont(42);
   zero__250->Draw("hist same");
   
   TH1D *sumratioup__251 = new TH1D("sumratioup__251","",10,0,1);
   sumratioup__251->SetBinContent(1,0.01623542);
   sumratioup__251->SetBinContent(2,0.011127);
   sumratioup__251->SetBinContent(3,0.01589844);
   sumratioup__251->SetBinContent(4,0.02235471);
   sumratioup__251->SetBinContent(5,0.02655692);
   sumratioup__251->SetBinContent(6,0.02529014);
   sumratioup__251->SetBinContent(7,0.02238329);
   sumratioup__251->SetBinContent(8,0.02181402);
   sumratioup__251->SetBinContent(9,0.01481459);
   sumratioup__251->SetBinContent(10,0.01289965);
   sumratioup__251->SetBinError(1,0.002031146);
   sumratioup__251->SetBinError(2,0.002198023);
   sumratioup__251->SetBinError(3,0.001516888);
   sumratioup__251->SetBinError(4,0.001566606);
   sumratioup__251->SetBinError(5,0.00152726);
   sumratioup__251->SetBinError(6,0.001177403);
   sumratioup__251->SetBinError(7,0.001030461);
   sumratioup__251->SetBinError(8,0.001036597);
   sumratioup__251->SetBinError(9,0.001096172);
   sumratioup__251->SetBinError(10,0.003099137);
   sumratioup__251->SetEntries(55);
   sumratioup__251->SetStats(0);

   ci = 1200;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratioup__251->SetFillColor(ci);
   sumratioup__251->SetFillStyle(3003);
   sumratioup__251->GetXaxis()->SetTitle("jet 1 CSV");
   sumratioup__251->GetXaxis()->SetLabelFont(42);
   sumratioup__251->GetXaxis()->SetLabelOffset(0.007);
   sumratioup__251->GetXaxis()->SetTitleSize(0.05);
   sumratioup__251->GetXaxis()->SetTickLength(0.025);
   sumratioup__251->GetXaxis()->SetTitleFont(42);
   sumratioup__251->GetYaxis()->SetTitle("a.u.");
   sumratioup__251->GetYaxis()->SetLabelFont(42);
   sumratioup__251->GetYaxis()->SetLabelOffset(0.007);
   sumratioup__251->GetYaxis()->SetTitleSize(0.05);
   sumratioup__251->GetYaxis()->SetTickLength(0.025);
   sumratioup__251->GetYaxis()->SetTitleFont(42);
   sumratioup__251->GetZaxis()->SetLabelFont(42);
   sumratioup__251->GetZaxis()->SetLabelOffset(0.007);
   sumratioup__251->GetZaxis()->SetTitleSize(0.05);
   sumratioup__251->GetZaxis()->SetTickLength(0.025);
   sumratioup__251->GetZaxis()->SetTitleFont(42);
   sumratioup__251->Draw("hist same");
   
   TH1D *sumratiodown__252 = new TH1D("sumratiodown__252","",10,0,1);
   sumratiodown__252->SetBinContent(1,-0.01623542);
   sumratiodown__252->SetBinContent(2,-0.011127);
   sumratiodown__252->SetBinContent(3,-0.01589844);
   sumratiodown__252->SetBinContent(4,-0.02235471);
   sumratiodown__252->SetBinContent(5,-0.02655692);
   sumratiodown__252->SetBinContent(6,-0.02529014);
   sumratiodown__252->SetBinContent(7,-0.02238329);
   sumratiodown__252->SetBinContent(8,-0.02181402);
   sumratiodown__252->SetBinContent(9,-0.01481459);
   sumratiodown__252->SetBinContent(10,-0.01289965);
   sumratiodown__252->SetBinError(1,0.002031146);
   sumratiodown__252->SetBinError(2,0.002198023);
   sumratiodown__252->SetBinError(3,0.001516888);
   sumratiodown__252->SetBinError(4,0.001566606);
   sumratiodown__252->SetBinError(5,0.00152726);
   sumratiodown__252->SetBinError(6,0.001177403);
   sumratiodown__252->SetBinError(7,0.001030461);
   sumratiodown__252->SetBinError(8,0.001036597);
   sumratiodown__252->SetBinError(9,0.001096172);
   sumratiodown__252->SetBinError(10,0.003099137);
   sumratiodown__252->SetEntries(55);
   sumratiodown__252->SetStats(0);

   ci = 1200;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratiodown__252->SetFillColor(ci);
   sumratiodown__252->SetFillStyle(3003);
   sumratiodown__252->GetXaxis()->SetTitle("jet 1 CSV");
   sumratiodown__252->GetXaxis()->SetLabelFont(42);
   sumratiodown__252->GetXaxis()->SetLabelOffset(0.007);
   sumratiodown__252->GetXaxis()->SetTitleSize(0.05);
   sumratiodown__252->GetXaxis()->SetTickLength(0.025);
   sumratiodown__252->GetXaxis()->SetTitleFont(42);
   sumratiodown__252->GetYaxis()->SetTitle("a.u.");
   sumratiodown__252->GetYaxis()->SetLabelFont(42);
   sumratiodown__252->GetYaxis()->SetLabelOffset(0.007);
   sumratiodown__252->GetYaxis()->SetTitleSize(0.05);
   sumratiodown__252->GetYaxis()->SetTickLength(0.025);
   sumratiodown__252->GetYaxis()->SetTitleFont(42);
   sumratiodown__252->GetZaxis()->SetLabelFont(42);
   sumratiodown__252->GetZaxis()->SetLabelOffset(0.007);
   sumratiodown__252->GetZaxis()->SetTitleSize(0.05);
   sumratiodown__252->GetZaxis()->SetTickLength(0.025);
   sumratiodown__252->GetZaxis()->SetTitleFont(42);
   sumratiodown__252->Draw("hist same");
   
   Double_t Graph0_fx1021[10] = {
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t Graph0_fy1021[10] = {
   -0.02654743,
   0.01360023,
   0.04138029,
   0.05344069,
   0.1018405,
   0.02712655,
   0.05609691,
   0.007282734,
   -0.03920245,
   -0.05913073};
   Double_t Graph0_fex1021[10] = {
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
   Double_t Graph0_fey1021[10] = {
   0.01914628,
   0.01554792,
   0.02267624,
   0.02661188,
   0.03004399,
   0.0322397,
   0.03287486,
   0.03160127,
   0.0247336,
   0.01358311};
   TGraphErrors *gre = new TGraphErrors(10,Graph0_fx1021,Graph0_fy1021,Graph0_fex1021,Graph0_fey1021);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1021 = new TH1F("Graph_Graph1021","Graph",100,0,1.04);
   Graph_Graph1021->SetMinimum(-0.09317367);
   Graph_Graph1021->SetMaximum(0.1523443);
   Graph_Graph1021->SetDirectory(0);
   Graph_Graph1021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1021->SetLineColor(ci);
   Graph_Graph1021->GetXaxis()->SetLabelFont(42);
   Graph_Graph1021->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1021->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1021->GetXaxis()->SetTickLength(0.025);
   Graph_Graph1021->GetXaxis()->SetTitleFont(42);
   Graph_Graph1021->GetYaxis()->SetLabelFont(42);
   Graph_Graph1021->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1021->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1021->GetYaxis()->SetTickLength(0.025);
   Graph_Graph1021->GetYaxis()->SetTitleFont(42);
   Graph_Graph1021->GetZaxis()->SetLabelFont(42);
   Graph_Graph1021->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1021->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph1021->GetZaxis()->SetTickLength(0.025);
   Graph_Graph1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1021);
   
   gre->Draw("pe0");
   pad2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
