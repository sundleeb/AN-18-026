void photon_dphiUA_logy()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sun Dec 11 15:15:12 2016) by ROOT version6.06/01
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
   pad1->Range(-0.58875,-3.241385,3.33625,1.992995);
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
   h->SetMinimum(0.001755556);
   h->SetMaximum(23.20123);
   
   TH1F *h_stack_12 = new TH1F("h_stack_12","",20,0,3.14);
   h_stack_12->SetMinimum(0.0005736084);
   h_stack_12->SetMaximum(42.32413);
   h_stack_12->SetDirectory(0);
   h_stack_12->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h_stack_12->SetLineColor(ci);
   h_stack_12->GetXaxis()->SetLabelFont(42);
   h_stack_12->GetXaxis()->SetLabelOffset(0.007);
   h_stack_12->GetXaxis()->SetTitleSize(0.05);
   h_stack_12->GetXaxis()->SetTickLength(0.025);
   h_stack_12->GetXaxis()->SetTitleFont(42);
   h_stack_12->GetYaxis()->SetTitle("a.u.");
   h_stack_12->GetYaxis()->SetLabelFont(42);
   h_stack_12->GetYaxis()->SetLabelOffset(0.007);
   h_stack_12->GetYaxis()->SetTitleSize(0.05);
   h_stack_12->GetYaxis()->SetTickLength(0.025);
   h_stack_12->GetYaxis()->SetTitleOffset(1.5);
   h_stack_12->GetYaxis()->SetTitleFont(42);
   h_stack_12->GetZaxis()->SetLabelFont(42);
   h_stack_12->GetZaxis()->SetLabelOffset(0.007);
   h_stack_12->GetZaxis()->SetTitleSize(0.05);
   h_stack_12->GetZaxis()->SetTickLength(0.025);
   h_stack_12->GetZaxis()->SetTitleFont(42);
   h->SetHistogram(h_stack_12);
   
   
   TH1D *h_dphiUA_QCD__100 = new TH1D("h_dphiUA_QCD__100","",20,0,3.14);
   h_dphiUA_QCD__100->SetBinContent(1,0.001130026);
   h_dphiUA_QCD__100->SetBinContent(2,0.001140099);
   h_dphiUA_QCD__100->SetBinContent(3,0.001247272);
   h_dphiUA_QCD__100->SetBinContent(4,0.001310297);
   h_dphiUA_QCD__100->SetBinContent(5,0.001290021);
   h_dphiUA_QCD__100->SetBinContent(6,0.00123887);
   h_dphiUA_QCD__100->SetBinContent(7,0.001241695);
   h_dphiUA_QCD__100->SetBinContent(8,0.001249391);
   h_dphiUA_QCD__100->SetBinContent(9,0.001277382);
   h_dphiUA_QCD__100->SetBinContent(10,0.001339713);
   h_dphiUA_QCD__100->SetBinContent(11,0.001399895);
   h_dphiUA_QCD__100->SetBinContent(12,0.001425171);
   h_dphiUA_QCD__100->SetBinContent(13,0.001406252);
   h_dphiUA_QCD__100->SetBinContent(14,0.001382334);
   h_dphiUA_QCD__100->SetBinContent(15,0.001353241);
   h_dphiUA_QCD__100->SetBinContent(16,0.001315915);
   h_dphiUA_QCD__100->SetBinContent(17,0.001358759);
   h_dphiUA_QCD__100->SetBinContent(18,0.001461666);
   h_dphiUA_QCD__100->SetBinContent(19,0.00187266);
   h_dphiUA_QCD__100->SetBinContent(20,0.007985887);
   h_dphiUA_QCD__100->SetBinError(1,7.474435e-06);
   h_dphiUA_QCD__100->SetBinError(2,7.516294e-06);
   h_dphiUA_QCD__100->SetBinError(3,7.862952e-06);
   h_dphiUA_QCD__100->SetBinError(4,8.05598e-06);
   h_dphiUA_QCD__100->SetBinError(5,7.993249e-06);
   h_dphiUA_QCD__100->SetBinError(6,7.835373e-06);
   h_dphiUA_QCD__100->SetBinError(7,7.842243e-06);
   h_dphiUA_QCD__100->SetBinError(8,7.878029e-06);
   h_dphiUA_QCD__100->SetBinError(9,7.95735e-06);
   h_dphiUA_QCD__100->SetBinError(10,8.153121e-06);
   h_dphiUA_QCD__100->SetBinError(11,8.338923e-06);
   h_dphiUA_QCD__100->SetBinError(12,8.422275e-06);
   h_dphiUA_QCD__100->SetBinError(13,8.380696e-06);
   h_dphiUA_QCD__100->SetBinError(14,8.329101e-06);
   h_dphiUA_QCD__100->SetBinError(15,8.262429e-06);
   h_dphiUA_QCD__100->SetBinError(16,8.173861e-06);
   h_dphiUA_QCD__100->SetBinError(17,8.343605e-06);
   h_dphiUA_QCD__100->SetBinError(18,8.702345e-06);
   h_dphiUA_QCD__100->SetBinError(19,9.932394e-06);
   h_dphiUA_QCD__100->SetBinError(20,2.070191e-05);
   h_dphiUA_QCD__100->SetEntries(668734);
   h_dphiUA_QCD__100->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_dphiUA_QCD__100->SetFillColor(ci);
   h_dphiUA_QCD__100->GetXaxis()->SetTitle("min#Delta#phi(jet,U(#gamma))");
   h_dphiUA_QCD__100->GetXaxis()->SetLabelFont(42);
   h_dphiUA_QCD__100->GetXaxis()->SetLabelOffset(0.007);
   h_dphiUA_QCD__100->GetXaxis()->SetTitleSize(0.05);
   h_dphiUA_QCD__100->GetXaxis()->SetTickLength(0.025);
   h_dphiUA_QCD__100->GetXaxis()->SetTitleFont(42);
   h_dphiUA_QCD__100->GetYaxis()->SetTitle("a.u.");
   h_dphiUA_QCD__100->GetYaxis()->SetLabelFont(42);
   h_dphiUA_QCD__100->GetYaxis()->SetLabelOffset(0.007);
   h_dphiUA_QCD__100->GetYaxis()->SetTitleSize(0.05);
   h_dphiUA_QCD__100->GetYaxis()->SetTickLength(0.025);
   h_dphiUA_QCD__100->GetYaxis()->SetTitleFont(42);
   h_dphiUA_QCD__100->GetZaxis()->SetLabelFont(42);
   h_dphiUA_QCD__100->GetZaxis()->SetLabelOffset(0.007);
   h_dphiUA_QCD__100->GetZaxis()->SetTitleSize(0.05);
   h_dphiUA_QCD__100->GetZaxis()->SetTickLength(0.025);
   h_dphiUA_QCD__100->GetZaxis()->SetTitleFont(42);
   h->Add(h_dphiUA_QCD,"");
   
   TH1D *h_dphiUA_#gammapLjetssPoPHFcP__101 = new TH1D("h_dphiUA_#gammapLjetssPoPHFcP__101","",20,0,3.14);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetBinContent(1,0.004570327);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetBinContent(2,0.004598549);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetBinContent(3,0.005209264);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetBinContent(4,0.00540661);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetBinContent(5,0.005238768);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetBinContent(6,0.005504218);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetBinContent(7,0.004832347);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetBinContent(8,0.004278742);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetBinContent(9,0.004803702);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetBinContent(10,0.004573808);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetBinContent(11,0.004569478);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetBinContent(12,0.005385078);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetBinContent(13,0.005171292);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetBinContent(14,0.00497037);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetBinContent(15,0.005004486);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetBinContent(16,0.004516303);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetBinContent(17,0.004906803);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetBinContent(18,0.006376161);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetBinContent(19,0.005763459);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetBinContent(20,0.03126409);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetBinError(1,0.0002077173);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetBinError(2,0.0002003084);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetBinError(3,0.0002426477);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetBinError(4,0.0002301558);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetBinError(5,0.0002325826);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetBinError(6,0.0003494161);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetBinError(7,0.0002292093);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetBinError(8,0.0002159216);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetBinError(9,0.0002308348);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetBinError(10,0.00027546);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetBinError(11,0.0002300775);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetBinError(12,0.0002670477);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetBinError(13,0.0002648416);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetBinError(14,0.0003082052);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetBinError(15,0.0002766809);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetBinError(16,0.0003132433);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetBinError(17,0.0003905532);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetBinError(18,0.0005172234);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetBinError(19,0.0003655213);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetBinError(20,0.001208256);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetEntries(14151);
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetStats(0);

   ci = TColor::GetColor("#ff6633");
   h_dphiUA_#gammapLjetssPoPHFcP__101->SetFillColor(ci);
   h_dphiUA_#gammapLjetssPoPHFcP__101->GetXaxis()->SetTitle("min#Delta#phi(jet,U(#gamma))");
   h_dphiUA_#gammapLjetssPoPHFcP__101->GetXaxis()->SetLabelFont(42);
   h_dphiUA_#gammapLjetssPoPHFcP__101->GetXaxis()->SetLabelOffset(0.007);
   h_dphiUA_#gammapLjetssPoPHFcP__101->GetXaxis()->SetTitleSize(0.05);
   h_dphiUA_#gammapLjetssPoPHFcP__101->GetXaxis()->SetTickLength(0.025);
   h_dphiUA_#gammapLjetssPoPHFcP__101->GetXaxis()->SetTitleFont(42);
   h_dphiUA_#gammapLjetssPoPHFcP__101->GetYaxis()->SetTitle("a.u.");
   h_dphiUA_#gammapLjetssPoPHFcP__101->GetYaxis()->SetLabelFont(42);
   h_dphiUA_#gammapLjetssPoPHFcP__101->GetYaxis()->SetLabelOffset(0.007);
   h_dphiUA_#gammapLjetssPoPHFcP__101->GetYaxis()->SetTitleSize(0.05);
   h_dphiUA_#gammapLjetssPoPHFcP__101->GetYaxis()->SetTickLength(0.025);
   h_dphiUA_#gammapLjetssPoPHFcP__101->GetYaxis()->SetTitleFont(42);
   h_dphiUA_#gammapLjetssPoPHFcP__101->GetZaxis()->SetLabelFont(42);
   h_dphiUA_#gammapLjetssPoPHFcP__101->GetZaxis()->SetLabelOffset(0.007);
   h_dphiUA_#gammapLjetssPoPHFcP__101->GetZaxis()->SetTitleSize(0.05);
   h_dphiUA_#gammapLjetssPoPHFcP__101->GetZaxis()->SetTickLength(0.025);
   h_dphiUA_#gammapLjetssPoPHFcP__101->GetZaxis()->SetTitleFont(42);
   h->Add(h_dphiUA_#gamma+jets (HF),"");
   
   TH1D *h_dphiUA_#gammapLjetssPoPLFcP__102 = new TH1D("h_dphiUA_#gammapLjetssPoPLFcP__102","",20,0,3.14);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetBinContent(1,0.03048831);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetBinContent(2,0.03203988);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetBinContent(3,0.03625598);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetBinContent(4,0.03916309);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetBinContent(5,0.03610425);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetBinContent(6,0.03395003);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetBinContent(7,0.033215);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetBinContent(8,0.03331504);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetBinContent(9,0.03277923);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetBinContent(10,0.03404505);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetBinContent(11,0.03553032);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetBinContent(12,0.03481425);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetBinContent(13,0.0352308);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetBinContent(14,0.03340686);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetBinContent(15,0.03044869);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetBinContent(16,0.03003933);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetBinContent(17,0.03024335);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetBinContent(18,0.03261194);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetBinContent(19,0.04318582);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetBinContent(20,0.1927623);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetBinError(1,0.0005233205);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetBinError(2,0.0005361434);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetBinError(3,0.0005788712);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetBinError(4,0.0006449566);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetBinError(5,0.0006174269);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetBinError(6,0.0006078293);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetBinError(7,0.0005847425);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetBinError(8,0.0006175814);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetBinError(9,0.0006422959);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetBinError(10,0.0006344459);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetBinError(11,0.0006863919);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetBinError(12,0.0006742373);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetBinError(13,0.0007839248);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetBinError(14,0.0007313096);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetBinError(15,0.0007337715);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetBinError(16,0.0008463838);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetBinError(17,0.0008724741);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetBinError(18,0.0009620664);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetBinError(19,0.001276101);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetBinError(20,0.003065511);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetEntries(99281);
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetStats(0);

   ci = TColor::GetColor("#339999");
   h_dphiUA_#gammapLjetssPoPLFcP__102->SetFillColor(ci);
   h_dphiUA_#gammapLjetssPoPLFcP__102->GetXaxis()->SetTitle("min#Delta#phi(jet,U(#gamma))");
   h_dphiUA_#gammapLjetssPoPLFcP__102->GetXaxis()->SetLabelFont(42);
   h_dphiUA_#gammapLjetssPoPLFcP__102->GetXaxis()->SetLabelOffset(0.007);
   h_dphiUA_#gammapLjetssPoPLFcP__102->GetXaxis()->SetTitleSize(0.05);
   h_dphiUA_#gammapLjetssPoPLFcP__102->GetXaxis()->SetTickLength(0.025);
   h_dphiUA_#gammapLjetssPoPLFcP__102->GetXaxis()->SetTitleFont(42);
   h_dphiUA_#gammapLjetssPoPLFcP__102->GetYaxis()->SetTitle("a.u.");
   h_dphiUA_#gammapLjetssPoPLFcP__102->GetYaxis()->SetLabelFont(42);
   h_dphiUA_#gammapLjetssPoPLFcP__102->GetYaxis()->SetLabelOffset(0.007);
   h_dphiUA_#gammapLjetssPoPLFcP__102->GetYaxis()->SetTitleSize(0.05);
   h_dphiUA_#gammapLjetssPoPLFcP__102->GetYaxis()->SetTickLength(0.025);
   h_dphiUA_#gammapLjetssPoPLFcP__102->GetYaxis()->SetTitleFont(42);
   h_dphiUA_#gammapLjetssPoPLFcP__102->GetZaxis()->SetLabelFont(42);
   h_dphiUA_#gammapLjetssPoPLFcP__102->GetZaxis()->SetLabelOffset(0.007);
   h_dphiUA_#gammapLjetssPoPLFcP__102->GetZaxis()->SetTitleSize(0.05);
   h_dphiUA_#gammapLjetssPoPLFcP__102->GetZaxis()->SetTickLength(0.025);
   h_dphiUA_#gammapLjetssPoPLFcP__102->GetZaxis()->SetTitleFont(42);
   h->Add(h_dphiUA_#gamma+jets (LF),"");
   h->Draw("hist");
   
   TH1D *hsum__103 = new TH1D("hsum__103","",20,0,3.14);
   hsum__103->SetBinContent(1,0.03618866);
   hsum__103->SetBinContent(2,0.03777853);
   hsum__103->SetBinContent(3,0.04271252);
   hsum__103->SetBinContent(4,0.04588);
   hsum__103->SetBinContent(5,0.04263304);
   hsum__103->SetBinContent(6,0.04069312);
   hsum__103->SetBinContent(7,0.03928904);
   hsum__103->SetBinContent(8,0.03884317);
   hsum__103->SetBinContent(9,0.03886032);
   hsum__103->SetBinContent(10,0.03995857);
   hsum__103->SetBinContent(11,0.0414997);
   hsum__103->SetBinContent(12,0.0416245);
   hsum__103->SetBinContent(13,0.04180834);
   hsum__103->SetBinContent(14,0.03975957);
   hsum__103->SetBinContent(15,0.03680642);
   hsum__103->SetBinContent(16,0.03587154);
   hsum__103->SetBinContent(17,0.03650891);
   hsum__103->SetBinContent(18,0.04044977);
   hsum__103->SetBinContent(19,0.05082194);
   hsum__103->SetBinContent(20,0.2320123);
   hsum__103->SetBinError(1,0.0005630868);
   hsum__103->SetBinError(2,0.0005723895);
   hsum__103->SetBinError(3,0.0006277193);
   hsum__103->SetBinError(4,0.0006848398);
   hsum__103->SetBinError(5,0.0006598292);
   hsum__103->SetBinError(6,0.0007011486);
   hsum__103->SetBinError(7,0.0006281101);
   hsum__103->SetBinError(8,0.0006542866);
   hsum__103->SetBinError(9,0.0006825628);
   hsum__103->SetBinError(10,0.0006917125);
   hsum__103->SetBinError(11,0.0007239744);
   hsum__103->SetBinError(12,0.0007252457);
   hsum__103->SetBinError(13,0.0008274959);
   hsum__103->SetBinError(14,0.0007936457);
   hsum__103->SetBinError(15,0.0007842457);
   hsum__103->SetBinError(16,0.0009025263);
   hsum__103->SetBinError(17,0.0009559354);
   hsum__103->SetBinError(18,0.001092322);
   hsum__103->SetBinError(19,0.001327455);
   hsum__103->SetBinError(20,0.003295098);
   hsum__103->SetEntries(668774);
   hsum__103->SetStats(0);

   ci = 1191;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   hsum__103->SetFillColor(ci);
   hsum__103->SetFillStyle(3003);
   hsum__103->SetLineWidth(0);
   hsum__103->GetXaxis()->SetTitle("min#Delta#phi(jet,U(#gamma))");
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
   
   TH1D *h_dphiUA_Data__104 = new TH1D("h_dphiUA_Data__104","",20,0,3.14);
   h_dphiUA_Data__104->SetBinContent(1,0.03511112);
   h_dphiUA_Data__104->SetBinContent(2,0.03532047);
   h_dphiUA_Data__104->SetBinContent(3,0.03861924);
   h_dphiUA_Data__104->SetBinContent(4,0.0406006);
   h_dphiUA_Data__104->SetBinContent(5,0.03997255);
   h_dphiUA_Data__104->SetBinContent(6,0.03835755);
   h_dphiUA_Data__104->SetBinContent(7,0.03845475);
   h_dphiUA_Data__104->SetBinContent(8,0.0385684);
   h_dphiUA_Data__104->SetBinContent(9,0.0395344);
   h_dphiUA_Data__104->SetBinContent(10,0.04139464);
   h_dphiUA_Data__104->SetBinContent(11,0.04319057);
   h_dphiUA_Data__104->SetBinContent(12,0.04386497);
   h_dphiUA_Data__104->SetBinContent(13,0.04309785);
   h_dphiUA_Data__104->SetBinContent(14,0.04213334);
   h_dphiUA_Data__104->SetBinContent(15,0.04097145);
   h_dphiUA_Data__104->SetBinContent(16,0.03954338);
   h_dphiUA_Data__104->SetBinContent(17,0.04037928);
   h_dphiUA_Data__104->SetBinContent(18,0.0428571);
   h_dphiUA_Data__104->SetBinContent(19,0.05381661);
   h_dphiUA_Data__104->SetBinContent(20,0.2242117);
   h_dphiUA_Data__104->SetBinError(1,0.0002291372);
   h_dphiUA_Data__104->SetBinError(2,0.0002298193);
   h_dphiUA_Data__104->SetBinError(3,0.0002403118);
   h_dphiUA_Data__104->SetBinError(4,0.0002463993);
   h_dphiUA_Data__104->SetBinError(5,0.0002444861);
   h_dphiUA_Data__104->SetBinError(6,0.0002394963);
   h_dphiUA_Data__104->SetBinError(7,0.0002397995);
   h_dphiUA_Data__104->SetBinError(8,0.0002401536);
   h_dphiUA_Data__104->SetBinError(9,0.0002431425);
   h_dphiUA_Data__104->SetBinError(10,0.0002487971);
   h_dphiUA_Data__104->SetBinError(11,0.0002541369);
   h_dphiUA_Data__104->SetBinError(12,0.0002561134);
   h_dphiUA_Data__104->SetBinError(13,0.000253864);
   h_dphiUA_Data__104->SetBinError(14,0.0002510072);
   h_dphiUA_Data__104->SetBinError(15,0.0002475221);
   h_dphiUA_Data__104->SetBinError(16,0.0002431701);
   h_dphiUA_Data__104->SetBinError(17,0.0002457268);
   h_dphiUA_Data__104->SetBinError(18,0.0002531539);
   h_dphiUA_Data__104->SetBinError(19,0.0002836818);
   h_dphiUA_Data__104->SetBinError(20,0.0005790318);
   h_dphiUA_Data__104->SetEntries(668734);
   h_dphiUA_Data__104->SetStats(0);
   h_dphiUA_Data__104->SetLineWidth(3);
   h_dphiUA_Data__104->SetMarkerStyle(20);
   h_dphiUA_Data__104->SetMarkerSize(2);
   h_dphiUA_Data__104->GetXaxis()->SetTitle("min#Delta#phi(jet,U(#gamma))");
   h_dphiUA_Data__104->GetXaxis()->SetLabelFont(42);
   h_dphiUA_Data__104->GetXaxis()->SetLabelOffset(0.007);
   h_dphiUA_Data__104->GetXaxis()->SetTitleSize(0.05);
   h_dphiUA_Data__104->GetXaxis()->SetTickLength(0.025);
   h_dphiUA_Data__104->GetXaxis()->SetTitleFont(42);
   h_dphiUA_Data__104->GetYaxis()->SetTitle("a.u.");
   h_dphiUA_Data__104->GetYaxis()->SetLabelFont(42);
   h_dphiUA_Data__104->GetYaxis()->SetLabelOffset(0.007);
   h_dphiUA_Data__104->GetYaxis()->SetTitleSize(0.05);
   h_dphiUA_Data__104->GetYaxis()->SetTickLength(0.025);
   h_dphiUA_Data__104->GetYaxis()->SetTitleFont(42);
   h_dphiUA_Data__104->GetZaxis()->SetLabelFont(42);
   h_dphiUA_Data__104->GetZaxis()->SetLabelOffset(0.007);
   h_dphiUA_Data__104->GetZaxis()->SetTitleSize(0.05);
   h_dphiUA_Data__104->GetZaxis()->SetTickLength(0.025);
   h_dphiUA_Data__104->GetZaxis()->SetTitleFont(42);
   h_dphiUA_Data__104->Draw("elp same");
   
   TLegend *leg = new TLegend(0.6,0.55,0.88,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("h_dphiUA_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_dphiUA_#gamma+jets (LF)","#gamma+jets (LF)","F");

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
   entry=leg->AddEntry("h_dphiUA_#gamma+jets (HF)","#gamma+jets (HF)","F");

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
   entry=leg->AddEntry("h_dphiUA_QCD","QCD","F");

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
   entry=leg->AddEntry("h_dphiUA_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_dphiUA_#gamma+jets (LF)","#gamma+jets (LF)","F");

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
   entry=leg->AddEntry("h_dphiUA_#gamma+jets (HF)","#gamma+jets (HF)","F");

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
   entry=leg->AddEntry("h_dphiUA_QCD","QCD","F");

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
   
   TH1D *ratio__105 = new TH1D("ratio__105","",20,0,3.14);
   ratio__105->SetBinContent(1,-0.02977562);
   ratio__105->SetBinContent(2,-0.06506497);
   ratio__105->SetBinContent(3,-0.09583312);
   ratio__105->SetBinContent(4,-0.1150697);
   ratio__105->SetBinContent(5,-0.06240457);
   ratio__105->SetBinContent(6,-0.05739474);
   ratio__105->SetBinContent(7,-0.02123469);
   ratio__105->SetBinContent(8,-0.00707382);
   ratio__105->SetBinContent(9,0.01734638);
   ratio__105->SetBinContent(10,0.03593886);
   ratio__105->SetBinContent(11,0.04074407);
   ratio__105->SetBinContent(12,0.05382586);
   ratio__105->SetBinContent(13,0.03084338);
   ratio__105->SetBinContent(14,0.05970335);
   ratio__105->SetBinContent(15,0.1131604);
   ratio__105->SetBinContent(16,0.1023606);
   ratio__105->SetBinContent(17,0.1060117);
   ratio__105->SetBinContent(18,0.05951405);
   ratio__105->SetBinContent(19,0.05892491);
   ratio__105->SetBinContent(20,-0.03362149);
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
   ratio__105->SetEntries(668754);
   ratio__105->SetStats(0);
   ratio__105->SetLineWidth(3);
   ratio__105->SetMarkerStyle(20);
   ratio__105->SetMarkerSize(2);
   ratio__105->GetXaxis()->SetTitle("min#Delta#phi(jet,U(#gamma))");
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
   
   TH1D *zero__106 = new TH1D("zero__106","",20,0,3.14);
   zero__106->SetBinError(1,0.0002291372);
   zero__106->SetBinError(2,0.0002298193);
   zero__106->SetBinError(3,0.0002403118);
   zero__106->SetBinError(4,0.0002463993);
   zero__106->SetBinError(5,0.0002444861);
   zero__106->SetBinError(6,0.0002394963);
   zero__106->SetBinError(7,0.0002397995);
   zero__106->SetBinError(8,0.0002401536);
   zero__106->SetBinError(9,0.0002431425);
   zero__106->SetBinError(10,0.0002487971);
   zero__106->SetBinError(11,0.0002541369);
   zero__106->SetBinError(12,0.0002561134);
   zero__106->SetBinError(13,0.000253864);
   zero__106->SetBinError(14,0.0002510072);
   zero__106->SetBinError(15,0.0002475221);
   zero__106->SetBinError(16,0.0002431701);
   zero__106->SetBinError(17,0.0002457268);
   zero__106->SetBinError(18,0.0002531539);
   zero__106->SetBinError(19,0.0002836818);
   zero__106->SetBinError(20,0.0005790318);
   zero__106->SetEntries(668754);
   zero__106->SetStats(0);
   zero__106->SetLineWidth(3);
   zero__106->SetMarkerStyle(20);
   zero__106->SetMarkerSize(2);
   zero__106->GetXaxis()->SetTitle("min#Delta#phi(jet,U(#gamma))");
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
   
   TH1D *sumratioup__107 = new TH1D("sumratioup__107","",20,0,3.14);
   sumratioup__107->SetBinContent(1,0.01555976);
   sumratioup__107->SetBinContent(2,0.01515118);
   sumratioup__107->SetBinContent(3,0.01469638);
   sumratioup__107->SetBinContent(4,0.01492676);
   sumratioup__107->SetBinContent(5,0.01547694);
   sumratioup__107->SetBinContent(6,0.01723015);
   sumratioup__107->SetBinContent(7,0.0159869);
   sumratioup__107->SetBinContent(8,0.01684432);
   sumratioup__107->SetBinContent(9,0.01756452);
   sumratioup__107->SetBinContent(10,0.01731074);
   sumratioup__107->SetBinContent(11,0.01744529);
   sumratioup__107->SetBinContent(12,0.01742353);
   sumratioup__107->SetBinContent(13,0.0197926);
   sumratioup__107->SetBinContent(14,0.01996113);
   sumratioup__107->SetBinContent(15,0.02130731);
   sumratioup__107->SetBinContent(16,0.02515995);
   sumratioup__107->SetBinContent(17,0.02618362);
   sumratioup__107->SetBinContent(18,0.02700441);
   sumratioup__107->SetBinContent(19,0.02611973);
   sumratioup__107->SetBinContent(20,0.01420225);
   sumratioup__107->SetBinError(1,0.0005630868);
   sumratioup__107->SetBinError(2,0.0005723895);
   sumratioup__107->SetBinError(3,0.0006277193);
   sumratioup__107->SetBinError(4,0.0006848398);
   sumratioup__107->SetBinError(5,0.0006598292);
   sumratioup__107->SetBinError(6,0.0007011486);
   sumratioup__107->SetBinError(7,0.0006281101);
   sumratioup__107->SetBinError(8,0.0006542866);
   sumratioup__107->SetBinError(9,0.0006825628);
   sumratioup__107->SetBinError(10,0.0006917125);
   sumratioup__107->SetBinError(11,0.0007239744);
   sumratioup__107->SetBinError(12,0.0007252457);
   sumratioup__107->SetBinError(13,0.0008274959);
   sumratioup__107->SetBinError(14,0.0007936457);
   sumratioup__107->SetBinError(15,0.0007842457);
   sumratioup__107->SetBinError(16,0.0009025263);
   sumratioup__107->SetBinError(17,0.0009559354);
   sumratioup__107->SetBinError(18,0.001092322);
   sumratioup__107->SetBinError(19,0.001327455);
   sumratioup__107->SetBinError(20,0.003295098);
   sumratioup__107->SetEntries(668794);
   sumratioup__107->SetStats(0);

   ci = 1191;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratioup__107->SetFillColor(ci);
   sumratioup__107->SetFillStyle(3003);
   sumratioup__107->GetXaxis()->SetTitle("min#Delta#phi(jet,U(#gamma))");
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
   
   TH1D *sumratiodown__108 = new TH1D("sumratiodown__108","",20,0,3.14);
   sumratiodown__108->SetBinContent(1,-0.01555976);
   sumratiodown__108->SetBinContent(2,-0.01515118);
   sumratiodown__108->SetBinContent(3,-0.01469638);
   sumratiodown__108->SetBinContent(4,-0.01492676);
   sumratiodown__108->SetBinContent(5,-0.01547694);
   sumratiodown__108->SetBinContent(6,-0.01723015);
   sumratiodown__108->SetBinContent(7,-0.0159869);
   sumratiodown__108->SetBinContent(8,-0.01684432);
   sumratiodown__108->SetBinContent(9,-0.01756452);
   sumratiodown__108->SetBinContent(10,-0.01731074);
   sumratiodown__108->SetBinContent(11,-0.01744529);
   sumratiodown__108->SetBinContent(12,-0.01742353);
   sumratiodown__108->SetBinContent(13,-0.0197926);
   sumratiodown__108->SetBinContent(14,-0.01996113);
   sumratiodown__108->SetBinContent(15,-0.02130731);
   sumratiodown__108->SetBinContent(16,-0.02515995);
   sumratiodown__108->SetBinContent(17,-0.02618362);
   sumratiodown__108->SetBinContent(18,-0.02700441);
   sumratiodown__108->SetBinContent(19,-0.02611973);
   sumratiodown__108->SetBinContent(20,-0.01420225);
   sumratiodown__108->SetBinError(1,0.0005630868);
   sumratiodown__108->SetBinError(2,0.0005723895);
   sumratiodown__108->SetBinError(3,0.0006277193);
   sumratiodown__108->SetBinError(4,0.0006848398);
   sumratiodown__108->SetBinError(5,0.0006598292);
   sumratiodown__108->SetBinError(6,0.0007011486);
   sumratiodown__108->SetBinError(7,0.0006281101);
   sumratiodown__108->SetBinError(8,0.0006542866);
   sumratiodown__108->SetBinError(9,0.0006825628);
   sumratiodown__108->SetBinError(10,0.0006917125);
   sumratiodown__108->SetBinError(11,0.0007239744);
   sumratiodown__108->SetBinError(12,0.0007252457);
   sumratiodown__108->SetBinError(13,0.0008274959);
   sumratiodown__108->SetBinError(14,0.0007936457);
   sumratiodown__108->SetBinError(15,0.0007842457);
   sumratiodown__108->SetBinError(16,0.0009025263);
   sumratiodown__108->SetBinError(17,0.0009559354);
   sumratiodown__108->SetBinError(18,0.001092322);
   sumratiodown__108->SetBinError(19,0.001327455);
   sumratiodown__108->SetBinError(20,0.003295098);
   sumratiodown__108->SetEntries(668794);
   sumratiodown__108->SetStats(0);

   ci = 1191;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratiodown__108->SetFillColor(ci);
   sumratiodown__108->SetFillStyle(3003);
   sumratiodown__108->GetXaxis()->SetTitle("min#Delta#phi(jet,U(#gamma))");
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
   
   Double_t Graph0_fx1012[20] = {
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
   Double_t Graph0_fy1012[20] = {
   -0.02977562,
   -0.06506497,
   -0.09583312,
   -0.1150697,
   -0.06240457,
   -0.05739474,
   -0.02123469,
   -0.00707382,
   0.01734638,
   0.03593886,
   0.04074407,
   0.05382586,
   0.03084338,
   0.05970335,
   0.1131604,
   0.1023606,
   0.1060117,
   0.05951405,
   0.05892491,
   -0.03362149};
   Double_t Graph0_fex1012[20] = {
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
   Double_t Graph0_fey1012[20] = {
   0.00633174,
   0.006083332,
   0.005626263,
   0.005370517,
   0.005734663,
   0.005885424,
   0.00610347,
   0.006182647,
   0.006256833,
   0.006226377,
   0.006123826,
   0.006152948,
   0.00607209,
   0.006313128,
   0.00672497,
   0.006778914,
   0.006730599,
   0.006258477,
   0.005581877,
   0.002495694};
   TGraphErrors *gre = new TGraphErrors(20,Graph0_fx1012,Graph0_fy1012,Graph0_fex1012,Graph0_fey1012);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1012 = new TH1F("Graph_Graph1012","Graph",100,0,3.3598);
   Graph_Graph1012->SetMinimum(-0.1444728);
   Graph_Graph1012->SetMaximum(0.1439179);
   Graph_Graph1012->SetDirectory(0);
   Graph_Graph1012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1012->SetLineColor(ci);
   Graph_Graph1012->GetXaxis()->SetLabelFont(42);
   Graph_Graph1012->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1012->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1012->GetXaxis()->SetTickLength(0.025);
   Graph_Graph1012->GetXaxis()->SetTitleFont(42);
   Graph_Graph1012->GetYaxis()->SetLabelFont(42);
   Graph_Graph1012->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1012->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1012->GetYaxis()->SetTickLength(0.025);
   Graph_Graph1012->GetYaxis()->SetTitleFont(42);
   Graph_Graph1012->GetZaxis()->SetLabelFont(42);
   Graph_Graph1012->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1012->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph1012->GetZaxis()->SetTickLength(0.025);
   Graph_Graph1012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1012);
   
   gre->Draw("pe0");
   pad2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
