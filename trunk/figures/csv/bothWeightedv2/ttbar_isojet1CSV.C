void ttbar_isojet1CSV()
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
   pad1->Range(-0.1875,0,1.0625,0.6289089);
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
   h->SetMaximum(0.5570336);
   
   TH1F *h_stack_23 = new TH1F("h_stack_23","",10,0,1);
   h_stack_23->SetMinimum(0);
   h_stack_23->SetMaximum(0.5848853);
   h_stack_23->SetDirectory(0);
   h_stack_23->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h_stack_23->SetLineColor(ci);
   h_stack_23->GetXaxis()->SetLabelFont(42);
   h_stack_23->GetXaxis()->SetLabelOffset(0.007);
   h_stack_23->GetXaxis()->SetTitleSize(0.05);
   h_stack_23->GetXaxis()->SetTickLength(0.025);
   h_stack_23->GetXaxis()->SetTitleFont(42);
   h_stack_23->GetYaxis()->SetTitle("a.u.");
   h_stack_23->GetYaxis()->SetLabelFont(42);
   h_stack_23->GetYaxis()->SetLabelOffset(0.007);
   h_stack_23->GetYaxis()->SetTitleSize(0.05);
   h_stack_23->GetYaxis()->SetTickLength(0.025);
   h_stack_23->GetYaxis()->SetTitleOffset(1.5);
   h_stack_23->GetYaxis()->SetTitleFont(42);
   h_stack_23->GetZaxis()->SetLabelFont(42);
   h_stack_23->GetZaxis()->SetLabelOffset(0.007);
   h_stack_23->GetZaxis()->SetTitleSize(0.05);
   h_stack_23->GetZaxis()->SetTickLength(0.025);
   h_stack_23->GetZaxis()->SetTitleFont(42);
   h->SetHistogram(h_stack_23);
   
   
   TH1D *h_isojet1CSV_QCD__265 = new TH1D("h_isojet1CSV_QCD__265","",10,0,1);
   h_isojet1CSV_QCD__265->SetBinContent(1,0.002129117);
   h_isojet1CSV_QCD__265->SetBinContent(2,0.001248327);
   h_isojet1CSV_QCD__265->SetBinContent(3,0.0006205357);
   h_isojet1CSV_QCD__265->SetBinContent(4,0.001430306);
   h_isojet1CSV_QCD__265->SetBinContent(5,0.001031553);
   h_isojet1CSV_QCD__265->SetBinContent(6,0.0005098467);
   h_isojet1CSV_QCD__265->SetBinContent(7,0.0002095089);
   h_isojet1CSV_QCD__265->SetBinContent(8,9.216642e-05);
   h_isojet1CSV_QCD__265->SetBinContent(10,0.004314199);
   h_isojet1CSV_QCD__265->SetBinError(1,0.001510477);
   h_isojet1CSV_QCD__265->SetBinError(2,0.0006911766);
   h_isojet1CSV_QCD__265->SetBinError(3,0.0004578373);
   h_isojet1CSV_QCD__265->SetBinError(4,0.0008388365);
   h_isojet1CSV_QCD__265->SetBinError(5,0.0008715622);
   h_isojet1CSV_QCD__265->SetBinError(6,0.0005098467);
   h_isojet1CSV_QCD__265->SetBinError(7,0.0002095089);
   h_isojet1CSV_QCD__265->SetBinError(8,9.216642e-05);
   h_isojet1CSV_QCD__265->SetBinError(10,0.002213733);
   h_isojet1CSV_QCD__265->SetEntries(25);
   h_isojet1CSV_QCD__265->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_isojet1CSV_QCD__265->SetFillColor(ci);
   h_isojet1CSV_QCD__265->GetXaxis()->SetTitle("isojet 1 CSV");
   h_isojet1CSV_QCD__265->GetXaxis()->SetLabelFont(42);
   h_isojet1CSV_QCD__265->GetXaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_QCD__265->GetXaxis()->SetTitleSize(0.05);
   h_isojet1CSV_QCD__265->GetXaxis()->SetTickLength(0.025);
   h_isojet1CSV_QCD__265->GetXaxis()->SetTitleFont(42);
   h_isojet1CSV_QCD__265->GetYaxis()->SetTitle("a.u.");
   h_isojet1CSV_QCD__265->GetYaxis()->SetLabelFont(42);
   h_isojet1CSV_QCD__265->GetYaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_QCD__265->GetYaxis()->SetTitleSize(0.05);
   h_isojet1CSV_QCD__265->GetYaxis()->SetTickLength(0.025);
   h_isojet1CSV_QCD__265->GetYaxis()->SetTitleFont(42);
   h_isojet1CSV_QCD__265->GetZaxis()->SetLabelFont(42);
   h_isojet1CSV_QCD__265->GetZaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_QCD__265->GetZaxis()->SetTitleSize(0.05);
   h_isojet1CSV_QCD__265->GetZaxis()->SetTickLength(0.025);
   h_isojet1CSV_QCD__265->GetZaxis()->SetTitleFont(42);
   h->Add(h_isojet1CSV_QCD,"");
   
   TH1D *h_isojet1CSV_Diboson__266 = new TH1D("h_isojet1CSV_Diboson__266","",10,0,1);
   h_isojet1CSV_Diboson__266->SetBinContent(1,0.006910874);
   h_isojet1CSV_Diboson__266->SetBinContent(2,0.01156259);
   h_isojet1CSV_Diboson__266->SetBinContent(3,0.00597142);
   h_isojet1CSV_Diboson__266->SetBinContent(4,0.003397186);
   h_isojet1CSV_Diboson__266->SetBinContent(5,0.003453268);
   h_isojet1CSV_Diboson__266->SetBinContent(6,0.001659304);
   h_isojet1CSV_Diboson__266->SetBinContent(7,0.001617052);
   h_isojet1CSV_Diboson__266->SetBinContent(8,0.001259235);
   h_isojet1CSV_Diboson__266->SetBinContent(9,0.000286628);
   h_isojet1CSV_Diboson__266->SetBinContent(10,0.00067562);
   h_isojet1CSV_Diboson__266->SetBinError(1,0.001086007);
   h_isojet1CSV_Diboson__266->SetBinError(2,0.001467728);
   h_isojet1CSV_Diboson__266->SetBinError(3,0.001077108);
   h_isojet1CSV_Diboson__266->SetBinError(4,0.0008370875);
   h_isojet1CSV_Diboson__266->SetBinError(5,0.0009085276);
   h_isojet1CSV_Diboson__266->SetBinError(6,0.000631351);
   h_isojet1CSV_Diboson__266->SetBinError(7,0.0006254813);
   h_isojet1CSV_Diboson__266->SetBinError(8,0.0005614698);
   h_isojet1CSV_Diboson__266->SetBinError(9,0.0001726014);
   h_isojet1CSV_Diboson__266->SetBinError(10,0.0003333104);
   h_isojet1CSV_Diboson__266->SetEntries(227);
   h_isojet1CSV_Diboson__266->SetStats(0);

   ci = TColor::GetColor("#9966cc");
   h_isojet1CSV_Diboson__266->SetFillColor(ci);
   h_isojet1CSV_Diboson__266->GetXaxis()->SetTitle("isojet 1 CSV");
   h_isojet1CSV_Diboson__266->GetXaxis()->SetLabelFont(42);
   h_isojet1CSV_Diboson__266->GetXaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_Diboson__266->GetXaxis()->SetTitleSize(0.05);
   h_isojet1CSV_Diboson__266->GetXaxis()->SetTickLength(0.025);
   h_isojet1CSV_Diboson__266->GetXaxis()->SetTitleFont(42);
   h_isojet1CSV_Diboson__266->GetYaxis()->SetTitle("a.u.");
   h_isojet1CSV_Diboson__266->GetYaxis()->SetLabelFont(42);
   h_isojet1CSV_Diboson__266->GetYaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_Diboson__266->GetYaxis()->SetTitleSize(0.05);
   h_isojet1CSV_Diboson__266->GetYaxis()->SetTickLength(0.025);
   h_isojet1CSV_Diboson__266->GetYaxis()->SetTitleFont(42);
   h_isojet1CSV_Diboson__266->GetZaxis()->SetLabelFont(42);
   h_isojet1CSV_Diboson__266->GetZaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_Diboson__266->GetZaxis()->SetTitleSize(0.05);
   h_isojet1CSV_Diboson__266->GetZaxis()->SetTickLength(0.025);
   h_isojet1CSV_Diboson__266->GetZaxis()->SetTitleFont(42);
   h->Add(h_isojet1CSV_Diboson,"");
   
   TH1D *h_isojet1CSV_ZpLjets__267 = new TH1D("h_isojet1CSV_ZpLjets__267","",10,0,1);
   h_isojet1CSV_ZpLjets__267->SetBinContent(1,0.00997839);
   h_isojet1CSV_ZpLjets__267->SetBinContent(2,0.01450317);
   h_isojet1CSV_ZpLjets__267->SetBinContent(3,0.006432142);
   h_isojet1CSV_ZpLjets__267->SetBinContent(4,0.004194575);
   h_isojet1CSV_ZpLjets__267->SetBinContent(5,0.003727646);
   h_isojet1CSV_ZpLjets__267->SetBinContent(6,0.002569373);
   h_isojet1CSV_ZpLjets__267->SetBinContent(7,0.001898935);
   h_isojet1CSV_ZpLjets__267->SetBinContent(8,0.001314676);
   h_isojet1CSV_ZpLjets__267->SetBinContent(9,0.001323422);
   h_isojet1CSV_ZpLjets__267->SetBinContent(10,0.001471477);
   h_isojet1CSV_ZpLjets__267->SetBinError(1,0.0002843835);
   h_isojet1CSV_ZpLjets__267->SetBinError(2,0.0003526741);
   h_isojet1CSV_ZpLjets__267->SetBinError(3,0.0002379666);
   h_isojet1CSV_ZpLjets__267->SetBinError(4,0.0002075278);
   h_isojet1CSV_ZpLjets__267->SetBinError(5,0.0001971644);
   h_isojet1CSV_ZpLjets__267->SetBinError(6,0.0001564817);
   h_isojet1CSV_ZpLjets__267->SetBinError(7,0.0001321731);
   h_isojet1CSV_ZpLjets__267->SetBinError(8,0.0001133749);
   h_isojet1CSV_ZpLjets__267->SetBinError(9,0.0001162263);
   h_isojet1CSV_ZpLjets__267->SetBinError(10,0.0001379738);
   h_isojet1CSV_ZpLjets__267->SetEntries(24915);
   h_isojet1CSV_ZpLjets__267->SetStats(0);

   ci = TColor::GetColor("#3399cc");
   h_isojet1CSV_ZpLjets__267->SetFillColor(ci);
   h_isojet1CSV_ZpLjets__267->GetXaxis()->SetTitle("isojet 1 CSV");
   h_isojet1CSV_ZpLjets__267->GetXaxis()->SetLabelFont(42);
   h_isojet1CSV_ZpLjets__267->GetXaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_ZpLjets__267->GetXaxis()->SetTitleSize(0.05);
   h_isojet1CSV_ZpLjets__267->GetXaxis()->SetTickLength(0.025);
   h_isojet1CSV_ZpLjets__267->GetXaxis()->SetTitleFont(42);
   h_isojet1CSV_ZpLjets__267->GetYaxis()->SetTitle("a.u.");
   h_isojet1CSV_ZpLjets__267->GetYaxis()->SetLabelFont(42);
   h_isojet1CSV_ZpLjets__267->GetYaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_ZpLjets__267->GetYaxis()->SetTitleSize(0.05);
   h_isojet1CSV_ZpLjets__267->GetYaxis()->SetTickLength(0.025);
   h_isojet1CSV_ZpLjets__267->GetYaxis()->SetTitleFont(42);
   h_isojet1CSV_ZpLjets__267->GetZaxis()->SetLabelFont(42);
   h_isojet1CSV_ZpLjets__267->GetZaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_ZpLjets__267->GetZaxis()->SetTitleSize(0.05);
   h_isojet1CSV_ZpLjets__267->GetZaxis()->SetTickLength(0.025);
   h_isojet1CSV_ZpLjets__267->GetZaxis()->SetTitleFont(42);
   h->Add(h_isojet1CSV_Z+jets,"");
   
   TH1D *h_isojet1CSV_WpLjets__268 = new TH1D("h_isojet1CSV_WpLjets__268","",10,0,1);
   h_isojet1CSV_WpLjets__268->SetBinContent(1,0.01060448);
   h_isojet1CSV_WpLjets__268->SetBinContent(2,0.01194981);
   h_isojet1CSV_WpLjets__268->SetBinContent(3,0.007295854);
   h_isojet1CSV_WpLjets__268->SetBinContent(4,0.004201536);
   h_isojet1CSV_WpLjets__268->SetBinContent(5,0.003315037);
   h_isojet1CSV_WpLjets__268->SetBinContent(6,0.002154035);
   h_isojet1CSV_WpLjets__268->SetBinContent(7,0.001704806);
   h_isojet1CSV_WpLjets__268->SetBinContent(8,0.001590696);
   h_isojet1CSV_WpLjets__268->SetBinContent(9,0.001506952);
   h_isojet1CSV_WpLjets__268->SetBinContent(10,0.00135957);
   h_isojet1CSV_WpLjets__268->SetBinError(1,0.0007760229);
   h_isojet1CSV_WpLjets__268->SetBinError(2,0.0008063374);
   h_isojet1CSV_WpLjets__268->SetBinError(3,0.0006567409);
   h_isojet1CSV_WpLjets__268->SetBinError(4,0.0005519722);
   h_isojet1CSV_WpLjets__268->SetBinError(5,0.0004860992);
   h_isojet1CSV_WpLjets__268->SetBinError(6,0.0003673486);
   h_isojet1CSV_WpLjets__268->SetBinError(7,0.0003806515);
   h_isojet1CSV_WpLjets__268->SetBinError(8,0.0003677212);
   h_isojet1CSV_WpLjets__268->SetBinError(9,0.0003252218);
   h_isojet1CSV_WpLjets__268->SetBinError(10,0.0002763251);
   h_isojet1CSV_WpLjets__268->SetEntries(3309);
   h_isojet1CSV_WpLjets__268->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   h_isojet1CSV_WpLjets__268->SetFillColor(ci);
   h_isojet1CSV_WpLjets__268->GetXaxis()->SetTitle("isojet 1 CSV");
   h_isojet1CSV_WpLjets__268->GetXaxis()->SetLabelFont(42);
   h_isojet1CSV_WpLjets__268->GetXaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_WpLjets__268->GetXaxis()->SetTitleSize(0.05);
   h_isojet1CSV_WpLjets__268->GetXaxis()->SetTickLength(0.025);
   h_isojet1CSV_WpLjets__268->GetXaxis()->SetTitleFont(42);
   h_isojet1CSV_WpLjets__268->GetYaxis()->SetTitle("a.u.");
   h_isojet1CSV_WpLjets__268->GetYaxis()->SetLabelFont(42);
   h_isojet1CSV_WpLjets__268->GetYaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_WpLjets__268->GetYaxis()->SetTitleSize(0.05);
   h_isojet1CSV_WpLjets__268->GetYaxis()->SetTickLength(0.025);
   h_isojet1CSV_WpLjets__268->GetYaxis()->SetTitleFont(42);
   h_isojet1CSV_WpLjets__268->GetZaxis()->SetLabelFont(42);
   h_isojet1CSV_WpLjets__268->GetZaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_WpLjets__268->GetZaxis()->SetTitleSize(0.05);
   h_isojet1CSV_WpLjets__268->GetZaxis()->SetTickLength(0.025);
   h_isojet1CSV_WpLjets__268->GetZaxis()->SetTitleFont(42);
   h->Add(h_isojet1CSV_W+jets,"");
   
   TH1D *h_isojet1CSV_TopsPoPLFcP__269 = new TH1D("h_isojet1CSV_TopsPoPLFcP__269","",10,0,1);
   h_isojet1CSV_TopsPoPLFcP__269->SetBinContent(1,0.09097508);
   h_isojet1CSV_TopsPoPLFcP__269->SetBinContent(2,0.09232326);
   h_isojet1CSV_TopsPoPLFcP__269->SetBinContent(3,0.04269338);
   h_isojet1CSV_TopsPoPLFcP__269->SetBinContent(4,0.02949662);
   h_isojet1CSV_TopsPoPLFcP__269->SetBinContent(5,0.02281892);
   h_isojet1CSV_TopsPoPLFcP__269->SetBinContent(6,0.01709603);
   h_isojet1CSV_TopsPoPLFcP__269->SetBinContent(7,0.01404044);
   h_isojet1CSV_TopsPoPLFcP__269->SetBinContent(8,0.009499499);
   h_isojet1CSV_TopsPoPLFcP__269->SetBinContent(9,0.006095059);
   h_isojet1CSV_TopsPoPLFcP__269->SetBinContent(10,0.003040849);
   h_isojet1CSV_TopsPoPLFcP__269->SetBinError(1,0.0009372855);
   h_isojet1CSV_TopsPoPLFcP__269->SetBinError(2,0.0009857636);
   h_isojet1CSV_TopsPoPLFcP__269->SetBinError(3,0.0007155424);
   h_isojet1CSV_TopsPoPLFcP__269->SetBinError(4,0.0005977933);
   h_isojet1CSV_TopsPoPLFcP__269->SetBinError(5,0.0005373378);
   h_isojet1CSV_TopsPoPLFcP__269->SetBinError(6,0.0004781073);
   h_isojet1CSV_TopsPoPLFcP__269->SetBinError(7,0.0004489056);
   h_isojet1CSV_TopsPoPLFcP__269->SetBinError(8,0.0003875753);
   h_isojet1CSV_TopsPoPLFcP__269->SetBinError(9,0.0003337873);
   h_isojet1CSV_TopsPoPLFcP__269->SetBinError(10,0.0003173281);
   h_isojet1CSV_TopsPoPLFcP__269->SetEntries(45754);
   h_isojet1CSV_TopsPoPLFcP__269->SetStats(0);

   ci = TColor::GetColor("#cc33cc");
   h_isojet1CSV_TopsPoPLFcP__269->SetFillColor(ci);
   h_isojet1CSV_TopsPoPLFcP__269->GetXaxis()->SetTitle("isojet 1 CSV");
   h_isojet1CSV_TopsPoPLFcP__269->GetXaxis()->SetLabelFont(42);
   h_isojet1CSV_TopsPoPLFcP__269->GetXaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_TopsPoPLFcP__269->GetXaxis()->SetTitleSize(0.05);
   h_isojet1CSV_TopsPoPLFcP__269->GetXaxis()->SetTickLength(0.025);
   h_isojet1CSV_TopsPoPLFcP__269->GetXaxis()->SetTitleFont(42);
   h_isojet1CSV_TopsPoPLFcP__269->GetYaxis()->SetTitle("a.u.");
   h_isojet1CSV_TopsPoPLFcP__269->GetYaxis()->SetLabelFont(42);
   h_isojet1CSV_TopsPoPLFcP__269->GetYaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_TopsPoPLFcP__269->GetYaxis()->SetTitleSize(0.05);
   h_isojet1CSV_TopsPoPLFcP__269->GetYaxis()->SetTickLength(0.025);
   h_isojet1CSV_TopsPoPLFcP__269->GetYaxis()->SetTitleFont(42);
   h_isojet1CSV_TopsPoPLFcP__269->GetZaxis()->SetLabelFont(42);
   h_isojet1CSV_TopsPoPLFcP__269->GetZaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_TopsPoPLFcP__269->GetZaxis()->SetTitleSize(0.05);
   h_isojet1CSV_TopsPoPLFcP__269->GetZaxis()->SetTickLength(0.025);
   h_isojet1CSV_TopsPoPLFcP__269->GetZaxis()->SetTitleFont(42);
   h->Add(h_isojet1CSV_Top (LF),"");
   
   TH1D *h_isojet1CSV_TopsPoPHFcP__270 = new TH1D("h_isojet1CSV_TopsPoPHFcP__270","",10,0,1);
   h_isojet1CSV_TopsPoPHFcP__270->SetBinContent(1,0.01878166);
   h_isojet1CSV_TopsPoPHFcP__270->SetBinContent(2,0.02708098);
   h_isojet1CSV_TopsPoPHFcP__270->SetBinContent(3,0.01896531);
   h_isojet1CSV_TopsPoPHFcP__270->SetBinContent(4,0.01870601);
   h_isojet1CSV_TopsPoPHFcP__270->SetBinContent(5,0.01924485);
   h_isojet1CSV_TopsPoPHFcP__270->SetBinContent(6,0.02077131);
   h_isojet1CSV_TopsPoPHFcP__270->SetBinContent(7,0.02899544);
   h_isojet1CSV_TopsPoPHFcP__270->SetBinContent(8,0.03698897);
   h_isojet1CSV_TopsPoPHFcP__270->SetBinContent(9,0.07325594);
   h_isojet1CSV_TopsPoPHFcP__270->SetBinContent(10,0.2676551);
   h_isojet1CSV_TopsPoPHFcP__270->SetBinError(1,0.0004640739);
   h_isojet1CSV_TopsPoPHFcP__270->SetBinError(2,0.0005643558);
   h_isojet1CSV_TopsPoPHFcP__270->SetBinError(3,0.0004957084);
   h_isojet1CSV_TopsPoPHFcP__270->SetBinError(4,0.0004766015);
   h_isojet1CSV_TopsPoPHFcP__270->SetBinError(5,0.0004665302);
   h_isojet1CSV_TopsPoPHFcP__270->SetBinError(6,0.0005070097);
   h_isojet1CSV_TopsPoPHFcP__270->SetBinError(7,0.0006476121);
   h_isojet1CSV_TopsPoPHFcP__270->SetBinError(8,0.0007056579);
   h_isojet1CSV_TopsPoPHFcP__270->SetBinError(9,0.0009826258);
   h_isojet1CSV_TopsPoPHFcP__270->SetBinError(10,0.001744809);
   h_isojet1CSV_TopsPoPHFcP__270->SetEntries(77950);
   h_isojet1CSV_TopsPoPHFcP__270->SetStats(0);

   ci = TColor::GetColor("#ff9900");
   h_isojet1CSV_TopsPoPHFcP__270->SetFillColor(ci);
   h_isojet1CSV_TopsPoPHFcP__270->GetXaxis()->SetTitle("isojet 1 CSV");
   h_isojet1CSV_TopsPoPHFcP__270->GetXaxis()->SetLabelFont(42);
   h_isojet1CSV_TopsPoPHFcP__270->GetXaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_TopsPoPHFcP__270->GetXaxis()->SetTitleSize(0.05);
   h_isojet1CSV_TopsPoPHFcP__270->GetXaxis()->SetTickLength(0.025);
   h_isojet1CSV_TopsPoPHFcP__270->GetXaxis()->SetTitleFont(42);
   h_isojet1CSV_TopsPoPHFcP__270->GetYaxis()->SetTitle("a.u.");
   h_isojet1CSV_TopsPoPHFcP__270->GetYaxis()->SetLabelFont(42);
   h_isojet1CSV_TopsPoPHFcP__270->GetYaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_TopsPoPHFcP__270->GetYaxis()->SetTitleSize(0.05);
   h_isojet1CSV_TopsPoPHFcP__270->GetYaxis()->SetTickLength(0.025);
   h_isojet1CSV_TopsPoPHFcP__270->GetYaxis()->SetTitleFont(42);
   h_isojet1CSV_TopsPoPHFcP__270->GetZaxis()->SetLabelFont(42);
   h_isojet1CSV_TopsPoPHFcP__270->GetZaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_TopsPoPHFcP__270->GetZaxis()->SetTitleSize(0.05);
   h_isojet1CSV_TopsPoPHFcP__270->GetZaxis()->SetTickLength(0.025);
   h_isojet1CSV_TopsPoPHFcP__270->GetZaxis()->SetTitleFont(42);
   h->Add(h_isojet1CSV_Top (HF),"");
   h->Draw("hist");
   
   TH1D *hsum__271 = new TH1D("hsum__271","",10,0,1);
   hsum__271->SetBinContent(1,0.1393796);
   hsum__271->SetBinContent(2,0.1586681);
   hsum__271->SetBinContent(3,0.08197864);
   hsum__271->SetBinContent(4,0.06142623);
   hsum__271->SetBinContent(5,0.05359128);
   hsum__271->SetBinContent(6,0.0447599);
   hsum__271->SetBinContent(7,0.04846618);
   hsum__271->SetBinContent(8,0.05074524);
   hsum__271->SetBinContent(9,0.082468);
   hsum__271->SetBinContent(10,0.2785168);
   hsum__271->SetBinError(1,0.002288647);
   hsum__271->SetBinError(2,0.002167196);
   hsum__271->SetBinError(3,0.001617233);
   hsum__271->SetBinError(4,0.001528597);
   hsum__271->SetBinError(5,0.001538373);
   hsum__271->SetBinError(6,0.001141764);
   hsum__271->SetBinError(7,0.001103813);
   hsum__271->SetBinError(8,0.001058293);
   hsum__271->SetBinError(9,0.001107265);
   hsum__271->SetBinError(10,0.002872657);
   hsum__271->SetEntries(45);
   hsum__271->SetStats(0);

   ci = 1202;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   hsum__271->SetFillColor(ci);
   hsum__271->SetFillStyle(3003);
   hsum__271->SetLineWidth(0);
   hsum__271->GetXaxis()->SetTitle("isojet 1 CSV");
   hsum__271->GetXaxis()->SetLabelFont(42);
   hsum__271->GetXaxis()->SetLabelOffset(0.007);
   hsum__271->GetXaxis()->SetTitleSize(0.05);
   hsum__271->GetXaxis()->SetTickLength(0.025);
   hsum__271->GetXaxis()->SetTitleFont(42);
   hsum__271->GetYaxis()->SetTitle("a.u.");
   hsum__271->GetYaxis()->SetLabelFont(42);
   hsum__271->GetYaxis()->SetLabelOffset(0.007);
   hsum__271->GetYaxis()->SetTitleSize(0.05);
   hsum__271->GetYaxis()->SetTickLength(0.025);
   hsum__271->GetYaxis()->SetTitleFont(42);
   hsum__271->GetZaxis()->SetLabelFont(42);
   hsum__271->GetZaxis()->SetLabelOffset(0.007);
   hsum__271->GetZaxis()->SetTitleSize(0.05);
   hsum__271->GetZaxis()->SetTickLength(0.025);
   hsum__271->GetZaxis()->SetTitleFont(42);
   hsum__271->Draw("e2 same");
   
   TH1D *h_isojet1CSV_Data__272 = new TH1D("h_isojet1CSV_Data__272","",10,0,1);
   h_isojet1CSV_Data__272->SetBinContent(1,0.138368);
   h_isojet1CSV_Data__272->SetBinContent(2,0.1592858);
   h_isojet1CSV_Data__272->SetBinContent(3,0.08381231);
   h_isojet1CSV_Data__272->SetBinContent(4,0.06152831);
   h_isojet1CSV_Data__272->SetBinContent(5,0.05196457);
   h_isojet1CSV_Data__272->SetBinContent(6,0.04475643);
   h_isojet1CSV_Data__272->SetBinContent(7,0.04833695);
   h_isojet1CSV_Data__272->SetBinContent(8,0.05059832);
   h_isojet1CSV_Data__272->SetBinContent(9,0.08235183);
   h_isojet1CSV_Data__272->SetBinContent(10,0.2789975);
   h_isojet1CSV_Data__272->SetBinError(1,0.002553194);
   h_isojet1CSV_Data__272->SetBinError(2,0.002739394);
   h_isojet1CSV_Data__272->SetBinError(3,0.0019871);
   h_isojet1CSV_Data__272->SetBinError(4,0.001702564);
   h_isojet1CSV_Data__272->SetBinError(5,0.001564659);
   h_isojet1CSV_Data__272->SetBinError(6,0.00145209);
   h_isojet1CSV_Data__272->SetBinError(7,0.001509057);
   h_isojet1CSV_Data__272->SetBinError(8,0.001543953);
   h_isojet1CSV_Data__272->SetBinError(9,0.001969711);
   h_isojet1CSV_Data__272->SetBinError(10,0.003625484);
   h_isojet1CSV_Data__272->SetEntries(21226);
   h_isojet1CSV_Data__272->SetStats(0);
   h_isojet1CSV_Data__272->SetLineWidth(3);
   h_isojet1CSV_Data__272->SetMarkerStyle(20);
   h_isojet1CSV_Data__272->SetMarkerSize(2);
   h_isojet1CSV_Data__272->GetXaxis()->SetTitle("isojet 1 CSV");
   h_isojet1CSV_Data__272->GetXaxis()->SetLabelFont(42);
   h_isojet1CSV_Data__272->GetXaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_Data__272->GetXaxis()->SetTitleSize(0.05);
   h_isojet1CSV_Data__272->GetXaxis()->SetTickLength(0.025);
   h_isojet1CSV_Data__272->GetXaxis()->SetTitleFont(42);
   h_isojet1CSV_Data__272->GetYaxis()->SetTitle("a.u.");
   h_isojet1CSV_Data__272->GetYaxis()->SetLabelFont(42);
   h_isojet1CSV_Data__272->GetYaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_Data__272->GetYaxis()->SetTitleSize(0.05);
   h_isojet1CSV_Data__272->GetYaxis()->SetTickLength(0.025);
   h_isojet1CSV_Data__272->GetYaxis()->SetTitleFont(42);
   h_isojet1CSV_Data__272->GetZaxis()->SetLabelFont(42);
   h_isojet1CSV_Data__272->GetZaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_Data__272->GetZaxis()->SetTitleSize(0.05);
   h_isojet1CSV_Data__272->GetZaxis()->SetTickLength(0.025);
   h_isojet1CSV_Data__272->GetZaxis()->SetTitleFont(42);
   h_isojet1CSV_Data__272->Draw("elp same");
   
   TLegend *leg = new TLegend(0.6,0.55,0.88,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("h_isojet1CSV_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_isojet1CSV_Top (HF)","Top (HF)","F");

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
   entry=leg->AddEntry("h_isojet1CSV_Top (LF)","Top (LF)","F");

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
   entry=leg->AddEntry("h_isojet1CSV_W+jets","W+jets","F");

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
   entry=leg->AddEntry("h_isojet1CSV_Z+jets","Z+jets","F");

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
   entry=leg->AddEntry("h_isojet1CSV_Diboson","Diboson","F");

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
   entry=leg->AddEntry("h_isojet1CSV_QCD","QCD","F");

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
   entry=leg->AddEntry("h_isojet1CSV_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_isojet1CSV_Top (HF)","Top (HF)","F");

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
   entry=leg->AddEntry("h_isojet1CSV_Top (LF)","Top (LF)","F");

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
   entry=leg->AddEntry("h_isojet1CSV_W+jets","W+jets","F");

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
   entry=leg->AddEntry("h_isojet1CSV_Z+jets","Z+jets","F");

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
   entry=leg->AddEntry("h_isojet1CSV_Diboson","Diboson","F");

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
   entry=leg->AddEntry("h_isojet1CSV_QCD","QCD","F");

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
   
   TH1D *ratio__273 = new TH1D("ratio__273","",10,0,1);
   ratio__273->SetBinContent(1,-0.00725764);
   ratio__273->SetBinContent(2,0.003892779);
   ratio__273->SetBinContent(3,0.0223676);
   ratio__273->SetBinContent(4,0.001661897);
   ratio__273->SetBinContent(5,-0.0303539);
   ratio__273->SetBinContent(6,-7.754564e-05);
   ratio__273->SetBinContent(7,-0.002666473);
   ratio__273->SetBinContent(8,-0.002895236);
   ratio__273->SetBinContent(9,-0.001408637);
   ratio__273->SetBinContent(10,0.001725793);
   ratio__273->SetBinError(1,0.0001);
   ratio__273->SetBinError(2,0.0001);
   ratio__273->SetBinError(3,0.0001);
   ratio__273->SetBinError(4,0.0001);
   ratio__273->SetBinError(5,0.0001);
   ratio__273->SetBinError(6,0.0001);
   ratio__273->SetBinError(7,0.0001);
   ratio__273->SetBinError(8,0.0001);
   ratio__273->SetBinError(9,0.0001);
   ratio__273->SetBinError(10,0.0001);
   ratio__273->SetMinimum(-0.48);
   ratio__273->SetMaximum(0.48);
   ratio__273->SetEntries(21236);
   ratio__273->SetStats(0);
   ratio__273->SetLineWidth(3);
   ratio__273->SetMarkerStyle(20);
   ratio__273->SetMarkerSize(2);
   ratio__273->GetXaxis()->SetTitle("isojet 1 CSV");
   ratio__273->GetXaxis()->SetLabelFont(43);
   ratio__273->GetXaxis()->SetLabelOffset(0.007);
   ratio__273->GetXaxis()->SetLabelSize(30);
   ratio__273->GetXaxis()->SetTitleSize(40);
   ratio__273->GetXaxis()->SetTickLength(0.025);
   ratio__273->GetXaxis()->SetTitleOffset(5);
   ratio__273->GetXaxis()->SetTitleFont(43);
   ratio__273->GetYaxis()->SetTitle("#frac{Data-Exp}{Exp}");
   ratio__273->GetYaxis()->SetNdivisions(5);
   ratio__273->GetYaxis()->SetLabelFont(43);
   ratio__273->GetYaxis()->SetLabelOffset(0.007);
   ratio__273->GetYaxis()->SetLabelSize(30);
   ratio__273->GetYaxis()->SetTitleSize(40);
   ratio__273->GetYaxis()->SetTickLength(0.025);
   ratio__273->GetYaxis()->SetTitleOffset(2.5);
   ratio__273->GetYaxis()->SetTitleFont(43);
   ratio__273->GetZaxis()->SetLabelFont(42);
   ratio__273->GetZaxis()->SetLabelOffset(0.007);
   ratio__273->GetZaxis()->SetTitleSize(0.05);
   ratio__273->GetZaxis()->SetTickLength(0.025);
   ratio__273->GetZaxis()->SetTitleFont(42);
   ratio__273->Draw("elp");
   
   TH1D *zero__274 = new TH1D("zero__274","",10,0,1);
   zero__274->SetBinError(1,0.002553194);
   zero__274->SetBinError(2,0.002739394);
   zero__274->SetBinError(3,0.0019871);
   zero__274->SetBinError(4,0.001702564);
   zero__274->SetBinError(5,0.001564659);
   zero__274->SetBinError(6,0.00145209);
   zero__274->SetBinError(7,0.001509057);
   zero__274->SetBinError(8,0.001543953);
   zero__274->SetBinError(9,0.001969711);
   zero__274->SetBinError(10,0.003625484);
   zero__274->SetEntries(21236);
   zero__274->SetStats(0);
   zero__274->SetLineWidth(3);
   zero__274->SetMarkerStyle(20);
   zero__274->SetMarkerSize(2);
   zero__274->GetXaxis()->SetTitle("isojet 1 CSV");
   zero__274->GetXaxis()->SetLabelFont(42);
   zero__274->GetXaxis()->SetLabelOffset(0.007);
   zero__274->GetXaxis()->SetTitleSize(0.05);
   zero__274->GetXaxis()->SetTickLength(0.025);
   zero__274->GetXaxis()->SetTitleFont(42);
   zero__274->GetYaxis()->SetTitle("a.u.");
   zero__274->GetYaxis()->SetLabelFont(42);
   zero__274->GetYaxis()->SetLabelOffset(0.007);
   zero__274->GetYaxis()->SetTitleSize(0.05);
   zero__274->GetYaxis()->SetTickLength(0.025);
   zero__274->GetYaxis()->SetTitleFont(42);
   zero__274->GetZaxis()->SetLabelFont(42);
   zero__274->GetZaxis()->SetLabelOffset(0.007);
   zero__274->GetZaxis()->SetTitleSize(0.05);
   zero__274->GetZaxis()->SetTickLength(0.025);
   zero__274->GetZaxis()->SetTitleFont(42);
   zero__274->Draw("hist same");
   
   TH1D *sumratioup__275 = new TH1D("sumratioup__275","",10,0,1);
   sumratioup__275->SetBinContent(1,0.01642024);
   sumratioup__275->SetBinContent(2,0.01365867);
   sumratioup__275->SetBinContent(3,0.01972749);
   sumratioup__275->SetBinContent(4,0.02488509);
   sumratioup__275->SetBinContent(5,0.02870566);
   sumratioup__275->SetBinContent(6,0.02550863);
   sumratioup__275->SetBinContent(7,0.02277492);
   sumratioup__275->SetBinContent(8,0.02085501);
   sumratioup__275->SetBinContent(9,0.01342661);
   sumratioup__275->SetBinContent(10,0.01031412);
   sumratioup__275->SetBinError(1,0.002288647);
   sumratioup__275->SetBinError(2,0.002167196);
   sumratioup__275->SetBinError(3,0.001617233);
   sumratioup__275->SetBinError(4,0.001528597);
   sumratioup__275->SetBinError(5,0.001538373);
   sumratioup__275->SetBinError(6,0.001141764);
   sumratioup__275->SetBinError(7,0.001103813);
   sumratioup__275->SetBinError(8,0.001058293);
   sumratioup__275->SetBinError(9,0.001107265);
   sumratioup__275->SetBinError(10,0.002872657);
   sumratioup__275->SetEntries(55);
   sumratioup__275->SetStats(0);

   ci = 1202;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratioup__275->SetFillColor(ci);
   sumratioup__275->SetFillStyle(3003);
   sumratioup__275->GetXaxis()->SetTitle("isojet 1 CSV");
   sumratioup__275->GetXaxis()->SetLabelFont(42);
   sumratioup__275->GetXaxis()->SetLabelOffset(0.007);
   sumratioup__275->GetXaxis()->SetTitleSize(0.05);
   sumratioup__275->GetXaxis()->SetTickLength(0.025);
   sumratioup__275->GetXaxis()->SetTitleFont(42);
   sumratioup__275->GetYaxis()->SetTitle("a.u.");
   sumratioup__275->GetYaxis()->SetLabelFont(42);
   sumratioup__275->GetYaxis()->SetLabelOffset(0.007);
   sumratioup__275->GetYaxis()->SetTitleSize(0.05);
   sumratioup__275->GetYaxis()->SetTickLength(0.025);
   sumratioup__275->GetYaxis()->SetTitleFont(42);
   sumratioup__275->GetZaxis()->SetLabelFont(42);
   sumratioup__275->GetZaxis()->SetLabelOffset(0.007);
   sumratioup__275->GetZaxis()->SetTitleSize(0.05);
   sumratioup__275->GetZaxis()->SetTickLength(0.025);
   sumratioup__275->GetZaxis()->SetTitleFont(42);
   sumratioup__275->Draw("hist same");
   
   TH1D *sumratiodown__276 = new TH1D("sumratiodown__276","",10,0,1);
   sumratiodown__276->SetBinContent(1,-0.01642024);
   sumratiodown__276->SetBinContent(2,-0.01365867);
   sumratiodown__276->SetBinContent(3,-0.01972749);
   sumratiodown__276->SetBinContent(4,-0.02488509);
   sumratiodown__276->SetBinContent(5,-0.02870566);
   sumratiodown__276->SetBinContent(6,-0.02550863);
   sumratiodown__276->SetBinContent(7,-0.02277492);
   sumratiodown__276->SetBinContent(8,-0.02085501);
   sumratiodown__276->SetBinContent(9,-0.01342661);
   sumratiodown__276->SetBinContent(10,-0.01031412);
   sumratiodown__276->SetBinError(1,0.002288647);
   sumratiodown__276->SetBinError(2,0.002167196);
   sumratiodown__276->SetBinError(3,0.001617233);
   sumratiodown__276->SetBinError(4,0.001528597);
   sumratiodown__276->SetBinError(5,0.001538373);
   sumratiodown__276->SetBinError(6,0.001141764);
   sumratiodown__276->SetBinError(7,0.001103813);
   sumratiodown__276->SetBinError(8,0.001058293);
   sumratiodown__276->SetBinError(9,0.001107265);
   sumratiodown__276->SetBinError(10,0.002872657);
   sumratiodown__276->SetEntries(55);
   sumratiodown__276->SetStats(0);

   ci = 1202;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratiodown__276->SetFillColor(ci);
   sumratiodown__276->SetFillStyle(3003);
   sumratiodown__276->GetXaxis()->SetTitle("isojet 1 CSV");
   sumratiodown__276->GetXaxis()->SetLabelFont(42);
   sumratiodown__276->GetXaxis()->SetLabelOffset(0.007);
   sumratiodown__276->GetXaxis()->SetTitleSize(0.05);
   sumratiodown__276->GetXaxis()->SetTickLength(0.025);
   sumratiodown__276->GetXaxis()->SetTitleFont(42);
   sumratiodown__276->GetYaxis()->SetTitle("a.u.");
   sumratiodown__276->GetYaxis()->SetLabelFont(42);
   sumratiodown__276->GetYaxis()->SetLabelOffset(0.007);
   sumratiodown__276->GetYaxis()->SetTitleSize(0.05);
   sumratiodown__276->GetYaxis()->SetTickLength(0.025);
   sumratiodown__276->GetYaxis()->SetTitleFont(42);
   sumratiodown__276->GetZaxis()->SetLabelFont(42);
   sumratiodown__276->GetZaxis()->SetLabelOffset(0.007);
   sumratiodown__276->GetZaxis()->SetTitleSize(0.05);
   sumratiodown__276->GetZaxis()->SetTickLength(0.025);
   sumratiodown__276->GetZaxis()->SetTitleFont(42);
   sumratiodown__276->Draw("hist same");
   
   Double_t Graph0_fx1023[10] = {
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
   Double_t Graph0_fy1023[10] = {
   -0.00725764,
   0.003892779,
   0.0223676,
   0.001661897,
   -0.0303539,
   -7.754564e-05,
   -0.002666473,
   -0.002895236,
   -0.001408637,
   0.001725793};
   Double_t Graph0_fex1023[10] = {
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
   Double_t Graph0_fey1023[10] = {
   0.01831827,
   0.01726493,
   0.02423924,
   0.02771721,
   0.02919614,
   0.03244177,
   0.03113628,
   0.03042557,
   0.02388455,
   0.01301711};
   TGraphErrors *gre = new TGraphErrors(10,Graph0_fx1023,Graph0_fy1023,Graph0_fex1023,Graph0_fey1023);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1023 = new TH1F("Graph_Graph1023","Graph",100,0,1.04);
   Graph_Graph1023->SetMinimum(-0.07016574);
   Graph_Graph1023->SetMaximum(0.05722253);
   Graph_Graph1023->SetDirectory(0);
   Graph_Graph1023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1023->SetLineColor(ci);
   Graph_Graph1023->GetXaxis()->SetLabelFont(42);
   Graph_Graph1023->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1023->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1023->GetXaxis()->SetTickLength(0.025);
   Graph_Graph1023->GetXaxis()->SetTitleFont(42);
   Graph_Graph1023->GetYaxis()->SetLabelFont(42);
   Graph_Graph1023->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1023->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1023->GetYaxis()->SetTickLength(0.025);
   Graph_Graph1023->GetYaxis()->SetTitleFont(42);
   Graph_Graph1023->GetZaxis()->SetLabelFont(42);
   Graph_Graph1023->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1023->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph1023->GetZaxis()->SetTickLength(0.025);
   Graph_Graph1023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1023);
   
   gre->Draw("pe0");
   pad2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
