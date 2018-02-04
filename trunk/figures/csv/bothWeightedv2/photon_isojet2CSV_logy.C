void photon_isojet2CSV_logy()
{
//=========Macro generated from canvas: c1/c1
//=========  (Sun Dec 11 15:15:14 2016) by ROOT version6.06/01
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
   pad1->Range(-0.1875,-3.842255,1.0625,2.543011);
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
   h->SetMinimum(0.0005093486);
   h->SetMaximum(61.85355);
   
   TH1F *h_stack_26 = new TH1F("h_stack_26","",10,0,1);
   h_stack_26->SetMinimum(0.0001437954);
   h_stack_26->SetMaximum(124.7506);
   h_stack_26->SetDirectory(0);
   h_stack_26->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h_stack_26->SetLineColor(ci);
   h_stack_26->GetXaxis()->SetLabelFont(42);
   h_stack_26->GetXaxis()->SetLabelOffset(0.007);
   h_stack_26->GetXaxis()->SetTitleSize(0.05);
   h_stack_26->GetXaxis()->SetTickLength(0.025);
   h_stack_26->GetXaxis()->SetTitleFont(42);
   h_stack_26->GetYaxis()->SetTitle("a.u.");
   h_stack_26->GetYaxis()->SetLabelFont(42);
   h_stack_26->GetYaxis()->SetLabelOffset(0.007);
   h_stack_26->GetYaxis()->SetTitleSize(0.05);
   h_stack_26->GetYaxis()->SetTickLength(0.025);
   h_stack_26->GetYaxis()->SetTitleOffset(1.5);
   h_stack_26->GetYaxis()->SetTitleFont(42);
   h_stack_26->GetZaxis()->SetLabelFont(42);
   h_stack_26->GetZaxis()->SetLabelOffset(0.007);
   h_stack_26->GetZaxis()->SetTitleSize(0.05);
   h_stack_26->GetZaxis()->SetTickLength(0.025);
   h_stack_26->GetZaxis()->SetTitleFont(42);
   h->SetHistogram(h_stack_26);
   
   
   TH1D *h_isojet2CSV_QCD__226 = new TH1D("h_isojet2CSV_QCD__226","",10,0,1);
   h_isojet2CSV_QCD__226->SetBinContent(1,0.01985023);
   h_isojet2CSV_QCD__226->SetBinContent(2,0.005251585);
   h_isojet2CSV_QCD__226->SetBinContent(3,0.0026359);
   h_isojet2CSV_QCD__226->SetBinContent(4,0.00152012);
   h_isojet2CSV_QCD__226->SetBinContent(5,0.001098643);
   h_isojet2CSV_QCD__226->SetBinContent(6,0.0009642896);
   h_isojet2CSV_QCD__226->SetBinContent(7,0.0006725101);
   h_isojet2CSV_QCD__226->SetBinContent(8,0.000506546);
   h_isojet2CSV_QCD__226->SetBinContent(9,0.0004728807);
   h_isojet2CSV_QCD__226->SetBinContent(10,0.0004538448);
   h_isojet2CSV_QCD__226->SetBinError(1,3.180063e-05);
   h_isojet2CSV_QCD__226->SetBinError(2,1.640997e-05);
   h_isojet2CSV_QCD__226->SetBinError(3,1.161443e-05);
   h_isojet2CSV_QCD__226->SetBinError(4,8.813699e-06);
   h_isojet2CSV_QCD__226->SetBinError(5,7.474767e-06);
   h_isojet2CSV_QCD__226->SetBinError(6,7.01158e-06);
   h_isojet2CSV_QCD__226->SetBinError(7,5.856644e-06);
   h_isojet2CSV_QCD__226->SetBinError(8,5.081775e-06);
   h_isojet2CSV_QCD__226->SetBinError(9,4.906611e-06);
   h_isojet2CSV_QCD__226->SetBinError(10,4.804311e-06);
   h_isojet2CSV_QCD__226->SetEntries(668734);
   h_isojet2CSV_QCD__226->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_isojet2CSV_QCD__226->SetFillColor(ci);
   h_isojet2CSV_QCD__226->GetXaxis()->SetTitle("isojet 2 CSV");
   h_isojet2CSV_QCD__226->GetXaxis()->SetLabelFont(42);
   h_isojet2CSV_QCD__226->GetXaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_QCD__226->GetXaxis()->SetTitleSize(0.05);
   h_isojet2CSV_QCD__226->GetXaxis()->SetTickLength(0.025);
   h_isojet2CSV_QCD__226->GetXaxis()->SetTitleFont(42);
   h_isojet2CSV_QCD__226->GetYaxis()->SetTitle("a.u.");
   h_isojet2CSV_QCD__226->GetYaxis()->SetLabelFont(42);
   h_isojet2CSV_QCD__226->GetYaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_QCD__226->GetYaxis()->SetTitleSize(0.05);
   h_isojet2CSV_QCD__226->GetYaxis()->SetTickLength(0.025);
   h_isojet2CSV_QCD__226->GetYaxis()->SetTitleFont(42);
   h_isojet2CSV_QCD__226->GetZaxis()->SetLabelFont(42);
   h_isojet2CSV_QCD__226->GetZaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_QCD__226->GetZaxis()->SetTitleSize(0.05);
   h_isojet2CSV_QCD__226->GetZaxis()->SetTickLength(0.025);
   h_isojet2CSV_QCD__226->GetZaxis()->SetTitleFont(42);
   h->Add(h_isojet2CSV_QCD,"");
   
   TH1D *h_isojet2CSV_#gammapLjetssPoPHFcP__227 = new TH1D("h_isojet2CSV_#gammapLjetssPoPHFcP__227","",10,0,1);
   h_isojet2CSV_#gammapLjetssPoPHFcP__227->SetBinContent(1,0.07642493);
   h_isojet2CSV_#gammapLjetssPoPHFcP__227->SetBinContent(2,0.01925937);
   h_isojet2CSV_#gammapLjetssPoPHFcP__227->SetBinContent(3,0.009583717);
   h_isojet2CSV_#gammapLjetssPoPHFcP__227->SetBinContent(4,0.005331709);
   h_isojet2CSV_#gammapLjetssPoPHFcP__227->SetBinContent(5,0.003834954);
   h_isojet2CSV_#gammapLjetssPoPHFcP__227->SetBinContent(6,0.002966475);
   h_isojet2CSV_#gammapLjetssPoPHFcP__227->SetBinContent(7,0.0023537);
   h_isojet2CSV_#gammapLjetssPoPHFcP__227->SetBinContent(8,0.001958469);
   h_isojet2CSV_#gammapLjetssPoPHFcP__227->SetBinContent(9,0.002133392);
   h_isojet2CSV_#gammapLjetssPoPHFcP__227->SetBinContent(10,0.003097147);
   h_isojet2CSV_#gammapLjetssPoPHFcP__227->SetBinError(1,0.001480368);
   h_isojet2CSV_#gammapLjetssPoPHFcP__227->SetBinError(2,0.0005767237);
   h_isojet2CSV_#gammapLjetssPoPHFcP__227->SetBinError(3,0.0004099334);
   h_isojet2CSV_#gammapLjetssPoPHFcP__227->SetBinError(4,0.0002884051);
   h_isojet2CSV_#gammapLjetssPoPHFcP__227->SetBinError(5,0.0003083451);
   h_isojet2CSV_#gammapLjetssPoPHFcP__227->SetBinError(6,0.0002455136);
   h_isojet2CSV_#gammapLjetssPoPHFcP__227->SetBinError(7,0.0002403472);
   h_isojet2CSV_#gammapLjetssPoPHFcP__227->SetBinError(8,0.0001589926);
   h_isojet2CSV_#gammapLjetssPoPHFcP__227->SetBinError(9,0.0001598631);
   h_isojet2CSV_#gammapLjetssPoPHFcP__227->SetBinError(10,0.000194799);
   h_isojet2CSV_#gammapLjetssPoPHFcP__227->SetEntries(14151);
   h_isojet2CSV_#gammapLjetssPoPHFcP__227->SetStats(0);

   ci = TColor::GetColor("#ff6633");
   h_isojet2CSV_#gammapLjetssPoPHFcP__227->SetFillColor(ci);
   h_isojet2CSV_#gammapLjetssPoPHFcP__227->GetXaxis()->SetTitle("isojet 2 CSV");
   h_isojet2CSV_#gammapLjetssPoPHFcP__227->GetXaxis()->SetLabelFont(42);
   h_isojet2CSV_#gammapLjetssPoPHFcP__227->GetXaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_#gammapLjetssPoPHFcP__227->GetXaxis()->SetTitleSize(0.05);
   h_isojet2CSV_#gammapLjetssPoPHFcP__227->GetXaxis()->SetTickLength(0.025);
   h_isojet2CSV_#gammapLjetssPoPHFcP__227->GetXaxis()->SetTitleFont(42);
   h_isojet2CSV_#gammapLjetssPoPHFcP__227->GetYaxis()->SetTitle("a.u.");
   h_isojet2CSV_#gammapLjetssPoPHFcP__227->GetYaxis()->SetLabelFont(42);
   h_isojet2CSV_#gammapLjetssPoPHFcP__227->GetYaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_#gammapLjetssPoPHFcP__227->GetYaxis()->SetTitleSize(0.05);
   h_isojet2CSV_#gammapLjetssPoPHFcP__227->GetYaxis()->SetTickLength(0.025);
   h_isojet2CSV_#gammapLjetssPoPHFcP__227->GetYaxis()->SetTitleFont(42);
   h_isojet2CSV_#gammapLjetssPoPHFcP__227->GetZaxis()->SetLabelFont(42);
   h_isojet2CSV_#gammapLjetssPoPHFcP__227->GetZaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_#gammapLjetssPoPHFcP__227->GetZaxis()->SetTitleSize(0.05);
   h_isojet2CSV_#gammapLjetssPoPHFcP__227->GetZaxis()->SetTickLength(0.025);
   h_isojet2CSV_#gammapLjetssPoPHFcP__227->GetZaxis()->SetTitleFont(42);
   h->Add(h_isojet2CSV_#gamma+jets (HF),"");
   
   TH1D *h_isojet2CSV_#gammapLjetssPoPLFcP__228 = new TH1D("h_isojet2CSV_#gammapLjetssPoPLFcP__228","",10,0,1);
   h_isojet2CSV_#gammapLjetssPoPLFcP__228->SetBinContent(1,0.5222604);
   h_isojet2CSV_#gammapLjetssPoPLFcP__228->SetBinContent(2,0.1404299);
   h_isojet2CSV_#gammapLjetssPoPLFcP__228->SetBinContent(3,0.0635228);
   h_isojet2CSV_#gammapLjetssPoPLFcP__228->SetBinContent(4,0.03309722);
   h_isojet2CSV_#gammapLjetssPoPLFcP__228->SetBinContent(5,0.02297594);
   h_isojet2CSV_#gammapLjetssPoPLFcP__228->SetBinContent(6,0.01910235);
   h_isojet2CSV_#gammapLjetssPoPLFcP__228->SetBinContent(7,0.01307692);
   h_isojet2CSV_#gammapLjetssPoPLFcP__228->SetBinContent(8,0.009096372);
   h_isojet2CSV_#gammapLjetssPoPLFcP__228->SetBinContent(9,0.007580699);
   h_isojet2CSV_#gammapLjetssPoPLFcP__228->SetBinContent(10,0.008486983);
   h_isojet2CSV_#gammapLjetssPoPLFcP__228->SetBinError(1,0.003705536);
   h_isojet2CSV_#gammapLjetssPoPLFcP__228->SetBinError(2,0.001593207);
   h_isojet2CSV_#gammapLjetssPoPLFcP__228->SetBinError(3,0.001116366);
   h_isojet2CSV_#gammapLjetssPoPLFcP__228->SetBinError(4,0.0008380886);
   h_isojet2CSV_#gammapLjetssPoPLFcP__228->SetBinError(5,0.0006195863);
   h_isojet2CSV_#gammapLjetssPoPLFcP__228->SetBinError(6,0.0006372321);
   h_isojet2CSV_#gammapLjetssPoPLFcP__228->SetBinError(7,0.0004948788);
   h_isojet2CSV_#gammapLjetssPoPLFcP__228->SetBinError(8,0.0004212893);
   h_isojet2CSV_#gammapLjetssPoPLFcP__228->SetBinError(9,0.0002974881);
   h_isojet2CSV_#gammapLjetssPoPLFcP__228->SetBinError(10,0.000353661);
   h_isojet2CSV_#gammapLjetssPoPLFcP__228->SetEntries(99281);
   h_isojet2CSV_#gammapLjetssPoPLFcP__228->SetStats(0);

   ci = TColor::GetColor("#339999");
   h_isojet2CSV_#gammapLjetssPoPLFcP__228->SetFillColor(ci);
   h_isojet2CSV_#gammapLjetssPoPLFcP__228->GetXaxis()->SetTitle("isojet 2 CSV");
   h_isojet2CSV_#gammapLjetssPoPLFcP__228->GetXaxis()->SetLabelFont(42);
   h_isojet2CSV_#gammapLjetssPoPLFcP__228->GetXaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_#gammapLjetssPoPLFcP__228->GetXaxis()->SetTitleSize(0.05);
   h_isojet2CSV_#gammapLjetssPoPLFcP__228->GetXaxis()->SetTickLength(0.025);
   h_isojet2CSV_#gammapLjetssPoPLFcP__228->GetXaxis()->SetTitleFont(42);
   h_isojet2CSV_#gammapLjetssPoPLFcP__228->GetYaxis()->SetTitle("a.u.");
   h_isojet2CSV_#gammapLjetssPoPLFcP__228->GetYaxis()->SetLabelFont(42);
   h_isojet2CSV_#gammapLjetssPoPLFcP__228->GetYaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_#gammapLjetssPoPLFcP__228->GetYaxis()->SetTitleSize(0.05);
   h_isojet2CSV_#gammapLjetssPoPLFcP__228->GetYaxis()->SetTickLength(0.025);
   h_isojet2CSV_#gammapLjetssPoPLFcP__228->GetYaxis()->SetTitleFont(42);
   h_isojet2CSV_#gammapLjetssPoPLFcP__228->GetZaxis()->SetLabelFont(42);
   h_isojet2CSV_#gammapLjetssPoPLFcP__228->GetZaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_#gammapLjetssPoPLFcP__228->GetZaxis()->SetTitleSize(0.05);
   h_isojet2CSV_#gammapLjetssPoPLFcP__228->GetZaxis()->SetTickLength(0.025);
   h_isojet2CSV_#gammapLjetssPoPLFcP__228->GetZaxis()->SetTitleFont(42);
   h->Add(h_isojet2CSV_#gamma+jets (LF),"");
   h->Draw("hist");
   
   TH1D *hsum__229 = new TH1D("hsum__229","",10,0,1);
   hsum__229->SetBinContent(1,0.6185355);
   hsum__229->SetBinContent(2,0.1649409);
   hsum__229->SetBinContent(3,0.07574242);
   hsum__229->SetBinContent(4,0.03994904);
   hsum__229->SetBinContent(5,0.02790954);
   hsum__229->SetBinContent(6,0.02303312);
   hsum__229->SetBinContent(7,0.01610312);
   hsum__229->SetBinContent(8,0.01156139);
   hsum__229->SetBinContent(9,0.01018697);
   hsum__229->SetBinContent(10,0.01203797);
   hsum__229->SetBinError(1,0.003990425);
   hsum__229->SetBinError(2,0.001694458);
   hsum__229->SetBinError(3,0.001189308);
   hsum__229->SetBinError(4,0.0008863677);
   hsum__229->SetBinError(5,0.0006921125);
   hsum__229->SetBinError(6,0.0006829281);
   hsum__229->SetBinError(7,0.0005501873);
   hsum__229->SetBinError(8,0.0004503211);
   hsum__229->SetBinError(9,0.0003377566);
   hsum__229->SetBinError(10,0.0004037893);
   hsum__229->SetEntries(668754);
   hsum__229->SetStats(0);

   ci = 1205;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   hsum__229->SetFillColor(ci);
   hsum__229->SetFillStyle(3003);
   hsum__229->SetLineWidth(0);
   hsum__229->GetXaxis()->SetTitle("isojet 2 CSV");
   hsum__229->GetXaxis()->SetLabelFont(42);
   hsum__229->GetXaxis()->SetLabelOffset(0.007);
   hsum__229->GetXaxis()->SetTitleSize(0.05);
   hsum__229->GetXaxis()->SetTickLength(0.025);
   hsum__229->GetXaxis()->SetTitleFont(42);
   hsum__229->GetYaxis()->SetTitle("a.u.");
   hsum__229->GetYaxis()->SetLabelFont(42);
   hsum__229->GetYaxis()->SetLabelOffset(0.007);
   hsum__229->GetYaxis()->SetTitleSize(0.05);
   hsum__229->GetYaxis()->SetTickLength(0.025);
   hsum__229->GetYaxis()->SetTitleFont(42);
   hsum__229->GetZaxis()->SetLabelFont(42);
   hsum__229->GetZaxis()->SetLabelOffset(0.007);
   hsum__229->GetZaxis()->SetTitleSize(0.05);
   hsum__229->GetZaxis()->SetTickLength(0.025);
   hsum__229->GetZaxis()->SetTitleFont(42);
   hsum__229->Draw("e2 same");
   
   TH1D *h_isojet2CSV_Data__230 = new TH1D("h_isojet2CSV_Data__230","",10,0,1);
   h_isojet2CSV_Data__230->SetBinContent(1,0.5953503);
   h_isojet2CSV_Data__230->SetBinContent(2,0.1559918);
   h_isojet2CSV_Data__230->SetBinContent(3,0.07848562);
   h_isojet2CSV_Data__230->SetBinContent(4,0.04533791);
   h_isojet2CSV_Data__230->SetBinContent(5,0.03296228);
   h_isojet2CSV_Data__230->SetBinContent(6,0.02884705);
   h_isojet2CSV_Data__230->SetBinContent(7,0.02009917);
   h_isojet2CSV_Data__230->SetBinContent(8,0.01514952);
   h_isojet2CSV_Data__230->SetBinContent(9,0.01417006);
   h_isojet2CSV_Data__230->SetBinContent(10,0.01360631);
   h_isojet2CSV_Data__230->SetBinError(1,0.0009435384);
   h_isojet2CSV_Data__230->SetBinError(2,0.0004829744);
   h_isojet2CSV_Data__230->SetBinError(3,0.000342585);
   h_isojet2CSV_Data__230->SetBinError(4,0.0002603778);
   h_isojet2CSV_Data__230->SetBinError(5,0.0002220148);
   h_isojet2CSV_Data__230->SetBinError(6,0.000207694);
   h_isojet2CSV_Data__230->SetBinError(7,0.0001733654);
   h_isojet2CSV_Data__230->SetBinError(8,0.0001505126);
   h_isojet2CSV_Data__230->SetBinError(9,0.0001455657);
   h_isojet2CSV_Data__230->SetBinError(10,0.0001426407);
   h_isojet2CSV_Data__230->SetEntries(668734);
   h_isojet2CSV_Data__230->SetStats(0);
   h_isojet2CSV_Data__230->SetLineWidth(3);
   h_isojet2CSV_Data__230->SetMarkerStyle(20);
   h_isojet2CSV_Data__230->SetMarkerSize(2);
   h_isojet2CSV_Data__230->GetXaxis()->SetTitle("isojet 2 CSV");
   h_isojet2CSV_Data__230->GetXaxis()->SetLabelFont(42);
   h_isojet2CSV_Data__230->GetXaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_Data__230->GetXaxis()->SetTitleSize(0.05);
   h_isojet2CSV_Data__230->GetXaxis()->SetTickLength(0.025);
   h_isojet2CSV_Data__230->GetXaxis()->SetTitleFont(42);
   h_isojet2CSV_Data__230->GetYaxis()->SetTitle("a.u.");
   h_isojet2CSV_Data__230->GetYaxis()->SetLabelFont(42);
   h_isojet2CSV_Data__230->GetYaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_Data__230->GetYaxis()->SetTitleSize(0.05);
   h_isojet2CSV_Data__230->GetYaxis()->SetTickLength(0.025);
   h_isojet2CSV_Data__230->GetYaxis()->SetTitleFont(42);
   h_isojet2CSV_Data__230->GetZaxis()->SetLabelFont(42);
   h_isojet2CSV_Data__230->GetZaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_Data__230->GetZaxis()->SetTitleSize(0.05);
   h_isojet2CSV_Data__230->GetZaxis()->SetTickLength(0.025);
   h_isojet2CSV_Data__230->GetZaxis()->SetTitleFont(42);
   h_isojet2CSV_Data__230->Draw("elp same");
   
   TLegend *leg = new TLegend(0.6,0.55,0.88,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("h_isojet2CSV_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_isojet2CSV_#gamma+jets (LF)","#gamma+jets (LF)","F");

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
   entry=leg->AddEntry("h_isojet2CSV_#gamma+jets (HF)","#gamma+jets (HF)","F");

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
   entry=leg->AddEntry("h_isojet2CSV_QCD","QCD","F");

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
   entry=leg->AddEntry("h_isojet2CSV_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_isojet2CSV_#gamma+jets (LF)","#gamma+jets (LF)","F");

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
   entry=leg->AddEntry("h_isojet2CSV_#gamma+jets (HF)","#gamma+jets (HF)","F");

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
   entry=leg->AddEntry("h_isojet2CSV_QCD","QCD","F");

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
   
   TH1D *ratio__231 = new TH1D("ratio__231","",10,0,1);
   ratio__231->SetBinContent(1,-0.03748399);
   ratio__231->SetBinContent(2,-0.05425644);
   ratio__231->SetBinContent(3,0.03621745);
   ratio__231->SetBinContent(4,0.1348934);
   ratio__231->SetBinContent(5,0.1810403);
   ratio__231->SetBinContent(6,0.2524159);
   ratio__231->SetBinContent(7,0.2481536);
   ratio__231->SetBinContent(8,0.3103551);
   ratio__231->SetBinContent(9,0.3909981);
   ratio__231->SetBinContent(10,0.130282);
   ratio__231->SetBinError(1,0.0001);
   ratio__231->SetBinError(2,0.0001);
   ratio__231->SetBinError(3,0.0001);
   ratio__231->SetBinError(4,0.0001);
   ratio__231->SetBinError(5,0.0001);
   ratio__231->SetBinError(6,0.0001);
   ratio__231->SetBinError(7,0.0001);
   ratio__231->SetBinError(8,0.0001);
   ratio__231->SetBinError(9,0.0001);
   ratio__231->SetBinError(10,0.0001);
   ratio__231->SetMinimum(-0.48);
   ratio__231->SetMaximum(0.48);
   ratio__231->SetEntries(668744);
   ratio__231->SetStats(0);
   ratio__231->SetLineWidth(3);
   ratio__231->SetMarkerStyle(20);
   ratio__231->SetMarkerSize(2);
   ratio__231->GetXaxis()->SetTitle("isojet 2 CSV");
   ratio__231->GetXaxis()->SetLabelFont(43);
   ratio__231->GetXaxis()->SetLabelOffset(0.007);
   ratio__231->GetXaxis()->SetLabelSize(30);
   ratio__231->GetXaxis()->SetTitleSize(40);
   ratio__231->GetXaxis()->SetTickLength(0.025);
   ratio__231->GetXaxis()->SetTitleOffset(5);
   ratio__231->GetXaxis()->SetTitleFont(43);
   ratio__231->GetYaxis()->SetTitle("#frac{Data-Exp}{Exp}");
   ratio__231->GetYaxis()->SetNdivisions(5);
   ratio__231->GetYaxis()->SetLabelFont(43);
   ratio__231->GetYaxis()->SetLabelOffset(0.007);
   ratio__231->GetYaxis()->SetLabelSize(30);
   ratio__231->GetYaxis()->SetTitleSize(40);
   ratio__231->GetYaxis()->SetTickLength(0.025);
   ratio__231->GetYaxis()->SetTitleOffset(2.5);
   ratio__231->GetYaxis()->SetTitleFont(43);
   ratio__231->GetZaxis()->SetLabelFont(42);
   ratio__231->GetZaxis()->SetLabelOffset(0.007);
   ratio__231->GetZaxis()->SetTitleSize(0.05);
   ratio__231->GetZaxis()->SetTickLength(0.025);
   ratio__231->GetZaxis()->SetTitleFont(42);
   ratio__231->Draw("elp");
   
   TH1D *zero__232 = new TH1D("zero__232","",10,0,1);
   zero__232->SetBinError(1,0.0009435384);
   zero__232->SetBinError(2,0.0004829744);
   zero__232->SetBinError(3,0.000342585);
   zero__232->SetBinError(4,0.0002603778);
   zero__232->SetBinError(5,0.0002220148);
   zero__232->SetBinError(6,0.000207694);
   zero__232->SetBinError(7,0.0001733654);
   zero__232->SetBinError(8,0.0001505126);
   zero__232->SetBinError(9,0.0001455657);
   zero__232->SetBinError(10,0.0001426407);
   zero__232->SetEntries(668744);
   zero__232->SetStats(0);
   zero__232->SetLineWidth(3);
   zero__232->SetMarkerStyle(20);
   zero__232->SetMarkerSize(2);
   zero__232->GetXaxis()->SetTitle("isojet 2 CSV");
   zero__232->GetXaxis()->SetLabelFont(42);
   zero__232->GetXaxis()->SetLabelOffset(0.007);
   zero__232->GetXaxis()->SetTitleSize(0.05);
   zero__232->GetXaxis()->SetTickLength(0.025);
   zero__232->GetXaxis()->SetTitleFont(42);
   zero__232->GetYaxis()->SetTitle("a.u.");
   zero__232->GetYaxis()->SetLabelFont(42);
   zero__232->GetYaxis()->SetLabelOffset(0.007);
   zero__232->GetYaxis()->SetTitleSize(0.05);
   zero__232->GetYaxis()->SetTickLength(0.025);
   zero__232->GetYaxis()->SetTitleFont(42);
   zero__232->GetZaxis()->SetLabelFont(42);
   zero__232->GetZaxis()->SetLabelOffset(0.007);
   zero__232->GetZaxis()->SetTitleSize(0.05);
   zero__232->GetZaxis()->SetTickLength(0.025);
   zero__232->GetZaxis()->SetTitleFont(42);
   zero__232->Draw("hist same");
   
   TH1D *sumratioup__233 = new TH1D("sumratioup__233","",10,0,1);
   sumratioup__233->SetBinContent(1,0.006451408);
   sumratioup__233->SetBinContent(2,0.01027312);
   sumratioup__233->SetBinContent(3,0.015702);
   sumratioup__233->SetBinContent(4,0.02218746);
   sumratioup__233->SetBinContent(5,0.02479842);
   sumratioup__233->SetBinContent(6,0.02964983);
   sumratioup__233->SetBinContent(7,0.0341665);
   sumratioup__233->SetBinContent(8,0.03895044);
   sumratioup__233->SetBinContent(9,0.03315574);
   sumratioup__233->SetBinContent(10,0.03354296);
   sumratioup__233->SetBinError(1,0.003990425);
   sumratioup__233->SetBinError(2,0.001694458);
   sumratioup__233->SetBinError(3,0.001189308);
   sumratioup__233->SetBinError(4,0.0008863677);
   sumratioup__233->SetBinError(5,0.0006921125);
   sumratioup__233->SetBinError(6,0.0006829281);
   sumratioup__233->SetBinError(7,0.0005501873);
   sumratioup__233->SetBinError(8,0.0004503211);
   sumratioup__233->SetBinError(9,0.0003377566);
   sumratioup__233->SetBinError(10,0.0004037893);
   sumratioup__233->SetEntries(668764);
   sumratioup__233->SetStats(0);

   ci = 1205;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratioup__233->SetFillColor(ci);
   sumratioup__233->SetFillStyle(3003);
   sumratioup__233->GetXaxis()->SetTitle("isojet 2 CSV");
   sumratioup__233->GetXaxis()->SetLabelFont(42);
   sumratioup__233->GetXaxis()->SetLabelOffset(0.007);
   sumratioup__233->GetXaxis()->SetTitleSize(0.05);
   sumratioup__233->GetXaxis()->SetTickLength(0.025);
   sumratioup__233->GetXaxis()->SetTitleFont(42);
   sumratioup__233->GetYaxis()->SetTitle("a.u.");
   sumratioup__233->GetYaxis()->SetLabelFont(42);
   sumratioup__233->GetYaxis()->SetLabelOffset(0.007);
   sumratioup__233->GetYaxis()->SetTitleSize(0.05);
   sumratioup__233->GetYaxis()->SetTickLength(0.025);
   sumratioup__233->GetYaxis()->SetTitleFont(42);
   sumratioup__233->GetZaxis()->SetLabelFont(42);
   sumratioup__233->GetZaxis()->SetLabelOffset(0.007);
   sumratioup__233->GetZaxis()->SetTitleSize(0.05);
   sumratioup__233->GetZaxis()->SetTickLength(0.025);
   sumratioup__233->GetZaxis()->SetTitleFont(42);
   sumratioup__233->Draw("hist same");
   
   TH1D *sumratiodown__234 = new TH1D("sumratiodown__234","",10,0,1);
   sumratiodown__234->SetBinContent(1,-0.006451408);
   sumratiodown__234->SetBinContent(2,-0.01027312);
   sumratiodown__234->SetBinContent(3,-0.015702);
   sumratiodown__234->SetBinContent(4,-0.02218746);
   sumratiodown__234->SetBinContent(5,-0.02479842);
   sumratiodown__234->SetBinContent(6,-0.02964983);
   sumratiodown__234->SetBinContent(7,-0.0341665);
   sumratiodown__234->SetBinContent(8,-0.03895044);
   sumratiodown__234->SetBinContent(9,-0.03315574);
   sumratiodown__234->SetBinContent(10,-0.03354296);
   sumratiodown__234->SetBinError(1,0.003990425);
   sumratiodown__234->SetBinError(2,0.001694458);
   sumratiodown__234->SetBinError(3,0.001189308);
   sumratiodown__234->SetBinError(4,0.0008863677);
   sumratiodown__234->SetBinError(5,0.0006921125);
   sumratiodown__234->SetBinError(6,0.0006829281);
   sumratiodown__234->SetBinError(7,0.0005501873);
   sumratiodown__234->SetBinError(8,0.0004503211);
   sumratiodown__234->SetBinError(9,0.0003377566);
   sumratiodown__234->SetBinError(10,0.0004037893);
   sumratiodown__234->SetEntries(668764);
   sumratiodown__234->SetStats(0);

   ci = 1205;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratiodown__234->SetFillColor(ci);
   sumratiodown__234->SetFillStyle(3003);
   sumratiodown__234->GetXaxis()->SetTitle("isojet 2 CSV");
   sumratiodown__234->GetXaxis()->SetLabelFont(42);
   sumratiodown__234->GetXaxis()->SetLabelOffset(0.007);
   sumratiodown__234->GetXaxis()->SetTitleSize(0.05);
   sumratiodown__234->GetXaxis()->SetTickLength(0.025);
   sumratiodown__234->GetXaxis()->SetTitleFont(42);
   sumratiodown__234->GetYaxis()->SetTitle("a.u.");
   sumratiodown__234->GetYaxis()->SetLabelFont(42);
   sumratiodown__234->GetYaxis()->SetLabelOffset(0.007);
   sumratiodown__234->GetYaxis()->SetTitleSize(0.05);
   sumratiodown__234->GetYaxis()->SetTickLength(0.025);
   sumratiodown__234->GetYaxis()->SetTitleFont(42);
   sumratiodown__234->GetZaxis()->SetLabelFont(42);
   sumratiodown__234->GetZaxis()->SetLabelOffset(0.007);
   sumratiodown__234->GetZaxis()->SetTitleSize(0.05);
   sumratiodown__234->GetZaxis()->SetTickLength(0.025);
   sumratiodown__234->GetZaxis()->SetTitleFont(42);
   sumratiodown__234->Draw("hist same");
   
   Double_t Graph0_fx1026[10] = {
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
   Double_t Graph0_fy1026[10] = {
   -0.03748399,
   -0.05425644,
   0.03621745,
   0.1348934,
   0.1810403,
   0.2524159,
   0.2481536,
   0.3103551,
   0.3909981,
   0.130282};
   Double_t Graph0_fex1026[10] = {
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
   Double_t Graph0_fey1026[10] = {
   0.001525439,
   0.002928167,
   0.004523027,
   0.006517749,
   0.007954801,
   0.00901719,
   0.01076595,
   0.01301856,
   0.0142894,
   0.01184923};
   TGraphErrors *gre = new TGraphErrors(10,Graph0_fx1026,Graph0_fy1026,Graph0_fex1026,Graph0_fey1026);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1026 = new TH1F("Graph_Graph1026","Graph",100,0,1.04);
   Graph_Graph1026->SetMinimum(-0.1034318);
   Graph_Graph1026->SetMaximum(0.4515347);
   Graph_Graph1026->SetDirectory(0);
   Graph_Graph1026->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1026->SetLineColor(ci);
   Graph_Graph1026->GetXaxis()->SetLabelFont(42);
   Graph_Graph1026->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1026->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1026->GetXaxis()->SetTickLength(0.025);
   Graph_Graph1026->GetXaxis()->SetTitleFont(42);
   Graph_Graph1026->GetYaxis()->SetLabelFont(42);
   Graph_Graph1026->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1026->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1026->GetYaxis()->SetTickLength(0.025);
   Graph_Graph1026->GetYaxis()->SetTitleFont(42);
   Graph_Graph1026->GetZaxis()->SetLabelFont(42);
   Graph_Graph1026->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1026->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph1026->GetZaxis()->SetTickLength(0.025);
   Graph_Graph1026->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1026);
   
   gre->Draw("pe0");
   pad2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
