void photon_isojet2CSV()
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
   pad1->Range(-0.1875,0,1.0625,1.396693);
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
   h->SetMaximum(1.237071);
   
   TH1F *h_stack_25 = new TH1F("h_stack_25","",10,0,1);
   h_stack_25->SetMinimum(0);
   h_stack_25->SetMaximum(1.298925);
   h_stack_25->SetDirectory(0);
   h_stack_25->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h_stack_25->SetLineColor(ci);
   h_stack_25->GetXaxis()->SetLabelFont(42);
   h_stack_25->GetXaxis()->SetLabelOffset(0.007);
   h_stack_25->GetXaxis()->SetTitleSize(0.05);
   h_stack_25->GetXaxis()->SetTickLength(0.025);
   h_stack_25->GetXaxis()->SetTitleFont(42);
   h_stack_25->GetYaxis()->SetTitle("a.u.");
   h_stack_25->GetYaxis()->SetLabelFont(42);
   h_stack_25->GetYaxis()->SetLabelOffset(0.007);
   h_stack_25->GetYaxis()->SetTitleSize(0.05);
   h_stack_25->GetYaxis()->SetTickLength(0.025);
   h_stack_25->GetYaxis()->SetTitleOffset(1.5);
   h_stack_25->GetYaxis()->SetTitleFont(42);
   h_stack_25->GetZaxis()->SetLabelFont(42);
   h_stack_25->GetZaxis()->SetLabelOffset(0.007);
   h_stack_25->GetZaxis()->SetTitleSize(0.05);
   h_stack_25->GetZaxis()->SetTickLength(0.025);
   h_stack_25->GetZaxis()->SetTitleFont(42);
   h->SetHistogram(h_stack_25);
   
   
   TH1D *h_isojet2CSV_QCD__217 = new TH1D("h_isojet2CSV_QCD__217","",10,0,1);
   h_isojet2CSV_QCD__217->SetBinContent(1,0.01985023);
   h_isojet2CSV_QCD__217->SetBinContent(2,0.005251585);
   h_isojet2CSV_QCD__217->SetBinContent(3,0.0026359);
   h_isojet2CSV_QCD__217->SetBinContent(4,0.00152012);
   h_isojet2CSV_QCD__217->SetBinContent(5,0.001098643);
   h_isojet2CSV_QCD__217->SetBinContent(6,0.0009642896);
   h_isojet2CSV_QCD__217->SetBinContent(7,0.0006725101);
   h_isojet2CSV_QCD__217->SetBinContent(8,0.000506546);
   h_isojet2CSV_QCD__217->SetBinContent(9,0.0004728807);
   h_isojet2CSV_QCD__217->SetBinContent(10,0.0004538448);
   h_isojet2CSV_QCD__217->SetBinError(1,3.180063e-05);
   h_isojet2CSV_QCD__217->SetBinError(2,1.640997e-05);
   h_isojet2CSV_QCD__217->SetBinError(3,1.161443e-05);
   h_isojet2CSV_QCD__217->SetBinError(4,8.813699e-06);
   h_isojet2CSV_QCD__217->SetBinError(5,7.474767e-06);
   h_isojet2CSV_QCD__217->SetBinError(6,7.01158e-06);
   h_isojet2CSV_QCD__217->SetBinError(7,5.856644e-06);
   h_isojet2CSV_QCD__217->SetBinError(8,5.081775e-06);
   h_isojet2CSV_QCD__217->SetBinError(9,4.906611e-06);
   h_isojet2CSV_QCD__217->SetBinError(10,4.804311e-06);
   h_isojet2CSV_QCD__217->SetEntries(668734);
   h_isojet2CSV_QCD__217->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_isojet2CSV_QCD__217->SetFillColor(ci);
   h_isojet2CSV_QCD__217->GetXaxis()->SetTitle("isojet 2 CSV");
   h_isojet2CSV_QCD__217->GetXaxis()->SetLabelFont(42);
   h_isojet2CSV_QCD__217->GetXaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_QCD__217->GetXaxis()->SetTitleSize(0.05);
   h_isojet2CSV_QCD__217->GetXaxis()->SetTickLength(0.025);
   h_isojet2CSV_QCD__217->GetXaxis()->SetTitleFont(42);
   h_isojet2CSV_QCD__217->GetYaxis()->SetTitle("a.u.");
   h_isojet2CSV_QCD__217->GetYaxis()->SetLabelFont(42);
   h_isojet2CSV_QCD__217->GetYaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_QCD__217->GetYaxis()->SetTitleSize(0.05);
   h_isojet2CSV_QCD__217->GetYaxis()->SetTickLength(0.025);
   h_isojet2CSV_QCD__217->GetYaxis()->SetTitleFont(42);
   h_isojet2CSV_QCD__217->GetZaxis()->SetLabelFont(42);
   h_isojet2CSV_QCD__217->GetZaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_QCD__217->GetZaxis()->SetTitleSize(0.05);
   h_isojet2CSV_QCD__217->GetZaxis()->SetTickLength(0.025);
   h_isojet2CSV_QCD__217->GetZaxis()->SetTitleFont(42);
   h->Add(h_isojet2CSV_QCD,"");
   
   TH1D *h_isojet2CSV_#gammapLjetssPoPHFcP__218 = new TH1D("h_isojet2CSV_#gammapLjetssPoPHFcP__218","",10,0,1);
   h_isojet2CSV_#gammapLjetssPoPHFcP__218->SetBinContent(1,0.07642493);
   h_isojet2CSV_#gammapLjetssPoPHFcP__218->SetBinContent(2,0.01925937);
   h_isojet2CSV_#gammapLjetssPoPHFcP__218->SetBinContent(3,0.009583717);
   h_isojet2CSV_#gammapLjetssPoPHFcP__218->SetBinContent(4,0.005331709);
   h_isojet2CSV_#gammapLjetssPoPHFcP__218->SetBinContent(5,0.003834954);
   h_isojet2CSV_#gammapLjetssPoPHFcP__218->SetBinContent(6,0.002966475);
   h_isojet2CSV_#gammapLjetssPoPHFcP__218->SetBinContent(7,0.0023537);
   h_isojet2CSV_#gammapLjetssPoPHFcP__218->SetBinContent(8,0.001958469);
   h_isojet2CSV_#gammapLjetssPoPHFcP__218->SetBinContent(9,0.002133392);
   h_isojet2CSV_#gammapLjetssPoPHFcP__218->SetBinContent(10,0.003097147);
   h_isojet2CSV_#gammapLjetssPoPHFcP__218->SetBinError(1,0.001480368);
   h_isojet2CSV_#gammapLjetssPoPHFcP__218->SetBinError(2,0.0005767237);
   h_isojet2CSV_#gammapLjetssPoPHFcP__218->SetBinError(3,0.0004099334);
   h_isojet2CSV_#gammapLjetssPoPHFcP__218->SetBinError(4,0.0002884051);
   h_isojet2CSV_#gammapLjetssPoPHFcP__218->SetBinError(5,0.0003083451);
   h_isojet2CSV_#gammapLjetssPoPHFcP__218->SetBinError(6,0.0002455136);
   h_isojet2CSV_#gammapLjetssPoPHFcP__218->SetBinError(7,0.0002403472);
   h_isojet2CSV_#gammapLjetssPoPHFcP__218->SetBinError(8,0.0001589926);
   h_isojet2CSV_#gammapLjetssPoPHFcP__218->SetBinError(9,0.0001598631);
   h_isojet2CSV_#gammapLjetssPoPHFcP__218->SetBinError(10,0.000194799);
   h_isojet2CSV_#gammapLjetssPoPHFcP__218->SetEntries(14151);
   h_isojet2CSV_#gammapLjetssPoPHFcP__218->SetStats(0);

   ci = TColor::GetColor("#ff6633");
   h_isojet2CSV_#gammapLjetssPoPHFcP__218->SetFillColor(ci);
   h_isojet2CSV_#gammapLjetssPoPHFcP__218->GetXaxis()->SetTitle("isojet 2 CSV");
   h_isojet2CSV_#gammapLjetssPoPHFcP__218->GetXaxis()->SetLabelFont(42);
   h_isojet2CSV_#gammapLjetssPoPHFcP__218->GetXaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_#gammapLjetssPoPHFcP__218->GetXaxis()->SetTitleSize(0.05);
   h_isojet2CSV_#gammapLjetssPoPHFcP__218->GetXaxis()->SetTickLength(0.025);
   h_isojet2CSV_#gammapLjetssPoPHFcP__218->GetXaxis()->SetTitleFont(42);
   h_isojet2CSV_#gammapLjetssPoPHFcP__218->GetYaxis()->SetTitle("a.u.");
   h_isojet2CSV_#gammapLjetssPoPHFcP__218->GetYaxis()->SetLabelFont(42);
   h_isojet2CSV_#gammapLjetssPoPHFcP__218->GetYaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_#gammapLjetssPoPHFcP__218->GetYaxis()->SetTitleSize(0.05);
   h_isojet2CSV_#gammapLjetssPoPHFcP__218->GetYaxis()->SetTickLength(0.025);
   h_isojet2CSV_#gammapLjetssPoPHFcP__218->GetYaxis()->SetTitleFont(42);
   h_isojet2CSV_#gammapLjetssPoPHFcP__218->GetZaxis()->SetLabelFont(42);
   h_isojet2CSV_#gammapLjetssPoPHFcP__218->GetZaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_#gammapLjetssPoPHFcP__218->GetZaxis()->SetTitleSize(0.05);
   h_isojet2CSV_#gammapLjetssPoPHFcP__218->GetZaxis()->SetTickLength(0.025);
   h_isojet2CSV_#gammapLjetssPoPHFcP__218->GetZaxis()->SetTitleFont(42);
   h->Add(h_isojet2CSV_#gamma+jets (HF),"");
   
   TH1D *h_isojet2CSV_#gammapLjetssPoPLFcP__219 = new TH1D("h_isojet2CSV_#gammapLjetssPoPLFcP__219","",10,0,1);
   h_isojet2CSV_#gammapLjetssPoPLFcP__219->SetBinContent(1,0.5222604);
   h_isojet2CSV_#gammapLjetssPoPLFcP__219->SetBinContent(2,0.1404299);
   h_isojet2CSV_#gammapLjetssPoPLFcP__219->SetBinContent(3,0.0635228);
   h_isojet2CSV_#gammapLjetssPoPLFcP__219->SetBinContent(4,0.03309722);
   h_isojet2CSV_#gammapLjetssPoPLFcP__219->SetBinContent(5,0.02297594);
   h_isojet2CSV_#gammapLjetssPoPLFcP__219->SetBinContent(6,0.01910235);
   h_isojet2CSV_#gammapLjetssPoPLFcP__219->SetBinContent(7,0.01307692);
   h_isojet2CSV_#gammapLjetssPoPLFcP__219->SetBinContent(8,0.009096372);
   h_isojet2CSV_#gammapLjetssPoPLFcP__219->SetBinContent(9,0.007580699);
   h_isojet2CSV_#gammapLjetssPoPLFcP__219->SetBinContent(10,0.008486983);
   h_isojet2CSV_#gammapLjetssPoPLFcP__219->SetBinError(1,0.003705536);
   h_isojet2CSV_#gammapLjetssPoPLFcP__219->SetBinError(2,0.001593207);
   h_isojet2CSV_#gammapLjetssPoPLFcP__219->SetBinError(3,0.001116366);
   h_isojet2CSV_#gammapLjetssPoPLFcP__219->SetBinError(4,0.0008380886);
   h_isojet2CSV_#gammapLjetssPoPLFcP__219->SetBinError(5,0.0006195863);
   h_isojet2CSV_#gammapLjetssPoPLFcP__219->SetBinError(6,0.0006372321);
   h_isojet2CSV_#gammapLjetssPoPLFcP__219->SetBinError(7,0.0004948788);
   h_isojet2CSV_#gammapLjetssPoPLFcP__219->SetBinError(8,0.0004212893);
   h_isojet2CSV_#gammapLjetssPoPLFcP__219->SetBinError(9,0.0002974881);
   h_isojet2CSV_#gammapLjetssPoPLFcP__219->SetBinError(10,0.000353661);
   h_isojet2CSV_#gammapLjetssPoPLFcP__219->SetEntries(99281);
   h_isojet2CSV_#gammapLjetssPoPLFcP__219->SetStats(0);

   ci = TColor::GetColor("#339999");
   h_isojet2CSV_#gammapLjetssPoPLFcP__219->SetFillColor(ci);
   h_isojet2CSV_#gammapLjetssPoPLFcP__219->GetXaxis()->SetTitle("isojet 2 CSV");
   h_isojet2CSV_#gammapLjetssPoPLFcP__219->GetXaxis()->SetLabelFont(42);
   h_isojet2CSV_#gammapLjetssPoPLFcP__219->GetXaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_#gammapLjetssPoPLFcP__219->GetXaxis()->SetTitleSize(0.05);
   h_isojet2CSV_#gammapLjetssPoPLFcP__219->GetXaxis()->SetTickLength(0.025);
   h_isojet2CSV_#gammapLjetssPoPLFcP__219->GetXaxis()->SetTitleFont(42);
   h_isojet2CSV_#gammapLjetssPoPLFcP__219->GetYaxis()->SetTitle("a.u.");
   h_isojet2CSV_#gammapLjetssPoPLFcP__219->GetYaxis()->SetLabelFont(42);
   h_isojet2CSV_#gammapLjetssPoPLFcP__219->GetYaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_#gammapLjetssPoPLFcP__219->GetYaxis()->SetTitleSize(0.05);
   h_isojet2CSV_#gammapLjetssPoPLFcP__219->GetYaxis()->SetTickLength(0.025);
   h_isojet2CSV_#gammapLjetssPoPLFcP__219->GetYaxis()->SetTitleFont(42);
   h_isojet2CSV_#gammapLjetssPoPLFcP__219->GetZaxis()->SetLabelFont(42);
   h_isojet2CSV_#gammapLjetssPoPLFcP__219->GetZaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_#gammapLjetssPoPLFcP__219->GetZaxis()->SetTitleSize(0.05);
   h_isojet2CSV_#gammapLjetssPoPLFcP__219->GetZaxis()->SetTickLength(0.025);
   h_isojet2CSV_#gammapLjetssPoPLFcP__219->GetZaxis()->SetTitleFont(42);
   h->Add(h_isojet2CSV_#gamma+jets (LF),"");
   h->Draw("hist");
   
   TH1D *hsum__220 = new TH1D("hsum__220","",10,0,1);
   hsum__220->SetBinContent(1,0.6185355);
   hsum__220->SetBinContent(2,0.1649409);
   hsum__220->SetBinContent(3,0.07574242);
   hsum__220->SetBinContent(4,0.03994904);
   hsum__220->SetBinContent(5,0.02790954);
   hsum__220->SetBinContent(6,0.02303312);
   hsum__220->SetBinContent(7,0.01610312);
   hsum__220->SetBinContent(8,0.01156139);
   hsum__220->SetBinContent(9,0.01018697);
   hsum__220->SetBinContent(10,0.01203797);
   hsum__220->SetBinError(1,0.003990425);
   hsum__220->SetBinError(2,0.001694458);
   hsum__220->SetBinError(3,0.001189308);
   hsum__220->SetBinError(4,0.0008863677);
   hsum__220->SetBinError(5,0.0006921125);
   hsum__220->SetBinError(6,0.0006829281);
   hsum__220->SetBinError(7,0.0005501873);
   hsum__220->SetBinError(8,0.0004503211);
   hsum__220->SetBinError(9,0.0003377566);
   hsum__220->SetBinError(10,0.0004037893);
   hsum__220->SetEntries(668754);
   hsum__220->SetStats(0);

   ci = 1204;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   hsum__220->SetFillColor(ci);
   hsum__220->SetFillStyle(3003);
   hsum__220->SetLineWidth(0);
   hsum__220->GetXaxis()->SetTitle("isojet 2 CSV");
   hsum__220->GetXaxis()->SetLabelFont(42);
   hsum__220->GetXaxis()->SetLabelOffset(0.007);
   hsum__220->GetXaxis()->SetTitleSize(0.05);
   hsum__220->GetXaxis()->SetTickLength(0.025);
   hsum__220->GetXaxis()->SetTitleFont(42);
   hsum__220->GetYaxis()->SetTitle("a.u.");
   hsum__220->GetYaxis()->SetLabelFont(42);
   hsum__220->GetYaxis()->SetLabelOffset(0.007);
   hsum__220->GetYaxis()->SetTitleSize(0.05);
   hsum__220->GetYaxis()->SetTickLength(0.025);
   hsum__220->GetYaxis()->SetTitleFont(42);
   hsum__220->GetZaxis()->SetLabelFont(42);
   hsum__220->GetZaxis()->SetLabelOffset(0.007);
   hsum__220->GetZaxis()->SetTitleSize(0.05);
   hsum__220->GetZaxis()->SetTickLength(0.025);
   hsum__220->GetZaxis()->SetTitleFont(42);
   hsum__220->Draw("e2 same");
   
   TH1D *h_isojet2CSV_Data__221 = new TH1D("h_isojet2CSV_Data__221","",10,0,1);
   h_isojet2CSV_Data__221->SetBinContent(1,0.5953503);
   h_isojet2CSV_Data__221->SetBinContent(2,0.1559918);
   h_isojet2CSV_Data__221->SetBinContent(3,0.07848562);
   h_isojet2CSV_Data__221->SetBinContent(4,0.04533791);
   h_isojet2CSV_Data__221->SetBinContent(5,0.03296228);
   h_isojet2CSV_Data__221->SetBinContent(6,0.02884705);
   h_isojet2CSV_Data__221->SetBinContent(7,0.02009917);
   h_isojet2CSV_Data__221->SetBinContent(8,0.01514952);
   h_isojet2CSV_Data__221->SetBinContent(9,0.01417006);
   h_isojet2CSV_Data__221->SetBinContent(10,0.01360631);
   h_isojet2CSV_Data__221->SetBinError(1,0.0009435384);
   h_isojet2CSV_Data__221->SetBinError(2,0.0004829744);
   h_isojet2CSV_Data__221->SetBinError(3,0.000342585);
   h_isojet2CSV_Data__221->SetBinError(4,0.0002603778);
   h_isojet2CSV_Data__221->SetBinError(5,0.0002220148);
   h_isojet2CSV_Data__221->SetBinError(6,0.000207694);
   h_isojet2CSV_Data__221->SetBinError(7,0.0001733654);
   h_isojet2CSV_Data__221->SetBinError(8,0.0001505126);
   h_isojet2CSV_Data__221->SetBinError(9,0.0001455657);
   h_isojet2CSV_Data__221->SetBinError(10,0.0001426407);
   h_isojet2CSV_Data__221->SetEntries(668734);
   h_isojet2CSV_Data__221->SetStats(0);
   h_isojet2CSV_Data__221->SetLineWidth(3);
   h_isojet2CSV_Data__221->SetMarkerStyle(20);
   h_isojet2CSV_Data__221->SetMarkerSize(2);
   h_isojet2CSV_Data__221->GetXaxis()->SetTitle("isojet 2 CSV");
   h_isojet2CSV_Data__221->GetXaxis()->SetLabelFont(42);
   h_isojet2CSV_Data__221->GetXaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_Data__221->GetXaxis()->SetTitleSize(0.05);
   h_isojet2CSV_Data__221->GetXaxis()->SetTickLength(0.025);
   h_isojet2CSV_Data__221->GetXaxis()->SetTitleFont(42);
   h_isojet2CSV_Data__221->GetYaxis()->SetTitle("a.u.");
   h_isojet2CSV_Data__221->GetYaxis()->SetLabelFont(42);
   h_isojet2CSV_Data__221->GetYaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_Data__221->GetYaxis()->SetTitleSize(0.05);
   h_isojet2CSV_Data__221->GetYaxis()->SetTickLength(0.025);
   h_isojet2CSV_Data__221->GetYaxis()->SetTitleFont(42);
   h_isojet2CSV_Data__221->GetZaxis()->SetLabelFont(42);
   h_isojet2CSV_Data__221->GetZaxis()->SetLabelOffset(0.007);
   h_isojet2CSV_Data__221->GetZaxis()->SetTitleSize(0.05);
   h_isojet2CSV_Data__221->GetZaxis()->SetTickLength(0.025);
   h_isojet2CSV_Data__221->GetZaxis()->SetTitleFont(42);
   h_isojet2CSV_Data__221->Draw("elp same");
   
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
   
   TH1D *ratio__222 = new TH1D("ratio__222","",10,0,1);
   ratio__222->SetBinContent(1,-0.03748399);
   ratio__222->SetBinContent(2,-0.05425644);
   ratio__222->SetBinContent(3,0.03621745);
   ratio__222->SetBinContent(4,0.1348934);
   ratio__222->SetBinContent(5,0.1810403);
   ratio__222->SetBinContent(6,0.2524159);
   ratio__222->SetBinContent(7,0.2481536);
   ratio__222->SetBinContent(8,0.3103551);
   ratio__222->SetBinContent(9,0.3909981);
   ratio__222->SetBinContent(10,0.130282);
   ratio__222->SetBinError(1,0.0001);
   ratio__222->SetBinError(2,0.0001);
   ratio__222->SetBinError(3,0.0001);
   ratio__222->SetBinError(4,0.0001);
   ratio__222->SetBinError(5,0.0001);
   ratio__222->SetBinError(6,0.0001);
   ratio__222->SetBinError(7,0.0001);
   ratio__222->SetBinError(8,0.0001);
   ratio__222->SetBinError(9,0.0001);
   ratio__222->SetBinError(10,0.0001);
   ratio__222->SetMinimum(-0.48);
   ratio__222->SetMaximum(0.48);
   ratio__222->SetEntries(668744);
   ratio__222->SetStats(0);
   ratio__222->SetLineWidth(3);
   ratio__222->SetMarkerStyle(20);
   ratio__222->SetMarkerSize(2);
   ratio__222->GetXaxis()->SetTitle("isojet 2 CSV");
   ratio__222->GetXaxis()->SetLabelFont(43);
   ratio__222->GetXaxis()->SetLabelOffset(0.007);
   ratio__222->GetXaxis()->SetLabelSize(30);
   ratio__222->GetXaxis()->SetTitleSize(40);
   ratio__222->GetXaxis()->SetTickLength(0.025);
   ratio__222->GetXaxis()->SetTitleOffset(5);
   ratio__222->GetXaxis()->SetTitleFont(43);
   ratio__222->GetYaxis()->SetTitle("#frac{Data-Exp}{Exp}");
   ratio__222->GetYaxis()->SetNdivisions(5);
   ratio__222->GetYaxis()->SetLabelFont(43);
   ratio__222->GetYaxis()->SetLabelOffset(0.007);
   ratio__222->GetYaxis()->SetLabelSize(30);
   ratio__222->GetYaxis()->SetTitleSize(40);
   ratio__222->GetYaxis()->SetTickLength(0.025);
   ratio__222->GetYaxis()->SetTitleOffset(2.5);
   ratio__222->GetYaxis()->SetTitleFont(43);
   ratio__222->GetZaxis()->SetLabelFont(42);
   ratio__222->GetZaxis()->SetLabelOffset(0.007);
   ratio__222->GetZaxis()->SetTitleSize(0.05);
   ratio__222->GetZaxis()->SetTickLength(0.025);
   ratio__222->GetZaxis()->SetTitleFont(42);
   ratio__222->Draw("elp");
   
   TH1D *zero__223 = new TH1D("zero__223","",10,0,1);
   zero__223->SetBinError(1,0.0009435384);
   zero__223->SetBinError(2,0.0004829744);
   zero__223->SetBinError(3,0.000342585);
   zero__223->SetBinError(4,0.0002603778);
   zero__223->SetBinError(5,0.0002220148);
   zero__223->SetBinError(6,0.000207694);
   zero__223->SetBinError(7,0.0001733654);
   zero__223->SetBinError(8,0.0001505126);
   zero__223->SetBinError(9,0.0001455657);
   zero__223->SetBinError(10,0.0001426407);
   zero__223->SetEntries(668744);
   zero__223->SetStats(0);
   zero__223->SetLineWidth(3);
   zero__223->SetMarkerStyle(20);
   zero__223->SetMarkerSize(2);
   zero__223->GetXaxis()->SetTitle("isojet 2 CSV");
   zero__223->GetXaxis()->SetLabelFont(42);
   zero__223->GetXaxis()->SetLabelOffset(0.007);
   zero__223->GetXaxis()->SetTitleSize(0.05);
   zero__223->GetXaxis()->SetTickLength(0.025);
   zero__223->GetXaxis()->SetTitleFont(42);
   zero__223->GetYaxis()->SetTitle("a.u.");
   zero__223->GetYaxis()->SetLabelFont(42);
   zero__223->GetYaxis()->SetLabelOffset(0.007);
   zero__223->GetYaxis()->SetTitleSize(0.05);
   zero__223->GetYaxis()->SetTickLength(0.025);
   zero__223->GetYaxis()->SetTitleFont(42);
   zero__223->GetZaxis()->SetLabelFont(42);
   zero__223->GetZaxis()->SetLabelOffset(0.007);
   zero__223->GetZaxis()->SetTitleSize(0.05);
   zero__223->GetZaxis()->SetTickLength(0.025);
   zero__223->GetZaxis()->SetTitleFont(42);
   zero__223->Draw("hist same");
   
   TH1D *sumratioup__224 = new TH1D("sumratioup__224","",10,0,1);
   sumratioup__224->SetBinContent(1,0.006451408);
   sumratioup__224->SetBinContent(2,0.01027312);
   sumratioup__224->SetBinContent(3,0.015702);
   sumratioup__224->SetBinContent(4,0.02218746);
   sumratioup__224->SetBinContent(5,0.02479842);
   sumratioup__224->SetBinContent(6,0.02964983);
   sumratioup__224->SetBinContent(7,0.0341665);
   sumratioup__224->SetBinContent(8,0.03895044);
   sumratioup__224->SetBinContent(9,0.03315574);
   sumratioup__224->SetBinContent(10,0.03354296);
   sumratioup__224->SetBinError(1,0.003990425);
   sumratioup__224->SetBinError(2,0.001694458);
   sumratioup__224->SetBinError(3,0.001189308);
   sumratioup__224->SetBinError(4,0.0008863677);
   sumratioup__224->SetBinError(5,0.0006921125);
   sumratioup__224->SetBinError(6,0.0006829281);
   sumratioup__224->SetBinError(7,0.0005501873);
   sumratioup__224->SetBinError(8,0.0004503211);
   sumratioup__224->SetBinError(9,0.0003377566);
   sumratioup__224->SetBinError(10,0.0004037893);
   sumratioup__224->SetEntries(668764);
   sumratioup__224->SetStats(0);

   ci = 1204;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratioup__224->SetFillColor(ci);
   sumratioup__224->SetFillStyle(3003);
   sumratioup__224->GetXaxis()->SetTitle("isojet 2 CSV");
   sumratioup__224->GetXaxis()->SetLabelFont(42);
   sumratioup__224->GetXaxis()->SetLabelOffset(0.007);
   sumratioup__224->GetXaxis()->SetTitleSize(0.05);
   sumratioup__224->GetXaxis()->SetTickLength(0.025);
   sumratioup__224->GetXaxis()->SetTitleFont(42);
   sumratioup__224->GetYaxis()->SetTitle("a.u.");
   sumratioup__224->GetYaxis()->SetLabelFont(42);
   sumratioup__224->GetYaxis()->SetLabelOffset(0.007);
   sumratioup__224->GetYaxis()->SetTitleSize(0.05);
   sumratioup__224->GetYaxis()->SetTickLength(0.025);
   sumratioup__224->GetYaxis()->SetTitleFont(42);
   sumratioup__224->GetZaxis()->SetLabelFont(42);
   sumratioup__224->GetZaxis()->SetLabelOffset(0.007);
   sumratioup__224->GetZaxis()->SetTitleSize(0.05);
   sumratioup__224->GetZaxis()->SetTickLength(0.025);
   sumratioup__224->GetZaxis()->SetTitleFont(42);
   sumratioup__224->Draw("hist same");
   
   TH1D *sumratiodown__225 = new TH1D("sumratiodown__225","",10,0,1);
   sumratiodown__225->SetBinContent(1,-0.006451408);
   sumratiodown__225->SetBinContent(2,-0.01027312);
   sumratiodown__225->SetBinContent(3,-0.015702);
   sumratiodown__225->SetBinContent(4,-0.02218746);
   sumratiodown__225->SetBinContent(5,-0.02479842);
   sumratiodown__225->SetBinContent(6,-0.02964983);
   sumratiodown__225->SetBinContent(7,-0.0341665);
   sumratiodown__225->SetBinContent(8,-0.03895044);
   sumratiodown__225->SetBinContent(9,-0.03315574);
   sumratiodown__225->SetBinContent(10,-0.03354296);
   sumratiodown__225->SetBinError(1,0.003990425);
   sumratiodown__225->SetBinError(2,0.001694458);
   sumratiodown__225->SetBinError(3,0.001189308);
   sumratiodown__225->SetBinError(4,0.0008863677);
   sumratiodown__225->SetBinError(5,0.0006921125);
   sumratiodown__225->SetBinError(6,0.0006829281);
   sumratiodown__225->SetBinError(7,0.0005501873);
   sumratiodown__225->SetBinError(8,0.0004503211);
   sumratiodown__225->SetBinError(9,0.0003377566);
   sumratiodown__225->SetBinError(10,0.0004037893);
   sumratiodown__225->SetEntries(668764);
   sumratiodown__225->SetStats(0);

   ci = 1204;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratiodown__225->SetFillColor(ci);
   sumratiodown__225->SetFillStyle(3003);
   sumratiodown__225->GetXaxis()->SetTitle("isojet 2 CSV");
   sumratiodown__225->GetXaxis()->SetLabelFont(42);
   sumratiodown__225->GetXaxis()->SetLabelOffset(0.007);
   sumratiodown__225->GetXaxis()->SetTitleSize(0.05);
   sumratiodown__225->GetXaxis()->SetTickLength(0.025);
   sumratiodown__225->GetXaxis()->SetTitleFont(42);
   sumratiodown__225->GetYaxis()->SetTitle("a.u.");
   sumratiodown__225->GetYaxis()->SetLabelFont(42);
   sumratiodown__225->GetYaxis()->SetLabelOffset(0.007);
   sumratiodown__225->GetYaxis()->SetTitleSize(0.05);
   sumratiodown__225->GetYaxis()->SetTickLength(0.025);
   sumratiodown__225->GetYaxis()->SetTitleFont(42);
   sumratiodown__225->GetZaxis()->SetLabelFont(42);
   sumratiodown__225->GetZaxis()->SetLabelOffset(0.007);
   sumratiodown__225->GetZaxis()->SetTitleSize(0.05);
   sumratiodown__225->GetZaxis()->SetTickLength(0.025);
   sumratiodown__225->GetZaxis()->SetTitleFont(42);
   sumratiodown__225->Draw("hist same");
   
   Double_t Graph0_fx1025[10] = {
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
   Double_t Graph0_fy1025[10] = {
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
   Double_t Graph0_fex1025[10] = {
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
   Double_t Graph0_fey1025[10] = {
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
   TGraphErrors *gre = new TGraphErrors(10,Graph0_fx1025,Graph0_fy1025,Graph0_fex1025,Graph0_fey1025);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1025 = new TH1F("Graph_Graph1025","Graph",100,0,1.04);
   Graph_Graph1025->SetMinimum(-0.1034318);
   Graph_Graph1025->SetMaximum(0.4515347);
   Graph_Graph1025->SetDirectory(0);
   Graph_Graph1025->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1025->SetLineColor(ci);
   Graph_Graph1025->GetXaxis()->SetLabelFont(42);
   Graph_Graph1025->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1025->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1025->GetXaxis()->SetTickLength(0.025);
   Graph_Graph1025->GetXaxis()->SetTitleFont(42);
   Graph_Graph1025->GetYaxis()->SetLabelFont(42);
   Graph_Graph1025->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1025->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1025->GetYaxis()->SetTickLength(0.025);
   Graph_Graph1025->GetYaxis()->SetTitleFont(42);
   Graph_Graph1025->GetZaxis()->SetLabelFont(42);
   Graph_Graph1025->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1025->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph1025->GetZaxis()->SetTickLength(0.025);
   Graph_Graph1025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1025);
   
   gre->Draw("pe0");
   pad2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
