void photon_nJet()
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
   pad1->Range(-2.1875,0,9.0625,0.7757004);
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
   h->SetMaximum(0.6870489);
   
   TH1F *h_stack_17 = new TH1F("h_stack_17","",9,-0.5,8.5);
   h_stack_17->SetMinimum(0);
   h_stack_17->SetMaximum(0.7214013);
   h_stack_17->SetDirectory(0);
   h_stack_17->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h_stack_17->SetLineColor(ci);
   h_stack_17->GetXaxis()->SetLabelFont(42);
   h_stack_17->GetXaxis()->SetLabelOffset(0.007);
   h_stack_17->GetXaxis()->SetTitleSize(0.05);
   h_stack_17->GetXaxis()->SetTickLength(0.025);
   h_stack_17->GetXaxis()->SetTitleFont(42);
   h_stack_17->GetYaxis()->SetTitle("a.u.");
   h_stack_17->GetYaxis()->SetLabelFont(42);
   h_stack_17->GetYaxis()->SetLabelOffset(0.007);
   h_stack_17->GetYaxis()->SetTitleSize(0.05);
   h_stack_17->GetYaxis()->SetTickLength(0.025);
   h_stack_17->GetYaxis()->SetTitleOffset(1.5);
   h_stack_17->GetYaxis()->SetTitleFont(42);
   h_stack_17->GetZaxis()->SetLabelFont(42);
   h_stack_17->GetZaxis()->SetLabelOffset(0.007);
   h_stack_17->GetZaxis()->SetTitleSize(0.05);
   h_stack_17->GetZaxis()->SetTickLength(0.025);
   h_stack_17->GetZaxis()->SetTitleFont(42);
   h->SetHistogram(h_stack_17);
   
   
   TH1D *h_nJet_QCD__145 = new TH1D("h_nJet_QCD__145","",9,-0.5,8.5);
   h_nJet_QCD__145->SetBinContent(2,0.007934832);
   h_nJet_QCD__145->SetBinContent(3,0.01190145);
   h_nJet_QCD__145->SetBinContent(4,0.007835691);
   h_nJet_QCD__145->SetBinContent(5,0.003665959);
   h_nJet_QCD__145->SetBinContent(6,0.001409073);
   h_nJet_QCD__145->SetBinContent(7,0.0004720993);
   h_nJet_QCD__145->SetBinContent(8,0.0001488269);
   h_nJet_QCD__145->SetBinContent(9,5.862043e-05);
   h_nJet_QCD__145->SetBinError(2,2.06652e-05);
   h_nJet_QCD__145->SetBinError(3,2.470063e-05);
   h_nJet_QCD__145->SetBinError(4,1.974567e-05);
   h_nJet_QCD__145->SetBinError(5,1.336667e-05);
   h_nJet_QCD__145->SetBinError(6,8.223606e-06);
   h_nJet_QCD__145->SetBinError(7,4.731202e-06);
   h_nJet_QCD__145->SetBinError(8,2.642226e-06);
   h_nJet_QCD__145->SetBinError(9,1.653746e-06);
   h_nJet_QCD__145->SetEntries(668734);
   h_nJet_QCD__145->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_nJet_QCD__145->SetFillColor(ci);
   h_nJet_QCD__145->GetXaxis()->SetTitle("N_{jet}");
   h_nJet_QCD__145->GetXaxis()->SetLabelFont(42);
   h_nJet_QCD__145->GetXaxis()->SetLabelOffset(0.007);
   h_nJet_QCD__145->GetXaxis()->SetTitleSize(0.05);
   h_nJet_QCD__145->GetXaxis()->SetTickLength(0.025);
   h_nJet_QCD__145->GetXaxis()->SetTitleFont(42);
   h_nJet_QCD__145->GetYaxis()->SetTitle("a.u.");
   h_nJet_QCD__145->GetYaxis()->SetLabelFont(42);
   h_nJet_QCD__145->GetYaxis()->SetLabelOffset(0.007);
   h_nJet_QCD__145->GetYaxis()->SetTitleSize(0.05);
   h_nJet_QCD__145->GetYaxis()->SetTickLength(0.025);
   h_nJet_QCD__145->GetYaxis()->SetTitleFont(42);
   h_nJet_QCD__145->GetZaxis()->SetLabelFont(42);
   h_nJet_QCD__145->GetZaxis()->SetLabelOffset(0.007);
   h_nJet_QCD__145->GetZaxis()->SetTitleSize(0.05);
   h_nJet_QCD__145->GetZaxis()->SetTickLength(0.025);
   h_nJet_QCD__145->GetZaxis()->SetTitleFont(42);
   h->Add(h_nJet_QCD,"");
   
   TH1D *h_nJet_#gammapLjetssPoPHFcP__146 = new TH1D("h_nJet_#gammapLjetssPoPHFcP__146","",9,-0.5,8.5);
   h_nJet_#gammapLjetssPoPHFcP__146->SetBinContent(2,0.03197374);
   h_nJet_#gammapLjetssPoPHFcP__146->SetBinContent(3,0.04162464);
   h_nJet_#gammapLjetssPoPHFcP__146->SetBinContent(4,0.02910559);
   h_nJet_#gammapLjetssPoPHFcP__146->SetBinContent(5,0.0155296);
   h_nJet_#gammapLjetssPoPHFcP__146->SetBinContent(6,0.005789362);
   h_nJet_#gammapLjetssPoPHFcP__146->SetBinContent(7,0.001928571);
   h_nJet_#gammapLjetssPoPHFcP__146->SetBinContent(8,0.0007411268);
   h_nJet_#gammapLjetssPoPHFcP__146->SetBinContent(9,0.0002512278);
   h_nJet_#gammapLjetssPoPHFcP__146->SetBinError(2,0.001221566);
   h_nJet_#gammapLjetssPoPHFcP__146->SetBinError(3,0.0009631312);
   h_nJet_#gammapLjetssPoPHFcP__146->SetBinError(4,0.0006483143);
   h_nJet_#gammapLjetssPoPHFcP__146->SetBinError(5,0.0004174019);
   h_nJet_#gammapLjetssPoPHFcP__146->SetBinError(6,0.0002166651);
   h_nJet_#gammapLjetssPoPHFcP__146->SetBinError(7,0.0001036893);
   h_nJet_#gammapLjetssPoPHFcP__146->SetBinError(8,6.274574e-05);
   h_nJet_#gammapLjetssPoPHFcP__146->SetBinError(9,3.481054e-05);
   h_nJet_#gammapLjetssPoPHFcP__146->SetEntries(14151);
   h_nJet_#gammapLjetssPoPHFcP__146->SetStats(0);

   ci = TColor::GetColor("#ff6633");
   h_nJet_#gammapLjetssPoPHFcP__146->SetFillColor(ci);
   h_nJet_#gammapLjetssPoPHFcP__146->GetXaxis()->SetTitle("N_{jet}");
   h_nJet_#gammapLjetssPoPHFcP__146->GetXaxis()->SetLabelFont(42);
   h_nJet_#gammapLjetssPoPHFcP__146->GetXaxis()->SetLabelOffset(0.007);
   h_nJet_#gammapLjetssPoPHFcP__146->GetXaxis()->SetTitleSize(0.05);
   h_nJet_#gammapLjetssPoPHFcP__146->GetXaxis()->SetTickLength(0.025);
   h_nJet_#gammapLjetssPoPHFcP__146->GetXaxis()->SetTitleFont(42);
   h_nJet_#gammapLjetssPoPHFcP__146->GetYaxis()->SetTitle("a.u.");
   h_nJet_#gammapLjetssPoPHFcP__146->GetYaxis()->SetLabelFont(42);
   h_nJet_#gammapLjetssPoPHFcP__146->GetYaxis()->SetLabelOffset(0.007);
   h_nJet_#gammapLjetssPoPHFcP__146->GetYaxis()->SetTitleSize(0.05);
   h_nJet_#gammapLjetssPoPHFcP__146->GetYaxis()->SetTickLength(0.025);
   h_nJet_#gammapLjetssPoPHFcP__146->GetYaxis()->SetTitleFont(42);
   h_nJet_#gammapLjetssPoPHFcP__146->GetZaxis()->SetLabelFont(42);
   h_nJet_#gammapLjetssPoPHFcP__146->GetZaxis()->SetLabelOffset(0.007);
   h_nJet_#gammapLjetssPoPHFcP__146->GetZaxis()->SetTitleSize(0.05);
   h_nJet_#gammapLjetssPoPHFcP__146->GetZaxis()->SetTickLength(0.025);
   h_nJet_#gammapLjetssPoPHFcP__146->GetZaxis()->SetTitleFont(42);
   h->Add(h_nJet_#gamma+jets (HF),"");
   
   TH1D *h_nJet_#gammapLjetssPoPLFcP__147 = new TH1D("h_nJet_#gammapLjetssPoPLFcP__147","",9,-0.5,8.5);
   h_nJet_#gammapLjetssPoPLFcP__147->SetBinContent(2,0.1903612);
   h_nJet_#gammapLjetssPoPLFcP__147->SetBinContent(3,0.2899984);
   h_nJet_#gammapLjetssPoPLFcP__147->SetBinContent(4,0.1957199);
   h_nJet_#gammapLjetssPoPLFcP__147->SetBinContent(5,0.1038259);
   h_nJet_#gammapLjetssPoPLFcP__147->SetBinContent(6,0.04036101);
   h_nJet_#gammapLjetssPoPLFcP__147->SetBinContent(7,0.01358139);
   h_nJet_#gammapLjetssPoPLFcP__147->SetBinContent(8,0.004318812);
   h_nJet_#gammapLjetssPoPLFcP__147->SetBinContent(9,0.001462956);
   h_nJet_#gammapLjetssPoPLFcP__147->SetBinError(2,0.003027704);
   h_nJet_#gammapLjetssPoPLFcP__147->SetBinError(3,0.00250721);
   h_nJet_#gammapLjetssPoPLFcP__147->SetBinError(4,0.001627616);
   h_nJet_#gammapLjetssPoPLFcP__147->SetBinError(5,0.00105721);
   h_nJet_#gammapLjetssPoPLFcP__147->SetBinError(6,0.0005573601);
   h_nJet_#gammapLjetssPoPLFcP__147->SetBinError(7,0.0002915614);
   h_nJet_#gammapLjetssPoPLFcP__147->SetBinError(8,0.0001484735);
   h_nJet_#gammapLjetssPoPLFcP__147->SetBinError(9,7.913179e-05);
   h_nJet_#gammapLjetssPoPLFcP__147->SetEntries(99281);
   h_nJet_#gammapLjetssPoPLFcP__147->SetStats(0);

   ci = TColor::GetColor("#339999");
   h_nJet_#gammapLjetssPoPLFcP__147->SetFillColor(ci);
   h_nJet_#gammapLjetssPoPLFcP__147->GetXaxis()->SetTitle("N_{jet}");
   h_nJet_#gammapLjetssPoPLFcP__147->GetXaxis()->SetLabelFont(42);
   h_nJet_#gammapLjetssPoPLFcP__147->GetXaxis()->SetLabelOffset(0.007);
   h_nJet_#gammapLjetssPoPLFcP__147->GetXaxis()->SetTitleSize(0.05);
   h_nJet_#gammapLjetssPoPLFcP__147->GetXaxis()->SetTickLength(0.025);
   h_nJet_#gammapLjetssPoPLFcP__147->GetXaxis()->SetTitleFont(42);
   h_nJet_#gammapLjetssPoPLFcP__147->GetYaxis()->SetTitle("a.u.");
   h_nJet_#gammapLjetssPoPLFcP__147->GetYaxis()->SetLabelFont(42);
   h_nJet_#gammapLjetssPoPLFcP__147->GetYaxis()->SetLabelOffset(0.007);
   h_nJet_#gammapLjetssPoPLFcP__147->GetYaxis()->SetTitleSize(0.05);
   h_nJet_#gammapLjetssPoPLFcP__147->GetYaxis()->SetTickLength(0.025);
   h_nJet_#gammapLjetssPoPLFcP__147->GetYaxis()->SetTitleFont(42);
   h_nJet_#gammapLjetssPoPLFcP__147->GetZaxis()->SetLabelFont(42);
   h_nJet_#gammapLjetssPoPLFcP__147->GetZaxis()->SetLabelOffset(0.007);
   h_nJet_#gammapLjetssPoPLFcP__147->GetZaxis()->SetTitleSize(0.05);
   h_nJet_#gammapLjetssPoPLFcP__147->GetZaxis()->SetTickLength(0.025);
   h_nJet_#gammapLjetssPoPLFcP__147->GetZaxis()->SetTitleFont(42);
   h->Add(h_nJet_#gamma+jets (LF),"");
   h->Draw("hist");
   
   TH1D *hsum__148 = new TH1D("hsum__148","",9,-0.5,8.5);
   hsum__148->SetBinContent(2,0.2302698);
   hsum__148->SetBinContent(3,0.3435244);
   hsum__148->SetBinContent(4,0.2326612);
   hsum__148->SetBinContent(5,0.1230215);
   hsum__148->SetBinContent(6,0.04755944);
   hsum__148->SetBinContent(7,0.01598206);
   hsum__148->SetBinContent(8,0.005208766);
   hsum__148->SetBinContent(9,0.001772804);
   hsum__148->SetBinError(2,0.003264911);
   hsum__148->SetBinError(3,0.002685951);
   hsum__148->SetBinError(4,0.001752095);
   hsum__148->SetBinError(5,0.001136704);
   hsum__148->SetBinError(6,0.0005980483);
   hsum__148->SetBinError(7,0.0003094865);
   hsum__148->SetBinError(8,0.0001612091);
   hsum__148->SetBinError(9,8.646589e-05);
   hsum__148->SetEntries(668752);
   hsum__148->SetStats(0);

   ci = 1196;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   hsum__148->SetFillColor(ci);
   hsum__148->SetFillStyle(3003);
   hsum__148->SetLineWidth(0);
   hsum__148->GetXaxis()->SetTitle("N_{jet}");
   hsum__148->GetXaxis()->SetLabelFont(42);
   hsum__148->GetXaxis()->SetLabelOffset(0.007);
   hsum__148->GetXaxis()->SetTitleSize(0.05);
   hsum__148->GetXaxis()->SetTickLength(0.025);
   hsum__148->GetXaxis()->SetTitleFont(42);
   hsum__148->GetYaxis()->SetTitle("a.u.");
   hsum__148->GetYaxis()->SetLabelFont(42);
   hsum__148->GetYaxis()->SetLabelOffset(0.007);
   hsum__148->GetYaxis()->SetTitleSize(0.05);
   hsum__148->GetYaxis()->SetTickLength(0.025);
   hsum__148->GetYaxis()->SetTitleFont(42);
   hsum__148->GetZaxis()->SetLabelFont(42);
   hsum__148->GetZaxis()->SetLabelOffset(0.007);
   hsum__148->GetZaxis()->SetTitleSize(0.05);
   hsum__148->GetZaxis()->SetTickLength(0.025);
   hsum__148->GetZaxis()->SetTitleFont(42);
   hsum__148->Draw("e2 same");
   
   TH1D *h_nJet_Data__149 = new TH1D("h_nJet_Data__149","",9,-0.5,8.5);
   h_nJet_Data__149->SetBinContent(2,0.2220105);
   h_nJet_Data__149->SetBinContent(3,0.3535875);
   h_nJet_Data__149->SetBinContent(4,0.2411452);
   h_nJet_Data__149->SetBinContent(5,0.1156738);
   h_nJet_Data__149->SetBinContent(6,0.045308);
   h_nJet_Data__149->SetBinContent(7,0.01540074);
   h_nJet_Data__149->SetBinContent(8,0.004922735);
   h_nJet_Data__149->SetBinContent(9,0.001951449);
   h_nJet_Data__149->SetBinError(2,0.0005761825);
   h_nJet_Data__149->SetBinError(3,0.0007271462);
   h_nJet_Data__149->SetBinError(4,0.0006004995);
   h_nJet_Data__149->SetBinError(5,0.0004159018);
   h_nJet_Data__149->SetBinError(6,0.000260292);
   h_nJet_Data__149->SetBinError(7,0.0001517554);
   h_nJet_Data__149->SetBinError(8,8.579787e-05);
   h_nJet_Data__149->SetBinError(9,5.401966e-05);
   h_nJet_Data__149->SetEntries(668734);
   h_nJet_Data__149->SetStats(0);
   h_nJet_Data__149->SetLineWidth(3);
   h_nJet_Data__149->SetMarkerStyle(20);
   h_nJet_Data__149->SetMarkerSize(2);
   h_nJet_Data__149->GetXaxis()->SetTitle("N_{jet}");
   h_nJet_Data__149->GetXaxis()->SetLabelFont(42);
   h_nJet_Data__149->GetXaxis()->SetLabelOffset(0.007);
   h_nJet_Data__149->GetXaxis()->SetTitleSize(0.05);
   h_nJet_Data__149->GetXaxis()->SetTickLength(0.025);
   h_nJet_Data__149->GetXaxis()->SetTitleFont(42);
   h_nJet_Data__149->GetYaxis()->SetTitle("a.u.");
   h_nJet_Data__149->GetYaxis()->SetLabelFont(42);
   h_nJet_Data__149->GetYaxis()->SetLabelOffset(0.007);
   h_nJet_Data__149->GetYaxis()->SetTitleSize(0.05);
   h_nJet_Data__149->GetYaxis()->SetTickLength(0.025);
   h_nJet_Data__149->GetYaxis()->SetTitleFont(42);
   h_nJet_Data__149->GetZaxis()->SetLabelFont(42);
   h_nJet_Data__149->GetZaxis()->SetLabelOffset(0.007);
   h_nJet_Data__149->GetZaxis()->SetTitleSize(0.05);
   h_nJet_Data__149->GetZaxis()->SetTickLength(0.025);
   h_nJet_Data__149->GetZaxis()->SetTitleFont(42);
   h_nJet_Data__149->Draw("elp same");
   
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
   
   TH1D *ratio__150 = new TH1D("ratio__150","",9,-0.5,8.5);
   ratio__150->SetBinContent(1,-999);
   ratio__150->SetBinContent(2,-0.03586775);
   ratio__150->SetBinContent(3,0.02929378);
   ratio__150->SetBinContent(4,0.03646517);
   ratio__150->SetBinContent(5,-0.05972666);
   ratio__150->SetBinContent(6,-0.04733956);
   ratio__150->SetBinContent(7,-0.03637326);
   ratio__150->SetBinContent(8,-0.0549134);
   ratio__150->SetBinContent(9,0.1007693);
   ratio__150->SetBinError(1,0.0001);
   ratio__150->SetBinError(2,0.0001);
   ratio__150->SetBinError(3,0.0001);
   ratio__150->SetBinError(4,0.0001);
   ratio__150->SetBinError(5,0.0001);
   ratio__150->SetBinError(6,0.0001);
   ratio__150->SetBinError(7,0.0001);
   ratio__150->SetBinError(8,0.0001);
   ratio__150->SetBinError(9,0.0001);
   ratio__150->SetMinimum(-0.48);
   ratio__150->SetMaximum(0.48);
   ratio__150->SetEntries(668743);
   ratio__150->SetStats(0);
   ratio__150->SetLineWidth(3);
   ratio__150->SetMarkerStyle(20);
   ratio__150->SetMarkerSize(2);
   ratio__150->GetXaxis()->SetTitle("N_{jet}");
   ratio__150->GetXaxis()->SetLabelFont(43);
   ratio__150->GetXaxis()->SetLabelOffset(0.007);
   ratio__150->GetXaxis()->SetLabelSize(30);
   ratio__150->GetXaxis()->SetTitleSize(40);
   ratio__150->GetXaxis()->SetTickLength(0.025);
   ratio__150->GetXaxis()->SetTitleOffset(5);
   ratio__150->GetXaxis()->SetTitleFont(43);
   ratio__150->GetYaxis()->SetTitle("#frac{Data-Exp}{Exp}");
   ratio__150->GetYaxis()->SetNdivisions(5);
   ratio__150->GetYaxis()->SetLabelFont(43);
   ratio__150->GetYaxis()->SetLabelOffset(0.007);
   ratio__150->GetYaxis()->SetLabelSize(30);
   ratio__150->GetYaxis()->SetTitleSize(40);
   ratio__150->GetYaxis()->SetTickLength(0.025);
   ratio__150->GetYaxis()->SetTitleOffset(2.5);
   ratio__150->GetYaxis()->SetTitleFont(43);
   ratio__150->GetZaxis()->SetLabelFont(42);
   ratio__150->GetZaxis()->SetLabelOffset(0.007);
   ratio__150->GetZaxis()->SetTitleSize(0.05);
   ratio__150->GetZaxis()->SetTickLength(0.025);
   ratio__150->GetZaxis()->SetTitleFont(42);
   ratio__150->Draw("elp");
   
   TH1D *zero__151 = new TH1D("zero__151","",9,-0.5,8.5);
   zero__151->SetBinError(2,0.0005761825);
   zero__151->SetBinError(3,0.0007271462);
   zero__151->SetBinError(4,0.0006004995);
   zero__151->SetBinError(5,0.0004159018);
   zero__151->SetBinError(6,0.000260292);
   zero__151->SetBinError(7,0.0001517554);
   zero__151->SetBinError(8,8.579787e-05);
   zero__151->SetBinError(9,5.401966e-05);
   zero__151->SetEntries(668743);
   zero__151->SetStats(0);
   zero__151->SetLineWidth(3);
   zero__151->SetMarkerStyle(20);
   zero__151->SetMarkerSize(2);
   zero__151->GetXaxis()->SetTitle("N_{jet}");
   zero__151->GetXaxis()->SetLabelFont(42);
   zero__151->GetXaxis()->SetLabelOffset(0.007);
   zero__151->GetXaxis()->SetTitleSize(0.05);
   zero__151->GetXaxis()->SetTickLength(0.025);
   zero__151->GetXaxis()->SetTitleFont(42);
   zero__151->GetYaxis()->SetTitle("a.u.");
   zero__151->GetYaxis()->SetLabelFont(42);
   zero__151->GetYaxis()->SetLabelOffset(0.007);
   zero__151->GetYaxis()->SetTitleSize(0.05);
   zero__151->GetYaxis()->SetTickLength(0.025);
   zero__151->GetYaxis()->SetTitleFont(42);
   zero__151->GetZaxis()->SetLabelFont(42);
   zero__151->GetZaxis()->SetLabelOffset(0.007);
   zero__151->GetZaxis()->SetTitleSize(0.05);
   zero__151->GetZaxis()->SetTickLength(0.025);
   zero__151->GetZaxis()->SetTitleFont(42);
   zero__151->Draw("hist same");
   
   TH1D *sumratioup__152 = new TH1D("sumratioup__152","",9,-0.5,8.5);
   sumratioup__152->SetBinContent(2,0.01417863);
   sumratioup__152->SetBinContent(3,0.007818807);
   sumratioup__152->SetBinContent(4,0.007530671);
   sumratioup__152->SetBinContent(5,0.009239881);
   sumratioup__152->SetBinContent(6,0.01257475);
   sumratioup__152->SetBinContent(7,0.01936462);
   sumratioup__152->SetBinContent(8,0.03094959);
   sumratioup__152->SetBinContent(9,0.04877351);
   sumratioup__152->SetBinError(2,0.003264911);
   sumratioup__152->SetBinError(3,0.002685951);
   sumratioup__152->SetBinError(4,0.001752095);
   sumratioup__152->SetBinError(5,0.001136704);
   sumratioup__152->SetBinError(6,0.0005980483);
   sumratioup__152->SetBinError(7,0.0003094865);
   sumratioup__152->SetBinError(8,0.0001612091);
   sumratioup__152->SetBinError(9,8.646589e-05);
   sumratioup__152->SetEntries(668761);
   sumratioup__152->SetStats(0);

   ci = 1196;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratioup__152->SetFillColor(ci);
   sumratioup__152->SetFillStyle(3003);
   sumratioup__152->GetXaxis()->SetTitle("N_{jet}");
   sumratioup__152->GetXaxis()->SetLabelFont(42);
   sumratioup__152->GetXaxis()->SetLabelOffset(0.007);
   sumratioup__152->GetXaxis()->SetTitleSize(0.05);
   sumratioup__152->GetXaxis()->SetTickLength(0.025);
   sumratioup__152->GetXaxis()->SetTitleFont(42);
   sumratioup__152->GetYaxis()->SetTitle("a.u.");
   sumratioup__152->GetYaxis()->SetLabelFont(42);
   sumratioup__152->GetYaxis()->SetLabelOffset(0.007);
   sumratioup__152->GetYaxis()->SetTitleSize(0.05);
   sumratioup__152->GetYaxis()->SetTickLength(0.025);
   sumratioup__152->GetYaxis()->SetTitleFont(42);
   sumratioup__152->GetZaxis()->SetLabelFont(42);
   sumratioup__152->GetZaxis()->SetLabelOffset(0.007);
   sumratioup__152->GetZaxis()->SetTitleSize(0.05);
   sumratioup__152->GetZaxis()->SetTickLength(0.025);
   sumratioup__152->GetZaxis()->SetTitleFont(42);
   sumratioup__152->Draw("hist same");
   
   TH1D *sumratiodown__153 = new TH1D("sumratiodown__153","",9,-0.5,8.5);
   sumratiodown__153->SetBinContent(2,-0.01417863);
   sumratiodown__153->SetBinContent(3,-0.007818807);
   sumratiodown__153->SetBinContent(4,-0.007530671);
   sumratiodown__153->SetBinContent(5,-0.009239881);
   sumratiodown__153->SetBinContent(6,-0.01257475);
   sumratiodown__153->SetBinContent(7,-0.01936462);
   sumratiodown__153->SetBinContent(8,-0.03094959);
   sumratiodown__153->SetBinContent(9,-0.04877351);
   sumratiodown__153->SetBinError(2,0.003264911);
   sumratiodown__153->SetBinError(3,0.002685951);
   sumratiodown__153->SetBinError(4,0.001752095);
   sumratiodown__153->SetBinError(5,0.001136704);
   sumratiodown__153->SetBinError(6,0.0005980483);
   sumratiodown__153->SetBinError(7,0.0003094865);
   sumratiodown__153->SetBinError(8,0.0001612091);
   sumratiodown__153->SetBinError(9,8.646589e-05);
   sumratiodown__153->SetEntries(668761);
   sumratiodown__153->SetStats(0);

   ci = 1196;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratiodown__153->SetFillColor(ci);
   sumratiodown__153->SetFillStyle(3003);
   sumratiodown__153->GetXaxis()->SetTitle("N_{jet}");
   sumratiodown__153->GetXaxis()->SetLabelFont(42);
   sumratiodown__153->GetXaxis()->SetLabelOffset(0.007);
   sumratiodown__153->GetXaxis()->SetTitleSize(0.05);
   sumratiodown__153->GetXaxis()->SetTickLength(0.025);
   sumratiodown__153->GetXaxis()->SetTitleFont(42);
   sumratiodown__153->GetYaxis()->SetTitle("a.u.");
   sumratiodown__153->GetYaxis()->SetLabelFont(42);
   sumratiodown__153->GetYaxis()->SetLabelOffset(0.007);
   sumratiodown__153->GetYaxis()->SetTitleSize(0.05);
   sumratiodown__153->GetYaxis()->SetTickLength(0.025);
   sumratiodown__153->GetYaxis()->SetTitleFont(42);
   sumratiodown__153->GetZaxis()->SetLabelFont(42);
   sumratiodown__153->GetZaxis()->SetLabelOffset(0.007);
   sumratiodown__153->GetZaxis()->SetTitleSize(0.05);
   sumratiodown__153->GetZaxis()->SetTickLength(0.025);
   sumratiodown__153->GetZaxis()->SetTitleFont(42);
   sumratiodown__153->Draw("hist same");
   
   Double_t Graph0_fx1017[9] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8};
   Double_t Graph0_fy1017[9] = {
   -999,
   -0.03586775,
   0.02929378,
   0.03646517,
   -0.05972666,
   -0.04733956,
   -0.03637326,
   -0.0549134,
   0.1007693};
   Double_t Graph0_fex1017[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1017[9] = {
   0,
   0.002502206,
   0.002116723,
   0.002581004,
   0.003380726,
   0.005472981,
   0.009495358,
   0.01647183,
   0.0304713};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1017,Graph0_fy1017,Graph0_fex1017,Graph0_fey1017);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1017 = new TH1F("Graph_Graph1017","Graph",100,0,8.8);
   Graph_Graph1017->SetMinimum(-1098.913);
   Graph_Graph1017->SetMaximum(100.0444);
   Graph_Graph1017->SetDirectory(0);
   Graph_Graph1017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1017->SetLineColor(ci);
   Graph_Graph1017->GetXaxis()->SetLabelFont(42);
   Graph_Graph1017->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1017->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1017->GetXaxis()->SetTickLength(0.025);
   Graph_Graph1017->GetXaxis()->SetTitleFont(42);
   Graph_Graph1017->GetYaxis()->SetLabelFont(42);
   Graph_Graph1017->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1017->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1017->GetYaxis()->SetTickLength(0.025);
   Graph_Graph1017->GetYaxis()->SetTitleFont(42);
   Graph_Graph1017->GetZaxis()->SetLabelFont(42);
   Graph_Graph1017->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1017->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph1017->GetZaxis()->SetTickLength(0.025);
   Graph_Graph1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1017);
   
   gre->Draw("pe0");
   pad2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
