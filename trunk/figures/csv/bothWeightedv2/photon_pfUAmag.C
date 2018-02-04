void photon_pfUAmag()
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
   pad1->Range(109.375,0,1046.875,1.900579);
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
   h->SetMaximum(1.68337);
   Double_t xAxis1[8] = {250, 280, 310, 350, 400, 450, 600, 1000}; 
   
   TH1F *h_stack_9 = new TH1F("h_stack_9","",7, xAxis1);
   h_stack_9->SetMinimum(0);
   h_stack_9->SetMaximum(1.767538);
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
   h_stack_9->GetYaxis()->SetTitle("a.u./GeV");
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
   
   Double_t xAxis2[8] = {250, 280, 310, 350, 400, 450, 600, 1000}; 
   
   TH1D *h_pfUAmag_QCD__73 = new TH1D("h_pfUAmag_QCD__73","",7, xAxis2);
   h_pfUAmag_QCD__73->SetBinContent(1,0.02952033);
   h_pfUAmag_QCD__73->SetBinContent(2,0.002404073);
   h_pfUAmag_QCD__73->SetBinContent(3,0.001215671);
   h_pfUAmag_QCD__73->SetBinContent(4,0.0005512252);
   h_pfUAmag_QCD__73->SetBinContent(5,0.0002529067);
   h_pfUAmag_QCD__73->SetBinContent(6,8.529051e-05);
   h_pfUAmag_QCD__73->SetBinContent(7,1.037083e-05);
   h_pfUAmag_QCD__73->SetBinError(1,4.073439e-05);
   h_pfUAmag_QCD__73->SetBinError(2,1.077932e-05);
   h_pfUAmag_QCD__73->SetBinError(3,6.384936e-06);
   h_pfUAmag_QCD__73->SetBinError(4,3.637444e-06);
   h_pfUAmag_QCD__73->SetBinError(5,2.302864e-06);
   h_pfUAmag_QCD__73->SetBinError(6,7.541221e-07);
   h_pfUAmag_QCD__73->SetBinError(7,1.59998e-07);
   h_pfUAmag_QCD__73->SetEntries(668741);
   h_pfUAmag_QCD__73->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_pfUAmag_QCD__73->SetFillColor(ci);
   h_pfUAmag_QCD__73->GetXaxis()->SetTitle("U(#gamma) [GeV]");
   h_pfUAmag_QCD__73->GetXaxis()->SetLabelFont(42);
   h_pfUAmag_QCD__73->GetXaxis()->SetLabelOffset(0.007);
   h_pfUAmag_QCD__73->GetXaxis()->SetTitleSize(0.05);
   h_pfUAmag_QCD__73->GetXaxis()->SetTickLength(0.025);
   h_pfUAmag_QCD__73->GetXaxis()->SetTitleFont(42);
   h_pfUAmag_QCD__73->GetYaxis()->SetTitle("a.u./GeV");
   h_pfUAmag_QCD__73->GetYaxis()->SetLabelFont(42);
   h_pfUAmag_QCD__73->GetYaxis()->SetLabelOffset(0.007);
   h_pfUAmag_QCD__73->GetYaxis()->SetTitleSize(0.05);
   h_pfUAmag_QCD__73->GetYaxis()->SetTickLength(0.025);
   h_pfUAmag_QCD__73->GetYaxis()->SetTitleFont(42);
   h_pfUAmag_QCD__73->GetZaxis()->SetLabelFont(42);
   h_pfUAmag_QCD__73->GetZaxis()->SetLabelOffset(0.007);
   h_pfUAmag_QCD__73->GetZaxis()->SetTitleSize(0.05);
   h_pfUAmag_QCD__73->GetZaxis()->SetTickLength(0.025);
   h_pfUAmag_QCD__73->GetZaxis()->SetTitleFont(42);
   h->Add(h_pfUAmag_QCD,"");
   Double_t xAxis3[8] = {250, 280, 310, 350, 400, 450, 600, 1000}; 
   
   TH1D *h_pfUAmag_#gammapLjetssPoPHFcP__74 = new TH1D("h_pfUAmag_#gammapLjetssPoPHFcP__74","",7, xAxis3);
   h_pfUAmag_#gammapLjetssPoPHFcP__74->SetBinContent(1,0.1112744);
   h_pfUAmag_#gammapLjetssPoPHFcP__74->SetBinContent(2,0.008739087);
   h_pfUAmag_#gammapLjetssPoPHFcP__74->SetBinContent(3,0.004568175);
   h_pfUAmag_#gammapLjetssPoPHFcP__74->SetBinContent(4,0.002207862);
   h_pfUAmag_#gammapLjetssPoPHFcP__74->SetBinContent(5,0.001303704);
   h_pfUAmag_#gammapLjetssPoPHFcP__74->SetBinContent(6,0.0004078273);
   h_pfUAmag_#gammapLjetssPoPHFcP__74->SetBinContent(7,4.748471e-05);
   h_pfUAmag_#gammapLjetssPoPHFcP__74->SetBinError(1,0.001805354);
   h_pfUAmag_#gammapLjetssPoPHFcP__74->SetBinError(2,0.0003113755);
   h_pfUAmag_#gammapLjetssPoPHFcP__74->SetBinError(3,0.0001763333);
   h_pfUAmag_#gammapLjetssPoPHFcP__74->SetBinError(4,9.745635e-05);
   h_pfUAmag_#gammapLjetssPoPHFcP__74->SetBinError(5,6.97983e-05);
   h_pfUAmag_#gammapLjetssPoPHFcP__74->SetBinError(6,1.813926e-05);
   h_pfUAmag_#gammapLjetssPoPHFcP__74->SetBinError(7,2.833493e-06);
   h_pfUAmag_#gammapLjetssPoPHFcP__74->SetEntries(14158);
   h_pfUAmag_#gammapLjetssPoPHFcP__74->SetStats(0);

   ci = TColor::GetColor("#ff6633");
   h_pfUAmag_#gammapLjetssPoPHFcP__74->SetFillColor(ci);
   h_pfUAmag_#gammapLjetssPoPHFcP__74->GetXaxis()->SetTitle("U(#gamma) [GeV]");
   h_pfUAmag_#gammapLjetssPoPHFcP__74->GetXaxis()->SetLabelFont(42);
   h_pfUAmag_#gammapLjetssPoPHFcP__74->GetXaxis()->SetLabelOffset(0.007);
   h_pfUAmag_#gammapLjetssPoPHFcP__74->GetXaxis()->SetTitleSize(0.05);
   h_pfUAmag_#gammapLjetssPoPHFcP__74->GetXaxis()->SetTickLength(0.025);
   h_pfUAmag_#gammapLjetssPoPHFcP__74->GetXaxis()->SetTitleFont(42);
   h_pfUAmag_#gammapLjetssPoPHFcP__74->GetYaxis()->SetTitle("a.u./GeV");
   h_pfUAmag_#gammapLjetssPoPHFcP__74->GetYaxis()->SetLabelFont(42);
   h_pfUAmag_#gammapLjetssPoPHFcP__74->GetYaxis()->SetLabelOffset(0.007);
   h_pfUAmag_#gammapLjetssPoPHFcP__74->GetYaxis()->SetTitleSize(0.05);
   h_pfUAmag_#gammapLjetssPoPHFcP__74->GetYaxis()->SetTickLength(0.025);
   h_pfUAmag_#gammapLjetssPoPHFcP__74->GetYaxis()->SetTitleFont(42);
   h_pfUAmag_#gammapLjetssPoPHFcP__74->GetZaxis()->SetLabelFont(42);
   h_pfUAmag_#gammapLjetssPoPHFcP__74->GetZaxis()->SetLabelOffset(0.007);
   h_pfUAmag_#gammapLjetssPoPHFcP__74->GetZaxis()->SetTitleSize(0.05);
   h_pfUAmag_#gammapLjetssPoPHFcP__74->GetZaxis()->SetTickLength(0.025);
   h_pfUAmag_#gammapLjetssPoPHFcP__74->GetZaxis()->SetTitleFont(42);
   h->Add(h_pfUAmag_#gamma+jets (HF),"");
   Double_t xAxis4[8] = {250, 280, 310, 350, 400, 450, 600, 1000}; 
   
   TH1D *h_pfUAmag_#gammapLjetssPoPLFcP__75 = new TH1D("h_pfUAmag_#gammapLjetssPoPLFcP__75","",7, xAxis4);
   h_pfUAmag_#gammapLjetssPoPLFcP__75->SetBinContent(1,0.7008903);
   h_pfUAmag_#gammapLjetssPoPLFcP__75->SetBinContent(2,0.06502364);
   h_pfUAmag_#gammapLjetssPoPLFcP__75->SetBinContent(3,0.03739335);
   h_pfUAmag_#gammapLjetssPoPLFcP__75->SetBinContent(4,0.01942724);
   h_pfUAmag_#gammapLjetssPoPLFcP__75->SetBinContent(5,0.01051361);
   h_pfUAmag_#gammapLjetssPoPLFcP__75->SetBinContent(6,0.003686934);
   h_pfUAmag_#gammapLjetssPoPLFcP__75->SetBinContent(7,0.0004765743);
   h_pfUAmag_#gammapLjetssPoPLFcP__75->SetBinError(1,0.004518688);
   h_pfUAmag_#gammapLjetssPoPLFcP__75->SetBinError(2,0.0008630158);
   h_pfUAmag_#gammapLjetssPoPLFcP__75->SetBinError(3,0.0005221123);
   h_pfUAmag_#gammapLjetssPoPLFcP__75->SetBinError(4,0.0002995768);
   h_pfUAmag_#gammapLjetssPoPLFcP__75->SetBinError(5,0.0001954335);
   h_pfUAmag_#gammapLjetssPoPLFcP__75->SetBinError(6,5.536057e-05);
   h_pfUAmag_#gammapLjetssPoPLFcP__75->SetBinError(7,9.017438e-06);
   h_pfUAmag_#gammapLjetssPoPLFcP__75->SetEntries(99288);
   h_pfUAmag_#gammapLjetssPoPLFcP__75->SetStats(0);

   ci = TColor::GetColor("#339999");
   h_pfUAmag_#gammapLjetssPoPLFcP__75->SetFillColor(ci);
   h_pfUAmag_#gammapLjetssPoPLFcP__75->GetXaxis()->SetTitle("U(#gamma) [GeV]");
   h_pfUAmag_#gammapLjetssPoPLFcP__75->GetXaxis()->SetLabelFont(42);
   h_pfUAmag_#gammapLjetssPoPLFcP__75->GetXaxis()->SetLabelOffset(0.007);
   h_pfUAmag_#gammapLjetssPoPLFcP__75->GetXaxis()->SetTitleSize(0.05);
   h_pfUAmag_#gammapLjetssPoPLFcP__75->GetXaxis()->SetTickLength(0.025);
   h_pfUAmag_#gammapLjetssPoPLFcP__75->GetXaxis()->SetTitleFont(42);
   h_pfUAmag_#gammapLjetssPoPLFcP__75->GetYaxis()->SetTitle("a.u./GeV");
   h_pfUAmag_#gammapLjetssPoPLFcP__75->GetYaxis()->SetLabelFont(42);
   h_pfUAmag_#gammapLjetssPoPLFcP__75->GetYaxis()->SetLabelOffset(0.007);
   h_pfUAmag_#gammapLjetssPoPLFcP__75->GetYaxis()->SetTitleSize(0.05);
   h_pfUAmag_#gammapLjetssPoPLFcP__75->GetYaxis()->SetTickLength(0.025);
   h_pfUAmag_#gammapLjetssPoPLFcP__75->GetYaxis()->SetTitleFont(42);
   h_pfUAmag_#gammapLjetssPoPLFcP__75->GetZaxis()->SetLabelFont(42);
   h_pfUAmag_#gammapLjetssPoPLFcP__75->GetZaxis()->SetLabelOffset(0.007);
   h_pfUAmag_#gammapLjetssPoPLFcP__75->GetZaxis()->SetTitleSize(0.05);
   h_pfUAmag_#gammapLjetssPoPLFcP__75->GetZaxis()->SetTickLength(0.025);
   h_pfUAmag_#gammapLjetssPoPLFcP__75->GetZaxis()->SetTitleFont(42);
   h->Add(h_pfUAmag_#gamma+jets (LF),"");
   h->Draw("hist");
   Double_t xAxis5[8] = {250, 280, 310, 350, 400, 450, 600, 1000}; 
   
   TH1D *hsum__76 = new TH1D("hsum__76","",7, xAxis5);
   hsum__76->SetBinContent(1,0.8416849);
   hsum__76->SetBinContent(2,0.07616679);
   hsum__76->SetBinContent(3,0.04317719);
   hsum__76->SetBinContent(4,0.02218633);
   hsum__76->SetBinContent(5,0.01207022);
   hsum__76->SetBinContent(6,0.004180052);
   hsum__76->SetBinContent(7,0.0005344299);
   hsum__76->SetBinError(1,0.004866159);
   hsum__76->SetBinError(2,0.0009175332);
   hsum__76->SetBinError(3,0.000551122);
   hsum__76->SetBinError(4,0.0003150511);
   hsum__76->SetBinError(5,0.0002075364);
   hsum__76->SetBinError(6,5.826143e-05);
   hsum__76->SetBinError(7,9.45349e-06);
   hsum__76->SetEntries(668755);
   hsum__76->SetStats(0);

   ci = 1188;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   hsum__76->SetFillColor(ci);
   hsum__76->SetFillStyle(3003);
   hsum__76->SetLineWidth(0);
   hsum__76->GetXaxis()->SetTitle("U(#gamma) [GeV]");
   hsum__76->GetXaxis()->SetLabelFont(42);
   hsum__76->GetXaxis()->SetLabelOffset(0.007);
   hsum__76->GetXaxis()->SetTitleSize(0.05);
   hsum__76->GetXaxis()->SetTickLength(0.025);
   hsum__76->GetXaxis()->SetTitleFont(42);
   hsum__76->GetYaxis()->SetTitle("a.u./GeV");
   hsum__76->GetYaxis()->SetLabelFont(42);
   hsum__76->GetYaxis()->SetLabelOffset(0.007);
   hsum__76->GetYaxis()->SetTitleSize(0.05);
   hsum__76->GetYaxis()->SetTickLength(0.025);
   hsum__76->GetYaxis()->SetTitleFont(42);
   hsum__76->GetZaxis()->SetLabelFont(42);
   hsum__76->GetZaxis()->SetLabelOffset(0.007);
   hsum__76->GetZaxis()->SetTitleSize(0.05);
   hsum__76->GetZaxis()->SetTickLength(0.025);
   hsum__76->GetZaxis()->SetTitleFont(42);
   hsum__76->Draw("e2 same");
   Double_t xAxis6[8] = {250, 280, 310, 350, 400, 450, 600, 1000}; 
   
   TH1D *h_pfUAmag_Data__77 = new TH1D("h_pfUAmag_Data__77","",7, xAxis6);
   h_pfUAmag_Data__77->SetBinContent(1,0.8383636);
   h_pfUAmag_Data__77->SetBinContent(2,0.07951887);
   h_pfUAmag_Data__77->SetBinContent(3,0.04357034);
   h_pfUAmag_Data__77->SetBinContent(4,0.02232068);
   h_pfUAmag_Data__77->SetBinContent(5,0.01164665);
   h_pfUAmag_Data__77->SetBinContent(6,0.00407902);
   h_pfUAmag_Data__77->SetBinContent(7,0.0005008058);
   h_pfUAmag_Data__77->SetBinError(1,0.001152585);
   h_pfUAmag_Data__77->SetBinError(2,0.0003549702);
   h_pfUAmag_Data__77->SetBinError(3,0.0002275532);
   h_pfUAmag_Data__77->SetBinError(4,0.0001456754);
   h_pfUAmag_Data__77->SetBinError(5,0.0001052284);
   h_pfUAmag_Data__77->SetBinError(6,3.595421e-05);
   h_pfUAmag_Data__77->SetBinError(7,7.714754e-06);
   h_pfUAmag_Data__77->SetEntries(668741);
   h_pfUAmag_Data__77->SetStats(0);
   h_pfUAmag_Data__77->SetLineWidth(3);
   h_pfUAmag_Data__77->SetMarkerStyle(20);
   h_pfUAmag_Data__77->SetMarkerSize(2);
   h_pfUAmag_Data__77->GetXaxis()->SetTitle("U(#gamma) [GeV]");
   h_pfUAmag_Data__77->GetXaxis()->SetLabelFont(42);
   h_pfUAmag_Data__77->GetXaxis()->SetLabelOffset(0.007);
   h_pfUAmag_Data__77->GetXaxis()->SetTitleSize(0.05);
   h_pfUAmag_Data__77->GetXaxis()->SetTickLength(0.025);
   h_pfUAmag_Data__77->GetXaxis()->SetTitleFont(42);
   h_pfUAmag_Data__77->GetYaxis()->SetTitle("a.u./GeV");
   h_pfUAmag_Data__77->GetYaxis()->SetLabelFont(42);
   h_pfUAmag_Data__77->GetYaxis()->SetLabelOffset(0.007);
   h_pfUAmag_Data__77->GetYaxis()->SetTitleSize(0.05);
   h_pfUAmag_Data__77->GetYaxis()->SetTickLength(0.025);
   h_pfUAmag_Data__77->GetYaxis()->SetTitleFont(42);
   h_pfUAmag_Data__77->GetZaxis()->SetLabelFont(42);
   h_pfUAmag_Data__77->GetZaxis()->SetLabelOffset(0.007);
   h_pfUAmag_Data__77->GetZaxis()->SetTitleSize(0.05);
   h_pfUAmag_Data__77->GetZaxis()->SetTickLength(0.025);
   h_pfUAmag_Data__77->GetZaxis()->SetTitleFont(42);
   h_pfUAmag_Data__77->Draw("elp same");
   
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
   Double_t xAxis7[8] = {250, 280, 310, 350, 400, 450, 600, 1000}; 
   
   TH1D *ratio__78 = new TH1D("ratio__78","",7, xAxis7);
   ratio__78->SetBinContent(1,-0.003946006);
   ratio__78->SetBinContent(2,0.04400969);
   ratio__78->SetBinContent(3,0.009105325);
   ratio__78->SetBinContent(4,0.006055474);
   ratio__78->SetBinContent(5,-0.03509253);
   ratio__78->SetBinContent(6,-0.0241701);
   ratio__78->SetBinContent(7,-0.06291574);
   ratio__78->SetBinError(1,0.0001);
   ratio__78->SetBinError(2,0.0001);
   ratio__78->SetBinError(3,0.0001);
   ratio__78->SetBinError(4,0.0001);
   ratio__78->SetBinError(5,0.0001);
   ratio__78->SetBinError(6,0.0001);
   ratio__78->SetBinError(7,0.0001);
   ratio__78->SetMinimum(-0.48);
   ratio__78->SetMaximum(0.48);
   ratio__78->SetEntries(668748);
   ratio__78->SetStats(0);
   ratio__78->SetLineWidth(3);
   ratio__78->SetMarkerStyle(20);
   ratio__78->SetMarkerSize(2);
   ratio__78->GetXaxis()->SetTitle("U(#gamma) [GeV]");
   ratio__78->GetXaxis()->SetLabelFont(43);
   ratio__78->GetXaxis()->SetLabelOffset(0.007);
   ratio__78->GetXaxis()->SetLabelSize(30);
   ratio__78->GetXaxis()->SetTitleSize(40);
   ratio__78->GetXaxis()->SetTickLength(0.025);
   ratio__78->GetXaxis()->SetTitleOffset(5);
   ratio__78->GetXaxis()->SetTitleFont(43);
   ratio__78->GetYaxis()->SetTitle("#frac{Data-Exp}{Exp}");
   ratio__78->GetYaxis()->SetNdivisions(5);
   ratio__78->GetYaxis()->SetLabelFont(43);
   ratio__78->GetYaxis()->SetLabelOffset(0.007);
   ratio__78->GetYaxis()->SetLabelSize(30);
   ratio__78->GetYaxis()->SetTitleSize(40);
   ratio__78->GetYaxis()->SetTickLength(0.025);
   ratio__78->GetYaxis()->SetTitleOffset(2.5);
   ratio__78->GetYaxis()->SetTitleFont(43);
   ratio__78->GetZaxis()->SetLabelFont(42);
   ratio__78->GetZaxis()->SetLabelOffset(0.007);
   ratio__78->GetZaxis()->SetTitleSize(0.05);
   ratio__78->GetZaxis()->SetTickLength(0.025);
   ratio__78->GetZaxis()->SetTitleFont(42);
   ratio__78->Draw("elp");
   Double_t xAxis8[8] = {250, 280, 310, 350, 400, 450, 600, 1000}; 
   
   TH1D *zero__79 = new TH1D("zero__79","",7, xAxis8);
   zero__79->SetBinError(1,0.001152585);
   zero__79->SetBinError(2,0.0003549702);
   zero__79->SetBinError(3,0.0002275532);
   zero__79->SetBinError(4,0.0001456754);
   zero__79->SetBinError(5,0.0001052284);
   zero__79->SetBinError(6,3.595421e-05);
   zero__79->SetBinError(7,7.714754e-06);
   zero__79->SetEntries(668748);
   zero__79->SetStats(0);
   zero__79->SetLineWidth(3);
   zero__79->SetMarkerStyle(20);
   zero__79->SetMarkerSize(2);
   zero__79->GetXaxis()->SetTitle("U(#gamma) [GeV]");
   zero__79->GetXaxis()->SetLabelFont(42);
   zero__79->GetXaxis()->SetLabelOffset(0.007);
   zero__79->GetXaxis()->SetTitleSize(0.05);
   zero__79->GetXaxis()->SetTickLength(0.025);
   zero__79->GetXaxis()->SetTitleFont(42);
   zero__79->GetYaxis()->SetTitle("a.u./GeV");
   zero__79->GetYaxis()->SetLabelFont(42);
   zero__79->GetYaxis()->SetLabelOffset(0.007);
   zero__79->GetYaxis()->SetTitleSize(0.05);
   zero__79->GetYaxis()->SetTickLength(0.025);
   zero__79->GetYaxis()->SetTitleFont(42);
   zero__79->GetZaxis()->SetLabelFont(42);
   zero__79->GetZaxis()->SetLabelOffset(0.007);
   zero__79->GetZaxis()->SetTitleSize(0.05);
   zero__79->GetZaxis()->SetTickLength(0.025);
   zero__79->GetZaxis()->SetTitleFont(42);
   zero__79->Draw("hist same");
   Double_t xAxis9[8] = {250, 280, 310, 350, 400, 450, 600, 1000}; 
   
   TH1D *sumratioup__80 = new TH1D("sumratioup__80","",7, xAxis9);
   sumratioup__80->SetBinContent(1,0.00578145);
   sumratioup__80->SetBinContent(2,0.01204637);
   sumratioup__80->SetBinContent(3,0.01276419);
   sumratioup__80->SetBinContent(4,0.01420024);
   sumratioup__80->SetBinContent(5,0.01719408);
   sumratioup__80->SetBinContent(6,0.01393797);
   sumratioup__80->SetBinContent(7,0.01768893);
   sumratioup__80->SetBinError(1,0.004866159);
   sumratioup__80->SetBinError(2,0.0009175332);
   sumratioup__80->SetBinError(3,0.000551122);
   sumratioup__80->SetBinError(4,0.0003150511);
   sumratioup__80->SetBinError(5,0.0002075364);
   sumratioup__80->SetBinError(6,5.826143e-05);
   sumratioup__80->SetBinError(7,9.45349e-06);
   sumratioup__80->SetEntries(668762);
   sumratioup__80->SetStats(0);

   ci = 1188;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratioup__80->SetFillColor(ci);
   sumratioup__80->SetFillStyle(3003);
   sumratioup__80->GetXaxis()->SetTitle("U(#gamma) [GeV]");
   sumratioup__80->GetXaxis()->SetLabelFont(42);
   sumratioup__80->GetXaxis()->SetLabelOffset(0.007);
   sumratioup__80->GetXaxis()->SetTitleSize(0.05);
   sumratioup__80->GetXaxis()->SetTickLength(0.025);
   sumratioup__80->GetXaxis()->SetTitleFont(42);
   sumratioup__80->GetYaxis()->SetTitle("a.u./GeV");
   sumratioup__80->GetYaxis()->SetLabelFont(42);
   sumratioup__80->GetYaxis()->SetLabelOffset(0.007);
   sumratioup__80->GetYaxis()->SetTitleSize(0.05);
   sumratioup__80->GetYaxis()->SetTickLength(0.025);
   sumratioup__80->GetYaxis()->SetTitleFont(42);
   sumratioup__80->GetZaxis()->SetLabelFont(42);
   sumratioup__80->GetZaxis()->SetLabelOffset(0.007);
   sumratioup__80->GetZaxis()->SetTitleSize(0.05);
   sumratioup__80->GetZaxis()->SetTickLength(0.025);
   sumratioup__80->GetZaxis()->SetTitleFont(42);
   sumratioup__80->Draw("hist same");
   Double_t xAxis10[8] = {250, 280, 310, 350, 400, 450, 600, 1000}; 
   
   TH1D *sumratiodown__81 = new TH1D("sumratiodown__81","",7, xAxis10);
   sumratiodown__81->SetBinContent(1,-0.00578145);
   sumratiodown__81->SetBinContent(2,-0.01204637);
   sumratiodown__81->SetBinContent(3,-0.01276419);
   sumratiodown__81->SetBinContent(4,-0.01420024);
   sumratiodown__81->SetBinContent(5,-0.01719408);
   sumratiodown__81->SetBinContent(6,-0.01393797);
   sumratiodown__81->SetBinContent(7,-0.01768893);
   sumratiodown__81->SetBinError(1,0.004866159);
   sumratiodown__81->SetBinError(2,0.0009175332);
   sumratiodown__81->SetBinError(3,0.000551122);
   sumratiodown__81->SetBinError(4,0.0003150511);
   sumratiodown__81->SetBinError(5,0.0002075364);
   sumratiodown__81->SetBinError(6,5.826143e-05);
   sumratiodown__81->SetBinError(7,9.45349e-06);
   sumratiodown__81->SetEntries(668762);
   sumratiodown__81->SetStats(0);

   ci = 1188;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratiodown__81->SetFillColor(ci);
   sumratiodown__81->SetFillStyle(3003);
   sumratiodown__81->GetXaxis()->SetTitle("U(#gamma) [GeV]");
   sumratiodown__81->GetXaxis()->SetLabelFont(42);
   sumratiodown__81->GetXaxis()->SetLabelOffset(0.007);
   sumratiodown__81->GetXaxis()->SetTitleSize(0.05);
   sumratiodown__81->GetXaxis()->SetTickLength(0.025);
   sumratiodown__81->GetXaxis()->SetTitleFont(42);
   sumratiodown__81->GetYaxis()->SetTitle("a.u./GeV");
   sumratiodown__81->GetYaxis()->SetLabelFont(42);
   sumratiodown__81->GetYaxis()->SetLabelOffset(0.007);
   sumratiodown__81->GetYaxis()->SetTitleSize(0.05);
   sumratiodown__81->GetYaxis()->SetTickLength(0.025);
   sumratiodown__81->GetYaxis()->SetTitleFont(42);
   sumratiodown__81->GetZaxis()->SetLabelFont(42);
   sumratiodown__81->GetZaxis()->SetLabelOffset(0.007);
   sumratiodown__81->GetZaxis()->SetTitleSize(0.05);
   sumratiodown__81->GetZaxis()->SetTickLength(0.025);
   sumratiodown__81->GetZaxis()->SetTitleFont(42);
   sumratiodown__81->Draw("hist same");
   
   Double_t Graph0_fx1009[7] = {
   265,
   295,
   330,
   375,
   425,
   525,
   800};
   Double_t Graph0_fy1009[7] = {
   -0.003946006,
   0.04400969,
   0.009105325,
   0.006055474,
   -0.03509253,
   -0.0241701,
   -0.06291574};
   Double_t Graph0_fex1009[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1009[7] = {
   0.001369378,
   0.004660432,
   0.005270217,
   0.006565996,
   0.008718016,
   0.008601378,
   0.01443549};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1009,Graph0_fy1009,Graph0_fex1009,Graph0_fey1009);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","Graph",100,211.5,853.5);
   Graph_Graph1009->SetMinimum(-0.08995336);
   Graph_Graph1009->SetMaximum(0.06127225);
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
