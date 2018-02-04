void photon_pfUAmag_logy()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sun Dec 11 15:15:11 2016) by ROOT version6.06/01
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
   pad1->Range(109.375,-5.231102,1046.875,2.853822);
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
   h->SetMinimum(2.504029e-05);
   h->SetMaximum(84.1685);
   Double_t xAxis11[8] = {250, 280, 310, 350, 400, 450, 600, 1000}; 
   
   TH1F *h_stack_10 = new TH1F("h_stack_10","",7, xAxis11);
   h_stack_10->SetMinimum(5.873514e-06);
   h_stack_10->SetMaximum(194.0338);
   h_stack_10->SetDirectory(0);
   h_stack_10->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h_stack_10->SetLineColor(ci);
   h_stack_10->GetXaxis()->SetLabelFont(42);
   h_stack_10->GetXaxis()->SetLabelOffset(0.007);
   h_stack_10->GetXaxis()->SetTitleSize(0.05);
   h_stack_10->GetXaxis()->SetTickLength(0.025);
   h_stack_10->GetXaxis()->SetTitleFont(42);
   h_stack_10->GetYaxis()->SetTitle("a.u./GeV");
   h_stack_10->GetYaxis()->SetLabelFont(42);
   h_stack_10->GetYaxis()->SetLabelOffset(0.007);
   h_stack_10->GetYaxis()->SetTitleSize(0.05);
   h_stack_10->GetYaxis()->SetTickLength(0.025);
   h_stack_10->GetYaxis()->SetTitleOffset(1.5);
   h_stack_10->GetYaxis()->SetTitleFont(42);
   h_stack_10->GetZaxis()->SetLabelFont(42);
   h_stack_10->GetZaxis()->SetLabelOffset(0.007);
   h_stack_10->GetZaxis()->SetTitleSize(0.05);
   h_stack_10->GetZaxis()->SetTickLength(0.025);
   h_stack_10->GetZaxis()->SetTitleFont(42);
   h->SetHistogram(h_stack_10);
   
   Double_t xAxis12[8] = {250, 280, 310, 350, 400, 450, 600, 1000}; 
   
   TH1D *h_pfUAmag_QCD__82 = new TH1D("h_pfUAmag_QCD__82","",7, xAxis12);
   h_pfUAmag_QCD__82->SetBinContent(1,0.02952033);
   h_pfUAmag_QCD__82->SetBinContent(2,0.002404073);
   h_pfUAmag_QCD__82->SetBinContent(3,0.001215671);
   h_pfUAmag_QCD__82->SetBinContent(4,0.0005512252);
   h_pfUAmag_QCD__82->SetBinContent(5,0.0002529067);
   h_pfUAmag_QCD__82->SetBinContent(6,8.529051e-05);
   h_pfUAmag_QCD__82->SetBinContent(7,1.037083e-05);
   h_pfUAmag_QCD__82->SetBinError(1,4.073439e-05);
   h_pfUAmag_QCD__82->SetBinError(2,1.077932e-05);
   h_pfUAmag_QCD__82->SetBinError(3,6.384936e-06);
   h_pfUAmag_QCD__82->SetBinError(4,3.637444e-06);
   h_pfUAmag_QCD__82->SetBinError(5,2.302864e-06);
   h_pfUAmag_QCD__82->SetBinError(6,7.541221e-07);
   h_pfUAmag_QCD__82->SetBinError(7,1.59998e-07);
   h_pfUAmag_QCD__82->SetEntries(668741);
   h_pfUAmag_QCD__82->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_pfUAmag_QCD__82->SetFillColor(ci);
   h_pfUAmag_QCD__82->GetXaxis()->SetTitle("U(#gamma) [GeV]");
   h_pfUAmag_QCD__82->GetXaxis()->SetLabelFont(42);
   h_pfUAmag_QCD__82->GetXaxis()->SetLabelOffset(0.007);
   h_pfUAmag_QCD__82->GetXaxis()->SetTitleSize(0.05);
   h_pfUAmag_QCD__82->GetXaxis()->SetTickLength(0.025);
   h_pfUAmag_QCD__82->GetXaxis()->SetTitleFont(42);
   h_pfUAmag_QCD__82->GetYaxis()->SetTitle("a.u./GeV");
   h_pfUAmag_QCD__82->GetYaxis()->SetLabelFont(42);
   h_pfUAmag_QCD__82->GetYaxis()->SetLabelOffset(0.007);
   h_pfUAmag_QCD__82->GetYaxis()->SetTitleSize(0.05);
   h_pfUAmag_QCD__82->GetYaxis()->SetTickLength(0.025);
   h_pfUAmag_QCD__82->GetYaxis()->SetTitleFont(42);
   h_pfUAmag_QCD__82->GetZaxis()->SetLabelFont(42);
   h_pfUAmag_QCD__82->GetZaxis()->SetLabelOffset(0.007);
   h_pfUAmag_QCD__82->GetZaxis()->SetTitleSize(0.05);
   h_pfUAmag_QCD__82->GetZaxis()->SetTickLength(0.025);
   h_pfUAmag_QCD__82->GetZaxis()->SetTitleFont(42);
   h->Add(h_pfUAmag_QCD,"");
   Double_t xAxis13[8] = {250, 280, 310, 350, 400, 450, 600, 1000}; 
   
   TH1D *h_pfUAmag_#gammapLjetssPoPHFcP__83 = new TH1D("h_pfUAmag_#gammapLjetssPoPHFcP__83","",7, xAxis13);
   h_pfUAmag_#gammapLjetssPoPHFcP__83->SetBinContent(1,0.1112744);
   h_pfUAmag_#gammapLjetssPoPHFcP__83->SetBinContent(2,0.008739087);
   h_pfUAmag_#gammapLjetssPoPHFcP__83->SetBinContent(3,0.004568175);
   h_pfUAmag_#gammapLjetssPoPHFcP__83->SetBinContent(4,0.002207862);
   h_pfUAmag_#gammapLjetssPoPHFcP__83->SetBinContent(5,0.001303704);
   h_pfUAmag_#gammapLjetssPoPHFcP__83->SetBinContent(6,0.0004078273);
   h_pfUAmag_#gammapLjetssPoPHFcP__83->SetBinContent(7,4.748471e-05);
   h_pfUAmag_#gammapLjetssPoPHFcP__83->SetBinError(1,0.001805354);
   h_pfUAmag_#gammapLjetssPoPHFcP__83->SetBinError(2,0.0003113755);
   h_pfUAmag_#gammapLjetssPoPHFcP__83->SetBinError(3,0.0001763333);
   h_pfUAmag_#gammapLjetssPoPHFcP__83->SetBinError(4,9.745635e-05);
   h_pfUAmag_#gammapLjetssPoPHFcP__83->SetBinError(5,6.97983e-05);
   h_pfUAmag_#gammapLjetssPoPHFcP__83->SetBinError(6,1.813926e-05);
   h_pfUAmag_#gammapLjetssPoPHFcP__83->SetBinError(7,2.833493e-06);
   h_pfUAmag_#gammapLjetssPoPHFcP__83->SetEntries(14158);
   h_pfUAmag_#gammapLjetssPoPHFcP__83->SetStats(0);

   ci = TColor::GetColor("#ff6633");
   h_pfUAmag_#gammapLjetssPoPHFcP__83->SetFillColor(ci);
   h_pfUAmag_#gammapLjetssPoPHFcP__83->GetXaxis()->SetTitle("U(#gamma) [GeV]");
   h_pfUAmag_#gammapLjetssPoPHFcP__83->GetXaxis()->SetLabelFont(42);
   h_pfUAmag_#gammapLjetssPoPHFcP__83->GetXaxis()->SetLabelOffset(0.007);
   h_pfUAmag_#gammapLjetssPoPHFcP__83->GetXaxis()->SetTitleSize(0.05);
   h_pfUAmag_#gammapLjetssPoPHFcP__83->GetXaxis()->SetTickLength(0.025);
   h_pfUAmag_#gammapLjetssPoPHFcP__83->GetXaxis()->SetTitleFont(42);
   h_pfUAmag_#gammapLjetssPoPHFcP__83->GetYaxis()->SetTitle("a.u./GeV");
   h_pfUAmag_#gammapLjetssPoPHFcP__83->GetYaxis()->SetLabelFont(42);
   h_pfUAmag_#gammapLjetssPoPHFcP__83->GetYaxis()->SetLabelOffset(0.007);
   h_pfUAmag_#gammapLjetssPoPHFcP__83->GetYaxis()->SetTitleSize(0.05);
   h_pfUAmag_#gammapLjetssPoPHFcP__83->GetYaxis()->SetTickLength(0.025);
   h_pfUAmag_#gammapLjetssPoPHFcP__83->GetYaxis()->SetTitleFont(42);
   h_pfUAmag_#gammapLjetssPoPHFcP__83->GetZaxis()->SetLabelFont(42);
   h_pfUAmag_#gammapLjetssPoPHFcP__83->GetZaxis()->SetLabelOffset(0.007);
   h_pfUAmag_#gammapLjetssPoPHFcP__83->GetZaxis()->SetTitleSize(0.05);
   h_pfUAmag_#gammapLjetssPoPHFcP__83->GetZaxis()->SetTickLength(0.025);
   h_pfUAmag_#gammapLjetssPoPHFcP__83->GetZaxis()->SetTitleFont(42);
   h->Add(h_pfUAmag_#gamma+jets (HF),"");
   Double_t xAxis14[8] = {250, 280, 310, 350, 400, 450, 600, 1000}; 
   
   TH1D *h_pfUAmag_#gammapLjetssPoPLFcP__84 = new TH1D("h_pfUAmag_#gammapLjetssPoPLFcP__84","",7, xAxis14);
   h_pfUAmag_#gammapLjetssPoPLFcP__84->SetBinContent(1,0.7008903);
   h_pfUAmag_#gammapLjetssPoPLFcP__84->SetBinContent(2,0.06502364);
   h_pfUAmag_#gammapLjetssPoPLFcP__84->SetBinContent(3,0.03739335);
   h_pfUAmag_#gammapLjetssPoPLFcP__84->SetBinContent(4,0.01942724);
   h_pfUAmag_#gammapLjetssPoPLFcP__84->SetBinContent(5,0.01051361);
   h_pfUAmag_#gammapLjetssPoPLFcP__84->SetBinContent(6,0.003686934);
   h_pfUAmag_#gammapLjetssPoPLFcP__84->SetBinContent(7,0.0004765743);
   h_pfUAmag_#gammapLjetssPoPLFcP__84->SetBinError(1,0.004518688);
   h_pfUAmag_#gammapLjetssPoPLFcP__84->SetBinError(2,0.0008630158);
   h_pfUAmag_#gammapLjetssPoPLFcP__84->SetBinError(3,0.0005221123);
   h_pfUAmag_#gammapLjetssPoPLFcP__84->SetBinError(4,0.0002995768);
   h_pfUAmag_#gammapLjetssPoPLFcP__84->SetBinError(5,0.0001954335);
   h_pfUAmag_#gammapLjetssPoPLFcP__84->SetBinError(6,5.536057e-05);
   h_pfUAmag_#gammapLjetssPoPLFcP__84->SetBinError(7,9.017438e-06);
   h_pfUAmag_#gammapLjetssPoPLFcP__84->SetEntries(99288);
   h_pfUAmag_#gammapLjetssPoPLFcP__84->SetStats(0);

   ci = TColor::GetColor("#339999");
   h_pfUAmag_#gammapLjetssPoPLFcP__84->SetFillColor(ci);
   h_pfUAmag_#gammapLjetssPoPLFcP__84->GetXaxis()->SetTitle("U(#gamma) [GeV]");
   h_pfUAmag_#gammapLjetssPoPLFcP__84->GetXaxis()->SetLabelFont(42);
   h_pfUAmag_#gammapLjetssPoPLFcP__84->GetXaxis()->SetLabelOffset(0.007);
   h_pfUAmag_#gammapLjetssPoPLFcP__84->GetXaxis()->SetTitleSize(0.05);
   h_pfUAmag_#gammapLjetssPoPLFcP__84->GetXaxis()->SetTickLength(0.025);
   h_pfUAmag_#gammapLjetssPoPLFcP__84->GetXaxis()->SetTitleFont(42);
   h_pfUAmag_#gammapLjetssPoPLFcP__84->GetYaxis()->SetTitle("a.u./GeV");
   h_pfUAmag_#gammapLjetssPoPLFcP__84->GetYaxis()->SetLabelFont(42);
   h_pfUAmag_#gammapLjetssPoPLFcP__84->GetYaxis()->SetLabelOffset(0.007);
   h_pfUAmag_#gammapLjetssPoPLFcP__84->GetYaxis()->SetTitleSize(0.05);
   h_pfUAmag_#gammapLjetssPoPLFcP__84->GetYaxis()->SetTickLength(0.025);
   h_pfUAmag_#gammapLjetssPoPLFcP__84->GetYaxis()->SetTitleFont(42);
   h_pfUAmag_#gammapLjetssPoPLFcP__84->GetZaxis()->SetLabelFont(42);
   h_pfUAmag_#gammapLjetssPoPLFcP__84->GetZaxis()->SetLabelOffset(0.007);
   h_pfUAmag_#gammapLjetssPoPLFcP__84->GetZaxis()->SetTitleSize(0.05);
   h_pfUAmag_#gammapLjetssPoPLFcP__84->GetZaxis()->SetTickLength(0.025);
   h_pfUAmag_#gammapLjetssPoPLFcP__84->GetZaxis()->SetTitleFont(42);
   h->Add(h_pfUAmag_#gamma+jets (LF),"");
   h->Draw("hist");
   Double_t xAxis15[8] = {250, 280, 310, 350, 400, 450, 600, 1000}; 
   
   TH1D *hsum__85 = new TH1D("hsum__85","",7, xAxis15);
   hsum__85->SetBinContent(1,0.8416849);
   hsum__85->SetBinContent(2,0.07616679);
   hsum__85->SetBinContent(3,0.04317719);
   hsum__85->SetBinContent(4,0.02218633);
   hsum__85->SetBinContent(5,0.01207022);
   hsum__85->SetBinContent(6,0.004180052);
   hsum__85->SetBinContent(7,0.0005344299);
   hsum__85->SetBinError(1,0.004866159);
   hsum__85->SetBinError(2,0.0009175332);
   hsum__85->SetBinError(3,0.000551122);
   hsum__85->SetBinError(4,0.0003150511);
   hsum__85->SetBinError(5,0.0002075364);
   hsum__85->SetBinError(6,5.826143e-05);
   hsum__85->SetBinError(7,9.45349e-06);
   hsum__85->SetEntries(668755);
   hsum__85->SetStats(0);

   ci = 1189;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   hsum__85->SetFillColor(ci);
   hsum__85->SetFillStyle(3003);
   hsum__85->SetLineWidth(0);
   hsum__85->GetXaxis()->SetTitle("U(#gamma) [GeV]");
   hsum__85->GetXaxis()->SetLabelFont(42);
   hsum__85->GetXaxis()->SetLabelOffset(0.007);
   hsum__85->GetXaxis()->SetTitleSize(0.05);
   hsum__85->GetXaxis()->SetTickLength(0.025);
   hsum__85->GetXaxis()->SetTitleFont(42);
   hsum__85->GetYaxis()->SetTitle("a.u./GeV");
   hsum__85->GetYaxis()->SetLabelFont(42);
   hsum__85->GetYaxis()->SetLabelOffset(0.007);
   hsum__85->GetYaxis()->SetTitleSize(0.05);
   hsum__85->GetYaxis()->SetTickLength(0.025);
   hsum__85->GetYaxis()->SetTitleFont(42);
   hsum__85->GetZaxis()->SetLabelFont(42);
   hsum__85->GetZaxis()->SetLabelOffset(0.007);
   hsum__85->GetZaxis()->SetTitleSize(0.05);
   hsum__85->GetZaxis()->SetTickLength(0.025);
   hsum__85->GetZaxis()->SetTitleFont(42);
   hsum__85->Draw("e2 same");
   Double_t xAxis16[8] = {250, 280, 310, 350, 400, 450, 600, 1000}; 
   
   TH1D *h_pfUAmag_Data__86 = new TH1D("h_pfUAmag_Data__86","",7, xAxis16);
   h_pfUAmag_Data__86->SetBinContent(1,0.8383636);
   h_pfUAmag_Data__86->SetBinContent(2,0.07951887);
   h_pfUAmag_Data__86->SetBinContent(3,0.04357034);
   h_pfUAmag_Data__86->SetBinContent(4,0.02232068);
   h_pfUAmag_Data__86->SetBinContent(5,0.01164665);
   h_pfUAmag_Data__86->SetBinContent(6,0.00407902);
   h_pfUAmag_Data__86->SetBinContent(7,0.0005008058);
   h_pfUAmag_Data__86->SetBinError(1,0.001152585);
   h_pfUAmag_Data__86->SetBinError(2,0.0003549702);
   h_pfUAmag_Data__86->SetBinError(3,0.0002275532);
   h_pfUAmag_Data__86->SetBinError(4,0.0001456754);
   h_pfUAmag_Data__86->SetBinError(5,0.0001052284);
   h_pfUAmag_Data__86->SetBinError(6,3.595421e-05);
   h_pfUAmag_Data__86->SetBinError(7,7.714754e-06);
   h_pfUAmag_Data__86->SetEntries(668741);
   h_pfUAmag_Data__86->SetStats(0);
   h_pfUAmag_Data__86->SetLineWidth(3);
   h_pfUAmag_Data__86->SetMarkerStyle(20);
   h_pfUAmag_Data__86->SetMarkerSize(2);
   h_pfUAmag_Data__86->GetXaxis()->SetTitle("U(#gamma) [GeV]");
   h_pfUAmag_Data__86->GetXaxis()->SetLabelFont(42);
   h_pfUAmag_Data__86->GetXaxis()->SetLabelOffset(0.007);
   h_pfUAmag_Data__86->GetXaxis()->SetTitleSize(0.05);
   h_pfUAmag_Data__86->GetXaxis()->SetTickLength(0.025);
   h_pfUAmag_Data__86->GetXaxis()->SetTitleFont(42);
   h_pfUAmag_Data__86->GetYaxis()->SetTitle("a.u./GeV");
   h_pfUAmag_Data__86->GetYaxis()->SetLabelFont(42);
   h_pfUAmag_Data__86->GetYaxis()->SetLabelOffset(0.007);
   h_pfUAmag_Data__86->GetYaxis()->SetTitleSize(0.05);
   h_pfUAmag_Data__86->GetYaxis()->SetTickLength(0.025);
   h_pfUAmag_Data__86->GetYaxis()->SetTitleFont(42);
   h_pfUAmag_Data__86->GetZaxis()->SetLabelFont(42);
   h_pfUAmag_Data__86->GetZaxis()->SetLabelOffset(0.007);
   h_pfUAmag_Data__86->GetZaxis()->SetTitleSize(0.05);
   h_pfUAmag_Data__86->GetZaxis()->SetTickLength(0.025);
   h_pfUAmag_Data__86->GetZaxis()->SetTitleFont(42);
   h_pfUAmag_Data__86->Draw("elp same");
   
   TLegend *leg = new TLegend(0.6,0.55,0.88,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("h_pfUAmag_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_pfUAmag_#gamma+jets (LF)","#gamma+jets (LF)","F");

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
   entry=leg->AddEntry("h_pfUAmag_#gamma+jets (HF)","#gamma+jets (HF)","F");

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
   entry=leg->AddEntry("h_pfUAmag_QCD","QCD","F");

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
   entry=leg->AddEntry("h_pfUAmag_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_pfUAmag_#gamma+jets (LF)","#gamma+jets (LF)","F");

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
   entry=leg->AddEntry("h_pfUAmag_#gamma+jets (HF)","#gamma+jets (HF)","F");

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
   entry=leg->AddEntry("h_pfUAmag_QCD","QCD","F");

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
   pad2->Range(109.375,-0.8914286,1046.875,0.48);
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
   Double_t xAxis17[8] = {250, 280, 310, 350, 400, 450, 600, 1000}; 
   
   TH1D *ratio__87 = new TH1D("ratio__87","",7, xAxis17);
   ratio__87->SetBinContent(1,-0.003946006);
   ratio__87->SetBinContent(2,0.04400969);
   ratio__87->SetBinContent(3,0.009105325);
   ratio__87->SetBinContent(4,0.006055474);
   ratio__87->SetBinContent(5,-0.03509253);
   ratio__87->SetBinContent(6,-0.0241701);
   ratio__87->SetBinContent(7,-0.06291574);
   ratio__87->SetBinError(1,0.0001);
   ratio__87->SetBinError(2,0.0001);
   ratio__87->SetBinError(3,0.0001);
   ratio__87->SetBinError(4,0.0001);
   ratio__87->SetBinError(5,0.0001);
   ratio__87->SetBinError(6,0.0001);
   ratio__87->SetBinError(7,0.0001);
   ratio__87->SetMinimum(-0.48);
   ratio__87->SetMaximum(0.48);
   ratio__87->SetEntries(668748);
   ratio__87->SetStats(0);
   ratio__87->SetLineWidth(3);
   ratio__87->SetMarkerStyle(20);
   ratio__87->SetMarkerSize(2);
   ratio__87->GetXaxis()->SetTitle("U(#gamma) [GeV]");
   ratio__87->GetXaxis()->SetLabelFont(43);
   ratio__87->GetXaxis()->SetLabelOffset(0.007);
   ratio__87->GetXaxis()->SetLabelSize(30);
   ratio__87->GetXaxis()->SetTitleSize(40);
   ratio__87->GetXaxis()->SetTickLength(0.025);
   ratio__87->GetXaxis()->SetTitleOffset(5);
   ratio__87->GetXaxis()->SetTitleFont(43);
   ratio__87->GetYaxis()->SetTitle("#frac{Data-Exp}{Exp}");
   ratio__87->GetYaxis()->SetNdivisions(5);
   ratio__87->GetYaxis()->SetLabelFont(43);
   ratio__87->GetYaxis()->SetLabelOffset(0.007);
   ratio__87->GetYaxis()->SetLabelSize(30);
   ratio__87->GetYaxis()->SetTitleSize(40);
   ratio__87->GetYaxis()->SetTickLength(0.025);
   ratio__87->GetYaxis()->SetTitleOffset(2.5);
   ratio__87->GetYaxis()->SetTitleFont(43);
   ratio__87->GetZaxis()->SetLabelFont(42);
   ratio__87->GetZaxis()->SetLabelOffset(0.007);
   ratio__87->GetZaxis()->SetTitleSize(0.05);
   ratio__87->GetZaxis()->SetTickLength(0.025);
   ratio__87->GetZaxis()->SetTitleFont(42);
   ratio__87->Draw("elp");
   Double_t xAxis18[8] = {250, 280, 310, 350, 400, 450, 600, 1000}; 
   
   TH1D *zero__88 = new TH1D("zero__88","",7, xAxis18);
   zero__88->SetBinError(1,0.001152585);
   zero__88->SetBinError(2,0.0003549702);
   zero__88->SetBinError(3,0.0002275532);
   zero__88->SetBinError(4,0.0001456754);
   zero__88->SetBinError(5,0.0001052284);
   zero__88->SetBinError(6,3.595421e-05);
   zero__88->SetBinError(7,7.714754e-06);
   zero__88->SetEntries(668748);
   zero__88->SetStats(0);
   zero__88->SetLineWidth(3);
   zero__88->SetMarkerStyle(20);
   zero__88->SetMarkerSize(2);
   zero__88->GetXaxis()->SetTitle("U(#gamma) [GeV]");
   zero__88->GetXaxis()->SetLabelFont(42);
   zero__88->GetXaxis()->SetLabelOffset(0.007);
   zero__88->GetXaxis()->SetTitleSize(0.05);
   zero__88->GetXaxis()->SetTickLength(0.025);
   zero__88->GetXaxis()->SetTitleFont(42);
   zero__88->GetYaxis()->SetTitle("a.u./GeV");
   zero__88->GetYaxis()->SetLabelFont(42);
   zero__88->GetYaxis()->SetLabelOffset(0.007);
   zero__88->GetYaxis()->SetTitleSize(0.05);
   zero__88->GetYaxis()->SetTickLength(0.025);
   zero__88->GetYaxis()->SetTitleFont(42);
   zero__88->GetZaxis()->SetLabelFont(42);
   zero__88->GetZaxis()->SetLabelOffset(0.007);
   zero__88->GetZaxis()->SetTitleSize(0.05);
   zero__88->GetZaxis()->SetTickLength(0.025);
   zero__88->GetZaxis()->SetTitleFont(42);
   zero__88->Draw("hist same");
   Double_t xAxis19[8] = {250, 280, 310, 350, 400, 450, 600, 1000}; 
   
   TH1D *sumratioup__89 = new TH1D("sumratioup__89","",7, xAxis19);
   sumratioup__89->SetBinContent(1,0.00578145);
   sumratioup__89->SetBinContent(2,0.01204637);
   sumratioup__89->SetBinContent(3,0.01276419);
   sumratioup__89->SetBinContent(4,0.01420024);
   sumratioup__89->SetBinContent(5,0.01719408);
   sumratioup__89->SetBinContent(6,0.01393797);
   sumratioup__89->SetBinContent(7,0.01768893);
   sumratioup__89->SetBinError(1,0.004866159);
   sumratioup__89->SetBinError(2,0.0009175332);
   sumratioup__89->SetBinError(3,0.000551122);
   sumratioup__89->SetBinError(4,0.0003150511);
   sumratioup__89->SetBinError(5,0.0002075364);
   sumratioup__89->SetBinError(6,5.826143e-05);
   sumratioup__89->SetBinError(7,9.45349e-06);
   sumratioup__89->SetEntries(668762);
   sumratioup__89->SetStats(0);

   ci = 1189;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratioup__89->SetFillColor(ci);
   sumratioup__89->SetFillStyle(3003);
   sumratioup__89->GetXaxis()->SetTitle("U(#gamma) [GeV]");
   sumratioup__89->GetXaxis()->SetLabelFont(42);
   sumratioup__89->GetXaxis()->SetLabelOffset(0.007);
   sumratioup__89->GetXaxis()->SetTitleSize(0.05);
   sumratioup__89->GetXaxis()->SetTickLength(0.025);
   sumratioup__89->GetXaxis()->SetTitleFont(42);
   sumratioup__89->GetYaxis()->SetTitle("a.u./GeV");
   sumratioup__89->GetYaxis()->SetLabelFont(42);
   sumratioup__89->GetYaxis()->SetLabelOffset(0.007);
   sumratioup__89->GetYaxis()->SetTitleSize(0.05);
   sumratioup__89->GetYaxis()->SetTickLength(0.025);
   sumratioup__89->GetYaxis()->SetTitleFont(42);
   sumratioup__89->GetZaxis()->SetLabelFont(42);
   sumratioup__89->GetZaxis()->SetLabelOffset(0.007);
   sumratioup__89->GetZaxis()->SetTitleSize(0.05);
   sumratioup__89->GetZaxis()->SetTickLength(0.025);
   sumratioup__89->GetZaxis()->SetTitleFont(42);
   sumratioup__89->Draw("hist same");
   Double_t xAxis20[8] = {250, 280, 310, 350, 400, 450, 600, 1000}; 
   
   TH1D *sumratiodown__90 = new TH1D("sumratiodown__90","",7, xAxis20);
   sumratiodown__90->SetBinContent(1,-0.00578145);
   sumratiodown__90->SetBinContent(2,-0.01204637);
   sumratiodown__90->SetBinContent(3,-0.01276419);
   sumratiodown__90->SetBinContent(4,-0.01420024);
   sumratiodown__90->SetBinContent(5,-0.01719408);
   sumratiodown__90->SetBinContent(6,-0.01393797);
   sumratiodown__90->SetBinContent(7,-0.01768893);
   sumratiodown__90->SetBinError(1,0.004866159);
   sumratiodown__90->SetBinError(2,0.0009175332);
   sumratiodown__90->SetBinError(3,0.000551122);
   sumratiodown__90->SetBinError(4,0.0003150511);
   sumratiodown__90->SetBinError(5,0.0002075364);
   sumratiodown__90->SetBinError(6,5.826143e-05);
   sumratiodown__90->SetBinError(7,9.45349e-06);
   sumratiodown__90->SetEntries(668762);
   sumratiodown__90->SetStats(0);

   ci = 1189;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratiodown__90->SetFillColor(ci);
   sumratiodown__90->SetFillStyle(3003);
   sumratiodown__90->GetXaxis()->SetTitle("U(#gamma) [GeV]");
   sumratiodown__90->GetXaxis()->SetLabelFont(42);
   sumratiodown__90->GetXaxis()->SetLabelOffset(0.007);
   sumratiodown__90->GetXaxis()->SetTitleSize(0.05);
   sumratiodown__90->GetXaxis()->SetTickLength(0.025);
   sumratiodown__90->GetXaxis()->SetTitleFont(42);
   sumratiodown__90->GetYaxis()->SetTitle("a.u./GeV");
   sumratiodown__90->GetYaxis()->SetLabelFont(42);
   sumratiodown__90->GetYaxis()->SetLabelOffset(0.007);
   sumratiodown__90->GetYaxis()->SetTitleSize(0.05);
   sumratiodown__90->GetYaxis()->SetTickLength(0.025);
   sumratiodown__90->GetYaxis()->SetTitleFont(42);
   sumratiodown__90->GetZaxis()->SetLabelFont(42);
   sumratiodown__90->GetZaxis()->SetLabelOffset(0.007);
   sumratiodown__90->GetZaxis()->SetTitleSize(0.05);
   sumratiodown__90->GetZaxis()->SetTickLength(0.025);
   sumratiodown__90->GetZaxis()->SetTitleFont(42);
   sumratiodown__90->Draw("hist same");
   
   Double_t Graph0_fx1010[7] = {
   265,
   295,
   330,
   375,
   425,
   525,
   800};
   Double_t Graph0_fy1010[7] = {
   -0.003946006,
   0.04400969,
   0.009105325,
   0.006055474,
   -0.03509253,
   -0.0241701,
   -0.06291574};
   Double_t Graph0_fex1010[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1010[7] = {
   0.001369378,
   0.004660432,
   0.005270217,
   0.006565996,
   0.008718016,
   0.008601378,
   0.01443549};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1010,Graph0_fy1010,Graph0_fex1010,Graph0_fey1010);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1010 = new TH1F("Graph_Graph1010","Graph",100,211.5,853.5);
   Graph_Graph1010->SetMinimum(-0.08995336);
   Graph_Graph1010->SetMaximum(0.06127225);
   Graph_Graph1010->SetDirectory(0);
   Graph_Graph1010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1010->SetLineColor(ci);
   Graph_Graph1010->GetXaxis()->SetLabelFont(42);
   Graph_Graph1010->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1010->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1010->GetXaxis()->SetTickLength(0.025);
   Graph_Graph1010->GetXaxis()->SetTitleFont(42);
   Graph_Graph1010->GetYaxis()->SetLabelFont(42);
   Graph_Graph1010->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1010->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1010->GetYaxis()->SetTickLength(0.025);
   Graph_Graph1010->GetYaxis()->SetTitleFont(42);
   Graph_Graph1010->GetZaxis()->SetLabelFont(42);
   Graph_Graph1010->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1010->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph1010->GetZaxis()->SetTickLength(0.025);
   Graph_Graph1010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1010);
   
   gre->Draw("pe0");
   pad2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
