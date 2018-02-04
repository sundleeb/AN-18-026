void photon_jet2CSV_logy()
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
   pad1->Range(-0.1875,-3.600373,1.0625,2.340036);
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
   h->SetMinimum(0.0008420867);
   h->SetMaximum(43.24469);
   
   TH1F *h_stack_24 = new TH1F("h_stack_24","",10,0,1);
   h_stack_24->SetMinimum(0.000250973);
   h_stack_24->SetMaximum(83.98618);
   h_stack_24->SetDirectory(0);
   h_stack_24->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h_stack_24->SetLineColor(ci);
   h_stack_24->GetXaxis()->SetLabelFont(42);
   h_stack_24->GetXaxis()->SetLabelOffset(0.007);
   h_stack_24->GetXaxis()->SetTitleSize(0.05);
   h_stack_24->GetXaxis()->SetTickLength(0.025);
   h_stack_24->GetXaxis()->SetTitleFont(42);
   h_stack_24->GetYaxis()->SetTitle("a.u.");
   h_stack_24->GetYaxis()->SetLabelFont(42);
   h_stack_24->GetYaxis()->SetLabelOffset(0.007);
   h_stack_24->GetYaxis()->SetTitleSize(0.05);
   h_stack_24->GetYaxis()->SetTickLength(0.025);
   h_stack_24->GetYaxis()->SetTitleOffset(1.5);
   h_stack_24->GetYaxis()->SetTitleFont(42);
   h_stack_24->GetZaxis()->SetLabelFont(42);
   h_stack_24->GetZaxis()->SetLabelOffset(0.007);
   h_stack_24->GetZaxis()->SetTitleSize(0.05);
   h_stack_24->GetZaxis()->SetTickLength(0.025);
   h_stack_24->GetZaxis()->SetTitleFont(42);
   h->SetHistogram(h_stack_24);
   
   
   TH1D *h_jet2CSV_QCD__208 = new TH1D("h_jet2CSV_QCD__208","",10,0,1);
   h_jet2CSV_QCD__208->SetBinContent(1,0.0140263);
   h_jet2CSV_QCD__208->SetBinContent(2,0.007788026);
   h_jet2CSV_QCD__208->SetBinContent(3,0.003677173);
   h_jet2CSV_QCD__208->SetBinContent(4,0.002136229);
   h_jet2CSV_QCD__208->SetBinContent(5,0.001534754);
   h_jet2CSV_QCD__208->SetBinContent(6,0.001280107);
   h_jet2CSV_QCD__208->SetBinContent(7,0.0008790633);
   h_jet2CSV_QCD__208->SetBinContent(8,0.0007338056);
   h_jet2CSV_QCD__208->SetBinContent(9,0.0006852628);
   h_jet2CSV_QCD__208->SetBinContent(10,0.0006858246);
   h_jet2CSV_QCD__208->SetBinError(1,2.713163e-05);
   h_jet2CSV_QCD__208->SetBinError(2,1.974635e-05);
   h_jet2CSV_QCD__208->SetBinError(3,1.357114e-05);
   h_jet2CSV_QCD__208->SetBinError(4,1.032455e-05);
   h_jet2CSV_QCD__208->SetBinError(5,8.737545e-06);
   h_jet2CSV_QCD__208->SetBinError(6,7.991935e-06);
   h_jet2CSV_QCD__208->SetBinError(7,6.613653e-06);
   h_jet2CSV_QCD__208->SetBinError(8,6.044084e-06);
   h_jet2CSV_QCD__208->SetBinError(9,5.841108e-06);
   h_jet2CSV_QCD__208->SetBinError(10,5.834151e-06);
   h_jet2CSV_QCD__208->SetEntries(668734);
   h_jet2CSV_QCD__208->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_jet2CSV_QCD__208->SetFillColor(ci);
   h_jet2CSV_QCD__208->GetXaxis()->SetTitle("jet 2 CSV");
   h_jet2CSV_QCD__208->GetXaxis()->SetLabelFont(42);
   h_jet2CSV_QCD__208->GetXaxis()->SetLabelOffset(0.007);
   h_jet2CSV_QCD__208->GetXaxis()->SetTitleSize(0.05);
   h_jet2CSV_QCD__208->GetXaxis()->SetTickLength(0.025);
   h_jet2CSV_QCD__208->GetXaxis()->SetTitleFont(42);
   h_jet2CSV_QCD__208->GetYaxis()->SetTitle("a.u.");
   h_jet2CSV_QCD__208->GetYaxis()->SetLabelFont(42);
   h_jet2CSV_QCD__208->GetYaxis()->SetLabelOffset(0.007);
   h_jet2CSV_QCD__208->GetYaxis()->SetTitleSize(0.05);
   h_jet2CSV_QCD__208->GetYaxis()->SetTickLength(0.025);
   h_jet2CSV_QCD__208->GetYaxis()->SetTitleFont(42);
   h_jet2CSV_QCD__208->GetZaxis()->SetLabelFont(42);
   h_jet2CSV_QCD__208->GetZaxis()->SetLabelOffset(0.007);
   h_jet2CSV_QCD__208->GetZaxis()->SetTitleSize(0.05);
   h_jet2CSV_QCD__208->GetZaxis()->SetTickLength(0.025);
   h_jet2CSV_QCD__208->GetZaxis()->SetTitleFont(42);
   h->Add(h_jet2CSV_QCD,"");
   
   TH1D *h_jet2CSV_#gammapLjetssPoPHFcP__209 = new TH1D("h_jet2CSV_#gammapLjetssPoPHFcP__209","",10,0,1);
   h_jet2CSV_#gammapLjetssPoPHFcP__209->SetBinContent(1,0.05131435);
   h_jet2CSV_#gammapLjetssPoPHFcP__209->SetBinContent(2,0.02243845);
   h_jet2CSV_#gammapLjetssPoPHFcP__209->SetBinContent(3,0.01150809);
   h_jet2CSV_#gammapLjetssPoPHFcP__209->SetBinContent(4,0.007022953);
   h_jet2CSV_#gammapLjetssPoPHFcP__209->SetBinContent(5,0.005592696);
   h_jet2CSV_#gammapLjetssPoPHFcP__209->SetBinContent(6,0.004705087);
   h_jet2CSV_#gammapLjetssPoPHFcP__209->SetBinContent(7,0.004356595);
   h_jet2CSV_#gammapLjetssPoPHFcP__209->SetBinContent(8,0.004882315);
   h_jet2CSV_#gammapLjetssPoPHFcP__209->SetBinContent(9,0.006319496);
   h_jet2CSV_#gammapLjetssPoPHFcP__209->SetBinContent(10,0.008803839);
   h_jet2CSV_#gammapLjetssPoPHFcP__209->SetBinError(1,0.001371688);
   h_jet2CSV_#gammapLjetssPoPHFcP__209->SetBinError(2,0.0006153908);
   h_jet2CSV_#gammapLjetssPoPHFcP__209->SetBinError(3,0.0004384947);
   h_jet2CSV_#gammapLjetssPoPHFcP__209->SetBinError(4,0.0003172704);
   h_jet2CSV_#gammapLjetssPoPHFcP__209->SetBinError(5,0.0003682361);
   h_jet2CSV_#gammapLjetssPoPHFcP__209->SetBinError(6,0.0002786201);
   h_jet2CSV_#gammapLjetssPoPHFcP__209->SetBinError(7,0.0003140213);
   h_jet2CSV_#gammapLjetssPoPHFcP__209->SetBinError(8,0.0002407757);
   h_jet2CSV_#gammapLjetssPoPHFcP__209->SetBinError(9,0.0002579805);
   h_jet2CSV_#gammapLjetssPoPHFcP__209->SetBinError(10,0.0002961232);
   h_jet2CSV_#gammapLjetssPoPHFcP__209->SetEntries(14151);
   h_jet2CSV_#gammapLjetssPoPHFcP__209->SetStats(0);

   ci = TColor::GetColor("#ff6633");
   h_jet2CSV_#gammapLjetssPoPHFcP__209->SetFillColor(ci);
   h_jet2CSV_#gammapLjetssPoPHFcP__209->GetXaxis()->SetTitle("jet 2 CSV");
   h_jet2CSV_#gammapLjetssPoPHFcP__209->GetXaxis()->SetLabelFont(42);
   h_jet2CSV_#gammapLjetssPoPHFcP__209->GetXaxis()->SetLabelOffset(0.007);
   h_jet2CSV_#gammapLjetssPoPHFcP__209->GetXaxis()->SetTitleSize(0.05);
   h_jet2CSV_#gammapLjetssPoPHFcP__209->GetXaxis()->SetTickLength(0.025);
   h_jet2CSV_#gammapLjetssPoPHFcP__209->GetXaxis()->SetTitleFont(42);
   h_jet2CSV_#gammapLjetssPoPHFcP__209->GetYaxis()->SetTitle("a.u.");
   h_jet2CSV_#gammapLjetssPoPHFcP__209->GetYaxis()->SetLabelFont(42);
   h_jet2CSV_#gammapLjetssPoPHFcP__209->GetYaxis()->SetLabelOffset(0.007);
   h_jet2CSV_#gammapLjetssPoPHFcP__209->GetYaxis()->SetTitleSize(0.05);
   h_jet2CSV_#gammapLjetssPoPHFcP__209->GetYaxis()->SetTickLength(0.025);
   h_jet2CSV_#gammapLjetssPoPHFcP__209->GetYaxis()->SetTitleFont(42);
   h_jet2CSV_#gammapLjetssPoPHFcP__209->GetZaxis()->SetLabelFont(42);
   h_jet2CSV_#gammapLjetssPoPHFcP__209->GetZaxis()->SetLabelOffset(0.007);
   h_jet2CSV_#gammapLjetssPoPHFcP__209->GetZaxis()->SetTitleSize(0.05);
   h_jet2CSV_#gammapLjetssPoPHFcP__209->GetZaxis()->SetTickLength(0.025);
   h_jet2CSV_#gammapLjetssPoPHFcP__209->GetZaxis()->SetTitleFont(42);
   h->Add(h_jet2CSV_#gamma+jets (HF),"");
   
   TH1D *h_jet2CSV_#gammapLjetssPoPLFcP__210 = new TH1D("h_jet2CSV_#gammapLjetssPoPLFcP__210","",10,0,1);
   h_jet2CSV_#gammapLjetssPoPLFcP__210->SetBinContent(1,0.3671063);
   h_jet2CSV_#gammapLjetssPoPLFcP__210->SetBinContent(2,0.2208945);
   h_jet2CSV_#gammapLjetssPoPLFcP__210->SetBinContent(3,0.09368692);
   h_jet2CSV_#gammapLjetssPoPLFcP__210->SetBinContent(4,0.04960026);
   h_jet2CSV_#gammapLjetssPoPLFcP__210->SetBinContent(5,0.03292683);
   h_jet2CSV_#gammapLjetssPoPLFcP__210->SetBinContent(6,0.0261002);
   h_jet2CSV_#gammapLjetssPoPLFcP__210->SetBinContent(7,0.01749456);
   h_jet2CSV_#gammapLjetssPoPLFcP__210->SetBinContent(8,0.01309643);
   h_jet2CSV_#gammapLjetssPoPLFcP__210->SetBinContent(9,0.009836975);
   h_jet2CSV_#gammapLjetssPoPLFcP__210->SetBinContent(10,0.008886632);
   h_jet2CSV_#gammapLjetssPoPLFcP__210->SetBinError(1,0.003477803);
   h_jet2CSV_#gammapLjetssPoPLFcP__210->SetBinError(2,0.001845869);
   h_jet2CSV_#gammapLjetssPoPLFcP__210->SetBinError(3,0.00124808);
   h_jet2CSV_#gammapLjetssPoPLFcP__210->SetBinError(4,0.0009260654);
   h_jet2CSV_#gammapLjetssPoPLFcP__210->SetBinError(5,0.0006938953);
   h_jet2CSV_#gammapLjetssPoPLFcP__210->SetBinError(6,0.000691517);
   h_jet2CSV_#gammapLjetssPoPLFcP__210->SetBinError(7,0.0005371393);
   h_jet2CSV_#gammapLjetssPoPLFcP__210->SetBinError(8,0.0004924385);
   h_jet2CSV_#gammapLjetssPoPLFcP__210->SetBinError(9,0.000340549);
   h_jet2CSV_#gammapLjetssPoPLFcP__210->SetBinError(10,0.0003457795);
   h_jet2CSV_#gammapLjetssPoPLFcP__210->SetEntries(99281);
   h_jet2CSV_#gammapLjetssPoPLFcP__210->SetStats(0);

   ci = TColor::GetColor("#339999");
   h_jet2CSV_#gammapLjetssPoPLFcP__210->SetFillColor(ci);
   h_jet2CSV_#gammapLjetssPoPLFcP__210->GetXaxis()->SetTitle("jet 2 CSV");
   h_jet2CSV_#gammapLjetssPoPLFcP__210->GetXaxis()->SetLabelFont(42);
   h_jet2CSV_#gammapLjetssPoPLFcP__210->GetXaxis()->SetLabelOffset(0.007);
   h_jet2CSV_#gammapLjetssPoPLFcP__210->GetXaxis()->SetTitleSize(0.05);
   h_jet2CSV_#gammapLjetssPoPLFcP__210->GetXaxis()->SetTickLength(0.025);
   h_jet2CSV_#gammapLjetssPoPLFcP__210->GetXaxis()->SetTitleFont(42);
   h_jet2CSV_#gammapLjetssPoPLFcP__210->GetYaxis()->SetTitle("a.u.");
   h_jet2CSV_#gammapLjetssPoPLFcP__210->GetYaxis()->SetLabelFont(42);
   h_jet2CSV_#gammapLjetssPoPLFcP__210->GetYaxis()->SetLabelOffset(0.007);
   h_jet2CSV_#gammapLjetssPoPLFcP__210->GetYaxis()->SetTitleSize(0.05);
   h_jet2CSV_#gammapLjetssPoPLFcP__210->GetYaxis()->SetTickLength(0.025);
   h_jet2CSV_#gammapLjetssPoPLFcP__210->GetYaxis()->SetTitleFont(42);
   h_jet2CSV_#gammapLjetssPoPLFcP__210->GetZaxis()->SetLabelFont(42);
   h_jet2CSV_#gammapLjetssPoPLFcP__210->GetZaxis()->SetLabelOffset(0.007);
   h_jet2CSV_#gammapLjetssPoPLFcP__210->GetZaxis()->SetTitleSize(0.05);
   h_jet2CSV_#gammapLjetssPoPLFcP__210->GetZaxis()->SetTickLength(0.025);
   h_jet2CSV_#gammapLjetssPoPLFcP__210->GetZaxis()->SetTitleFont(42);
   h->Add(h_jet2CSV_#gamma+jets (LF),"");
   h->Draw("hist");
   
   TH1D *hsum__211 = new TH1D("hsum__211","",10,0,1);
   hsum__211->SetBinContent(1,0.4324469);
   hsum__211->SetBinContent(2,0.251121);
   hsum__211->SetBinContent(3,0.1088722);
   hsum__211->SetBinContent(4,0.05875944);
   hsum__211->SetBinContent(5,0.04005428);
   hsum__211->SetBinContent(6,0.0320854);
   hsum__211->SetBinContent(7,0.02273022);
   hsum__211->SetBinContent(8,0.01871255);
   hsum__211->SetBinContent(9,0.01684173);
   hsum__211->SetBinContent(10,0.0183763);
   hsum__211->SetBinError(1,0.003738633);
   hsum__211->SetBinError(2,0.001945849);
   hsum__211->SetBinError(3,0.001322938);
   hsum__211->SetBinError(4,0.0009789608);
   hsum__211->SetBinError(5,0.0007855984);
   hsum__211->SetBinError(6,0.0007455795);
   hsum__211->SetBinError(7,0.0006222313);
   hsum__211->SetBinError(8,0.0005481835);
   hsum__211->SetBinError(9,0.0004272724);
   hsum__211->SetBinError(10,0.0004552872);
   hsum__211->SetEntries(668754);
   hsum__211->SetStats(0);

   ci = 1203;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   hsum__211->SetFillColor(ci);
   hsum__211->SetFillStyle(3003);
   hsum__211->SetLineWidth(0);
   hsum__211->GetXaxis()->SetTitle("jet 2 CSV");
   hsum__211->GetXaxis()->SetLabelFont(42);
   hsum__211->GetXaxis()->SetLabelOffset(0.007);
   hsum__211->GetXaxis()->SetTitleSize(0.05);
   hsum__211->GetXaxis()->SetTickLength(0.025);
   hsum__211->GetXaxis()->SetTitleFont(42);
   hsum__211->GetYaxis()->SetTitle("a.u.");
   hsum__211->GetYaxis()->SetLabelFont(42);
   hsum__211->GetYaxis()->SetLabelOffset(0.007);
   hsum__211->GetYaxis()->SetTitleSize(0.05);
   hsum__211->GetYaxis()->SetTickLength(0.025);
   hsum__211->GetYaxis()->SetTitleFont(42);
   hsum__211->GetZaxis()->SetLabelFont(42);
   hsum__211->GetZaxis()->SetLabelOffset(0.007);
   hsum__211->GetZaxis()->SetTitleSize(0.05);
   hsum__211->GetZaxis()->SetTickLength(0.025);
   hsum__211->GetZaxis()->SetTitleFont(42);
   hsum__211->Draw("e2 same");
   
   TH1D *h_jet2CSV_Data__212 = new TH1D("h_jet2CSV_Data__212","",10,0,1);
   h_jet2CSV_Data__212->SetBinContent(1,0.4052792);
   h_jet2CSV_Data__212->SetBinContent(2,0.2381201);
   h_jet2CSV_Data__212->SetBinContent(3,0.1124034);
   h_jet2CSV_Data__212->SetBinContent(4,0.0655926);
   h_jet2CSV_Data__212->SetBinContent(5,0.04732076);
   h_jet2CSV_Data__212->SetBinContent(6,0.03931159);
   h_jet2CSV_Data__212->SetBinContent(7,0.02709598);
   h_jet2CSV_Data__212->SetBinContent(8,0.02259493);
   h_jet2CSV_Data__212->SetBinContent(9,0.02109359);
   h_jet2CSV_Data__212->SetBinContent(10,0.0211878);
   h_jet2CSV_Data__212->SetBinError(1,0.0007784854);
   h_jet2CSV_Data__212->SetBinError(2,0.000596721);
   h_jet2CSV_Data__212->SetBinError(3,0.0004099804);
   h_jet2CSV_Data__212->SetBinError(4,0.0003131848);
   h_jet2CSV_Data__212->SetBinError(5,0.0002660107);
   h_jet2CSV_Data__212->SetBinError(6,0.0002424564);
   h_jet2CSV_Data__212->SetBinError(7,0.0002012916);
   h_jet2CSV_Data__212->SetBinError(8,0.0001838141);
   h_jet2CSV_Data__212->SetBinError(9,0.0001776023);
   h_jet2CSV_Data__212->SetBinError(10,0.0001779984);
   h_jet2CSV_Data__212->SetEntries(668734);
   h_jet2CSV_Data__212->SetStats(0);
   h_jet2CSV_Data__212->SetLineWidth(3);
   h_jet2CSV_Data__212->SetMarkerStyle(20);
   h_jet2CSV_Data__212->SetMarkerSize(2);
   h_jet2CSV_Data__212->GetXaxis()->SetTitle("jet 2 CSV");
   h_jet2CSV_Data__212->GetXaxis()->SetLabelFont(42);
   h_jet2CSV_Data__212->GetXaxis()->SetLabelOffset(0.007);
   h_jet2CSV_Data__212->GetXaxis()->SetTitleSize(0.05);
   h_jet2CSV_Data__212->GetXaxis()->SetTickLength(0.025);
   h_jet2CSV_Data__212->GetXaxis()->SetTitleFont(42);
   h_jet2CSV_Data__212->GetYaxis()->SetTitle("a.u.");
   h_jet2CSV_Data__212->GetYaxis()->SetLabelFont(42);
   h_jet2CSV_Data__212->GetYaxis()->SetLabelOffset(0.007);
   h_jet2CSV_Data__212->GetYaxis()->SetTitleSize(0.05);
   h_jet2CSV_Data__212->GetYaxis()->SetTickLength(0.025);
   h_jet2CSV_Data__212->GetYaxis()->SetTitleFont(42);
   h_jet2CSV_Data__212->GetZaxis()->SetLabelFont(42);
   h_jet2CSV_Data__212->GetZaxis()->SetLabelOffset(0.007);
   h_jet2CSV_Data__212->GetZaxis()->SetTitleSize(0.05);
   h_jet2CSV_Data__212->GetZaxis()->SetTickLength(0.025);
   h_jet2CSV_Data__212->GetZaxis()->SetTitleFont(42);
   h_jet2CSV_Data__212->Draw("elp same");
   
   TLegend *leg = new TLegend(0.6,0.55,0.88,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("h_jet2CSV_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_jet2CSV_#gamma+jets (LF)","#gamma+jets (LF)","F");

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
   entry=leg->AddEntry("h_jet2CSV_#gamma+jets (HF)","#gamma+jets (HF)","F");

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
   entry=leg->AddEntry("h_jet2CSV_QCD","QCD","F");

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
   entry=leg->AddEntry("h_jet2CSV_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_jet2CSV_#gamma+jets (LF)","#gamma+jets (LF)","F");

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
   entry=leg->AddEntry("h_jet2CSV_#gamma+jets (HF)","#gamma+jets (HF)","F");

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
   entry=leg->AddEntry("h_jet2CSV_QCD","QCD","F");

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
   
   TH1D *ratio__213 = new TH1D("ratio__213","",10,0,1);
   ratio__213->SetBinContent(1,-0.06282324);
   ratio__213->SetBinContent(2,-0.05177128);
   ratio__213->SetBinContent(3,0.03243494);
   ratio__213->SetBinContent(4,0.1162903);
   ratio__213->SetBinContent(5,0.1814157);
   ratio__213->SetBinContent(6,0.2252177);
   ratio__213->SetBinContent(7,0.1920685);
   ratio__213->SetBinContent(8,0.2074751);
   ratio__213->SetBinContent(9,0.2524594);
   ratio__213->SetBinContent(10,0.1529961);
   ratio__213->SetBinError(1,0.0001);
   ratio__213->SetBinError(2,0.0001);
   ratio__213->SetBinError(3,0.0001);
   ratio__213->SetBinError(4,0.0001);
   ratio__213->SetBinError(5,0.0001);
   ratio__213->SetBinError(6,0.0001);
   ratio__213->SetBinError(7,0.0001);
   ratio__213->SetBinError(8,0.0001);
   ratio__213->SetBinError(9,0.0001);
   ratio__213->SetBinError(10,0.0001);
   ratio__213->SetMinimum(-0.48);
   ratio__213->SetMaximum(0.48);
   ratio__213->SetEntries(668744);
   ratio__213->SetStats(0);
   ratio__213->SetLineWidth(3);
   ratio__213->SetMarkerStyle(20);
   ratio__213->SetMarkerSize(2);
   ratio__213->GetXaxis()->SetTitle("jet 2 CSV");
   ratio__213->GetXaxis()->SetLabelFont(43);
   ratio__213->GetXaxis()->SetLabelOffset(0.007);
   ratio__213->GetXaxis()->SetLabelSize(30);
   ratio__213->GetXaxis()->SetTitleSize(40);
   ratio__213->GetXaxis()->SetTickLength(0.025);
   ratio__213->GetXaxis()->SetTitleOffset(5);
   ratio__213->GetXaxis()->SetTitleFont(43);
   ratio__213->GetYaxis()->SetTitle("#frac{Data-Exp}{Exp}");
   ratio__213->GetYaxis()->SetNdivisions(5);
   ratio__213->GetYaxis()->SetLabelFont(43);
   ratio__213->GetYaxis()->SetLabelOffset(0.007);
   ratio__213->GetYaxis()->SetLabelSize(30);
   ratio__213->GetYaxis()->SetTitleSize(40);
   ratio__213->GetYaxis()->SetTickLength(0.025);
   ratio__213->GetYaxis()->SetTitleOffset(2.5);
   ratio__213->GetYaxis()->SetTitleFont(43);
   ratio__213->GetZaxis()->SetLabelFont(42);
   ratio__213->GetZaxis()->SetLabelOffset(0.007);
   ratio__213->GetZaxis()->SetTitleSize(0.05);
   ratio__213->GetZaxis()->SetTickLength(0.025);
   ratio__213->GetZaxis()->SetTitleFont(42);
   ratio__213->Draw("elp");
   
   TH1D *zero__214 = new TH1D("zero__214","",10,0,1);
   zero__214->SetBinError(1,0.0007784854);
   zero__214->SetBinError(2,0.000596721);
   zero__214->SetBinError(3,0.0004099804);
   zero__214->SetBinError(4,0.0003131848);
   zero__214->SetBinError(5,0.0002660107);
   zero__214->SetBinError(6,0.0002424564);
   zero__214->SetBinError(7,0.0002012916);
   zero__214->SetBinError(8,0.0001838141);
   zero__214->SetBinError(9,0.0001776023);
   zero__214->SetBinError(10,0.0001779984);
   zero__214->SetEntries(668744);
   zero__214->SetStats(0);
   zero__214->SetLineWidth(3);
   zero__214->SetMarkerStyle(20);
   zero__214->SetMarkerSize(2);
   zero__214->GetXaxis()->SetTitle("jet 2 CSV");
   zero__214->GetXaxis()->SetLabelFont(42);
   zero__214->GetXaxis()->SetLabelOffset(0.007);
   zero__214->GetXaxis()->SetTitleSize(0.05);
   zero__214->GetXaxis()->SetTickLength(0.025);
   zero__214->GetXaxis()->SetTitleFont(42);
   zero__214->GetYaxis()->SetTitle("a.u.");
   zero__214->GetYaxis()->SetLabelFont(42);
   zero__214->GetYaxis()->SetLabelOffset(0.007);
   zero__214->GetYaxis()->SetTitleSize(0.05);
   zero__214->GetYaxis()->SetTickLength(0.025);
   zero__214->GetYaxis()->SetTitleFont(42);
   zero__214->GetZaxis()->SetLabelFont(42);
   zero__214->GetZaxis()->SetLabelOffset(0.007);
   zero__214->GetZaxis()->SetTitleSize(0.05);
   zero__214->GetZaxis()->SetTickLength(0.025);
   zero__214->GetZaxis()->SetTitleFont(42);
   zero__214->Draw("hist same");
   
   TH1D *sumratioup__215 = new TH1D("sumratioup__215","",10,0,1);
   sumratioup__215->SetBinContent(1,0.008645299);
   sumratioup__215->SetBinContent(2,0.007748651);
   sumratioup__215->SetBinContent(3,0.0121513);
   sumratioup__215->SetBinContent(4,0.01666049);
   sumratioup__215->SetBinContent(5,0.01961334);
   sumratioup__215->SetBinContent(6,0.02323735);
   sumratioup__215->SetBinContent(7,0.02737463);
   sumratioup__215->SetBinContent(8,0.02929497);
   sumratioup__215->SetBinContent(9,0.02536986);
   sumratioup__215->SetBinContent(10,0.02477578);
   sumratioup__215->SetBinError(1,0.003738633);
   sumratioup__215->SetBinError(2,0.001945849);
   sumratioup__215->SetBinError(3,0.001322938);
   sumratioup__215->SetBinError(4,0.0009789608);
   sumratioup__215->SetBinError(5,0.0007855984);
   sumratioup__215->SetBinError(6,0.0007455795);
   sumratioup__215->SetBinError(7,0.0006222313);
   sumratioup__215->SetBinError(8,0.0005481835);
   sumratioup__215->SetBinError(9,0.0004272724);
   sumratioup__215->SetBinError(10,0.0004552872);
   sumratioup__215->SetEntries(668764);
   sumratioup__215->SetStats(0);

   ci = 1203;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratioup__215->SetFillColor(ci);
   sumratioup__215->SetFillStyle(3003);
   sumratioup__215->GetXaxis()->SetTitle("jet 2 CSV");
   sumratioup__215->GetXaxis()->SetLabelFont(42);
   sumratioup__215->GetXaxis()->SetLabelOffset(0.007);
   sumratioup__215->GetXaxis()->SetTitleSize(0.05);
   sumratioup__215->GetXaxis()->SetTickLength(0.025);
   sumratioup__215->GetXaxis()->SetTitleFont(42);
   sumratioup__215->GetYaxis()->SetTitle("a.u.");
   sumratioup__215->GetYaxis()->SetLabelFont(42);
   sumratioup__215->GetYaxis()->SetLabelOffset(0.007);
   sumratioup__215->GetYaxis()->SetTitleSize(0.05);
   sumratioup__215->GetYaxis()->SetTickLength(0.025);
   sumratioup__215->GetYaxis()->SetTitleFont(42);
   sumratioup__215->GetZaxis()->SetLabelFont(42);
   sumratioup__215->GetZaxis()->SetLabelOffset(0.007);
   sumratioup__215->GetZaxis()->SetTitleSize(0.05);
   sumratioup__215->GetZaxis()->SetTickLength(0.025);
   sumratioup__215->GetZaxis()->SetTitleFont(42);
   sumratioup__215->Draw("hist same");
   
   TH1D *sumratiodown__216 = new TH1D("sumratiodown__216","",10,0,1);
   sumratiodown__216->SetBinContent(1,-0.008645299);
   sumratiodown__216->SetBinContent(2,-0.007748651);
   sumratiodown__216->SetBinContent(3,-0.0121513);
   sumratiodown__216->SetBinContent(4,-0.01666049);
   sumratiodown__216->SetBinContent(5,-0.01961334);
   sumratiodown__216->SetBinContent(6,-0.02323735);
   sumratiodown__216->SetBinContent(7,-0.02737463);
   sumratiodown__216->SetBinContent(8,-0.02929497);
   sumratiodown__216->SetBinContent(9,-0.02536986);
   sumratiodown__216->SetBinContent(10,-0.02477578);
   sumratiodown__216->SetBinError(1,0.003738633);
   sumratiodown__216->SetBinError(2,0.001945849);
   sumratiodown__216->SetBinError(3,0.001322938);
   sumratiodown__216->SetBinError(4,0.0009789608);
   sumratiodown__216->SetBinError(5,0.0007855984);
   sumratiodown__216->SetBinError(6,0.0007455795);
   sumratiodown__216->SetBinError(7,0.0006222313);
   sumratiodown__216->SetBinError(8,0.0005481835);
   sumratiodown__216->SetBinError(9,0.0004272724);
   sumratiodown__216->SetBinError(10,0.0004552872);
   sumratiodown__216->SetEntries(668764);
   sumratiodown__216->SetStats(0);

   ci = 1203;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratiodown__216->SetFillColor(ci);
   sumratiodown__216->SetFillStyle(3003);
   sumratiodown__216->GetXaxis()->SetTitle("jet 2 CSV");
   sumratiodown__216->GetXaxis()->SetLabelFont(42);
   sumratiodown__216->GetXaxis()->SetLabelOffset(0.007);
   sumratiodown__216->GetXaxis()->SetTitleSize(0.05);
   sumratiodown__216->GetXaxis()->SetTickLength(0.025);
   sumratiodown__216->GetXaxis()->SetTitleFont(42);
   sumratiodown__216->GetYaxis()->SetTitle("a.u.");
   sumratiodown__216->GetYaxis()->SetLabelFont(42);
   sumratiodown__216->GetYaxis()->SetLabelOffset(0.007);
   sumratiodown__216->GetYaxis()->SetTitleSize(0.05);
   sumratiodown__216->GetYaxis()->SetTickLength(0.025);
   sumratiodown__216->GetYaxis()->SetTitleFont(42);
   sumratiodown__216->GetZaxis()->SetLabelFont(42);
   sumratiodown__216->GetZaxis()->SetLabelOffset(0.007);
   sumratiodown__216->GetZaxis()->SetTitleSize(0.05);
   sumratiodown__216->GetZaxis()->SetTickLength(0.025);
   sumratiodown__216->GetZaxis()->SetTitleFont(42);
   sumratiodown__216->Draw("hist same");
   
   Double_t Graph0_fx1024[10] = {
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
   Double_t Graph0_fy1024[10] = {
   -0.06282324,
   -0.05177128,
   0.03243494,
   0.1162903,
   0.1814157,
   0.2252177,
   0.1920685,
   0.2074751,
   0.2524594,
   0.1529961};
   Double_t Graph0_fex1024[10] = {
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
   Double_t Graph0_fey1024[10] = {
   0.001800187,
   0.00237623,
   0.003765704,
   0.005329949,
   0.006641255,
   0.007556596,
   0.008855684,
   0.00982304,
   0.01054537,
   0.009686307};
   TGraphErrors *gre = new TGraphErrors(10,Graph0_fx1024,Graph0_fy1024,Graph0_fex1024,Graph0_fey1024);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1024 = new TH1F("Graph_Graph1024","Graph",100,0,1.04);
   Graph_Graph1024->SetMinimum(-0.09738624);
   Graph_Graph1024->SetMaximum(0.2957676);
   Graph_Graph1024->SetDirectory(0);
   Graph_Graph1024->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1024->SetLineColor(ci);
   Graph_Graph1024->GetXaxis()->SetLabelFont(42);
   Graph_Graph1024->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1024->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1024->GetXaxis()->SetTickLength(0.025);
   Graph_Graph1024->GetXaxis()->SetTitleFont(42);
   Graph_Graph1024->GetYaxis()->SetLabelFont(42);
   Graph_Graph1024->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1024->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1024->GetYaxis()->SetTickLength(0.025);
   Graph_Graph1024->GetYaxis()->SetTitleFont(42);
   Graph_Graph1024->GetZaxis()->SetLabelFont(42);
   Graph_Graph1024->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1024->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph1024->GetZaxis()->SetTickLength(0.025);
   Graph_Graph1024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1024);
   
   gre->Draw("pe0");
   pad2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
