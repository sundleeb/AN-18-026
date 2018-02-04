void photon_jet1CSV()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sun Dec 11 15:15:13 2016) by ROOT version6.06/01
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
   pad1->Range(-0.1875,0,1.0625,0.7155248);
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
   h->SetMaximum(0.6337505);
   
   TH1F *h_stack_19 = new TH1F("h_stack_19","",10,0,1);
   h_stack_19->SetMinimum(0);
   h_stack_19->SetMaximum(0.665438);
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
   
   
   TH1D *h_jet1CSV_QCD__163 = new TH1D("h_jet1CSV_QCD__163","",10,0,1);
   h_jet1CSV_QCD__163->SetBinContent(1,0.006887882);
   h_jet1CSV_QCD__163->SetBinContent(2,0.01008624);
   h_jet1CSV_QCD__163->SetBinContent(3,0.004261908);
   h_jet1CSV_QCD__163->SetBinContent(4,0.002919322);
   h_jet1CSV_QCD__163->SetBinContent(5,0.002631208);
   h_jet1CSV_QCD__163->SetBinContent(6,0.001755891);
   h_jet1CSV_QCD__163->SetBinContent(7,0.001533909);
   h_jet1CSV_QCD__163->SetBinContent(8,0.00117332);
   h_jet1CSV_QCD__163->SetBinContent(9,0.001101157);
   h_jet1CSV_QCD__163->SetBinContent(10,0.001075662);
   h_jet1CSV_QCD__163->SetBinContent(11,5.130884e-08);
   h_jet1CSV_QCD__163->SetBinError(1,1.886003e-05);
   h_jet1CSV_QCD__163->SetBinError(2,2.275815e-05);
   h_jet1CSV_QCD__163->SetBinError(3,1.472017e-05);
   h_jet1CSV_QCD__163->SetBinError(4,1.217516e-05);
   h_jet1CSV_QCD__163->SetBinError(5,1.152028e-05);
   h_jet1CSV_QCD__163->SetBinError(6,9.417229e-06);
   h_jet1CSV_QCD__163->SetBinError(7,8.790129e-06);
   h_jet1CSV_QCD__163->SetBinError(8,7.671513e-06);
   h_jet1CSV_QCD__163->SetBinError(9,7.439603e-06);
   h_jet1CSV_QCD__163->SetBinError(10,7.350975e-06);
   h_jet1CSV_QCD__163->SetBinError(11,5.130884e-08);
   h_jet1CSV_QCD__163->SetEntries(668734);
   h_jet1CSV_QCD__163->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_jet1CSV_QCD__163->SetFillColor(ci);
   h_jet1CSV_QCD__163->GetXaxis()->SetTitle("jet 1 CSV");
   h_jet1CSV_QCD__163->GetXaxis()->SetLabelFont(42);
   h_jet1CSV_QCD__163->GetXaxis()->SetLabelOffset(0.007);
   h_jet1CSV_QCD__163->GetXaxis()->SetTitleSize(0.05);
   h_jet1CSV_QCD__163->GetXaxis()->SetTickLength(0.025);
   h_jet1CSV_QCD__163->GetXaxis()->SetTitleFont(42);
   h_jet1CSV_QCD__163->GetYaxis()->SetTitle("a.u.");
   h_jet1CSV_QCD__163->GetYaxis()->SetLabelFont(42);
   h_jet1CSV_QCD__163->GetYaxis()->SetLabelOffset(0.007);
   h_jet1CSV_QCD__163->GetYaxis()->SetTitleSize(0.05);
   h_jet1CSV_QCD__163->GetYaxis()->SetTickLength(0.025);
   h_jet1CSV_QCD__163->GetYaxis()->SetTitleFont(42);
   h_jet1CSV_QCD__163->GetZaxis()->SetLabelFont(42);
   h_jet1CSV_QCD__163->GetZaxis()->SetLabelOffset(0.007);
   h_jet1CSV_QCD__163->GetZaxis()->SetTitleSize(0.05);
   h_jet1CSV_QCD__163->GetZaxis()->SetTickLength(0.025);
   h_jet1CSV_QCD__163->GetZaxis()->SetTitleFont(42);
   h->Add(h_jet1CSV_QCD,"");
   
   TH1D *h_jet1CSV_#gammapLjetssPoPHFcP__164 = new TH1D("h_jet1CSV_#gammapLjetssPoPHFcP__164","",10,0,1);
   h_jet1CSV_#gammapLjetssPoPHFcP__164->SetBinContent(1,0.01648074);
   h_jet1CSV_#gammapLjetssPoPHFcP__164->SetBinContent(2,0.02648105);
   h_jet1CSV_#gammapLjetssPoPHFcP__164->SetBinContent(3,0.01316235);
   h_jet1CSV_#gammapLjetssPoPHFcP__164->SetBinContent(4,0.01020684);
   h_jet1CSV_#gammapLjetssPoPHFcP__164->SetBinContent(5,0.01052243);
   h_jet1CSV_#gammapLjetssPoPHFcP__164->SetBinContent(6,0.007798317);
   h_jet1CSV_#gammapLjetssPoPHFcP__164->SetBinContent(7,0.008932466);
   h_jet1CSV_#gammapLjetssPoPHFcP__164->SetBinContent(8,0.008285304);
   h_jet1CSV_#gammapLjetssPoPHFcP__164->SetBinContent(9,0.01128348);
   h_jet1CSV_#gammapLjetssPoPHFcP__164->SetBinContent(10,0.01379089);
   h_jet1CSV_#gammapLjetssPoPHFcP__164->SetBinError(1,0.0006342877);
   h_jet1CSV_#gammapLjetssPoPHFcP__164->SetBinError(2,0.000731692);
   h_jet1CSV_#gammapLjetssPoPHFcP__164->SetBinError(3,0.0005285846);
   h_jet1CSV_#gammapLjetssPoPHFcP__164->SetBinError(4,0.0004828031);
   h_jet1CSV_#gammapLjetssPoPHFcP__164->SetBinError(5,0.0005100149);
   h_jet1CSV_#gammapLjetssPoPHFcP__164->SetBinError(6,0.0004224993);
   h_jet1CSV_#gammapLjetssPoPHFcP__164->SetBinError(7,0.0005107);
   h_jet1CSV_#gammapLjetssPoPHFcP__164->SetBinError(8,0.0004781567);
   h_jet1CSV_#gammapLjetssPoPHFcP__164->SetBinError(9,0.0006419739);
   h_jet1CSV_#gammapLjetssPoPHFcP__164->SetBinError(10,0.0005355655);
   h_jet1CSV_#gammapLjetssPoPHFcP__164->SetEntries(14151);
   h_jet1CSV_#gammapLjetssPoPHFcP__164->SetStats(0);

   ci = TColor::GetColor("#ff6633");
   h_jet1CSV_#gammapLjetssPoPHFcP__164->SetFillColor(ci);
   h_jet1CSV_#gammapLjetssPoPHFcP__164->GetXaxis()->SetTitle("jet 1 CSV");
   h_jet1CSV_#gammapLjetssPoPHFcP__164->GetXaxis()->SetLabelFont(42);
   h_jet1CSV_#gammapLjetssPoPHFcP__164->GetXaxis()->SetLabelOffset(0.007);
   h_jet1CSV_#gammapLjetssPoPHFcP__164->GetXaxis()->SetTitleSize(0.05);
   h_jet1CSV_#gammapLjetssPoPHFcP__164->GetXaxis()->SetTickLength(0.025);
   h_jet1CSV_#gammapLjetssPoPHFcP__164->GetXaxis()->SetTitleFont(42);
   h_jet1CSV_#gammapLjetssPoPHFcP__164->GetYaxis()->SetTitle("a.u.");
   h_jet1CSV_#gammapLjetssPoPHFcP__164->GetYaxis()->SetLabelFont(42);
   h_jet1CSV_#gammapLjetssPoPHFcP__164->GetYaxis()->SetLabelOffset(0.007);
   h_jet1CSV_#gammapLjetssPoPHFcP__164->GetYaxis()->SetTitleSize(0.05);
   h_jet1CSV_#gammapLjetssPoPHFcP__164->GetYaxis()->SetTickLength(0.025);
   h_jet1CSV_#gammapLjetssPoPHFcP__164->GetYaxis()->SetTitleFont(42);
   h_jet1CSV_#gammapLjetssPoPHFcP__164->GetZaxis()->SetLabelFont(42);
   h_jet1CSV_#gammapLjetssPoPHFcP__164->GetZaxis()->SetLabelOffset(0.007);
   h_jet1CSV_#gammapLjetssPoPHFcP__164->GetZaxis()->SetTitleSize(0.05);
   h_jet1CSV_#gammapLjetssPoPHFcP__164->GetZaxis()->SetTickLength(0.025);
   h_jet1CSV_#gammapLjetssPoPHFcP__164->GetZaxis()->SetTitleFont(42);
   h->Add(h_jet1CSV_#gamma+jets (HF),"");
   
   TH1D *h_jet1CSV_#gammapLjetssPoPLFcP__165 = new TH1D("h_jet1CSV_#gammapLjetssPoPLFcP__165","",10,0,1);
   h_jet1CSV_#gammapLjetssPoPLFcP__165->SetBinContent(1,0.2216532);
   h_jet1CSV_#gammapLjetssPoPLFcP__165->SetBinContent(2,0.280308);
   h_jet1CSV_#gammapLjetssPoPLFcP__165->SetBinContent(3,0.1097817);
   h_jet1CSV_#gammapLjetssPoPLFcP__165->SetBinContent(4,0.06734785);
   h_jet1CSV_#gammapLjetssPoPLFcP__165->SetBinContent(5,0.05409184);
   h_jet1CSV_#gammapLjetssPoPLFcP__165->SetBinContent(6,0.03464123);
   h_jet1CSV_#gammapLjetssPoPLFcP__165->SetBinContent(7,0.02819474);
   h_jet1CSV_#gammapLjetssPoPLFcP__165->SetBinContent(8,0.01839141);
   h_jet1CSV_#gammapLjetssPoPLFcP__165->SetBinContent(9,0.01395204);
   h_jet1CSV_#gammapLjetssPoPLFcP__165->SetBinContent(10,0.01126766);
   h_jet1CSV_#gammapLjetssPoPLFcP__165->SetBinError(1,0.002436299);
   h_jet1CSV_#gammapLjetssPoPLFcP__165->SetBinError(2,0.002572724);
   h_jet1CSV_#gammapLjetssPoPLFcP__165->SetBinError(3,0.001578675);
   h_jet1CSV_#gammapLjetssPoPLFcP__165->SetBinError(4,0.001177062);
   h_jet1CSV_#gammapLjetssPoPLFcP__165->SetBinError(5,0.001059817);
   h_jet1CSV_#gammapLjetssPoPLFcP__165->SetBinError(6,0.0008951566);
   h_jet1CSV_#gammapLjetssPoPLFcP__165->SetBinError(7,0.0007394277);
   h_jet1CSV_#gammapLjetssPoPLFcP__165->SetBinError(8,0.0006112271);
   h_jet1CSV_#gammapLjetssPoPLFcP__165->SetBinError(9,0.0005063183);
   h_jet1CSV_#gammapLjetssPoPLFcP__165->SetBinError(10,0.0003324301);
   h_jet1CSV_#gammapLjetssPoPLFcP__165->SetEntries(99281);
   h_jet1CSV_#gammapLjetssPoPLFcP__165->SetStats(0);

   ci = TColor::GetColor("#339999");
   h_jet1CSV_#gammapLjetssPoPLFcP__165->SetFillColor(ci);
   h_jet1CSV_#gammapLjetssPoPLFcP__165->GetXaxis()->SetTitle("jet 1 CSV");
   h_jet1CSV_#gammapLjetssPoPLFcP__165->GetXaxis()->SetLabelFont(42);
   h_jet1CSV_#gammapLjetssPoPLFcP__165->GetXaxis()->SetLabelOffset(0.007);
   h_jet1CSV_#gammapLjetssPoPLFcP__165->GetXaxis()->SetTitleSize(0.05);
   h_jet1CSV_#gammapLjetssPoPLFcP__165->GetXaxis()->SetTickLength(0.025);
   h_jet1CSV_#gammapLjetssPoPLFcP__165->GetXaxis()->SetTitleFont(42);
   h_jet1CSV_#gammapLjetssPoPLFcP__165->GetYaxis()->SetTitle("a.u.");
   h_jet1CSV_#gammapLjetssPoPLFcP__165->GetYaxis()->SetLabelFont(42);
   h_jet1CSV_#gammapLjetssPoPLFcP__165->GetYaxis()->SetLabelOffset(0.007);
   h_jet1CSV_#gammapLjetssPoPLFcP__165->GetYaxis()->SetTitleSize(0.05);
   h_jet1CSV_#gammapLjetssPoPLFcP__165->GetYaxis()->SetTickLength(0.025);
   h_jet1CSV_#gammapLjetssPoPLFcP__165->GetYaxis()->SetTitleFont(42);
   h_jet1CSV_#gammapLjetssPoPLFcP__165->GetZaxis()->SetLabelFont(42);
   h_jet1CSV_#gammapLjetssPoPLFcP__165->GetZaxis()->SetLabelOffset(0.007);
   h_jet1CSV_#gammapLjetssPoPLFcP__165->GetZaxis()->SetTitleSize(0.05);
   h_jet1CSV_#gammapLjetssPoPLFcP__165->GetZaxis()->SetTickLength(0.025);
   h_jet1CSV_#gammapLjetssPoPLFcP__165->GetZaxis()->SetTitleFont(42);
   h->Add(h_jet1CSV_#gamma+jets (LF),"");
   h->Draw("hist");
   
   TH1D *hsum__166 = new TH1D("hsum__166","",10,0,1);
   hsum__166->SetBinContent(1,0.2450218);
   hsum__166->SetBinContent(2,0.3168752);
   hsum__166->SetBinContent(3,0.1272059);
   hsum__166->SetBinContent(4,0.08047402);
   hsum__166->SetBinContent(5,0.06724548);
   hsum__166->SetBinContent(6,0.04419544);
   hsum__166->SetBinContent(7,0.03866111);
   hsum__166->SetBinContent(8,0.02785003);
   hsum__166->SetBinContent(9,0.02633668);
   hsum__166->SetBinContent(10,0.02613421);
   hsum__166->SetBinContent(11,5.130884e-08);
   hsum__166->SetBinError(1,0.002517584);
   hsum__166->SetBinError(2,0.002674846);
   hsum__166->SetBinError(3,0.001664882);
   hsum__166->SetBinError(4,0.00127229);
   hsum__166->SetBinError(5,0.001176205);
   hsum__166->SetBinError(6,0.0009898988);
   hsum__166->SetBinError(7,0.0008986908);
   hsum__166->SetBinError(8,0.0007760742);
   hsum__166->SetBinError(9,0.0008176454);
   hsum__166->SetBinError(10,0.0006303921);
   hsum__166->SetBinError(11,5.130884e-08);
   hsum__166->SetEntries(668754);
   hsum__166->SetStats(0);

   ci = 1198;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   hsum__166->SetFillColor(ci);
   hsum__166->SetFillStyle(3003);
   hsum__166->SetLineWidth(0);
   hsum__166->GetXaxis()->SetTitle("jet 1 CSV");
   hsum__166->GetXaxis()->SetLabelFont(42);
   hsum__166->GetXaxis()->SetLabelOffset(0.007);
   hsum__166->GetXaxis()->SetTitleSize(0.05);
   hsum__166->GetXaxis()->SetTickLength(0.025);
   hsum__166->GetXaxis()->SetTitleFont(42);
   hsum__166->GetYaxis()->SetTitle("a.u.");
   hsum__166->GetYaxis()->SetLabelFont(42);
   hsum__166->GetYaxis()->SetLabelOffset(0.007);
   hsum__166->GetYaxis()->SetTitleSize(0.05);
   hsum__166->GetYaxis()->SetTickLength(0.025);
   hsum__166->GetYaxis()->SetTitleFont(42);
   hsum__166->GetZaxis()->SetLabelFont(42);
   hsum__166->GetZaxis()->SetLabelOffset(0.007);
   hsum__166->GetZaxis()->SetTitleSize(0.05);
   hsum__166->GetZaxis()->SetTickLength(0.025);
   hsum__166->GetZaxis()->SetTitleFont(42);
   hsum__166->Draw("e2 same");
   
   TH1D *h_jet1CSV_Data__167 = new TH1D("h_jet1CSV_Data__167","",10,0,1);
   h_jet1CSV_Data__167->SetBinContent(1,0.2028732);
   h_jet1CSV_Data__167->SetBinContent(2,0.2993317);
   h_jet1CSV_Data__167->SetBinContent(3,0.1281139);
   h_jet1CSV_Data__167->SetBinContent(4,0.0878841);
   h_jet1CSV_Data__167->SetBinContent(5,0.07981212);
   h_jet1CSV_Data__167->SetBinContent(6,0.05320958);
   h_jet1CSV_Data__167->SetBinContent(7,0.04661203);
   h_jet1CSV_Data__167->SetBinContent(8,0.03584241);
   h_jet1CSV_Data__167->SetBinContent(9,0.03354852);
   h_jet1CSV_Data__167->SetBinContent(10,0.03277242);
   h_jet1CSV_Data__167->SetBinContent(11,1.495365e-06);
   h_jet1CSV_Data__167->SetBinError(1,0.0005507899);
   h_jet1CSV_Data__167->SetBinError(2,0.0006690368);
   h_jet1CSV_Data__167->SetBinError(3,0.0004376952);
   h_jet1CSV_Data__167->SetBinError(4,0.0003625173);
   h_jet1CSV_Data__167->SetBinError(5,0.0003454682);
   h_jet1CSV_Data__167->SetBinError(6,0.0002820776);
   h_jet1CSV_Data__167->SetBinError(7,0.0002640114);
   h_jet1CSV_Data__167->SetBinError(8,0.0002315113);
   h_jet1CSV_Data__167->SetBinError(9,0.0002239805);
   h_jet1CSV_Data__167->SetBinError(10,0.0002213747);
   h_jet1CSV_Data__167->SetBinError(11,1.495365e-06);
   h_jet1CSV_Data__167->SetEntries(668734);
   h_jet1CSV_Data__167->SetStats(0);
   h_jet1CSV_Data__167->SetLineWidth(3);
   h_jet1CSV_Data__167->SetMarkerStyle(20);
   h_jet1CSV_Data__167->SetMarkerSize(2);
   h_jet1CSV_Data__167->GetXaxis()->SetTitle("jet 1 CSV");
   h_jet1CSV_Data__167->GetXaxis()->SetLabelFont(42);
   h_jet1CSV_Data__167->GetXaxis()->SetLabelOffset(0.007);
   h_jet1CSV_Data__167->GetXaxis()->SetTitleSize(0.05);
   h_jet1CSV_Data__167->GetXaxis()->SetTickLength(0.025);
   h_jet1CSV_Data__167->GetXaxis()->SetTitleFont(42);
   h_jet1CSV_Data__167->GetYaxis()->SetTitle("a.u.");
   h_jet1CSV_Data__167->GetYaxis()->SetLabelFont(42);
   h_jet1CSV_Data__167->GetYaxis()->SetLabelOffset(0.007);
   h_jet1CSV_Data__167->GetYaxis()->SetTitleSize(0.05);
   h_jet1CSV_Data__167->GetYaxis()->SetTickLength(0.025);
   h_jet1CSV_Data__167->GetYaxis()->SetTitleFont(42);
   h_jet1CSV_Data__167->GetZaxis()->SetLabelFont(42);
   h_jet1CSV_Data__167->GetZaxis()->SetLabelOffset(0.007);
   h_jet1CSV_Data__167->GetZaxis()->SetTitleSize(0.05);
   h_jet1CSV_Data__167->GetZaxis()->SetTickLength(0.025);
   h_jet1CSV_Data__167->GetZaxis()->SetTitleFont(42);
   h_jet1CSV_Data__167->Draw("elp same");
   
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
   entry=leg->AddEntry("h_jet1CSV_#gamma+jets (LF)","#gamma+jets (LF)","F");

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
   entry=leg->AddEntry("h_jet1CSV_#gamma+jets (HF)","#gamma+jets (HF)","F");

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
   entry=leg->AddEntry("h_jet1CSV_#gamma+jets (LF)","#gamma+jets (LF)","F");

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
   entry=leg->AddEntry("h_jet1CSV_#gamma+jets (HF)","#gamma+jets (HF)","F");

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
   
   TH1D *ratio__168 = new TH1D("ratio__168","",10,0,1);
   ratio__168->SetBinContent(1,-0.1720199);
   ratio__168->SetBinContent(2,-0.05536413);
   ratio__168->SetBinContent(3,0.007137775);
   ratio__168->SetBinContent(4,0.09208047);
   ratio__168->SetBinContent(5,0.1868773);
   ratio__168->SetBinContent(6,0.2039609);
   ratio__168->SetBinContent(7,0.2056565);
   ratio__168->SetBinContent(8,0.286979);
   ratio__168->SetBinContent(9,0.2738323);
   ratio__168->SetBinContent(10,0.2540047);
   ratio__168->SetBinContent(11,1.495365e-06);
   ratio__168->SetBinError(1,0.0001);
   ratio__168->SetBinError(2,0.0001);
   ratio__168->SetBinError(3,0.0001);
   ratio__168->SetBinError(4,0.0001);
   ratio__168->SetBinError(5,0.0001);
   ratio__168->SetBinError(6,0.0001);
   ratio__168->SetBinError(7,0.0001);
   ratio__168->SetBinError(8,0.0001);
   ratio__168->SetBinError(9,0.0001);
   ratio__168->SetBinError(10,0.0001);
   ratio__168->SetBinError(11,1.495365e-06);
   ratio__168->SetMinimum(-0.48);
   ratio__168->SetMaximum(0.48);
   ratio__168->SetEntries(668744);
   ratio__168->SetStats(0);
   ratio__168->SetLineWidth(3);
   ratio__168->SetMarkerStyle(20);
   ratio__168->SetMarkerSize(2);
   ratio__168->GetXaxis()->SetTitle("jet 1 CSV");
   ratio__168->GetXaxis()->SetLabelFont(43);
   ratio__168->GetXaxis()->SetLabelOffset(0.007);
   ratio__168->GetXaxis()->SetLabelSize(30);
   ratio__168->GetXaxis()->SetTitleSize(40);
   ratio__168->GetXaxis()->SetTickLength(0.025);
   ratio__168->GetXaxis()->SetTitleOffset(5);
   ratio__168->GetXaxis()->SetTitleFont(43);
   ratio__168->GetYaxis()->SetTitle("#frac{Data-Exp}{Exp}");
   ratio__168->GetYaxis()->SetNdivisions(5);
   ratio__168->GetYaxis()->SetLabelFont(43);
   ratio__168->GetYaxis()->SetLabelOffset(0.007);
   ratio__168->GetYaxis()->SetLabelSize(30);
   ratio__168->GetYaxis()->SetTitleSize(40);
   ratio__168->GetYaxis()->SetTickLength(0.025);
   ratio__168->GetYaxis()->SetTitleOffset(2.5);
   ratio__168->GetYaxis()->SetTitleFont(43);
   ratio__168->GetZaxis()->SetLabelFont(42);
   ratio__168->GetZaxis()->SetLabelOffset(0.007);
   ratio__168->GetZaxis()->SetTitleSize(0.05);
   ratio__168->GetZaxis()->SetTickLength(0.025);
   ratio__168->GetZaxis()->SetTitleFont(42);
   ratio__168->Draw("elp");
   
   TH1D *zero__169 = new TH1D("zero__169","",10,0,1);
   zero__169->SetBinContent(11,1.495365e-06);
   zero__169->SetBinError(1,0.0005507899);
   zero__169->SetBinError(2,0.0006690368);
   zero__169->SetBinError(3,0.0004376952);
   zero__169->SetBinError(4,0.0003625173);
   zero__169->SetBinError(5,0.0003454682);
   zero__169->SetBinError(6,0.0002820776);
   zero__169->SetBinError(7,0.0002640114);
   zero__169->SetBinError(8,0.0002315113);
   zero__169->SetBinError(9,0.0002239805);
   zero__169->SetBinError(10,0.0002213747);
   zero__169->SetBinError(11,1.495365e-06);
   zero__169->SetEntries(668744);
   zero__169->SetStats(0);
   zero__169->SetLineWidth(3);
   zero__169->SetMarkerStyle(20);
   zero__169->SetMarkerSize(2);
   zero__169->GetXaxis()->SetTitle("jet 1 CSV");
   zero__169->GetXaxis()->SetLabelFont(42);
   zero__169->GetXaxis()->SetLabelOffset(0.007);
   zero__169->GetXaxis()->SetTitleSize(0.05);
   zero__169->GetXaxis()->SetTickLength(0.025);
   zero__169->GetXaxis()->SetTitleFont(42);
   zero__169->GetYaxis()->SetTitle("a.u.");
   zero__169->GetYaxis()->SetLabelFont(42);
   zero__169->GetYaxis()->SetLabelOffset(0.007);
   zero__169->GetYaxis()->SetTitleSize(0.05);
   zero__169->GetYaxis()->SetTickLength(0.025);
   zero__169->GetYaxis()->SetTitleFont(42);
   zero__169->GetZaxis()->SetLabelFont(42);
   zero__169->GetZaxis()->SetLabelOffset(0.007);
   zero__169->GetZaxis()->SetTitleSize(0.05);
   zero__169->GetZaxis()->SetTickLength(0.025);
   zero__169->GetZaxis()->SetTitleFont(42);
   zero__169->Draw("hist same");
   
   TH1D *sumratioup__170 = new TH1D("sumratioup__170","",10,0,1);
   sumratioup__170->SetBinContent(1,0.01027494);
   sumratioup__170->SetBinContent(2,0.008441322);
   sumratioup__170->SetBinContent(3,0.01308808);
   sumratioup__170->SetBinContent(4,0.01580995);
   sumratioup__170->SetBinContent(5,0.01749122);
   sumratioup__170->SetBinContent(6,0.02239821);
   sumratioup__170->SetBinContent(7,0.02324534);
   sumratioup__170->SetBinContent(8,0.02786619);
   sumratioup__170->SetBinContent(9,0.03104588);
   sumratioup__170->SetBinContent(10,0.02412134);
   sumratioup__170->SetBinContent(11,5.130884e-08);
   sumratioup__170->SetBinError(1,0.002517584);
   sumratioup__170->SetBinError(2,0.002674846);
   sumratioup__170->SetBinError(3,0.001664882);
   sumratioup__170->SetBinError(4,0.00127229);
   sumratioup__170->SetBinError(5,0.001176205);
   sumratioup__170->SetBinError(6,0.0009898988);
   sumratioup__170->SetBinError(7,0.0008986908);
   sumratioup__170->SetBinError(8,0.0007760742);
   sumratioup__170->SetBinError(9,0.0008176454);
   sumratioup__170->SetBinError(10,0.0006303921);
   sumratioup__170->SetBinError(11,5.130884e-08);
   sumratioup__170->SetEntries(668764);
   sumratioup__170->SetStats(0);

   ci = 1198;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratioup__170->SetFillColor(ci);
   sumratioup__170->SetFillStyle(3003);
   sumratioup__170->GetXaxis()->SetTitle("jet 1 CSV");
   sumratioup__170->GetXaxis()->SetLabelFont(42);
   sumratioup__170->GetXaxis()->SetLabelOffset(0.007);
   sumratioup__170->GetXaxis()->SetTitleSize(0.05);
   sumratioup__170->GetXaxis()->SetTickLength(0.025);
   sumratioup__170->GetXaxis()->SetTitleFont(42);
   sumratioup__170->GetYaxis()->SetTitle("a.u.");
   sumratioup__170->GetYaxis()->SetLabelFont(42);
   sumratioup__170->GetYaxis()->SetLabelOffset(0.007);
   sumratioup__170->GetYaxis()->SetTitleSize(0.05);
   sumratioup__170->GetYaxis()->SetTickLength(0.025);
   sumratioup__170->GetYaxis()->SetTitleFont(42);
   sumratioup__170->GetZaxis()->SetLabelFont(42);
   sumratioup__170->GetZaxis()->SetLabelOffset(0.007);
   sumratioup__170->GetZaxis()->SetTitleSize(0.05);
   sumratioup__170->GetZaxis()->SetTickLength(0.025);
   sumratioup__170->GetZaxis()->SetTitleFont(42);
   sumratioup__170->Draw("hist same");
   
   TH1D *sumratiodown__171 = new TH1D("sumratiodown__171","",10,0,1);
   sumratiodown__171->SetBinContent(1,-0.01027494);
   sumratiodown__171->SetBinContent(2,-0.008441322);
   sumratiodown__171->SetBinContent(3,-0.01308808);
   sumratiodown__171->SetBinContent(4,-0.01580995);
   sumratiodown__171->SetBinContent(5,-0.01749122);
   sumratiodown__171->SetBinContent(6,-0.02239821);
   sumratiodown__171->SetBinContent(7,-0.02324534);
   sumratiodown__171->SetBinContent(8,-0.02786619);
   sumratiodown__171->SetBinContent(9,-0.03104588);
   sumratiodown__171->SetBinContent(10,-0.02412134);
   sumratiodown__171->SetBinContent(11,5.130884e-08);
   sumratiodown__171->SetBinError(1,0.002517584);
   sumratiodown__171->SetBinError(2,0.002674846);
   sumratiodown__171->SetBinError(3,0.001664882);
   sumratiodown__171->SetBinError(4,0.00127229);
   sumratiodown__171->SetBinError(5,0.001176205);
   sumratiodown__171->SetBinError(6,0.0009898988);
   sumratiodown__171->SetBinError(7,0.0008986908);
   sumratiodown__171->SetBinError(8,0.0007760742);
   sumratiodown__171->SetBinError(9,0.0008176454);
   sumratiodown__171->SetBinError(10,0.0006303921);
   sumratiodown__171->SetBinError(11,5.130884e-08);
   sumratiodown__171->SetEntries(668764);
   sumratiodown__171->SetStats(0);

   ci = 1198;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratiodown__171->SetFillColor(ci);
   sumratiodown__171->SetFillStyle(3003);
   sumratiodown__171->GetXaxis()->SetTitle("jet 1 CSV");
   sumratiodown__171->GetXaxis()->SetLabelFont(42);
   sumratiodown__171->GetXaxis()->SetLabelOffset(0.007);
   sumratiodown__171->GetXaxis()->SetTitleSize(0.05);
   sumratiodown__171->GetXaxis()->SetTickLength(0.025);
   sumratiodown__171->GetXaxis()->SetTitleFont(42);
   sumratiodown__171->GetYaxis()->SetTitle("a.u.");
   sumratiodown__171->GetYaxis()->SetLabelFont(42);
   sumratiodown__171->GetYaxis()->SetLabelOffset(0.007);
   sumratiodown__171->GetYaxis()->SetTitleSize(0.05);
   sumratiodown__171->GetYaxis()->SetTickLength(0.025);
   sumratiodown__171->GetYaxis()->SetTitleFont(42);
   sumratiodown__171->GetZaxis()->SetLabelFont(42);
   sumratiodown__171->GetZaxis()->SetLabelOffset(0.007);
   sumratiodown__171->GetZaxis()->SetTitleSize(0.05);
   sumratiodown__171->GetZaxis()->SetTickLength(0.025);
   sumratiodown__171->GetZaxis()->SetTitleFont(42);
   sumratiodown__171->Draw("hist same");
   
   Double_t Graph0_fx1019[10] = {
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
   Double_t Graph0_fy1019[10] = {
   -0.1720199,
   -0.05536413,
   0.007137775,
   0.09208047,
   0.1868773,
   0.2039609,
   0.2056565,
   0.286979,
   0.2738323,
   0.2540047};
   Double_t Graph0_fex1019[10] = {
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
   Double_t Graph0_fey1019[10] = {
   0.002247922,
   0.002111357,
   0.003440839,
   0.004504775,
   0.005137419,
   0.006382504,
   0.00682886,
   0.008312784,
   0.008504509,
   0.008470684};
   TGraphErrors *gre = new TGraphErrors(10,Graph0_fx1019,Graph0_fy1019,Graph0_fex1019,Graph0_fey1019);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1019 = new TH1F("Graph_Graph1019","Graph",100,0,1.04);
   Graph_Graph1019->SetMinimum(-0.2212238);
   Graph_Graph1019->SetMaximum(0.3422477);
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
