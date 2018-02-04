void photon_nJet_logy()
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
   pad1->Range(-2.1875,-4.631485,9.0625,2.350558);
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
   h->SetMinimum(8.864021e-05);
   h->SetMaximum(34.35244);
   
   TH1F *h_stack_18 = new TH1F("h_stack_18","",9,-0.5,8.5);
   h_stack_18->SetMinimum(2.336226e-05);
   h_stack_18->SetMaximum(72.74698);
   h_stack_18->SetDirectory(0);
   h_stack_18->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h_stack_18->SetLineColor(ci);
   h_stack_18->GetXaxis()->SetLabelFont(42);
   h_stack_18->GetXaxis()->SetLabelOffset(0.007);
   h_stack_18->GetXaxis()->SetTitleSize(0.05);
   h_stack_18->GetXaxis()->SetTickLength(0.025);
   h_stack_18->GetXaxis()->SetTitleFont(42);
   h_stack_18->GetYaxis()->SetTitle("a.u.");
   h_stack_18->GetYaxis()->SetLabelFont(42);
   h_stack_18->GetYaxis()->SetLabelOffset(0.007);
   h_stack_18->GetYaxis()->SetTitleSize(0.05);
   h_stack_18->GetYaxis()->SetTickLength(0.025);
   h_stack_18->GetYaxis()->SetTitleOffset(1.5);
   h_stack_18->GetYaxis()->SetTitleFont(42);
   h_stack_18->GetZaxis()->SetLabelFont(42);
   h_stack_18->GetZaxis()->SetLabelOffset(0.007);
   h_stack_18->GetZaxis()->SetTitleSize(0.05);
   h_stack_18->GetZaxis()->SetTickLength(0.025);
   h_stack_18->GetZaxis()->SetTitleFont(42);
   h->SetHistogram(h_stack_18);
   
   
   TH1D *h_nJet_QCD__154 = new TH1D("h_nJet_QCD__154","",9,-0.5,8.5);
   h_nJet_QCD__154->SetBinContent(2,0.007934832);
   h_nJet_QCD__154->SetBinContent(3,0.01190145);
   h_nJet_QCD__154->SetBinContent(4,0.007835691);
   h_nJet_QCD__154->SetBinContent(5,0.003665959);
   h_nJet_QCD__154->SetBinContent(6,0.001409073);
   h_nJet_QCD__154->SetBinContent(7,0.0004720993);
   h_nJet_QCD__154->SetBinContent(8,0.0001488269);
   h_nJet_QCD__154->SetBinContent(9,5.862043e-05);
   h_nJet_QCD__154->SetBinError(2,2.06652e-05);
   h_nJet_QCD__154->SetBinError(3,2.470063e-05);
   h_nJet_QCD__154->SetBinError(4,1.974567e-05);
   h_nJet_QCD__154->SetBinError(5,1.336667e-05);
   h_nJet_QCD__154->SetBinError(6,8.223606e-06);
   h_nJet_QCD__154->SetBinError(7,4.731202e-06);
   h_nJet_QCD__154->SetBinError(8,2.642226e-06);
   h_nJet_QCD__154->SetBinError(9,1.653746e-06);
   h_nJet_QCD__154->SetEntries(668734);
   h_nJet_QCD__154->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_nJet_QCD__154->SetFillColor(ci);
   h_nJet_QCD__154->GetXaxis()->SetTitle("N_{jet}");
   h_nJet_QCD__154->GetXaxis()->SetLabelFont(42);
   h_nJet_QCD__154->GetXaxis()->SetLabelOffset(0.007);
   h_nJet_QCD__154->GetXaxis()->SetTitleSize(0.05);
   h_nJet_QCD__154->GetXaxis()->SetTickLength(0.025);
   h_nJet_QCD__154->GetXaxis()->SetTitleFont(42);
   h_nJet_QCD__154->GetYaxis()->SetTitle("a.u.");
   h_nJet_QCD__154->GetYaxis()->SetLabelFont(42);
   h_nJet_QCD__154->GetYaxis()->SetLabelOffset(0.007);
   h_nJet_QCD__154->GetYaxis()->SetTitleSize(0.05);
   h_nJet_QCD__154->GetYaxis()->SetTickLength(0.025);
   h_nJet_QCD__154->GetYaxis()->SetTitleFont(42);
   h_nJet_QCD__154->GetZaxis()->SetLabelFont(42);
   h_nJet_QCD__154->GetZaxis()->SetLabelOffset(0.007);
   h_nJet_QCD__154->GetZaxis()->SetTitleSize(0.05);
   h_nJet_QCD__154->GetZaxis()->SetTickLength(0.025);
   h_nJet_QCD__154->GetZaxis()->SetTitleFont(42);
   h->Add(h_nJet_QCD,"");
   
   TH1D *h_nJet_#gammapLjetssPoPHFcP__155 = new TH1D("h_nJet_#gammapLjetssPoPHFcP__155","",9,-0.5,8.5);
   h_nJet_#gammapLjetssPoPHFcP__155->SetBinContent(2,0.03197374);
   h_nJet_#gammapLjetssPoPHFcP__155->SetBinContent(3,0.04162464);
   h_nJet_#gammapLjetssPoPHFcP__155->SetBinContent(4,0.02910559);
   h_nJet_#gammapLjetssPoPHFcP__155->SetBinContent(5,0.0155296);
   h_nJet_#gammapLjetssPoPHFcP__155->SetBinContent(6,0.005789362);
   h_nJet_#gammapLjetssPoPHFcP__155->SetBinContent(7,0.001928571);
   h_nJet_#gammapLjetssPoPHFcP__155->SetBinContent(8,0.0007411268);
   h_nJet_#gammapLjetssPoPHFcP__155->SetBinContent(9,0.0002512278);
   h_nJet_#gammapLjetssPoPHFcP__155->SetBinError(2,0.001221566);
   h_nJet_#gammapLjetssPoPHFcP__155->SetBinError(3,0.0009631312);
   h_nJet_#gammapLjetssPoPHFcP__155->SetBinError(4,0.0006483143);
   h_nJet_#gammapLjetssPoPHFcP__155->SetBinError(5,0.0004174019);
   h_nJet_#gammapLjetssPoPHFcP__155->SetBinError(6,0.0002166651);
   h_nJet_#gammapLjetssPoPHFcP__155->SetBinError(7,0.0001036893);
   h_nJet_#gammapLjetssPoPHFcP__155->SetBinError(8,6.274574e-05);
   h_nJet_#gammapLjetssPoPHFcP__155->SetBinError(9,3.481054e-05);
   h_nJet_#gammapLjetssPoPHFcP__155->SetEntries(14151);
   h_nJet_#gammapLjetssPoPHFcP__155->SetStats(0);

   ci = TColor::GetColor("#ff6633");
   h_nJet_#gammapLjetssPoPHFcP__155->SetFillColor(ci);
   h_nJet_#gammapLjetssPoPHFcP__155->GetXaxis()->SetTitle("N_{jet}");
   h_nJet_#gammapLjetssPoPHFcP__155->GetXaxis()->SetLabelFont(42);
   h_nJet_#gammapLjetssPoPHFcP__155->GetXaxis()->SetLabelOffset(0.007);
   h_nJet_#gammapLjetssPoPHFcP__155->GetXaxis()->SetTitleSize(0.05);
   h_nJet_#gammapLjetssPoPHFcP__155->GetXaxis()->SetTickLength(0.025);
   h_nJet_#gammapLjetssPoPHFcP__155->GetXaxis()->SetTitleFont(42);
   h_nJet_#gammapLjetssPoPHFcP__155->GetYaxis()->SetTitle("a.u.");
   h_nJet_#gammapLjetssPoPHFcP__155->GetYaxis()->SetLabelFont(42);
   h_nJet_#gammapLjetssPoPHFcP__155->GetYaxis()->SetLabelOffset(0.007);
   h_nJet_#gammapLjetssPoPHFcP__155->GetYaxis()->SetTitleSize(0.05);
   h_nJet_#gammapLjetssPoPHFcP__155->GetYaxis()->SetTickLength(0.025);
   h_nJet_#gammapLjetssPoPHFcP__155->GetYaxis()->SetTitleFont(42);
   h_nJet_#gammapLjetssPoPHFcP__155->GetZaxis()->SetLabelFont(42);
   h_nJet_#gammapLjetssPoPHFcP__155->GetZaxis()->SetLabelOffset(0.007);
   h_nJet_#gammapLjetssPoPHFcP__155->GetZaxis()->SetTitleSize(0.05);
   h_nJet_#gammapLjetssPoPHFcP__155->GetZaxis()->SetTickLength(0.025);
   h_nJet_#gammapLjetssPoPHFcP__155->GetZaxis()->SetTitleFont(42);
   h->Add(h_nJet_#gamma+jets (HF),"");
   
   TH1D *h_nJet_#gammapLjetssPoPLFcP__156 = new TH1D("h_nJet_#gammapLjetssPoPLFcP__156","",9,-0.5,8.5);
   h_nJet_#gammapLjetssPoPLFcP__156->SetBinContent(2,0.1903612);
   h_nJet_#gammapLjetssPoPLFcP__156->SetBinContent(3,0.2899984);
   h_nJet_#gammapLjetssPoPLFcP__156->SetBinContent(4,0.1957199);
   h_nJet_#gammapLjetssPoPLFcP__156->SetBinContent(5,0.1038259);
   h_nJet_#gammapLjetssPoPLFcP__156->SetBinContent(6,0.04036101);
   h_nJet_#gammapLjetssPoPLFcP__156->SetBinContent(7,0.01358139);
   h_nJet_#gammapLjetssPoPLFcP__156->SetBinContent(8,0.004318812);
   h_nJet_#gammapLjetssPoPLFcP__156->SetBinContent(9,0.001462956);
   h_nJet_#gammapLjetssPoPLFcP__156->SetBinError(2,0.003027704);
   h_nJet_#gammapLjetssPoPLFcP__156->SetBinError(3,0.00250721);
   h_nJet_#gammapLjetssPoPLFcP__156->SetBinError(4,0.001627616);
   h_nJet_#gammapLjetssPoPLFcP__156->SetBinError(5,0.00105721);
   h_nJet_#gammapLjetssPoPLFcP__156->SetBinError(6,0.0005573601);
   h_nJet_#gammapLjetssPoPLFcP__156->SetBinError(7,0.0002915614);
   h_nJet_#gammapLjetssPoPLFcP__156->SetBinError(8,0.0001484735);
   h_nJet_#gammapLjetssPoPLFcP__156->SetBinError(9,7.913179e-05);
   h_nJet_#gammapLjetssPoPLFcP__156->SetEntries(99281);
   h_nJet_#gammapLjetssPoPLFcP__156->SetStats(0);

   ci = TColor::GetColor("#339999");
   h_nJet_#gammapLjetssPoPLFcP__156->SetFillColor(ci);
   h_nJet_#gammapLjetssPoPLFcP__156->GetXaxis()->SetTitle("N_{jet}");
   h_nJet_#gammapLjetssPoPLFcP__156->GetXaxis()->SetLabelFont(42);
   h_nJet_#gammapLjetssPoPLFcP__156->GetXaxis()->SetLabelOffset(0.007);
   h_nJet_#gammapLjetssPoPLFcP__156->GetXaxis()->SetTitleSize(0.05);
   h_nJet_#gammapLjetssPoPLFcP__156->GetXaxis()->SetTickLength(0.025);
   h_nJet_#gammapLjetssPoPLFcP__156->GetXaxis()->SetTitleFont(42);
   h_nJet_#gammapLjetssPoPLFcP__156->GetYaxis()->SetTitle("a.u.");
   h_nJet_#gammapLjetssPoPLFcP__156->GetYaxis()->SetLabelFont(42);
   h_nJet_#gammapLjetssPoPLFcP__156->GetYaxis()->SetLabelOffset(0.007);
   h_nJet_#gammapLjetssPoPLFcP__156->GetYaxis()->SetTitleSize(0.05);
   h_nJet_#gammapLjetssPoPLFcP__156->GetYaxis()->SetTickLength(0.025);
   h_nJet_#gammapLjetssPoPLFcP__156->GetYaxis()->SetTitleFont(42);
   h_nJet_#gammapLjetssPoPLFcP__156->GetZaxis()->SetLabelFont(42);
   h_nJet_#gammapLjetssPoPLFcP__156->GetZaxis()->SetLabelOffset(0.007);
   h_nJet_#gammapLjetssPoPLFcP__156->GetZaxis()->SetTitleSize(0.05);
   h_nJet_#gammapLjetssPoPLFcP__156->GetZaxis()->SetTickLength(0.025);
   h_nJet_#gammapLjetssPoPLFcP__156->GetZaxis()->SetTitleFont(42);
   h->Add(h_nJet_#gamma+jets (LF),"");
   h->Draw("hist");
   
   TH1D *hsum__157 = new TH1D("hsum__157","",9,-0.5,8.5);
   hsum__157->SetBinContent(2,0.2302698);
   hsum__157->SetBinContent(3,0.3435244);
   hsum__157->SetBinContent(4,0.2326612);
   hsum__157->SetBinContent(5,0.1230215);
   hsum__157->SetBinContent(6,0.04755944);
   hsum__157->SetBinContent(7,0.01598206);
   hsum__157->SetBinContent(8,0.005208766);
   hsum__157->SetBinContent(9,0.001772804);
   hsum__157->SetBinError(2,0.003264911);
   hsum__157->SetBinError(3,0.002685951);
   hsum__157->SetBinError(4,0.001752095);
   hsum__157->SetBinError(5,0.001136704);
   hsum__157->SetBinError(6,0.0005980483);
   hsum__157->SetBinError(7,0.0003094865);
   hsum__157->SetBinError(8,0.0001612091);
   hsum__157->SetBinError(9,8.646589e-05);
   hsum__157->SetEntries(668752);
   hsum__157->SetStats(0);

   ci = 1197;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   hsum__157->SetFillColor(ci);
   hsum__157->SetFillStyle(3003);
   hsum__157->SetLineWidth(0);
   hsum__157->GetXaxis()->SetTitle("N_{jet}");
   hsum__157->GetXaxis()->SetLabelFont(42);
   hsum__157->GetXaxis()->SetLabelOffset(0.007);
   hsum__157->GetXaxis()->SetTitleSize(0.05);
   hsum__157->GetXaxis()->SetTickLength(0.025);
   hsum__157->GetXaxis()->SetTitleFont(42);
   hsum__157->GetYaxis()->SetTitle("a.u.");
   hsum__157->GetYaxis()->SetLabelFont(42);
   hsum__157->GetYaxis()->SetLabelOffset(0.007);
   hsum__157->GetYaxis()->SetTitleSize(0.05);
   hsum__157->GetYaxis()->SetTickLength(0.025);
   hsum__157->GetYaxis()->SetTitleFont(42);
   hsum__157->GetZaxis()->SetLabelFont(42);
   hsum__157->GetZaxis()->SetLabelOffset(0.007);
   hsum__157->GetZaxis()->SetTitleSize(0.05);
   hsum__157->GetZaxis()->SetTickLength(0.025);
   hsum__157->GetZaxis()->SetTitleFont(42);
   hsum__157->Draw("e2 same");
   
   TH1D *h_nJet_Data__158 = new TH1D("h_nJet_Data__158","",9,-0.5,8.5);
   h_nJet_Data__158->SetBinContent(2,0.2220105);
   h_nJet_Data__158->SetBinContent(3,0.3535875);
   h_nJet_Data__158->SetBinContent(4,0.2411452);
   h_nJet_Data__158->SetBinContent(5,0.1156738);
   h_nJet_Data__158->SetBinContent(6,0.045308);
   h_nJet_Data__158->SetBinContent(7,0.01540074);
   h_nJet_Data__158->SetBinContent(8,0.004922735);
   h_nJet_Data__158->SetBinContent(9,0.001951449);
   h_nJet_Data__158->SetBinError(2,0.0005761825);
   h_nJet_Data__158->SetBinError(3,0.0007271462);
   h_nJet_Data__158->SetBinError(4,0.0006004995);
   h_nJet_Data__158->SetBinError(5,0.0004159018);
   h_nJet_Data__158->SetBinError(6,0.000260292);
   h_nJet_Data__158->SetBinError(7,0.0001517554);
   h_nJet_Data__158->SetBinError(8,8.579787e-05);
   h_nJet_Data__158->SetBinError(9,5.401966e-05);
   h_nJet_Data__158->SetEntries(668734);
   h_nJet_Data__158->SetStats(0);
   h_nJet_Data__158->SetLineWidth(3);
   h_nJet_Data__158->SetMarkerStyle(20);
   h_nJet_Data__158->SetMarkerSize(2);
   h_nJet_Data__158->GetXaxis()->SetTitle("N_{jet}");
   h_nJet_Data__158->GetXaxis()->SetLabelFont(42);
   h_nJet_Data__158->GetXaxis()->SetLabelOffset(0.007);
   h_nJet_Data__158->GetXaxis()->SetTitleSize(0.05);
   h_nJet_Data__158->GetXaxis()->SetTickLength(0.025);
   h_nJet_Data__158->GetXaxis()->SetTitleFont(42);
   h_nJet_Data__158->GetYaxis()->SetTitle("a.u.");
   h_nJet_Data__158->GetYaxis()->SetLabelFont(42);
   h_nJet_Data__158->GetYaxis()->SetLabelOffset(0.007);
   h_nJet_Data__158->GetYaxis()->SetTitleSize(0.05);
   h_nJet_Data__158->GetYaxis()->SetTickLength(0.025);
   h_nJet_Data__158->GetYaxis()->SetTitleFont(42);
   h_nJet_Data__158->GetZaxis()->SetLabelFont(42);
   h_nJet_Data__158->GetZaxis()->SetLabelOffset(0.007);
   h_nJet_Data__158->GetZaxis()->SetTitleSize(0.05);
   h_nJet_Data__158->GetZaxis()->SetTickLength(0.025);
   h_nJet_Data__158->GetZaxis()->SetTitleFont(42);
   h_nJet_Data__158->Draw("elp same");
   
   TLegend *leg = new TLegend(0.6,0.55,0.88,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("h_nJet_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_nJet_#gamma+jets (LF)","#gamma+jets (LF)","F");

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
   entry=leg->AddEntry("h_nJet_#gamma+jets (HF)","#gamma+jets (HF)","F");

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
   entry=leg->AddEntry("h_nJet_QCD","QCD","F");

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
   entry=leg->AddEntry("h_nJet_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_nJet_#gamma+jets (LF)","#gamma+jets (LF)","F");

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
   entry=leg->AddEntry("h_nJet_#gamma+jets (HF)","#gamma+jets (HF)","F");

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
   entry=leg->AddEntry("h_nJet_QCD","QCD","F");

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
   pad2->Range(-2.1875,-0.8914286,9.0625,0.48);
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
   
   TH1D *ratio__159 = new TH1D("ratio__159","",9,-0.5,8.5);
   ratio__159->SetBinContent(1,-999);
   ratio__159->SetBinContent(2,-0.03586775);
   ratio__159->SetBinContent(3,0.02929378);
   ratio__159->SetBinContent(4,0.03646517);
   ratio__159->SetBinContent(5,-0.05972666);
   ratio__159->SetBinContent(6,-0.04733956);
   ratio__159->SetBinContent(7,-0.03637326);
   ratio__159->SetBinContent(8,-0.0549134);
   ratio__159->SetBinContent(9,0.1007693);
   ratio__159->SetBinError(1,0.0001);
   ratio__159->SetBinError(2,0.0001);
   ratio__159->SetBinError(3,0.0001);
   ratio__159->SetBinError(4,0.0001);
   ratio__159->SetBinError(5,0.0001);
   ratio__159->SetBinError(6,0.0001);
   ratio__159->SetBinError(7,0.0001);
   ratio__159->SetBinError(8,0.0001);
   ratio__159->SetBinError(9,0.0001);
   ratio__159->SetMinimum(-0.48);
   ratio__159->SetMaximum(0.48);
   ratio__159->SetEntries(668743);
   ratio__159->SetStats(0);
   ratio__159->SetLineWidth(3);
   ratio__159->SetMarkerStyle(20);
   ratio__159->SetMarkerSize(2);
   ratio__159->GetXaxis()->SetTitle("N_{jet}");
   ratio__159->GetXaxis()->SetLabelFont(43);
   ratio__159->GetXaxis()->SetLabelOffset(0.007);
   ratio__159->GetXaxis()->SetLabelSize(30);
   ratio__159->GetXaxis()->SetTitleSize(40);
   ratio__159->GetXaxis()->SetTickLength(0.025);
   ratio__159->GetXaxis()->SetTitleOffset(5);
   ratio__159->GetXaxis()->SetTitleFont(43);
   ratio__159->GetYaxis()->SetTitle("#frac{Data-Exp}{Exp}");
   ratio__159->GetYaxis()->SetNdivisions(5);
   ratio__159->GetYaxis()->SetLabelFont(43);
   ratio__159->GetYaxis()->SetLabelOffset(0.007);
   ratio__159->GetYaxis()->SetLabelSize(30);
   ratio__159->GetYaxis()->SetTitleSize(40);
   ratio__159->GetYaxis()->SetTickLength(0.025);
   ratio__159->GetYaxis()->SetTitleOffset(2.5);
   ratio__159->GetYaxis()->SetTitleFont(43);
   ratio__159->GetZaxis()->SetLabelFont(42);
   ratio__159->GetZaxis()->SetLabelOffset(0.007);
   ratio__159->GetZaxis()->SetTitleSize(0.05);
   ratio__159->GetZaxis()->SetTickLength(0.025);
   ratio__159->GetZaxis()->SetTitleFont(42);
   ratio__159->Draw("elp");
   
   TH1D *zero__160 = new TH1D("zero__160","",9,-0.5,8.5);
   zero__160->SetBinError(2,0.0005761825);
   zero__160->SetBinError(3,0.0007271462);
   zero__160->SetBinError(4,0.0006004995);
   zero__160->SetBinError(5,0.0004159018);
   zero__160->SetBinError(6,0.000260292);
   zero__160->SetBinError(7,0.0001517554);
   zero__160->SetBinError(8,8.579787e-05);
   zero__160->SetBinError(9,5.401966e-05);
   zero__160->SetEntries(668743);
   zero__160->SetStats(0);
   zero__160->SetLineWidth(3);
   zero__160->SetMarkerStyle(20);
   zero__160->SetMarkerSize(2);
   zero__160->GetXaxis()->SetTitle("N_{jet}");
   zero__160->GetXaxis()->SetLabelFont(42);
   zero__160->GetXaxis()->SetLabelOffset(0.007);
   zero__160->GetXaxis()->SetTitleSize(0.05);
   zero__160->GetXaxis()->SetTickLength(0.025);
   zero__160->GetXaxis()->SetTitleFont(42);
   zero__160->GetYaxis()->SetTitle("a.u.");
   zero__160->GetYaxis()->SetLabelFont(42);
   zero__160->GetYaxis()->SetLabelOffset(0.007);
   zero__160->GetYaxis()->SetTitleSize(0.05);
   zero__160->GetYaxis()->SetTickLength(0.025);
   zero__160->GetYaxis()->SetTitleFont(42);
   zero__160->GetZaxis()->SetLabelFont(42);
   zero__160->GetZaxis()->SetLabelOffset(0.007);
   zero__160->GetZaxis()->SetTitleSize(0.05);
   zero__160->GetZaxis()->SetTickLength(0.025);
   zero__160->GetZaxis()->SetTitleFont(42);
   zero__160->Draw("hist same");
   
   TH1D *sumratioup__161 = new TH1D("sumratioup__161","",9,-0.5,8.5);
   sumratioup__161->SetBinContent(2,0.01417863);
   sumratioup__161->SetBinContent(3,0.007818807);
   sumratioup__161->SetBinContent(4,0.007530671);
   sumratioup__161->SetBinContent(5,0.009239881);
   sumratioup__161->SetBinContent(6,0.01257475);
   sumratioup__161->SetBinContent(7,0.01936462);
   sumratioup__161->SetBinContent(8,0.03094959);
   sumratioup__161->SetBinContent(9,0.04877351);
   sumratioup__161->SetBinError(2,0.003264911);
   sumratioup__161->SetBinError(3,0.002685951);
   sumratioup__161->SetBinError(4,0.001752095);
   sumratioup__161->SetBinError(5,0.001136704);
   sumratioup__161->SetBinError(6,0.0005980483);
   sumratioup__161->SetBinError(7,0.0003094865);
   sumratioup__161->SetBinError(8,0.0001612091);
   sumratioup__161->SetBinError(9,8.646589e-05);
   sumratioup__161->SetEntries(668761);
   sumratioup__161->SetStats(0);

   ci = 1197;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratioup__161->SetFillColor(ci);
   sumratioup__161->SetFillStyle(3003);
   sumratioup__161->GetXaxis()->SetTitle("N_{jet}");
   sumratioup__161->GetXaxis()->SetLabelFont(42);
   sumratioup__161->GetXaxis()->SetLabelOffset(0.007);
   sumratioup__161->GetXaxis()->SetTitleSize(0.05);
   sumratioup__161->GetXaxis()->SetTickLength(0.025);
   sumratioup__161->GetXaxis()->SetTitleFont(42);
   sumratioup__161->GetYaxis()->SetTitle("a.u.");
   sumratioup__161->GetYaxis()->SetLabelFont(42);
   sumratioup__161->GetYaxis()->SetLabelOffset(0.007);
   sumratioup__161->GetYaxis()->SetTitleSize(0.05);
   sumratioup__161->GetYaxis()->SetTickLength(0.025);
   sumratioup__161->GetYaxis()->SetTitleFont(42);
   sumratioup__161->GetZaxis()->SetLabelFont(42);
   sumratioup__161->GetZaxis()->SetLabelOffset(0.007);
   sumratioup__161->GetZaxis()->SetTitleSize(0.05);
   sumratioup__161->GetZaxis()->SetTickLength(0.025);
   sumratioup__161->GetZaxis()->SetTitleFont(42);
   sumratioup__161->Draw("hist same");
   
   TH1D *sumratiodown__162 = new TH1D("sumratiodown__162","",9,-0.5,8.5);
   sumratiodown__162->SetBinContent(2,-0.01417863);
   sumratiodown__162->SetBinContent(3,-0.007818807);
   sumratiodown__162->SetBinContent(4,-0.007530671);
   sumratiodown__162->SetBinContent(5,-0.009239881);
   sumratiodown__162->SetBinContent(6,-0.01257475);
   sumratiodown__162->SetBinContent(7,-0.01936462);
   sumratiodown__162->SetBinContent(8,-0.03094959);
   sumratiodown__162->SetBinContent(9,-0.04877351);
   sumratiodown__162->SetBinError(2,0.003264911);
   sumratiodown__162->SetBinError(3,0.002685951);
   sumratiodown__162->SetBinError(4,0.001752095);
   sumratiodown__162->SetBinError(5,0.001136704);
   sumratiodown__162->SetBinError(6,0.0005980483);
   sumratiodown__162->SetBinError(7,0.0003094865);
   sumratiodown__162->SetBinError(8,0.0001612091);
   sumratiodown__162->SetBinError(9,8.646589e-05);
   sumratiodown__162->SetEntries(668761);
   sumratiodown__162->SetStats(0);

   ci = 1197;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratiodown__162->SetFillColor(ci);
   sumratiodown__162->SetFillStyle(3003);
   sumratiodown__162->GetXaxis()->SetTitle("N_{jet}");
   sumratiodown__162->GetXaxis()->SetLabelFont(42);
   sumratiodown__162->GetXaxis()->SetLabelOffset(0.007);
   sumratiodown__162->GetXaxis()->SetTitleSize(0.05);
   sumratiodown__162->GetXaxis()->SetTickLength(0.025);
   sumratiodown__162->GetXaxis()->SetTitleFont(42);
   sumratiodown__162->GetYaxis()->SetTitle("a.u.");
   sumratiodown__162->GetYaxis()->SetLabelFont(42);
   sumratiodown__162->GetYaxis()->SetLabelOffset(0.007);
   sumratiodown__162->GetYaxis()->SetTitleSize(0.05);
   sumratiodown__162->GetYaxis()->SetTickLength(0.025);
   sumratiodown__162->GetYaxis()->SetTitleFont(42);
   sumratiodown__162->GetZaxis()->SetLabelFont(42);
   sumratiodown__162->GetZaxis()->SetLabelOffset(0.007);
   sumratiodown__162->GetZaxis()->SetTitleSize(0.05);
   sumratiodown__162->GetZaxis()->SetTickLength(0.025);
   sumratiodown__162->GetZaxis()->SetTitleFont(42);
   sumratiodown__162->Draw("hist same");
   
   Double_t Graph0_fx1018[9] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t Graph0_fy1018[9] = {
   -999,
   -0.03586775,
   0.02929378,
   0.03646517,
   -0.05972666,
   -0.04733956,
   -0.03637326,
   -0.0549134,
   0.1007693};
   Double_t Graph0_fex1018[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1018[9] = {
   0,
   0.002502206,
   0.002116723,
   0.002581004,
   0.003380726,
   0.005472981,
   0.009495358,
   0.01647183,
   0.0304713};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1018,Graph0_fy1018,Graph0_fex1018,Graph0_fey1018);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1018 = new TH1F("Graph_Graph1018","Graph",100,0,8.8);
   Graph_Graph1018->SetMinimum(-1098.913);
   Graph_Graph1018->SetMaximum(100.0444);
   Graph_Graph1018->SetDirectory(0);
   Graph_Graph1018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1018->SetLineColor(ci);
   Graph_Graph1018->GetXaxis()->SetLabelFont(42);
   Graph_Graph1018->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1018->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1018->GetXaxis()->SetTickLength(0.025);
   Graph_Graph1018->GetXaxis()->SetTitleFont(42);
   Graph_Graph1018->GetYaxis()->SetLabelFont(42);
   Graph_Graph1018->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1018->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1018->GetYaxis()->SetTickLength(0.025);
   Graph_Graph1018->GetYaxis()->SetTitleFont(42);
   Graph_Graph1018->GetZaxis()->SetLabelFont(42);
   Graph_Graph1018->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1018->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph1018->GetZaxis()->SetTickLength(0.025);
   Graph_Graph1018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1018);
   
   gre->Draw("pe0");
   pad2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
