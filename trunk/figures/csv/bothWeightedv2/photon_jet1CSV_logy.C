void photon_jet1CSV_logy()
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
   pad1->Range(-0.1875,-3.387932,1.0625,2.162897);
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
   h->SetMinimum(0.001306711);
   h->SetMaximum(31.68752);
   
   TH1F *h_stack_20 = new TH1F("h_stack_20","",10,0,1);
   h_stack_20->SetMinimum(0.000409325);
   h_stack_20->SetMaximum(59.47564);
   h_stack_20->SetDirectory(0);
   h_stack_20->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h_stack_20->SetLineColor(ci);
   h_stack_20->GetXaxis()->SetLabelFont(42);
   h_stack_20->GetXaxis()->SetLabelOffset(0.007);
   h_stack_20->GetXaxis()->SetTitleSize(0.05);
   h_stack_20->GetXaxis()->SetTickLength(0.025);
   h_stack_20->GetXaxis()->SetTitleFont(42);
   h_stack_20->GetYaxis()->SetTitle("a.u.");
   h_stack_20->GetYaxis()->SetLabelFont(42);
   h_stack_20->GetYaxis()->SetLabelOffset(0.007);
   h_stack_20->GetYaxis()->SetTitleSize(0.05);
   h_stack_20->GetYaxis()->SetTickLength(0.025);
   h_stack_20->GetYaxis()->SetTitleOffset(1.5);
   h_stack_20->GetYaxis()->SetTitleFont(42);
   h_stack_20->GetZaxis()->SetLabelFont(42);
   h_stack_20->GetZaxis()->SetLabelOffset(0.007);
   h_stack_20->GetZaxis()->SetTitleSize(0.05);
   h_stack_20->GetZaxis()->SetTickLength(0.025);
   h_stack_20->GetZaxis()->SetTitleFont(42);
   h->SetHistogram(h_stack_20);
   
   
   TH1D *h_jet1CSV_QCD__172 = new TH1D("h_jet1CSV_QCD__172","",10,0,1);
   h_jet1CSV_QCD__172->SetBinContent(1,0.006887882);
   h_jet1CSV_QCD__172->SetBinContent(2,0.01008624);
   h_jet1CSV_QCD__172->SetBinContent(3,0.004261908);
   h_jet1CSV_QCD__172->SetBinContent(4,0.002919322);
   h_jet1CSV_QCD__172->SetBinContent(5,0.002631208);
   h_jet1CSV_QCD__172->SetBinContent(6,0.001755891);
   h_jet1CSV_QCD__172->SetBinContent(7,0.001533909);
   h_jet1CSV_QCD__172->SetBinContent(8,0.00117332);
   h_jet1CSV_QCD__172->SetBinContent(9,0.001101157);
   h_jet1CSV_QCD__172->SetBinContent(10,0.001075662);
   h_jet1CSV_QCD__172->SetBinContent(11,5.130884e-08);
   h_jet1CSV_QCD__172->SetBinError(1,1.886003e-05);
   h_jet1CSV_QCD__172->SetBinError(2,2.275815e-05);
   h_jet1CSV_QCD__172->SetBinError(3,1.472017e-05);
   h_jet1CSV_QCD__172->SetBinError(4,1.217516e-05);
   h_jet1CSV_QCD__172->SetBinError(5,1.152028e-05);
   h_jet1CSV_QCD__172->SetBinError(6,9.417229e-06);
   h_jet1CSV_QCD__172->SetBinError(7,8.790129e-06);
   h_jet1CSV_QCD__172->SetBinError(8,7.671513e-06);
   h_jet1CSV_QCD__172->SetBinError(9,7.439603e-06);
   h_jet1CSV_QCD__172->SetBinError(10,7.350975e-06);
   h_jet1CSV_QCD__172->SetBinError(11,5.130884e-08);
   h_jet1CSV_QCD__172->SetEntries(668734);
   h_jet1CSV_QCD__172->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_jet1CSV_QCD__172->SetFillColor(ci);
   h_jet1CSV_QCD__172->GetXaxis()->SetTitle("jet 1 CSV");
   h_jet1CSV_QCD__172->GetXaxis()->SetLabelFont(42);
   h_jet1CSV_QCD__172->GetXaxis()->SetLabelOffset(0.007);
   h_jet1CSV_QCD__172->GetXaxis()->SetTitleSize(0.05);
   h_jet1CSV_QCD__172->GetXaxis()->SetTickLength(0.025);
   h_jet1CSV_QCD__172->GetXaxis()->SetTitleFont(42);
   h_jet1CSV_QCD__172->GetYaxis()->SetTitle("a.u.");
   h_jet1CSV_QCD__172->GetYaxis()->SetLabelFont(42);
   h_jet1CSV_QCD__172->GetYaxis()->SetLabelOffset(0.007);
   h_jet1CSV_QCD__172->GetYaxis()->SetTitleSize(0.05);
   h_jet1CSV_QCD__172->GetYaxis()->SetTickLength(0.025);
   h_jet1CSV_QCD__172->GetYaxis()->SetTitleFont(42);
   h_jet1CSV_QCD__172->GetZaxis()->SetLabelFont(42);
   h_jet1CSV_QCD__172->GetZaxis()->SetLabelOffset(0.007);
   h_jet1CSV_QCD__172->GetZaxis()->SetTitleSize(0.05);
   h_jet1CSV_QCD__172->GetZaxis()->SetTickLength(0.025);
   h_jet1CSV_QCD__172->GetZaxis()->SetTitleFont(42);
   h->Add(h_jet1CSV_QCD,"");
   
   TH1D *h_jet1CSV_#gammapLjetssPoPHFcP__173 = new TH1D("h_jet1CSV_#gammapLjetssPoPHFcP__173","",10,0,1);
   h_jet1CSV_#gammapLjetssPoPHFcP__173->SetBinContent(1,0.01648074);
   h_jet1CSV_#gammapLjetssPoPHFcP__173->SetBinContent(2,0.02648105);
   h_jet1CSV_#gammapLjetssPoPHFcP__173->SetBinContent(3,0.01316235);
   h_jet1CSV_#gammapLjetssPoPHFcP__173->SetBinContent(4,0.01020684);
   h_jet1CSV_#gammapLjetssPoPHFcP__173->SetBinContent(5,0.01052243);
   h_jet1CSV_#gammapLjetssPoPHFcP__173->SetBinContent(6,0.007798317);
   h_jet1CSV_#gammapLjetssPoPHFcP__173->SetBinContent(7,0.008932466);
   h_jet1CSV_#gammapLjetssPoPHFcP__173->SetBinContent(8,0.008285304);
   h_jet1CSV_#gammapLjetssPoPHFcP__173->SetBinContent(9,0.01128348);
   h_jet1CSV_#gammapLjetssPoPHFcP__173->SetBinContent(10,0.01379089);
   h_jet1CSV_#gammapLjetssPoPHFcP__173->SetBinError(1,0.0006342877);
   h_jet1CSV_#gammapLjetssPoPHFcP__173->SetBinError(2,0.000731692);
   h_jet1CSV_#gammapLjetssPoPHFcP__173->SetBinError(3,0.0005285846);
   h_jet1CSV_#gammapLjetssPoPHFcP__173->SetBinError(4,0.0004828031);
   h_jet1CSV_#gammapLjetssPoPHFcP__173->SetBinError(5,0.0005100149);
   h_jet1CSV_#gammapLjetssPoPHFcP__173->SetBinError(6,0.0004224993);
   h_jet1CSV_#gammapLjetssPoPHFcP__173->SetBinError(7,0.0005107);
   h_jet1CSV_#gammapLjetssPoPHFcP__173->SetBinError(8,0.0004781567);
   h_jet1CSV_#gammapLjetssPoPHFcP__173->SetBinError(9,0.0006419739);
   h_jet1CSV_#gammapLjetssPoPHFcP__173->SetBinError(10,0.0005355655);
   h_jet1CSV_#gammapLjetssPoPHFcP__173->SetEntries(14151);
   h_jet1CSV_#gammapLjetssPoPHFcP__173->SetStats(0);

   ci = TColor::GetColor("#ff6633");
   h_jet1CSV_#gammapLjetssPoPHFcP__173->SetFillColor(ci);
   h_jet1CSV_#gammapLjetssPoPHFcP__173->GetXaxis()->SetTitle("jet 1 CSV");
   h_jet1CSV_#gammapLjetssPoPHFcP__173->GetXaxis()->SetLabelFont(42);
   h_jet1CSV_#gammapLjetssPoPHFcP__173->GetXaxis()->SetLabelOffset(0.007);
   h_jet1CSV_#gammapLjetssPoPHFcP__173->GetXaxis()->SetTitleSize(0.05);
   h_jet1CSV_#gammapLjetssPoPHFcP__173->GetXaxis()->SetTickLength(0.025);
   h_jet1CSV_#gammapLjetssPoPHFcP__173->GetXaxis()->SetTitleFont(42);
   h_jet1CSV_#gammapLjetssPoPHFcP__173->GetYaxis()->SetTitle("a.u.");
   h_jet1CSV_#gammapLjetssPoPHFcP__173->GetYaxis()->SetLabelFont(42);
   h_jet1CSV_#gammapLjetssPoPHFcP__173->GetYaxis()->SetLabelOffset(0.007);
   h_jet1CSV_#gammapLjetssPoPHFcP__173->GetYaxis()->SetTitleSize(0.05);
   h_jet1CSV_#gammapLjetssPoPHFcP__173->GetYaxis()->SetTickLength(0.025);
   h_jet1CSV_#gammapLjetssPoPHFcP__173->GetYaxis()->SetTitleFont(42);
   h_jet1CSV_#gammapLjetssPoPHFcP__173->GetZaxis()->SetLabelFont(42);
   h_jet1CSV_#gammapLjetssPoPHFcP__173->GetZaxis()->SetLabelOffset(0.007);
   h_jet1CSV_#gammapLjetssPoPHFcP__173->GetZaxis()->SetTitleSize(0.05);
   h_jet1CSV_#gammapLjetssPoPHFcP__173->GetZaxis()->SetTickLength(0.025);
   h_jet1CSV_#gammapLjetssPoPHFcP__173->GetZaxis()->SetTitleFont(42);
   h->Add(h_jet1CSV_#gamma+jets (HF),"");
   
   TH1D *h_jet1CSV_#gammapLjetssPoPLFcP__174 = new TH1D("h_jet1CSV_#gammapLjetssPoPLFcP__174","",10,0,1);
   h_jet1CSV_#gammapLjetssPoPLFcP__174->SetBinContent(1,0.2216532);
   h_jet1CSV_#gammapLjetssPoPLFcP__174->SetBinContent(2,0.280308);
   h_jet1CSV_#gammapLjetssPoPLFcP__174->SetBinContent(3,0.1097817);
   h_jet1CSV_#gammapLjetssPoPLFcP__174->SetBinContent(4,0.06734785);
   h_jet1CSV_#gammapLjetssPoPLFcP__174->SetBinContent(5,0.05409184);
   h_jet1CSV_#gammapLjetssPoPLFcP__174->SetBinContent(6,0.03464123);
   h_jet1CSV_#gammapLjetssPoPLFcP__174->SetBinContent(7,0.02819474);
   h_jet1CSV_#gammapLjetssPoPLFcP__174->SetBinContent(8,0.01839141);
   h_jet1CSV_#gammapLjetssPoPLFcP__174->SetBinContent(9,0.01395204);
   h_jet1CSV_#gammapLjetssPoPLFcP__174->SetBinContent(10,0.01126766);
   h_jet1CSV_#gammapLjetssPoPLFcP__174->SetBinError(1,0.002436299);
   h_jet1CSV_#gammapLjetssPoPLFcP__174->SetBinError(2,0.002572724);
   h_jet1CSV_#gammapLjetssPoPLFcP__174->SetBinError(3,0.001578675);
   h_jet1CSV_#gammapLjetssPoPLFcP__174->SetBinError(4,0.001177062);
   h_jet1CSV_#gammapLjetssPoPLFcP__174->SetBinError(5,0.001059817);
   h_jet1CSV_#gammapLjetssPoPLFcP__174->SetBinError(6,0.0008951566);
   h_jet1CSV_#gammapLjetssPoPLFcP__174->SetBinError(7,0.0007394277);
   h_jet1CSV_#gammapLjetssPoPLFcP__174->SetBinError(8,0.0006112271);
   h_jet1CSV_#gammapLjetssPoPLFcP__174->SetBinError(9,0.0005063183);
   h_jet1CSV_#gammapLjetssPoPLFcP__174->SetBinError(10,0.0003324301);
   h_jet1CSV_#gammapLjetssPoPLFcP__174->SetEntries(99281);
   h_jet1CSV_#gammapLjetssPoPLFcP__174->SetStats(0);

   ci = TColor::GetColor("#339999");
   h_jet1CSV_#gammapLjetssPoPLFcP__174->SetFillColor(ci);
   h_jet1CSV_#gammapLjetssPoPLFcP__174->GetXaxis()->SetTitle("jet 1 CSV");
   h_jet1CSV_#gammapLjetssPoPLFcP__174->GetXaxis()->SetLabelFont(42);
   h_jet1CSV_#gammapLjetssPoPLFcP__174->GetXaxis()->SetLabelOffset(0.007);
   h_jet1CSV_#gammapLjetssPoPLFcP__174->GetXaxis()->SetTitleSize(0.05);
   h_jet1CSV_#gammapLjetssPoPLFcP__174->GetXaxis()->SetTickLength(0.025);
   h_jet1CSV_#gammapLjetssPoPLFcP__174->GetXaxis()->SetTitleFont(42);
   h_jet1CSV_#gammapLjetssPoPLFcP__174->GetYaxis()->SetTitle("a.u.");
   h_jet1CSV_#gammapLjetssPoPLFcP__174->GetYaxis()->SetLabelFont(42);
   h_jet1CSV_#gammapLjetssPoPLFcP__174->GetYaxis()->SetLabelOffset(0.007);
   h_jet1CSV_#gammapLjetssPoPLFcP__174->GetYaxis()->SetTitleSize(0.05);
   h_jet1CSV_#gammapLjetssPoPLFcP__174->GetYaxis()->SetTickLength(0.025);
   h_jet1CSV_#gammapLjetssPoPLFcP__174->GetYaxis()->SetTitleFont(42);
   h_jet1CSV_#gammapLjetssPoPLFcP__174->GetZaxis()->SetLabelFont(42);
   h_jet1CSV_#gammapLjetssPoPLFcP__174->GetZaxis()->SetLabelOffset(0.007);
   h_jet1CSV_#gammapLjetssPoPLFcP__174->GetZaxis()->SetTitleSize(0.05);
   h_jet1CSV_#gammapLjetssPoPLFcP__174->GetZaxis()->SetTickLength(0.025);
   h_jet1CSV_#gammapLjetssPoPLFcP__174->GetZaxis()->SetTitleFont(42);
   h->Add(h_jet1CSV_#gamma+jets (LF),"");
   h->Draw("hist");
   
   TH1D *hsum__175 = new TH1D("hsum__175","",10,0,1);
   hsum__175->SetBinContent(1,0.2450218);
   hsum__175->SetBinContent(2,0.3168752);
   hsum__175->SetBinContent(3,0.1272059);
   hsum__175->SetBinContent(4,0.08047402);
   hsum__175->SetBinContent(5,0.06724548);
   hsum__175->SetBinContent(6,0.04419544);
   hsum__175->SetBinContent(7,0.03866111);
   hsum__175->SetBinContent(8,0.02785003);
   hsum__175->SetBinContent(9,0.02633668);
   hsum__175->SetBinContent(10,0.02613421);
   hsum__175->SetBinContent(11,5.130884e-08);
   hsum__175->SetBinError(1,0.002517584);
   hsum__175->SetBinError(2,0.002674846);
   hsum__175->SetBinError(3,0.001664882);
   hsum__175->SetBinError(4,0.00127229);
   hsum__175->SetBinError(5,0.001176205);
   hsum__175->SetBinError(6,0.0009898988);
   hsum__175->SetBinError(7,0.0008986908);
   hsum__175->SetBinError(8,0.0007760742);
   hsum__175->SetBinError(9,0.0008176454);
   hsum__175->SetBinError(10,0.0006303921);
   hsum__175->SetBinError(11,5.130884e-08);
   hsum__175->SetEntries(668754);
   hsum__175->SetStats(0);

   ci = 1199;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   hsum__175->SetFillColor(ci);
   hsum__175->SetFillStyle(3003);
   hsum__175->SetLineWidth(0);
   hsum__175->GetXaxis()->SetTitle("jet 1 CSV");
   hsum__175->GetXaxis()->SetLabelFont(42);
   hsum__175->GetXaxis()->SetLabelOffset(0.007);
   hsum__175->GetXaxis()->SetTitleSize(0.05);
   hsum__175->GetXaxis()->SetTickLength(0.025);
   hsum__175->GetXaxis()->SetTitleFont(42);
   hsum__175->GetYaxis()->SetTitle("a.u.");
   hsum__175->GetYaxis()->SetLabelFont(42);
   hsum__175->GetYaxis()->SetLabelOffset(0.007);
   hsum__175->GetYaxis()->SetTitleSize(0.05);
   hsum__175->GetYaxis()->SetTickLength(0.025);
   hsum__175->GetYaxis()->SetTitleFont(42);
   hsum__175->GetZaxis()->SetLabelFont(42);
   hsum__175->GetZaxis()->SetLabelOffset(0.007);
   hsum__175->GetZaxis()->SetTitleSize(0.05);
   hsum__175->GetZaxis()->SetTickLength(0.025);
   hsum__175->GetZaxis()->SetTitleFont(42);
   hsum__175->Draw("e2 same");
   
   TH1D *h_jet1CSV_Data__176 = new TH1D("h_jet1CSV_Data__176","",10,0,1);
   h_jet1CSV_Data__176->SetBinContent(1,0.2028732);
   h_jet1CSV_Data__176->SetBinContent(2,0.2993317);
   h_jet1CSV_Data__176->SetBinContent(3,0.1281139);
   h_jet1CSV_Data__176->SetBinContent(4,0.0878841);
   h_jet1CSV_Data__176->SetBinContent(5,0.07981212);
   h_jet1CSV_Data__176->SetBinContent(6,0.05320958);
   h_jet1CSV_Data__176->SetBinContent(7,0.04661203);
   h_jet1CSV_Data__176->SetBinContent(8,0.03584241);
   h_jet1CSV_Data__176->SetBinContent(9,0.03354852);
   h_jet1CSV_Data__176->SetBinContent(10,0.03277242);
   h_jet1CSV_Data__176->SetBinContent(11,1.495365e-06);
   h_jet1CSV_Data__176->SetBinError(1,0.0005507899);
   h_jet1CSV_Data__176->SetBinError(2,0.0006690368);
   h_jet1CSV_Data__176->SetBinError(3,0.0004376952);
   h_jet1CSV_Data__176->SetBinError(4,0.0003625173);
   h_jet1CSV_Data__176->SetBinError(5,0.0003454682);
   h_jet1CSV_Data__176->SetBinError(6,0.0002820776);
   h_jet1CSV_Data__176->SetBinError(7,0.0002640114);
   h_jet1CSV_Data__176->SetBinError(8,0.0002315113);
   h_jet1CSV_Data__176->SetBinError(9,0.0002239805);
   h_jet1CSV_Data__176->SetBinError(10,0.0002213747);
   h_jet1CSV_Data__176->SetBinError(11,1.495365e-06);
   h_jet1CSV_Data__176->SetEntries(668734);
   h_jet1CSV_Data__176->SetStats(0);
   h_jet1CSV_Data__176->SetLineWidth(3);
   h_jet1CSV_Data__176->SetMarkerStyle(20);
   h_jet1CSV_Data__176->SetMarkerSize(2);
   h_jet1CSV_Data__176->GetXaxis()->SetTitle("jet 1 CSV");
   h_jet1CSV_Data__176->GetXaxis()->SetLabelFont(42);
   h_jet1CSV_Data__176->GetXaxis()->SetLabelOffset(0.007);
   h_jet1CSV_Data__176->GetXaxis()->SetTitleSize(0.05);
   h_jet1CSV_Data__176->GetXaxis()->SetTickLength(0.025);
   h_jet1CSV_Data__176->GetXaxis()->SetTitleFont(42);
   h_jet1CSV_Data__176->GetYaxis()->SetTitle("a.u.");
   h_jet1CSV_Data__176->GetYaxis()->SetLabelFont(42);
   h_jet1CSV_Data__176->GetYaxis()->SetLabelOffset(0.007);
   h_jet1CSV_Data__176->GetYaxis()->SetTitleSize(0.05);
   h_jet1CSV_Data__176->GetYaxis()->SetTickLength(0.025);
   h_jet1CSV_Data__176->GetYaxis()->SetTitleFont(42);
   h_jet1CSV_Data__176->GetZaxis()->SetLabelFont(42);
   h_jet1CSV_Data__176->GetZaxis()->SetLabelOffset(0.007);
   h_jet1CSV_Data__176->GetZaxis()->SetTitleSize(0.05);
   h_jet1CSV_Data__176->GetZaxis()->SetTickLength(0.025);
   h_jet1CSV_Data__176->GetZaxis()->SetTitleFont(42);
   h_jet1CSV_Data__176->Draw("elp same");
   
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
   
   TH1D *ratio__177 = new TH1D("ratio__177","",10,0,1);
   ratio__177->SetBinContent(1,-0.1720199);
   ratio__177->SetBinContent(2,-0.05536413);
   ratio__177->SetBinContent(3,0.007137775);
   ratio__177->SetBinContent(4,0.09208047);
   ratio__177->SetBinContent(5,0.1868773);
   ratio__177->SetBinContent(6,0.2039609);
   ratio__177->SetBinContent(7,0.2056565);
   ratio__177->SetBinContent(8,0.286979);
   ratio__177->SetBinContent(9,0.2738323);
   ratio__177->SetBinContent(10,0.2540047);
   ratio__177->SetBinContent(11,1.495365e-06);
   ratio__177->SetBinError(1,0.0001);
   ratio__177->SetBinError(2,0.0001);
   ratio__177->SetBinError(3,0.0001);
   ratio__177->SetBinError(4,0.0001);
   ratio__177->SetBinError(5,0.0001);
   ratio__177->SetBinError(6,0.0001);
   ratio__177->SetBinError(7,0.0001);
   ratio__177->SetBinError(8,0.0001);
   ratio__177->SetBinError(9,0.0001);
   ratio__177->SetBinError(10,0.0001);
   ratio__177->SetBinError(11,1.495365e-06);
   ratio__177->SetMinimum(-0.48);
   ratio__177->SetMaximum(0.48);
   ratio__177->SetEntries(668744);
   ratio__177->SetStats(0);
   ratio__177->SetLineWidth(3);
   ratio__177->SetMarkerStyle(20);
   ratio__177->SetMarkerSize(2);
   ratio__177->GetXaxis()->SetTitle("jet 1 CSV");
   ratio__177->GetXaxis()->SetLabelFont(43);
   ratio__177->GetXaxis()->SetLabelOffset(0.007);
   ratio__177->GetXaxis()->SetLabelSize(30);
   ratio__177->GetXaxis()->SetTitleSize(40);
   ratio__177->GetXaxis()->SetTickLength(0.025);
   ratio__177->GetXaxis()->SetTitleOffset(5);
   ratio__177->GetXaxis()->SetTitleFont(43);
   ratio__177->GetYaxis()->SetTitle("#frac{Data-Exp}{Exp}");
   ratio__177->GetYaxis()->SetNdivisions(5);
   ratio__177->GetYaxis()->SetLabelFont(43);
   ratio__177->GetYaxis()->SetLabelOffset(0.007);
   ratio__177->GetYaxis()->SetLabelSize(30);
   ratio__177->GetYaxis()->SetTitleSize(40);
   ratio__177->GetYaxis()->SetTickLength(0.025);
   ratio__177->GetYaxis()->SetTitleOffset(2.5);
   ratio__177->GetYaxis()->SetTitleFont(43);
   ratio__177->GetZaxis()->SetLabelFont(42);
   ratio__177->GetZaxis()->SetLabelOffset(0.007);
   ratio__177->GetZaxis()->SetTitleSize(0.05);
   ratio__177->GetZaxis()->SetTickLength(0.025);
   ratio__177->GetZaxis()->SetTitleFont(42);
   ratio__177->Draw("elp");
   
   TH1D *zero__178 = new TH1D("zero__178","",10,0,1);
   zero__178->SetBinContent(11,1.495365e-06);
   zero__178->SetBinError(1,0.0005507899);
   zero__178->SetBinError(2,0.0006690368);
   zero__178->SetBinError(3,0.0004376952);
   zero__178->SetBinError(4,0.0003625173);
   zero__178->SetBinError(5,0.0003454682);
   zero__178->SetBinError(6,0.0002820776);
   zero__178->SetBinError(7,0.0002640114);
   zero__178->SetBinError(8,0.0002315113);
   zero__178->SetBinError(9,0.0002239805);
   zero__178->SetBinError(10,0.0002213747);
   zero__178->SetBinError(11,1.495365e-06);
   zero__178->SetEntries(668744);
   zero__178->SetStats(0);
   zero__178->SetLineWidth(3);
   zero__178->SetMarkerStyle(20);
   zero__178->SetMarkerSize(2);
   zero__178->GetXaxis()->SetTitle("jet 1 CSV");
   zero__178->GetXaxis()->SetLabelFont(42);
   zero__178->GetXaxis()->SetLabelOffset(0.007);
   zero__178->GetXaxis()->SetTitleSize(0.05);
   zero__178->GetXaxis()->SetTickLength(0.025);
   zero__178->GetXaxis()->SetTitleFont(42);
   zero__178->GetYaxis()->SetTitle("a.u.");
   zero__178->GetYaxis()->SetLabelFont(42);
   zero__178->GetYaxis()->SetLabelOffset(0.007);
   zero__178->GetYaxis()->SetTitleSize(0.05);
   zero__178->GetYaxis()->SetTickLength(0.025);
   zero__178->GetYaxis()->SetTitleFont(42);
   zero__178->GetZaxis()->SetLabelFont(42);
   zero__178->GetZaxis()->SetLabelOffset(0.007);
   zero__178->GetZaxis()->SetTitleSize(0.05);
   zero__178->GetZaxis()->SetTickLength(0.025);
   zero__178->GetZaxis()->SetTitleFont(42);
   zero__178->Draw("hist same");
   
   TH1D *sumratioup__179 = new TH1D("sumratioup__179","",10,0,1);
   sumratioup__179->SetBinContent(1,0.01027494);
   sumratioup__179->SetBinContent(2,0.008441322);
   sumratioup__179->SetBinContent(3,0.01308808);
   sumratioup__179->SetBinContent(4,0.01580995);
   sumratioup__179->SetBinContent(5,0.01749122);
   sumratioup__179->SetBinContent(6,0.02239821);
   sumratioup__179->SetBinContent(7,0.02324534);
   sumratioup__179->SetBinContent(8,0.02786619);
   sumratioup__179->SetBinContent(9,0.03104588);
   sumratioup__179->SetBinContent(10,0.02412134);
   sumratioup__179->SetBinContent(11,5.130884e-08);
   sumratioup__179->SetBinError(1,0.002517584);
   sumratioup__179->SetBinError(2,0.002674846);
   sumratioup__179->SetBinError(3,0.001664882);
   sumratioup__179->SetBinError(4,0.00127229);
   sumratioup__179->SetBinError(5,0.001176205);
   sumratioup__179->SetBinError(6,0.0009898988);
   sumratioup__179->SetBinError(7,0.0008986908);
   sumratioup__179->SetBinError(8,0.0007760742);
   sumratioup__179->SetBinError(9,0.0008176454);
   sumratioup__179->SetBinError(10,0.0006303921);
   sumratioup__179->SetBinError(11,5.130884e-08);
   sumratioup__179->SetEntries(668764);
   sumratioup__179->SetStats(0);

   ci = 1199;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratioup__179->SetFillColor(ci);
   sumratioup__179->SetFillStyle(3003);
   sumratioup__179->GetXaxis()->SetTitle("jet 1 CSV");
   sumratioup__179->GetXaxis()->SetLabelFont(42);
   sumratioup__179->GetXaxis()->SetLabelOffset(0.007);
   sumratioup__179->GetXaxis()->SetTitleSize(0.05);
   sumratioup__179->GetXaxis()->SetTickLength(0.025);
   sumratioup__179->GetXaxis()->SetTitleFont(42);
   sumratioup__179->GetYaxis()->SetTitle("a.u.");
   sumratioup__179->GetYaxis()->SetLabelFont(42);
   sumratioup__179->GetYaxis()->SetLabelOffset(0.007);
   sumratioup__179->GetYaxis()->SetTitleSize(0.05);
   sumratioup__179->GetYaxis()->SetTickLength(0.025);
   sumratioup__179->GetYaxis()->SetTitleFont(42);
   sumratioup__179->GetZaxis()->SetLabelFont(42);
   sumratioup__179->GetZaxis()->SetLabelOffset(0.007);
   sumratioup__179->GetZaxis()->SetTitleSize(0.05);
   sumratioup__179->GetZaxis()->SetTickLength(0.025);
   sumratioup__179->GetZaxis()->SetTitleFont(42);
   sumratioup__179->Draw("hist same");
   
   TH1D *sumratiodown__180 = new TH1D("sumratiodown__180","",10,0,1);
   sumratiodown__180->SetBinContent(1,-0.01027494);
   sumratiodown__180->SetBinContent(2,-0.008441322);
   sumratiodown__180->SetBinContent(3,-0.01308808);
   sumratiodown__180->SetBinContent(4,-0.01580995);
   sumratiodown__180->SetBinContent(5,-0.01749122);
   sumratiodown__180->SetBinContent(6,-0.02239821);
   sumratiodown__180->SetBinContent(7,-0.02324534);
   sumratiodown__180->SetBinContent(8,-0.02786619);
   sumratiodown__180->SetBinContent(9,-0.03104588);
   sumratiodown__180->SetBinContent(10,-0.02412134);
   sumratiodown__180->SetBinContent(11,5.130884e-08);
   sumratiodown__180->SetBinError(1,0.002517584);
   sumratiodown__180->SetBinError(2,0.002674846);
   sumratiodown__180->SetBinError(3,0.001664882);
   sumratiodown__180->SetBinError(4,0.00127229);
   sumratiodown__180->SetBinError(5,0.001176205);
   sumratiodown__180->SetBinError(6,0.0009898988);
   sumratiodown__180->SetBinError(7,0.0008986908);
   sumratiodown__180->SetBinError(8,0.0007760742);
   sumratiodown__180->SetBinError(9,0.0008176454);
   sumratiodown__180->SetBinError(10,0.0006303921);
   sumratiodown__180->SetBinError(11,5.130884e-08);
   sumratiodown__180->SetEntries(668764);
   sumratiodown__180->SetStats(0);

   ci = 1199;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratiodown__180->SetFillColor(ci);
   sumratiodown__180->SetFillStyle(3003);
   sumratiodown__180->GetXaxis()->SetTitle("jet 1 CSV");
   sumratiodown__180->GetXaxis()->SetLabelFont(42);
   sumratiodown__180->GetXaxis()->SetLabelOffset(0.007);
   sumratiodown__180->GetXaxis()->SetTitleSize(0.05);
   sumratiodown__180->GetXaxis()->SetTickLength(0.025);
   sumratiodown__180->GetXaxis()->SetTitleFont(42);
   sumratiodown__180->GetYaxis()->SetTitle("a.u.");
   sumratiodown__180->GetYaxis()->SetLabelFont(42);
   sumratiodown__180->GetYaxis()->SetLabelOffset(0.007);
   sumratiodown__180->GetYaxis()->SetTitleSize(0.05);
   sumratiodown__180->GetYaxis()->SetTickLength(0.025);
   sumratiodown__180->GetYaxis()->SetTitleFont(42);
   sumratiodown__180->GetZaxis()->SetLabelFont(42);
   sumratiodown__180->GetZaxis()->SetLabelOffset(0.007);
   sumratiodown__180->GetZaxis()->SetTitleSize(0.05);
   sumratiodown__180->GetZaxis()->SetTickLength(0.025);
   sumratiodown__180->GetZaxis()->SetTitleFont(42);
   sumratiodown__180->Draw("hist same");
   
   Double_t Graph0_fx1020[10] = {
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
   Double_t Graph0_fy1020[10] = {
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
   Double_t Graph0_fex1020[10] = {
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
   Double_t Graph0_fey1020[10] = {
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
   TGraphErrors *gre = new TGraphErrors(10,Graph0_fx1020,Graph0_fy1020,Graph0_fex1020,Graph0_fey1020);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1020 = new TH1F("Graph_Graph1020","Graph",100,0,1.04);
   Graph_Graph1020->SetMinimum(-0.2212238);
   Graph_Graph1020->SetMaximum(0.3422477);
   Graph_Graph1020->SetDirectory(0);
   Graph_Graph1020->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1020->SetLineColor(ci);
   Graph_Graph1020->GetXaxis()->SetLabelFont(42);
   Graph_Graph1020->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1020->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1020->GetXaxis()->SetTickLength(0.025);
   Graph_Graph1020->GetXaxis()->SetTitleFont(42);
   Graph_Graph1020->GetYaxis()->SetLabelFont(42);
   Graph_Graph1020->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1020->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1020->GetYaxis()->SetTickLength(0.025);
   Graph_Graph1020->GetYaxis()->SetTitleFont(42);
   Graph_Graph1020->GetZaxis()->SetLabelFont(42);
   Graph_Graph1020->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1020->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph1020->GetZaxis()->SetTickLength(0.025);
   Graph_Graph1020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1020);
   
   gre->Draw("pe0");
   pad2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
