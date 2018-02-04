void ttbar_looseLep2Eta()
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
   pad1->Range(-3.4375,0,2.8125,0.166857);
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
   h->SetMaximum(0.1477876);
   
   TH1F *h_stack_9 = new TH1F("h_stack_9","",20,-2.5,2.5);
   h_stack_9->SetMinimum(0);
   h_stack_9->SetMaximum(0.155177);
   h_stack_9->SetDirectory(0);
   h_stack_9->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h_stack_9->SetLineColor(ci);
   h_stack_9->GetXaxis()->SetLabelFont(42);
   h_stack_9->GetXaxis()->SetLabelOffset(0.007);
   h_stack_9->GetXaxis()->SetTitleSize(0.05);
   h_stack_9->GetXaxis()->SetTickLength(0.025);
   h_stack_9->GetXaxis()->SetTitleFont(42);
   h_stack_9->GetYaxis()->SetTitle("a.u.");
   h_stack_9->GetYaxis()->SetLabelFont(42);
   h_stack_9->GetYaxis()->SetLabelOffset(0.007);
   h_stack_9->GetYaxis()->SetTitleSize(0.05);
   h_stack_9->GetYaxis()->SetTickLength(0.025);
   h_stack_9->GetYaxis()->SetTitleOffset(1.5);
   h_stack_9->GetYaxis()->SetTitleFont(42);
   h_stack_9->GetZaxis()->SetLabelFont(42);
   h_stack_9->GetZaxis()->SetLabelOffset(0.007);
   h_stack_9->GetZaxis()->SetTitleSize(0.05);
   h_stack_9->GetZaxis()->SetTickLength(0.025);
   h_stack_9->GetZaxis()->SetTitleFont(42);
   h->SetHistogram(h_stack_9);
   
   
   TH1D *h_looseLep2Eta_QCD__97 = new TH1D("h_looseLep2Eta_QCD__97","",20,-2.5,2.5);
   h_looseLep2Eta_QCD__97->SetBinContent(3,0.002326346);
   h_looseLep2Eta_QCD__97->SetBinContent(4,0.001369987);
   h_looseLep2Eta_QCD__97->SetBinContent(5,0.0005384702);
   h_looseLep2Eta_QCD__97->SetBinContent(6,7.949197e-06);
   h_looseLep2Eta_QCD__97->SetBinContent(7,0.0005745276);
   h_looseLep2Eta_QCD__97->SetBinContent(8,0.001245312);
   h_looseLep2Eta_QCD__97->SetBinContent(9,0.00048734);
   h_looseLep2Eta_QCD__97->SetBinContent(10,0.002118205);
   h_looseLep2Eta_QCD__97->SetBinContent(12,0.0001320254);
   h_looseLep2Eta_QCD__97->SetBinContent(13,0.001282548);
   h_looseLep2Eta_QCD__97->SetBinContent(14,0.0008530968);
   h_looseLep2Eta_QCD__97->SetBinContent(17,0.0001965747);
   h_looseLep2Eta_QCD__97->SetBinContent(18,0.0004273574);
   h_looseLep2Eta_QCD__97->SetBinContent(20,2.582028e-05);
   h_looseLep2Eta_QCD__97->SetBinError(3,0.001427073);
   h_looseLep2Eta_QCD__97->SetBinError(4,0.001369987);
   h_looseLep2Eta_QCD__97->SetBinError(5,0.0003936762);
   h_looseLep2Eta_QCD__97->SetBinError(6,7.949197e-06);
   h_looseLep2Eta_QCD__97->SetBinError(7,0.0005745276);
   h_looseLep2Eta_QCD__97->SetBinError(8,0.0009339021);
   h_looseLep2Eta_QCD__97->SetBinError(9,0.0004057793);
   h_looseLep2Eta_QCD__97->SetBinError(10,0.001327627);
   h_looseLep2Eta_QCD__97->SetBinError(12,0.0001320254);
   h_looseLep2Eta_QCD__97->SetBinError(13,0.001253506);
   h_looseLep2Eta_QCD__97->SetBinError(14,0.0008530968);
   h_looseLep2Eta_QCD__97->SetBinError(17,0.0001965747);
   h_looseLep2Eta_QCD__97->SetBinError(18,0.0003022448);
   h_looseLep2Eta_QCD__97->SetBinError(20,2.582028e-05);
   h_looseLep2Eta_QCD__97->SetEntries(25);
   h_looseLep2Eta_QCD__97->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_looseLep2Eta_QCD__97->SetFillColor(ci);
   h_looseLep2Eta_QCD__97->GetXaxis()->SetTitle("Sub-leading lep #eta");
   h_looseLep2Eta_QCD__97->GetXaxis()->SetLabelFont(42);
   h_looseLep2Eta_QCD__97->GetXaxis()->SetLabelOffset(0.007);
   h_looseLep2Eta_QCD__97->GetXaxis()->SetTitleSize(0.05);
   h_looseLep2Eta_QCD__97->GetXaxis()->SetTickLength(0.025);
   h_looseLep2Eta_QCD__97->GetXaxis()->SetTitleFont(42);
   h_looseLep2Eta_QCD__97->GetYaxis()->SetTitle("a.u.");
   h_looseLep2Eta_QCD__97->GetYaxis()->SetLabelFont(42);
   h_looseLep2Eta_QCD__97->GetYaxis()->SetLabelOffset(0.007);
   h_looseLep2Eta_QCD__97->GetYaxis()->SetTitleSize(0.05);
   h_looseLep2Eta_QCD__97->GetYaxis()->SetTickLength(0.025);
   h_looseLep2Eta_QCD__97->GetYaxis()->SetTitleFont(42);
   h_looseLep2Eta_QCD__97->GetZaxis()->SetLabelFont(42);
   h_looseLep2Eta_QCD__97->GetZaxis()->SetLabelOffset(0.007);
   h_looseLep2Eta_QCD__97->GetZaxis()->SetTitleSize(0.05);
   h_looseLep2Eta_QCD__97->GetZaxis()->SetTickLength(0.025);
   h_looseLep2Eta_QCD__97->GetZaxis()->SetTitleFont(42);
   h->Add(h_looseLep2Eta_QCD,"");
   
   TH1D *h_looseLep2Eta_Diboson__98 = new TH1D("h_looseLep2Eta_Diboson__98","",20,-2.5,2.5);
   h_looseLep2Eta_Diboson__98->SetBinContent(1,0.001509549);
   h_looseLep2Eta_Diboson__98->SetBinContent(2,0.001425335);
   h_looseLep2Eta_Diboson__98->SetBinContent(3,0.0009999404);
   h_looseLep2Eta_Diboson__98->SetBinContent(4,0.002141854);
   h_looseLep2Eta_Diboson__98->SetBinContent(5,0.002293681);
   h_looseLep2Eta_Diboson__98->SetBinContent(6,0.002937356);
   h_looseLep2Eta_Diboson__98->SetBinContent(7,0.001819971);
   h_looseLep2Eta_Diboson__98->SetBinContent(8,0.00166779);
   h_looseLep2Eta_Diboson__98->SetBinContent(9,0.001843185);
   h_looseLep2Eta_Diboson__98->SetBinContent(10,0.0008869025);
   h_looseLep2Eta_Diboson__98->SetBinContent(11,0.002430123);
   h_looseLep2Eta_Diboson__98->SetBinContent(12,0.002129352);
   h_looseLep2Eta_Diboson__98->SetBinContent(13,0.002318385);
   h_looseLep2Eta_Diboson__98->SetBinContent(14,0.002336246);
   h_looseLep2Eta_Diboson__98->SetBinContent(15,0.001758742);
   h_looseLep2Eta_Diboson__98->SetBinContent(16,0.003043338);
   h_looseLep2Eta_Diboson__98->SetBinContent(17,0.002244624);
   h_looseLep2Eta_Diboson__98->SetBinContent(18,0.001078834);
   h_looseLep2Eta_Diboson__98->SetBinContent(19,0.001059513);
   h_looseLep2Eta_Diboson__98->SetBinContent(20,0.0008684604);
   h_looseLep2Eta_Diboson__98->SetBinError(1,0.0005319351);
   h_looseLep2Eta_Diboson__98->SetBinError(2,0.0005077166);
   h_looseLep2Eta_Diboson__98->SetBinError(3,0.0004631875);
   h_looseLep2Eta_Diboson__98->SetBinError(4,0.0006383608);
   h_looseLep2Eta_Diboson__98->SetBinError(5,0.0006597339);
   h_looseLep2Eta_Diboson__98->SetBinError(6,0.0007665611);
   h_looseLep2Eta_Diboson__98->SetBinError(7,0.00055288);
   h_looseLep2Eta_Diboson__98->SetBinError(8,0.0005473493);
   h_looseLep2Eta_Diboson__98->SetBinError(9,0.000589975);
   h_looseLep2Eta_Diboson__98->SetBinError(10,0.0004615201);
   h_looseLep2Eta_Diboson__98->SetBinError(11,0.000697587);
   h_looseLep2Eta_Diboson__98->SetBinError(12,0.0006704625);
   h_looseLep2Eta_Diboson__98->SetBinError(13,0.0006795643);
   h_looseLep2Eta_Diboson__98->SetBinError(14,0.0006789676);
   h_looseLep2Eta_Diboson__98->SetBinError(15,0.0005610512);
   h_looseLep2Eta_Diboson__98->SetBinError(16,0.0007997468);
   h_looseLep2Eta_Diboson__98->SetBinError(17,0.0006663155);
   h_looseLep2Eta_Diboson__98->SetBinError(18,0.0005015711);
   h_looseLep2Eta_Diboson__98->SetBinError(19,0.0004466125);
   h_looseLep2Eta_Diboson__98->SetBinError(20,0.0004534116);
   h_looseLep2Eta_Diboson__98->SetEntries(227);
   h_looseLep2Eta_Diboson__98->SetStats(0);

   ci = TColor::GetColor("#9966cc");
   h_looseLep2Eta_Diboson__98->SetFillColor(ci);
   h_looseLep2Eta_Diboson__98->GetXaxis()->SetTitle("Sub-leading lep #eta");
   h_looseLep2Eta_Diboson__98->GetXaxis()->SetLabelFont(42);
   h_looseLep2Eta_Diboson__98->GetXaxis()->SetLabelOffset(0.007);
   h_looseLep2Eta_Diboson__98->GetXaxis()->SetTitleSize(0.05);
   h_looseLep2Eta_Diboson__98->GetXaxis()->SetTickLength(0.025);
   h_looseLep2Eta_Diboson__98->GetXaxis()->SetTitleFont(42);
   h_looseLep2Eta_Diboson__98->GetYaxis()->SetTitle("a.u.");
   h_looseLep2Eta_Diboson__98->GetYaxis()->SetLabelFont(42);
   h_looseLep2Eta_Diboson__98->GetYaxis()->SetLabelOffset(0.007);
   h_looseLep2Eta_Diboson__98->GetYaxis()->SetTitleSize(0.05);
   h_looseLep2Eta_Diboson__98->GetYaxis()->SetTickLength(0.025);
   h_looseLep2Eta_Diboson__98->GetYaxis()->SetTitleFont(42);
   h_looseLep2Eta_Diboson__98->GetZaxis()->SetLabelFont(42);
   h_looseLep2Eta_Diboson__98->GetZaxis()->SetLabelOffset(0.007);
   h_looseLep2Eta_Diboson__98->GetZaxis()->SetTitleSize(0.05);
   h_looseLep2Eta_Diboson__98->GetZaxis()->SetTickLength(0.025);
   h_looseLep2Eta_Diboson__98->GetZaxis()->SetTitleFont(42);
   h->Add(h_looseLep2Eta_Diboson,"");
   
   TH1D *h_looseLep2Eta_ZpLjets__99 = new TH1D("h_looseLep2Eta_ZpLjets__99","",20,-2.5,2.5);
   h_looseLep2Eta_ZpLjets__99->SetBinContent(1,0.0008486013);
   h_looseLep2Eta_ZpLjets__99->SetBinContent(2,0.001461252);
   h_looseLep2Eta_ZpLjets__99->SetBinContent(3,0.001681198);
   h_looseLep2Eta_ZpLjets__99->SetBinContent(4,0.002222969);
   h_looseLep2Eta_ZpLjets__99->SetBinContent(5,0.002540745);
   h_looseLep2Eta_ZpLjets__99->SetBinContent(6,0.002940584);
   h_looseLep2Eta_ZpLjets__99->SetBinContent(7,0.002946955);
   h_looseLep2Eta_ZpLjets__99->SetBinContent(8,0.002951816);
   h_looseLep2Eta_ZpLjets__99->SetBinContent(9,0.003224362);
   h_looseLep2Eta_ZpLjets__99->SetBinContent(10,0.00299325);
   h_looseLep2Eta_ZpLjets__99->SetBinContent(11,0.003071224);
   h_looseLep2Eta_ZpLjets__99->SetBinContent(12,0.003126307);
   h_looseLep2Eta_ZpLjets__99->SetBinContent(13,0.002901045);
   h_looseLep2Eta_ZpLjets__99->SetBinContent(14,0.002806003);
   h_looseLep2Eta_ZpLjets__99->SetBinContent(15,0.003026315);
   h_looseLep2Eta_ZpLjets__99->SetBinContent(16,0.002356701);
   h_looseLep2Eta_ZpLjets__99->SetBinContent(17,0.002299711);
   h_looseLep2Eta_ZpLjets__99->SetBinContent(18,0.001880317);
   h_looseLep2Eta_ZpLjets__99->SetBinContent(19,0.001215097);
   h_looseLep2Eta_ZpLjets__99->SetBinContent(20,0.0009193526);
   h_looseLep2Eta_ZpLjets__99->SetBinError(1,9.06224e-05);
   h_looseLep2Eta_ZpLjets__99->SetBinError(2,0.0001256103);
   h_looseLep2Eta_ZpLjets__99->SetBinError(3,0.0001169376);
   h_looseLep2Eta_ZpLjets__99->SetBinError(4,0.00013357);
   h_looseLep2Eta_ZpLjets__99->SetBinError(5,0.0001533303);
   h_looseLep2Eta_ZpLjets__99->SetBinError(6,0.0001677048);
   h_looseLep2Eta_ZpLjets__99->SetBinError(7,0.0001682774);
   h_looseLep2Eta_ZpLjets__99->SetBinError(8,0.0001639633);
   h_looseLep2Eta_ZpLjets__99->SetBinError(9,0.0001689422);
   h_looseLep2Eta_ZpLjets__99->SetBinError(10,0.000168031);
   h_looseLep2Eta_ZpLjets__99->SetBinError(11,0.0001772323);
   h_looseLep2Eta_ZpLjets__99->SetBinError(12,0.0001638098);
   h_looseLep2Eta_ZpLjets__99->SetBinError(13,0.0001538998);
   h_looseLep2Eta_ZpLjets__99->SetBinError(14,0.0001537467);
   h_looseLep2Eta_ZpLjets__99->SetBinError(15,0.0001785506);
   h_looseLep2Eta_ZpLjets__99->SetBinError(16,0.0001413307);
   h_looseLep2Eta_ZpLjets__99->SetBinError(17,0.0001398193);
   h_looseLep2Eta_ZpLjets__99->SetBinError(18,0.00013216);
   h_looseLep2Eta_ZpLjets__99->SetBinError(19,9.681423e-05);
   h_looseLep2Eta_ZpLjets__99->SetBinError(20,9.082225e-05);
   h_looseLep2Eta_ZpLjets__99->SetEntries(24915);
   h_looseLep2Eta_ZpLjets__99->SetStats(0);

   ci = TColor::GetColor("#3399cc");
   h_looseLep2Eta_ZpLjets__99->SetFillColor(ci);
   h_looseLep2Eta_ZpLjets__99->GetXaxis()->SetTitle("Sub-leading lep #eta");
   h_looseLep2Eta_ZpLjets__99->GetXaxis()->SetLabelFont(42);
   h_looseLep2Eta_ZpLjets__99->GetXaxis()->SetLabelOffset(0.007);
   h_looseLep2Eta_ZpLjets__99->GetXaxis()->SetTitleSize(0.05);
   h_looseLep2Eta_ZpLjets__99->GetXaxis()->SetTickLength(0.025);
   h_looseLep2Eta_ZpLjets__99->GetXaxis()->SetTitleFont(42);
   h_looseLep2Eta_ZpLjets__99->GetYaxis()->SetTitle("a.u.");
   h_looseLep2Eta_ZpLjets__99->GetYaxis()->SetLabelFont(42);
   h_looseLep2Eta_ZpLjets__99->GetYaxis()->SetLabelOffset(0.007);
   h_looseLep2Eta_ZpLjets__99->GetYaxis()->SetTitleSize(0.05);
   h_looseLep2Eta_ZpLjets__99->GetYaxis()->SetTickLength(0.025);
   h_looseLep2Eta_ZpLjets__99->GetYaxis()->SetTitleFont(42);
   h_looseLep2Eta_ZpLjets__99->GetZaxis()->SetLabelFont(42);
   h_looseLep2Eta_ZpLjets__99->GetZaxis()->SetLabelOffset(0.007);
   h_looseLep2Eta_ZpLjets__99->GetZaxis()->SetTitleSize(0.05);
   h_looseLep2Eta_ZpLjets__99->GetZaxis()->SetTickLength(0.025);
   h_looseLep2Eta_ZpLjets__99->GetZaxis()->SetTitleFont(42);
   h->Add(h_looseLep2Eta_Z+jets,"");
   
   TH1D *h_looseLep2Eta_WpLjets__100 = new TH1D("h_looseLep2Eta_WpLjets__100","",20,-2.5,2.5);
   h_looseLep2Eta_WpLjets__100->SetBinContent(1,0.002689671);
   h_looseLep2Eta_WpLjets__100->SetBinContent(2,0.003078101);
   h_looseLep2Eta_WpLjets__100->SetBinContent(3,0.00327559);
   h_looseLep2Eta_WpLjets__100->SetBinContent(4,0.003039533);
   h_looseLep2Eta_WpLjets__100->SetBinContent(5,0.002090022);
   h_looseLep2Eta_WpLjets__100->SetBinContent(6,0.002528395);
   h_looseLep2Eta_WpLjets__100->SetBinContent(7,0.001129039);
   h_looseLep2Eta_WpLjets__100->SetBinContent(8,0.001941077);
   h_looseLep2Eta_WpLjets__100->SetBinContent(9,0.001062113);
   h_looseLep2Eta_WpLjets__100->SetBinContent(10,0.001572836);
   h_looseLep2Eta_WpLjets__100->SetBinContent(11,0.00107898);
   h_looseLep2Eta_WpLjets__100->SetBinContent(12,0.001221572);
   h_looseLep2Eta_WpLjets__100->SetBinContent(13,0.001603386);
   h_looseLep2Eta_WpLjets__100->SetBinContent(14,0.001424108);
   h_looseLep2Eta_WpLjets__100->SetBinContent(15,0.001947414);
   h_looseLep2Eta_WpLjets__100->SetBinContent(16,0.002284456);
   h_looseLep2Eta_WpLjets__100->SetBinContent(17,0.003637798);
   h_looseLep2Eta_WpLjets__100->SetBinContent(18,0.003908127);
   h_looseLep2Eta_WpLjets__100->SetBinContent(19,0.002884126);
   h_looseLep2Eta_WpLjets__100->SetBinContent(20,0.003286434);
   h_looseLep2Eta_WpLjets__100->SetBinError(1,0.0004523049);
   h_looseLep2Eta_WpLjets__100->SetBinError(2,0.0004025115);
   h_looseLep2Eta_WpLjets__100->SetBinError(3,0.0004454609);
   h_looseLep2Eta_WpLjets__100->SetBinError(4,0.0004275992);
   h_looseLep2Eta_WpLjets__100->SetBinError(5,0.0003370328);
   h_looseLep2Eta_WpLjets__100->SetBinError(6,0.0004480009);
   h_looseLep2Eta_WpLjets__100->SetBinError(7,0.0002504572);
   h_looseLep2Eta_WpLjets__100->SetBinError(8,0.0003369746);
   h_looseLep2Eta_WpLjets__100->SetBinError(9,0.0002519025);
   h_looseLep2Eta_WpLjets__100->SetBinError(10,0.0002951068);
   h_looseLep2Eta_WpLjets__100->SetBinError(11,0.0002522769);
   h_looseLep2Eta_WpLjets__100->SetBinError(12,0.0002865009);
   h_looseLep2Eta_WpLjets__100->SetBinError(13,0.0003293176);
   h_looseLep2Eta_WpLjets__100->SetBinError(14,0.0002782326);
   h_looseLep2Eta_WpLjets__100->SetBinError(15,0.0003995118);
   h_looseLep2Eta_WpLjets__100->SetBinError(16,0.0003288607);
   h_looseLep2Eta_WpLjets__100->SetBinError(17,0.0004522156);
   h_looseLep2Eta_WpLjets__100->SetBinError(18,0.0004849187);
   h_looseLep2Eta_WpLjets__100->SetBinError(19,0.0003930548);
   h_looseLep2Eta_WpLjets__100->SetBinError(20,0.0004892576);
   h_looseLep2Eta_WpLjets__100->SetEntries(3309);
   h_looseLep2Eta_WpLjets__100->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   h_looseLep2Eta_WpLjets__100->SetFillColor(ci);
   h_looseLep2Eta_WpLjets__100->GetXaxis()->SetTitle("Sub-leading lep #eta");
   h_looseLep2Eta_WpLjets__100->GetXaxis()->SetLabelFont(42);
   h_looseLep2Eta_WpLjets__100->GetXaxis()->SetLabelOffset(0.007);
   h_looseLep2Eta_WpLjets__100->GetXaxis()->SetTitleSize(0.05);
   h_looseLep2Eta_WpLjets__100->GetXaxis()->SetTickLength(0.025);
   h_looseLep2Eta_WpLjets__100->GetXaxis()->SetTitleFont(42);
   h_looseLep2Eta_WpLjets__100->GetYaxis()->SetTitle("a.u.");
   h_looseLep2Eta_WpLjets__100->GetYaxis()->SetLabelFont(42);
   h_looseLep2Eta_WpLjets__100->GetYaxis()->SetLabelOffset(0.007);
   h_looseLep2Eta_WpLjets__100->GetYaxis()->SetTitleSize(0.05);
   h_looseLep2Eta_WpLjets__100->GetYaxis()->SetTickLength(0.025);
   h_looseLep2Eta_WpLjets__100->GetYaxis()->SetTitleFont(42);
   h_looseLep2Eta_WpLjets__100->GetZaxis()->SetLabelFont(42);
   h_looseLep2Eta_WpLjets__100->GetZaxis()->SetLabelOffset(0.007);
   h_looseLep2Eta_WpLjets__100->GetZaxis()->SetTitleSize(0.05);
   h_looseLep2Eta_WpLjets__100->GetZaxis()->SetTickLength(0.025);
   h_looseLep2Eta_WpLjets__100->GetZaxis()->SetTitleFont(42);
   h->Add(h_looseLep2Eta_W+jets,"");
   
   TH1D *h_looseLep2Eta_TopsPoPLFcP__101 = new TH1D("h_looseLep2Eta_TopsPoPLFcP__101","",20,-2.5,2.5);
   h_looseLep2Eta_TopsPoPLFcP__101->SetBinContent(1,0.00448229);
   h_looseLep2Eta_TopsPoPLFcP__101->SetBinContent(2,0.007316471);
   h_looseLep2Eta_TopsPoPLFcP__101->SetBinContent(3,0.01077927);
   h_looseLep2Eta_TopsPoPLFcP__101->SetBinContent(4,0.01247102);
   h_looseLep2Eta_TopsPoPLFcP__101->SetBinContent(5,0.01488391);
   h_looseLep2Eta_TopsPoPLFcP__101->SetBinContent(6,0.01788682);
   h_looseLep2Eta_TopsPoPLFcP__101->SetBinContent(7,0.02170098);
   h_looseLep2Eta_TopsPoPLFcP__101->SetBinContent(8,0.02424928);
   h_looseLep2Eta_TopsPoPLFcP__101->SetBinContent(9,0.0242715);
   h_looseLep2Eta_TopsPoPLFcP__101->SetBinContent(10,0.02542836);
   h_looseLep2Eta_TopsPoPLFcP__101->SetBinContent(11,0.02467446);
   h_looseLep2Eta_TopsPoPLFcP__101->SetBinContent(12,0.02497129);
   h_looseLep2Eta_TopsPoPLFcP__101->SetBinContent(13,0.02336023);
   h_looseLep2Eta_TopsPoPLFcP__101->SetBinContent(14,0.02219657);
   h_looseLep2Eta_TopsPoPLFcP__101->SetBinContent(15,0.01946691);
   h_looseLep2Eta_TopsPoPLFcP__101->SetBinContent(16,0.01490646);
   h_looseLep2Eta_TopsPoPLFcP__101->SetBinContent(17,0.01211644);
   h_looseLep2Eta_TopsPoPLFcP__101->SetBinContent(18,0.0100638);
   h_looseLep2Eta_TopsPoPLFcP__101->SetBinContent(19,0.008234709);
   h_looseLep2Eta_TopsPoPLFcP__101->SetBinContent(20,0.004618366);
   h_looseLep2Eta_TopsPoPLFcP__101->SetBinError(1,0.0002506685);
   h_looseLep2Eta_TopsPoPLFcP__101->SetBinError(2,0.0002667631);
   h_looseLep2Eta_TopsPoPLFcP__101->SetBinError(3,0.0003845741);
   h_looseLep2Eta_TopsPoPLFcP__101->SetBinError(4,0.0003767126);
   h_looseLep2Eta_TopsPoPLFcP__101->SetBinError(5,0.000435832);
   h_looseLep2Eta_TopsPoPLFcP__101->SetBinError(6,0.0004254817);
   h_looseLep2Eta_TopsPoPLFcP__101->SetBinError(7,0.0005012453);
   h_looseLep2Eta_TopsPoPLFcP__101->SetBinError(8,0.0005381869);
   h_looseLep2Eta_TopsPoPLFcP__101->SetBinError(9,0.0005224004);
   h_looseLep2Eta_TopsPoPLFcP__101->SetBinError(10,0.0005684281);
   h_looseLep2Eta_TopsPoPLFcP__101->SetBinError(11,0.0005465768);
   h_looseLep2Eta_TopsPoPLFcP__101->SetBinError(12,0.00053563);
   h_looseLep2Eta_TopsPoPLFcP__101->SetBinError(13,0.0005113868);
   h_looseLep2Eta_TopsPoPLFcP__101->SetBinError(14,0.0005208859);
   h_looseLep2Eta_TopsPoPLFcP__101->SetBinError(15,0.0004743716);
   h_looseLep2Eta_TopsPoPLFcP__101->SetBinError(16,0.0003832421);
   h_looseLep2Eta_TopsPoPLFcP__101->SetBinError(17,0.0003637571);
   h_looseLep2Eta_TopsPoPLFcP__101->SetBinError(18,0.0003172964);
   h_looseLep2Eta_TopsPoPLFcP__101->SetBinError(19,0.000305739);
   h_looseLep2Eta_TopsPoPLFcP__101->SetBinError(20,0.0002284658);
   h_looseLep2Eta_TopsPoPLFcP__101->SetEntries(45754);
   h_looseLep2Eta_TopsPoPLFcP__101->SetStats(0);

   ci = TColor::GetColor("#cc33cc");
   h_looseLep2Eta_TopsPoPLFcP__101->SetFillColor(ci);
   h_looseLep2Eta_TopsPoPLFcP__101->GetXaxis()->SetTitle("Sub-leading lep #eta");
   h_looseLep2Eta_TopsPoPLFcP__101->GetXaxis()->SetLabelFont(42);
   h_looseLep2Eta_TopsPoPLFcP__101->GetXaxis()->SetLabelOffset(0.007);
   h_looseLep2Eta_TopsPoPLFcP__101->GetXaxis()->SetTitleSize(0.05);
   h_looseLep2Eta_TopsPoPLFcP__101->GetXaxis()->SetTickLength(0.025);
   h_looseLep2Eta_TopsPoPLFcP__101->GetXaxis()->SetTitleFont(42);
   h_looseLep2Eta_TopsPoPLFcP__101->GetYaxis()->SetTitle("a.u.");
   h_looseLep2Eta_TopsPoPLFcP__101->GetYaxis()->SetLabelFont(42);
   h_looseLep2Eta_TopsPoPLFcP__101->GetYaxis()->SetLabelOffset(0.007);
   h_looseLep2Eta_TopsPoPLFcP__101->GetYaxis()->SetTitleSize(0.05);
   h_looseLep2Eta_TopsPoPLFcP__101->GetYaxis()->SetTickLength(0.025);
   h_looseLep2Eta_TopsPoPLFcP__101->GetYaxis()->SetTitleFont(42);
   h_looseLep2Eta_TopsPoPLFcP__101->GetZaxis()->SetLabelFont(42);
   h_looseLep2Eta_TopsPoPLFcP__101->GetZaxis()->SetLabelOffset(0.007);
   h_looseLep2Eta_TopsPoPLFcP__101->GetZaxis()->SetTitleSize(0.05);
   h_looseLep2Eta_TopsPoPLFcP__101->GetZaxis()->SetTickLength(0.025);
   h_looseLep2Eta_TopsPoPLFcP__101->GetZaxis()->SetTitleFont(42);
   h->Add(h_looseLep2Eta_Top (LF),"");
   
   TH1D *h_looseLep2Eta_TopsPoPHFcP__102 = new TH1D("h_looseLep2Eta_TopsPoPHFcP__102","",20,-2.5,2.5);
   h_looseLep2Eta_TopsPoPHFcP__102->SetBinContent(1,0.006139036);
   h_looseLep2Eta_TopsPoPHFcP__102->SetBinContent(2,0.01130354);
   h_looseLep2Eta_TopsPoPHFcP__102->SetBinContent(3,0.01589634);
   h_looseLep2Eta_TopsPoPHFcP__102->SetBinContent(4,0.02027484);
   h_looseLep2Eta_TopsPoPHFcP__102->SetBinContent(5,0.02494846);
   h_looseLep2Eta_TopsPoPHFcP__102->SetBinContent(6,0.03005335);
   h_looseLep2Eta_TopsPoPHFcP__102->SetBinContent(7,0.03342269);
   h_looseLep2Eta_TopsPoPHFcP__102->SetBinContent(8,0.03944223);
   h_looseLep2Eta_TopsPoPHFcP__102->SetBinContent(9,0.04115065);
   h_looseLep2Eta_TopsPoPHFcP__102->SetBinContent(10,0.04089427);
   h_looseLep2Eta_TopsPoPHFcP__102->SetBinContent(11,0.04234658);
   h_looseLep2Eta_TopsPoPHFcP__102->SetBinContent(12,0.04061385);
   h_looseLep2Eta_TopsPoPHFcP__102->SetBinContent(13,0.0396372);
   h_looseLep2Eta_TopsPoPHFcP__102->SetBinContent(14,0.03414794);
   h_looseLep2Eta_TopsPoPHFcP__102->SetBinContent(15,0.03045617);
   h_looseLep2Eta_TopsPoPHFcP__102->SetBinContent(16,0.02466448);
   h_looseLep2Eta_TopsPoPHFcP__102->SetBinContent(17,0.0197771);
   h_looseLep2Eta_TopsPoPHFcP__102->SetBinContent(18,0.01620154);
   h_looseLep2Eta_TopsPoPHFcP__102->SetBinContent(19,0.01211044);
   h_looseLep2Eta_TopsPoPHFcP__102->SetBinContent(20,0.00696483);
   h_looseLep2Eta_TopsPoPHFcP__102->SetBinError(1,0.000278022);
   h_looseLep2Eta_TopsPoPHFcP__102->SetBinError(2,0.0003578393);
   h_looseLep2Eta_TopsPoPHFcP__102->SetBinError(3,0.0004067885);
   h_looseLep2Eta_TopsPoPHFcP__102->SetBinError(4,0.0004945141);
   h_looseLep2Eta_TopsPoPHFcP__102->SetBinError(5,0.0005486855);
   h_looseLep2Eta_TopsPoPHFcP__102->SetBinError(6,0.0005893452);
   h_looseLep2Eta_TopsPoPHFcP__102->SetBinError(7,0.0006015351);
   h_looseLep2Eta_TopsPoPHFcP__102->SetBinError(8,0.0007303439);
   h_looseLep2Eta_TopsPoPHFcP__102->SetBinError(9,0.0006933973);
   h_looseLep2Eta_TopsPoPHFcP__102->SetBinError(10,0.0007214215);
   h_looseLep2Eta_TopsPoPHFcP__102->SetBinError(11,0.0007307387);
   h_looseLep2Eta_TopsPoPHFcP__102->SetBinError(12,0.0006998122);
   h_looseLep2Eta_TopsPoPHFcP__102->SetBinError(13,0.0007019042);
   h_looseLep2Eta_TopsPoPHFcP__102->SetBinError(14,0.0006304653);
   h_looseLep2Eta_TopsPoPHFcP__102->SetBinError(15,0.0006005192);
   h_looseLep2Eta_TopsPoPHFcP__102->SetBinError(16,0.0005556433);
   h_looseLep2Eta_TopsPoPHFcP__102->SetBinError(17,0.000485241);
   h_looseLep2Eta_TopsPoPHFcP__102->SetBinError(18,0.0004435442);
   h_looseLep2Eta_TopsPoPHFcP__102->SetBinError(19,0.00038491);
   h_looseLep2Eta_TopsPoPHFcP__102->SetBinError(20,0.0002913517);
   h_looseLep2Eta_TopsPoPHFcP__102->SetEntries(77950);
   h_looseLep2Eta_TopsPoPHFcP__102->SetStats(0);

   ci = TColor::GetColor("#ff9900");
   h_looseLep2Eta_TopsPoPHFcP__102->SetFillColor(ci);
   h_looseLep2Eta_TopsPoPHFcP__102->GetXaxis()->SetTitle("Sub-leading lep #eta");
   h_looseLep2Eta_TopsPoPHFcP__102->GetXaxis()->SetLabelFont(42);
   h_looseLep2Eta_TopsPoPHFcP__102->GetXaxis()->SetLabelOffset(0.007);
   h_looseLep2Eta_TopsPoPHFcP__102->GetXaxis()->SetTitleSize(0.05);
   h_looseLep2Eta_TopsPoPHFcP__102->GetXaxis()->SetTickLength(0.025);
   h_looseLep2Eta_TopsPoPHFcP__102->GetXaxis()->SetTitleFont(42);
   h_looseLep2Eta_TopsPoPHFcP__102->GetYaxis()->SetTitle("a.u.");
   h_looseLep2Eta_TopsPoPHFcP__102->GetYaxis()->SetLabelFont(42);
   h_looseLep2Eta_TopsPoPHFcP__102->GetYaxis()->SetLabelOffset(0.007);
   h_looseLep2Eta_TopsPoPHFcP__102->GetYaxis()->SetTitleSize(0.05);
   h_looseLep2Eta_TopsPoPHFcP__102->GetYaxis()->SetTickLength(0.025);
   h_looseLep2Eta_TopsPoPHFcP__102->GetYaxis()->SetTitleFont(42);
   h_looseLep2Eta_TopsPoPHFcP__102->GetZaxis()->SetLabelFont(42);
   h_looseLep2Eta_TopsPoPHFcP__102->GetZaxis()->SetLabelOffset(0.007);
   h_looseLep2Eta_TopsPoPHFcP__102->GetZaxis()->SetTitleSize(0.05);
   h_looseLep2Eta_TopsPoPHFcP__102->GetZaxis()->SetTickLength(0.025);
   h_looseLep2Eta_TopsPoPHFcP__102->GetZaxis()->SetTitleFont(42);
   h->Add(h_looseLep2Eta_Top (HF),"");
   h->Draw("hist");
   
   TH1D *hsum__103 = new TH1D("hsum__103","",20,-2.5,2.5);
   hsum__103->SetBinContent(1,0.01566915);
   hsum__103->SetBinContent(2,0.0245847);
   hsum__103->SetBinContent(3,0.03495869);
   hsum__103->SetBinContent(4,0.04152021);
   hsum__103->SetBinContent(5,0.04729528);
   hsum__103->SetBinContent(6,0.05635445);
   hsum__103->SetBinContent(7,0.06159416);
   hsum__103->SetBinContent(8,0.0714975);
   hsum__103->SetBinContent(9,0.07203916);
   hsum__103->SetBinContent(10,0.07389382);
   hsum__103->SetBinContent(11,0.07360137);
   hsum__103->SetBinContent(12,0.0721944);
   hsum__103->SetBinContent(13,0.07110278);
   hsum__103->SetBinContent(14,0.06376396);
   hsum__103->SetBinContent(15,0.05665555);
   hsum__103->SetBinContent(16,0.04725543);
   hsum__103->SetBinContent(17,0.04027225);
   hsum__103->SetBinContent(18,0.03355998);
   hsum__103->SetBinContent(19,0.02550389);
   hsum__103->SetBinContent(20,0.01668326);
   hsum__103->SetBinError(1,0.0007974196);
   hsum__103->SetBinError(2,0.0007967316);
   hsum__103->SetBinError(3,0.001666303);
   hsum__103->SetBinError(4,0.001694552);
   hsum__103->SetBinError(5,0.001103783);
   hsum__103->SetBinError(6,0.001159686);
   hsum__103->SetBinError(7,0.001157539);
   hsum__103->SetBinError(8,0.001461249);
   hsum__103->SetBinError(9,0.001165515);
   hsum__103->SetBinError(10,0.001713031);
   hsum__103->SetBinError(11,0.001189289);
   hsum__103->SetBinError(12,0.001162972);
   hsum__103->SetBinError(13,0.001708627);
   hsum__103->SetBinError(14,0.001399511);
   hsum__103->SetBinError(15,0.00104495);
   hsum__103->SetBinError(16,0.001106044);
   hsum__103->SetBinError(17,0.001036554);
   hsum__103->SetBinError(18,0.0009449585);
   hsum__103->SetBinError(19,0.0007777917);
   hsum__103->SetBinError(20,0.0007687345);
   hsum__103->SetEntries(65);
   hsum__103->SetStats(0);

   ci = 1188;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   hsum__103->SetFillColor(ci);
   hsum__103->SetFillStyle(3003);
   hsum__103->SetLineWidth(0);
   hsum__103->GetXaxis()->SetTitle("Sub-leading lep #eta");
   hsum__103->GetXaxis()->SetLabelFont(42);
   hsum__103->GetXaxis()->SetLabelOffset(0.007);
   hsum__103->GetXaxis()->SetTitleSize(0.05);
   hsum__103->GetXaxis()->SetTickLength(0.025);
   hsum__103->GetXaxis()->SetTitleFont(42);
   hsum__103->GetYaxis()->SetTitle("a.u.");
   hsum__103->GetYaxis()->SetLabelFont(42);
   hsum__103->GetYaxis()->SetLabelOffset(0.007);
   hsum__103->GetYaxis()->SetTitleSize(0.05);
   hsum__103->GetYaxis()->SetTickLength(0.025);
   hsum__103->GetYaxis()->SetTitleFont(42);
   hsum__103->GetZaxis()->SetLabelFont(42);
   hsum__103->GetZaxis()->SetLabelOffset(0.007);
   hsum__103->GetZaxis()->SetTitleSize(0.05);
   hsum__103->GetZaxis()->SetTickLength(0.025);
   hsum__103->GetZaxis()->SetTitleFont(42);
   hsum__103->Draw("e2 same");
   
   TH1D *h_looseLep2Eta_Data__104 = new TH1D("h_looseLep2Eta_Data__104","",20,-2.5,2.5);
   h_looseLep2Eta_Data__104->SetBinContent(1,0.01568831);
   h_looseLep2Eta_Data__104->SetBinContent(2,0.02487515);
   h_looseLep2Eta_Data__104->SetBinContent(3,0.03491002);
   h_looseLep2Eta_Data__104->SetBinContent(4,0.03882031);
   h_looseLep2Eta_Data__104->SetBinContent(5,0.04927919);
   h_looseLep2Eta_Data__104->SetBinContent(6,0.05549797);
   h_looseLep2Eta_Data__104->SetBinContent(7,0.06393103);
   h_looseLep2Eta_Data__104->SetBinContent(8,0.07222275);
   h_looseLep2Eta_Data__104->SetBinContent(9,0.07269387);
   h_looseLep2Eta_Data__104->SetBinContent(10,0.0743899);
   h_looseLep2Eta_Data__104->SetBinContent(11,0.07533214);
   h_looseLep2Eta_Data__104->SetBinContent(12,0.07509658);
   h_looseLep2Eta_Data__104->SetBinContent(13,0.06977292);
   h_looseLep2Eta_Data__104->SetBinContent(14,0.06393103);
   h_looseLep2Eta_Data__104->SetBinContent(15,0.05540375);
   h_looseLep2Eta_Data__104->SetBinContent(16,0.04748893);
   h_looseLep2Eta_Data__104->SetBinContent(17,0.0379723);
   h_looseLep2Eta_Data__104->SetBinContent(18,0.03128239);
   h_looseLep2Eta_Data__104->SetBinContent(19,0.02572317);
   h_looseLep2Eta_Data__104->SetBinContent(20,0.01568831);
   h_looseLep2Eta_Data__104->SetBinError(1,0.0008597139);
   h_looseLep2Eta_Data__104->SetBinError(2,0.001082552);
   h_looseLep2Eta_Data__104->SetBinError(3,0.001282451);
   h_looseLep2Eta_Data__104->SetBinError(4,0.00135237);
   h_looseLep2Eta_Data__104->SetBinError(5,0.001523694);
   h_looseLep2Eta_Data__104->SetBinError(6,0.001616979);
   h_looseLep2Eta_Data__104->SetBinError(7,0.001735489);
   h_looseLep2Eta_Data__104->SetBinError(8,0.001844603);
   h_looseLep2Eta_Data__104->SetBinError(9,0.00185061);
   h_looseLep2Eta_Data__104->SetBinError(10,0.001872074);
   h_looseLep2Eta_Data__104->SetBinError(11,0.001883892);
   h_looseLep2Eta_Data__104->SetBinError(12,0.001880945);
   h_looseLep2Eta_Data__104->SetBinError(13,0.001813048);
   h_looseLep2Eta_Data__104->SetBinError(14,0.001735489);
   h_looseLep2Eta_Data__104->SetBinError(15,0.001615606);
   h_looseLep2Eta_Data__104->SetBinError(16,0.001495761);
   h_looseLep2Eta_Data__104->SetBinError(17,0.001337517);
   h_looseLep2Eta_Data__104->SetBinError(18,0.001213992);
   h_looseLep2Eta_Data__104->SetBinError(19,0.00110085);
   h_looseLep2Eta_Data__104->SetBinError(20,0.0008597139);
   h_looseLep2Eta_Data__104->SetEntries(21226);
   h_looseLep2Eta_Data__104->SetStats(0);
   h_looseLep2Eta_Data__104->SetLineWidth(3);
   h_looseLep2Eta_Data__104->SetMarkerStyle(20);
   h_looseLep2Eta_Data__104->SetMarkerSize(2);
   h_looseLep2Eta_Data__104->GetXaxis()->SetTitle("Sub-leading lep #eta");
   h_looseLep2Eta_Data__104->GetXaxis()->SetLabelFont(42);
   h_looseLep2Eta_Data__104->GetXaxis()->SetLabelOffset(0.007);
   h_looseLep2Eta_Data__104->GetXaxis()->SetTitleSize(0.05);
   h_looseLep2Eta_Data__104->GetXaxis()->SetTickLength(0.025);
   h_looseLep2Eta_Data__104->GetXaxis()->SetTitleFont(42);
   h_looseLep2Eta_Data__104->GetYaxis()->SetTitle("a.u.");
   h_looseLep2Eta_Data__104->GetYaxis()->SetLabelFont(42);
   h_looseLep2Eta_Data__104->GetYaxis()->SetLabelOffset(0.007);
   h_looseLep2Eta_Data__104->GetYaxis()->SetTitleSize(0.05);
   h_looseLep2Eta_Data__104->GetYaxis()->SetTickLength(0.025);
   h_looseLep2Eta_Data__104->GetYaxis()->SetTitleFont(42);
   h_looseLep2Eta_Data__104->GetZaxis()->SetLabelFont(42);
   h_looseLep2Eta_Data__104->GetZaxis()->SetLabelOffset(0.007);
   h_looseLep2Eta_Data__104->GetZaxis()->SetTitleSize(0.05);
   h_looseLep2Eta_Data__104->GetZaxis()->SetTickLength(0.025);
   h_looseLep2Eta_Data__104->GetZaxis()->SetTitleFont(42);
   h_looseLep2Eta_Data__104->Draw("elp same");
   
   TLegend *leg = new TLegend(0.6,0.55,0.88,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("h_looseLep2Eta_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_looseLep2Eta_Top (HF)","Top (HF)","F");

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
   entry=leg->AddEntry("h_looseLep2Eta_Top (LF)","Top (LF)","F");

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
   entry=leg->AddEntry("h_looseLep2Eta_W+jets","W+jets","F");

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
   entry=leg->AddEntry("h_looseLep2Eta_Z+jets","Z+jets","F");

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
   entry=leg->AddEntry("h_looseLep2Eta_Diboson","Diboson","F");

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
   entry=leg->AddEntry("h_looseLep2Eta_QCD","QCD","F");

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
   entry=leg->AddEntry("h_looseLep2Eta_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_looseLep2Eta_Top (HF)","Top (HF)","F");

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
   entry=leg->AddEntry("h_looseLep2Eta_Top (LF)","Top (LF)","F");

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
   entry=leg->AddEntry("h_looseLep2Eta_W+jets","W+jets","F");

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
   entry=leg->AddEntry("h_looseLep2Eta_Z+jets","Z+jets","F");

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
   entry=leg->AddEntry("h_looseLep2Eta_Diboson","Diboson","F");

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
   entry=leg->AddEntry("h_looseLep2Eta_QCD","QCD","F");

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
   
   TH1D *ratio__105 = new TH1D("ratio__105","",20,-2.5,2.5);
   ratio__105->SetBinContent(1,0.001222849);
   ratio__105->SetBinContent(2,0.01181436);
   ratio__105->SetBinContent(3,-0.001392365);
   ratio__105->SetBinContent(4,-0.06502599);
   ratio__105->SetBinContent(5,0.04194725);
   ratio__105->SetBinContent(6,-0.01519805);
   ratio__105->SetBinContent(7,0.03793967);
   ratio__105->SetBinContent(8,0.01014364);
   ratio__105->SetBinContent(9,0.009088278);
   ratio__105->SetBinContent(10,0.00671339);
   ratio__105->SetBinContent(11,0.02351546);
   ratio__105->SetBinContent(12,0.04019952);
   ratio__105->SetBinContent(13,-0.01870334);
   ratio__105->SetBinContent(14,0.002620101);
   ratio__105->SetBinContent(15,-0.02209491);
   ratio__105->SetBinContent(16,0.004941225);
   ratio__105->SetBinContent(17,-0.05711001);
   ratio__105->SetBinContent(18,-0.06786627);
   ratio__105->SetBinContent(19,0.00859797);
   ratio__105->SetBinContent(20,-0.05963784);
   ratio__105->SetBinError(1,0.0001);
   ratio__105->SetBinError(2,0.0001);
   ratio__105->SetBinError(3,0.0001);
   ratio__105->SetBinError(4,0.0001);
   ratio__105->SetBinError(5,0.0001);
   ratio__105->SetBinError(6,0.0001);
   ratio__105->SetBinError(7,0.0001);
   ratio__105->SetBinError(8,0.0001);
   ratio__105->SetBinError(9,0.0001);
   ratio__105->SetBinError(10,0.0001);
   ratio__105->SetBinError(11,0.0001);
   ratio__105->SetBinError(12,0.0001);
   ratio__105->SetBinError(13,0.0001);
   ratio__105->SetBinError(14,0.0001);
   ratio__105->SetBinError(15,0.0001);
   ratio__105->SetBinError(16,0.0001);
   ratio__105->SetBinError(17,0.0001);
   ratio__105->SetBinError(18,0.0001);
   ratio__105->SetBinError(19,0.0001);
   ratio__105->SetBinError(20,0.0001);
   ratio__105->SetMinimum(-0.48);
   ratio__105->SetMaximum(0.48);
   ratio__105->SetEntries(21246);
   ratio__105->SetStats(0);
   ratio__105->SetLineWidth(3);
   ratio__105->SetMarkerStyle(20);
   ratio__105->SetMarkerSize(2);
   ratio__105->GetXaxis()->SetTitle("Sub-leading lep #eta");
   ratio__105->GetXaxis()->SetLabelFont(43);
   ratio__105->GetXaxis()->SetLabelOffset(0.007);
   ratio__105->GetXaxis()->SetLabelSize(30);
   ratio__105->GetXaxis()->SetTitleSize(40);
   ratio__105->GetXaxis()->SetTickLength(0.025);
   ratio__105->GetXaxis()->SetTitleOffset(5);
   ratio__105->GetXaxis()->SetTitleFont(43);
   ratio__105->GetYaxis()->SetTitle("#frac{Data-Exp}{Exp}");
   ratio__105->GetYaxis()->SetNdivisions(5);
   ratio__105->GetYaxis()->SetLabelFont(43);
   ratio__105->GetYaxis()->SetLabelOffset(0.007);
   ratio__105->GetYaxis()->SetLabelSize(30);
   ratio__105->GetYaxis()->SetTitleSize(40);
   ratio__105->GetYaxis()->SetTickLength(0.025);
   ratio__105->GetYaxis()->SetTitleOffset(2.5);
   ratio__105->GetYaxis()->SetTitleFont(43);
   ratio__105->GetZaxis()->SetLabelFont(42);
   ratio__105->GetZaxis()->SetLabelOffset(0.007);
   ratio__105->GetZaxis()->SetTitleSize(0.05);
   ratio__105->GetZaxis()->SetTickLength(0.025);
   ratio__105->GetZaxis()->SetTitleFont(42);
   ratio__105->Draw("elp");
   
   TH1D *zero__106 = new TH1D("zero__106","",20,-2.5,2.5);
   zero__106->SetBinError(1,0.0008597139);
   zero__106->SetBinError(2,0.001082552);
   zero__106->SetBinError(3,0.001282451);
   zero__106->SetBinError(4,0.00135237);
   zero__106->SetBinError(5,0.001523694);
   zero__106->SetBinError(6,0.001616979);
   zero__106->SetBinError(7,0.001735489);
   zero__106->SetBinError(8,0.001844603);
   zero__106->SetBinError(9,0.00185061);
   zero__106->SetBinError(10,0.001872074);
   zero__106->SetBinError(11,0.001883892);
   zero__106->SetBinError(12,0.001880945);
   zero__106->SetBinError(13,0.001813048);
   zero__106->SetBinError(14,0.001735489);
   zero__106->SetBinError(15,0.001615606);
   zero__106->SetBinError(16,0.001495761);
   zero__106->SetBinError(17,0.001337517);
   zero__106->SetBinError(18,0.001213992);
   zero__106->SetBinError(19,0.00110085);
   zero__106->SetBinError(20,0.0008597139);
   zero__106->SetEntries(21246);
   zero__106->SetStats(0);
   zero__106->SetLineWidth(3);
   zero__106->SetMarkerStyle(20);
   zero__106->SetMarkerSize(2);
   zero__106->GetXaxis()->SetTitle("Sub-leading lep #eta");
   zero__106->GetXaxis()->SetLabelFont(42);
   zero__106->GetXaxis()->SetLabelOffset(0.007);
   zero__106->GetXaxis()->SetTitleSize(0.05);
   zero__106->GetXaxis()->SetTickLength(0.025);
   zero__106->GetXaxis()->SetTitleFont(42);
   zero__106->GetYaxis()->SetTitle("a.u.");
   zero__106->GetYaxis()->SetLabelFont(42);
   zero__106->GetYaxis()->SetLabelOffset(0.007);
   zero__106->GetYaxis()->SetTitleSize(0.05);
   zero__106->GetYaxis()->SetTickLength(0.025);
   zero__106->GetYaxis()->SetTitleFont(42);
   zero__106->GetZaxis()->SetLabelFont(42);
   zero__106->GetZaxis()->SetLabelOffset(0.007);
   zero__106->GetZaxis()->SetTitleSize(0.05);
   zero__106->GetZaxis()->SetTickLength(0.025);
   zero__106->GetZaxis()->SetTitleFont(42);
   zero__106->Draw("hist same");
   
   TH1D *sumratioup__107 = new TH1D("sumratioup__107","",20,-2.5,2.5);
   sumratioup__107->SetBinContent(1,0.05089107);
   sumratioup__107->SetBinContent(2,0.03240762);
   sumratioup__107->SetBinContent(3,0.0476649);
   sumratioup__107->SetBinContent(4,0.04081272);
   sumratioup__107->SetBinContent(5,0.02333812);
   sumratioup__107->SetBinContent(6,0.02057842);
   sumratioup__107->SetBinContent(7,0.01879299);
   sumratioup__107->SetBinContent(8,0.02043776);
   sumratioup__107->SetBinContent(9,0.01617891);
   sumratioup__107->SetBinContent(10,0.02318233);
   sumratioup__107->SetBinContent(11,0.01615851);
   sumratioup__107->SetBinContent(12,0.01610889);
   sumratioup__107->SetBinContent(13,0.02403038);
   sumratioup__107->SetBinContent(14,0.02194831);
   sumratioup__107->SetBinContent(15,0.01844391);
   sumratioup__107->SetBinContent(16,0.02340564);
   sumratioup__107->SetBinContent(17,0.02573867);
   sumratioup__107->SetBinContent(18,0.0281573);
   sumratioup__107->SetBinContent(19,0.03049698);
   sumratioup__107->SetBinContent(20,0.04607819);
   sumratioup__107->SetBinError(1,0.0007974196);
   sumratioup__107->SetBinError(2,0.0007967316);
   sumratioup__107->SetBinError(3,0.001666303);
   sumratioup__107->SetBinError(4,0.001694552);
   sumratioup__107->SetBinError(5,0.001103783);
   sumratioup__107->SetBinError(6,0.001159686);
   sumratioup__107->SetBinError(7,0.001157539);
   sumratioup__107->SetBinError(8,0.001461249);
   sumratioup__107->SetBinError(9,0.001165515);
   sumratioup__107->SetBinError(10,0.001713031);
   sumratioup__107->SetBinError(11,0.001189289);
   sumratioup__107->SetBinError(12,0.001162972);
   sumratioup__107->SetBinError(13,0.001708627);
   sumratioup__107->SetBinError(14,0.001399511);
   sumratioup__107->SetBinError(15,0.00104495);
   sumratioup__107->SetBinError(16,0.001106044);
   sumratioup__107->SetBinError(17,0.001036554);
   sumratioup__107->SetBinError(18,0.0009449585);
   sumratioup__107->SetBinError(19,0.0007777917);
   sumratioup__107->SetBinError(20,0.0007687345);
   sumratioup__107->SetEntries(85);
   sumratioup__107->SetStats(0);

   ci = 1188;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratioup__107->SetFillColor(ci);
   sumratioup__107->SetFillStyle(3003);
   sumratioup__107->GetXaxis()->SetTitle("Sub-leading lep #eta");
   sumratioup__107->GetXaxis()->SetLabelFont(42);
   sumratioup__107->GetXaxis()->SetLabelOffset(0.007);
   sumratioup__107->GetXaxis()->SetTitleSize(0.05);
   sumratioup__107->GetXaxis()->SetTickLength(0.025);
   sumratioup__107->GetXaxis()->SetTitleFont(42);
   sumratioup__107->GetYaxis()->SetTitle("a.u.");
   sumratioup__107->GetYaxis()->SetLabelFont(42);
   sumratioup__107->GetYaxis()->SetLabelOffset(0.007);
   sumratioup__107->GetYaxis()->SetTitleSize(0.05);
   sumratioup__107->GetYaxis()->SetTickLength(0.025);
   sumratioup__107->GetYaxis()->SetTitleFont(42);
   sumratioup__107->GetZaxis()->SetLabelFont(42);
   sumratioup__107->GetZaxis()->SetLabelOffset(0.007);
   sumratioup__107->GetZaxis()->SetTitleSize(0.05);
   sumratioup__107->GetZaxis()->SetTickLength(0.025);
   sumratioup__107->GetZaxis()->SetTitleFont(42);
   sumratioup__107->Draw("hist same");
   
   TH1D *sumratiodown__108 = new TH1D("sumratiodown__108","",20,-2.5,2.5);
   sumratiodown__108->SetBinContent(1,-0.05089107);
   sumratiodown__108->SetBinContent(2,-0.03240762);
   sumratiodown__108->SetBinContent(3,-0.0476649);
   sumratiodown__108->SetBinContent(4,-0.04081272);
   sumratiodown__108->SetBinContent(5,-0.02333812);
   sumratiodown__108->SetBinContent(6,-0.02057842);
   sumratiodown__108->SetBinContent(7,-0.01879299);
   sumratiodown__108->SetBinContent(8,-0.02043776);
   sumratiodown__108->SetBinContent(9,-0.01617891);
   sumratiodown__108->SetBinContent(10,-0.02318233);
   sumratiodown__108->SetBinContent(11,-0.01615851);
   sumratiodown__108->SetBinContent(12,-0.01610889);
   sumratiodown__108->SetBinContent(13,-0.02403038);
   sumratiodown__108->SetBinContent(14,-0.02194831);
   sumratiodown__108->SetBinContent(15,-0.01844391);
   sumratiodown__108->SetBinContent(16,-0.02340564);
   sumratiodown__108->SetBinContent(17,-0.02573867);
   sumratiodown__108->SetBinContent(18,-0.0281573);
   sumratiodown__108->SetBinContent(19,-0.03049698);
   sumratiodown__108->SetBinContent(20,-0.04607819);
   sumratiodown__108->SetBinError(1,0.0007974196);
   sumratiodown__108->SetBinError(2,0.0007967316);
   sumratiodown__108->SetBinError(3,0.001666303);
   sumratiodown__108->SetBinError(4,0.001694552);
   sumratiodown__108->SetBinError(5,0.001103783);
   sumratiodown__108->SetBinError(6,0.001159686);
   sumratiodown__108->SetBinError(7,0.001157539);
   sumratiodown__108->SetBinError(8,0.001461249);
   sumratiodown__108->SetBinError(9,0.001165515);
   sumratiodown__108->SetBinError(10,0.001713031);
   sumratiodown__108->SetBinError(11,0.001189289);
   sumratiodown__108->SetBinError(12,0.001162972);
   sumratiodown__108->SetBinError(13,0.001708627);
   sumratiodown__108->SetBinError(14,0.001399511);
   sumratiodown__108->SetBinError(15,0.00104495);
   sumratiodown__108->SetBinError(16,0.001106044);
   sumratiodown__108->SetBinError(17,0.001036554);
   sumratiodown__108->SetBinError(18,0.0009449585);
   sumratiodown__108->SetBinError(19,0.0007777917);
   sumratiodown__108->SetBinError(20,0.0007687345);
   sumratiodown__108->SetEntries(85);
   sumratiodown__108->SetStats(0);

   ci = 1188;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratiodown__108->SetFillColor(ci);
   sumratiodown__108->SetFillStyle(3003);
   sumratiodown__108->GetXaxis()->SetTitle("Sub-leading lep #eta");
   sumratiodown__108->GetXaxis()->SetLabelFont(42);
   sumratiodown__108->GetXaxis()->SetLabelOffset(0.007);
   sumratiodown__108->GetXaxis()->SetTitleSize(0.05);
   sumratiodown__108->GetXaxis()->SetTickLength(0.025);
   sumratiodown__108->GetXaxis()->SetTitleFont(42);
   sumratiodown__108->GetYaxis()->SetTitle("a.u.");
   sumratiodown__108->GetYaxis()->SetLabelFont(42);
   sumratiodown__108->GetYaxis()->SetLabelOffset(0.007);
   sumratiodown__108->GetYaxis()->SetTitleSize(0.05);
   sumratiodown__108->GetYaxis()->SetTickLength(0.025);
   sumratiodown__108->GetYaxis()->SetTitleFont(42);
   sumratiodown__108->GetZaxis()->SetLabelFont(42);
   sumratiodown__108->GetZaxis()->SetLabelOffset(0.007);
   sumratiodown__108->GetZaxis()->SetTitleSize(0.05);
   sumratiodown__108->GetZaxis()->SetTickLength(0.025);
   sumratiodown__108->GetZaxis()->SetTitleFont(42);
   sumratiodown__108->Draw("hist same");
   
   Double_t Graph0_fx1009[20] = {
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
   Double_t Graph0_fy1009[20] = {
   0.001222849,
   0.01181436,
   -0.001392365,
   -0.06502599,
   0.04194725,
   -0.01519805,
   0.03793967,
   0.01014364,
   0.009088278,
   0.00671339,
   0.02351546,
   0.04019952,
   -0.01870334,
   0.002620101,
   -0.02209491,
   0.004941225,
   -0.05711001,
   -0.06786627,
   0.00859797,
   -0.05963784};
   Double_t Graph0_fex1009[20] = {
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
   Double_t Graph0_fey1009[20] = {
   0.05486667,
   0.04403357,
   0.03668477,
   0.03257136,
   0.03221662,
   0.02869302,
   0.02817619,
   0.02579954,
   0.02568894,
   0.02533464,
   0.02559589,
   0.02605388,
   0.02549898,
   0.02721739,
   0.02851629,
   0.03165267,
   0.03321188,
   0.03617381,
   0.04316401,
   0.05153153};
   TGraphErrors *gre = new TGraphErrors(20,Graph0_fx1009,Graph0_fy1009,Graph0_fex1009,Graph0_fey1009);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","Graph",100,-2.85,2.85);
   Graph_Graph1009->SetMinimum(-0.1297027);
   Graph_Graph1009->SetMaximum(0.09269718);
   Graph_Graph1009->SetDirectory(0);
   Graph_Graph1009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1009->SetLineColor(ci);
   Graph_Graph1009->GetXaxis()->SetLabelFont(42);
   Graph_Graph1009->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1009->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1009->GetXaxis()->SetTickLength(0.025);
   Graph_Graph1009->GetXaxis()->SetTitleFont(42);
   Graph_Graph1009->GetYaxis()->SetLabelFont(42);
   Graph_Graph1009->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1009->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1009->GetYaxis()->SetTickLength(0.025);
   Graph_Graph1009->GetYaxis()->SetTitleFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1009->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph1009->GetZaxis()->SetTickLength(0.025);
   Graph_Graph1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1009);
   
   gre->Draw("pe0");
   pad2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
