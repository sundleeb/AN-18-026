void photon_isojet1CSV_logy()
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
   pad1->Range(-0.1875,-3.426201,1.0625,2.177206);
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
   h->SetMinimum(0.001204719);
   h->SetMaximum(32.32139);
   
   TH1F *h_stack_22 = new TH1F("h_stack_22","",10,0,1);
   h_stack_22->SetMinimum(0.0003747995);
   h_stack_22->SetMaximum(60.94911);
   h_stack_22->SetDirectory(0);
   h_stack_22->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h_stack_22->SetLineColor(ci);
   h_stack_22->GetXaxis()->SetLabelFont(42);
   h_stack_22->GetXaxis()->SetLabelOffset(0.007);
   h_stack_22->GetXaxis()->SetTitleSize(0.05);
   h_stack_22->GetXaxis()->SetTickLength(0.025);
   h_stack_22->GetXaxis()->SetTitleFont(42);
   h_stack_22->GetYaxis()->SetTitle("a.u.");
   h_stack_22->GetYaxis()->SetLabelFont(42);
   h_stack_22->GetYaxis()->SetLabelOffset(0.007);
   h_stack_22->GetYaxis()->SetTitleSize(0.05);
   h_stack_22->GetYaxis()->SetTickLength(0.025);
   h_stack_22->GetYaxis()->SetTitleOffset(1.5);
   h_stack_22->GetYaxis()->SetTitleFont(42);
   h_stack_22->GetZaxis()->SetLabelFont(42);
   h_stack_22->GetZaxis()->SetLabelOffset(0.007);
   h_stack_22->GetZaxis()->SetTitleSize(0.05);
   h_stack_22->GetZaxis()->SetTickLength(0.025);
   h_stack_22->GetZaxis()->SetTitleFont(42);
   h->SetHistogram(h_stack_22);
   
   
   TH1D *h_isojet1CSV_QCD__190 = new TH1D("h_isojet1CSV_QCD__190","",10,0,1);
   h_isojet1CSV_QCD__190->SetBinContent(1,0.00683344);
   h_isojet1CSV_QCD__190->SetBinContent(2,0.01039186);
   h_isojet1CSV_QCD__190->SetBinContent(3,0.004456914);
   h_isojet1CSV_QCD__190->SetBinContent(4,0.002897553);
   h_isojet1CSV_QCD__190->SetBinContent(5,0.002478716);
   h_isojet1CSV_QCD__190->SetBinContent(6,0.001792993);
   h_isojet1CSV_QCD__190->SetBinContent(7,0.001468187);
   h_isojet1CSV_QCD__190->SetBinContent(8,0.001087928);
   h_isojet1CSV_QCD__190->SetBinContent(9,0.001015518);
   h_isojet1CSV_QCD__190->SetBinContent(10,0.001003391);
   h_isojet1CSV_QCD__190->SetBinContent(11,5.130884e-08);
   h_isojet1CSV_QCD__190->SetBinError(1,1.87832e-05);
   h_isojet1CSV_QCD__190->SetBinError(2,2.304555e-05);
   h_isojet1CSV_QCD__190->SetBinError(3,1.503263e-05);
   h_isojet1CSV_QCD__190->SetBinError(4,1.214088e-05);
   h_isojet1CSV_QCD__190->SetBinError(5,1.120835e-05);
   h_isojet1CSV_QCD__190->SetBinError(6,9.517027e-06);
   h_isojet1CSV_QCD__190->SetBinError(7,8.62789e-06);
   h_isojet1CSV_QCD__190->SetBinError(8,7.422376e-06);
   h_isojet1CSV_QCD__190->SetBinError(9,7.182405e-06);
   h_isojet1CSV_QCD__190->SetBinError(10,7.130861e-06);
   h_isojet1CSV_QCD__190->SetBinError(11,5.130884e-08);
   h_isojet1CSV_QCD__190->SetEntries(668734);
   h_isojet1CSV_QCD__190->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_isojet1CSV_QCD__190->SetFillColor(ci);
   h_isojet1CSV_QCD__190->GetXaxis()->SetTitle("isojet 1 CSV");
   h_isojet1CSV_QCD__190->GetXaxis()->SetLabelFont(42);
   h_isojet1CSV_QCD__190->GetXaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_QCD__190->GetXaxis()->SetTitleSize(0.05);
   h_isojet1CSV_QCD__190->GetXaxis()->SetTickLength(0.025);
   h_isojet1CSV_QCD__190->GetXaxis()->SetTitleFont(42);
   h_isojet1CSV_QCD__190->GetYaxis()->SetTitle("a.u.");
   h_isojet1CSV_QCD__190->GetYaxis()->SetLabelFont(42);
   h_isojet1CSV_QCD__190->GetYaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_QCD__190->GetYaxis()->SetTitleSize(0.05);
   h_isojet1CSV_QCD__190->GetYaxis()->SetTickLength(0.025);
   h_isojet1CSV_QCD__190->GetYaxis()->SetTitleFont(42);
   h_isojet1CSV_QCD__190->GetZaxis()->SetLabelFont(42);
   h_isojet1CSV_QCD__190->GetZaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_QCD__190->GetZaxis()->SetTitleSize(0.05);
   h_isojet1CSV_QCD__190->GetZaxis()->SetTickLength(0.025);
   h_isojet1CSV_QCD__190->GetZaxis()->SetTitleFont(42);
   h->Add(h_isojet1CSV_QCD,"");
   
   TH1D *h_isojet1CSV_#gammapLjetssPoPHFcP__191 = new TH1D("h_isojet1CSV_#gammapLjetssPoPHFcP__191","",10,0,1);
   h_isojet1CSV_#gammapLjetssPoPHFcP__191->SetBinContent(1,0.01200932);
   h_isojet1CSV_#gammapLjetssPoPHFcP__191->SetBinContent(2,0.02042333);
   h_isojet1CSV_#gammapLjetssPoPHFcP__191->SetBinContent(3,0.01146281);
   h_isojet1CSV_#gammapLjetssPoPHFcP__191->SetBinContent(4,0.009491634);
   h_isojet1CSV_#gammapLjetssPoPHFcP__191->SetBinContent(5,0.009892331);
   h_isojet1CSV_#gammapLjetssPoPHFcP__191->SetBinContent(6,0.008410006);
   h_isojet1CSV_#gammapLjetssPoPHFcP__191->SetBinContent(7,0.01015193);
   h_isojet1CSV_#gammapLjetssPoPHFcP__191->SetBinContent(8,0.01075883);
   h_isojet1CSV_#gammapLjetssPoPHFcP__191->SetBinContent(9,0.01511036);
   h_isojet1CSV_#gammapLjetssPoPHFcP__191->SetBinContent(10,0.01923331);
   h_isojet1CSV_#gammapLjetssPoPHFcP__191->SetBinError(1,0.0005967796);
   h_isojet1CSV_#gammapLjetssPoPHFcP__191->SetBinError(2,0.0006914462);
   h_isojet1CSV_#gammapLjetssPoPHFcP__191->SetBinError(3,0.0005160281);
   h_isojet1CSV_#gammapLjetssPoPHFcP__191->SetBinError(4,0.0004750233);
   h_isojet1CSV_#gammapLjetssPoPHFcP__191->SetBinError(5,0.0005034815);
   h_isojet1CSV_#gammapLjetssPoPHFcP__191->SetBinError(6,0.0004285871);
   h_isojet1CSV_#gammapLjetssPoPHFcP__191->SetBinError(7,0.000523919);
   h_isojet1CSV_#gammapLjetssPoPHFcP__191->SetBinError(8,0.0005080863);
   h_isojet1CSV_#gammapLjetssPoPHFcP__191->SetBinError(9,0.0006709355);
   h_isojet1CSV_#gammapLjetssPoPHFcP__191->SetBinError(10,0.0005753879);
   h_isojet1CSV_#gammapLjetssPoPHFcP__191->SetEntries(14151);
   h_isojet1CSV_#gammapLjetssPoPHFcP__191->SetStats(0);

   ci = TColor::GetColor("#ff6633");
   h_isojet1CSV_#gammapLjetssPoPHFcP__191->SetFillColor(ci);
   h_isojet1CSV_#gammapLjetssPoPHFcP__191->GetXaxis()->SetTitle("isojet 1 CSV");
   h_isojet1CSV_#gammapLjetssPoPHFcP__191->GetXaxis()->SetLabelFont(42);
   h_isojet1CSV_#gammapLjetssPoPHFcP__191->GetXaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_#gammapLjetssPoPHFcP__191->GetXaxis()->SetTitleSize(0.05);
   h_isojet1CSV_#gammapLjetssPoPHFcP__191->GetXaxis()->SetTickLength(0.025);
   h_isojet1CSV_#gammapLjetssPoPHFcP__191->GetXaxis()->SetTitleFont(42);
   h_isojet1CSV_#gammapLjetssPoPHFcP__191->GetYaxis()->SetTitle("a.u.");
   h_isojet1CSV_#gammapLjetssPoPHFcP__191->GetYaxis()->SetLabelFont(42);
   h_isojet1CSV_#gammapLjetssPoPHFcP__191->GetYaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_#gammapLjetssPoPHFcP__191->GetYaxis()->SetTitleSize(0.05);
   h_isojet1CSV_#gammapLjetssPoPHFcP__191->GetYaxis()->SetTickLength(0.025);
   h_isojet1CSV_#gammapLjetssPoPHFcP__191->GetYaxis()->SetTitleFont(42);
   h_isojet1CSV_#gammapLjetssPoPHFcP__191->GetZaxis()->SetLabelFont(42);
   h_isojet1CSV_#gammapLjetssPoPHFcP__191->GetZaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_#gammapLjetssPoPHFcP__191->GetZaxis()->SetTitleSize(0.05);
   h_isojet1CSV_#gammapLjetssPoPHFcP__191->GetZaxis()->SetTickLength(0.025);
   h_isojet1CSV_#gammapLjetssPoPHFcP__191->GetZaxis()->SetTitleFont(42);
   h->Add(h_isojet1CSV_#gamma+jets (HF),"");
   
   TH1D *h_isojet1CSV_#gammapLjetssPoPLFcP__192 = new TH1D("h_isojet1CSV_#gammapLjetssPoPLFcP__192","",10,0,1);
   h_isojet1CSV_#gammapLjetssPoPLFcP__192->SetBinContent(1,0.2282793);
   h_isojet1CSV_#gammapLjetssPoPLFcP__192->SetBinContent(2,0.2923987);
   h_isojet1CSV_#gammapLjetssPoPLFcP__192->SetBinContent(3,0.1151225);
   h_isojet1CSV_#gammapLjetssPoPLFcP__192->SetBinContent(4,0.0655004);
   h_isojet1CSV_#gammapLjetssPoPLFcP__192->SetBinContent(5,0.04918456);
   h_isojet1CSV_#gammapLjetssPoPLFcP__192->SetBinContent(6,0.03482489);
   h_isojet1CSV_#gammapLjetssPoPLFcP__192->SetBinContent(7,0.02572313);
   h_isojet1CSV_#gammapLjetssPoPLFcP__192->SetBinContent(8,0.01517316);
   h_isojet1CSV_#gammapLjetssPoPLFcP__192->SetBinContent(9,0.009565314);
   h_isojet1CSV_#gammapLjetssPoPLFcP__192->SetBinContent(10,0.003857676);
   h_isojet1CSV_#gammapLjetssPoPLFcP__192->SetBinError(1,0.002431359);
   h_isojet1CSV_#gammapLjetssPoPLFcP__192->SetBinError(2,0.002596524);
   h_isojet1CSV_#gammapLjetssPoPLFcP__192->SetBinError(3,0.001605829);
   h_isojet1CSV_#gammapLjetssPoPLFcP__192->SetBinError(4,0.001174393);
   h_isojet1CSV_#gammapLjetssPoPLFcP__192->SetBinError(5,0.001040972);
   h_isojet1CSV_#gammapLjetssPoPLFcP__192->SetBinError(6,0.0009033601);
   h_isojet1CSV_#gammapLjetssPoPLFcP__192->SetBinError(7,0.0007259261);
   h_isojet1CSV_#gammapLjetssPoPLFcP__192->SetBinError(8,0.0005855867);
   h_isojet1CSV_#gammapLjetssPoPLFcP__192->SetBinError(9,0.0004662286);
   h_isojet1CSV_#gammapLjetssPoPLFcP__192->SetBinError(10,0.0002136064);
   h_isojet1CSV_#gammapLjetssPoPLFcP__192->SetEntries(99281);
   h_isojet1CSV_#gammapLjetssPoPLFcP__192->SetStats(0);

   ci = TColor::GetColor("#339999");
   h_isojet1CSV_#gammapLjetssPoPLFcP__192->SetFillColor(ci);
   h_isojet1CSV_#gammapLjetssPoPLFcP__192->GetXaxis()->SetTitle("isojet 1 CSV");
   h_isojet1CSV_#gammapLjetssPoPLFcP__192->GetXaxis()->SetLabelFont(42);
   h_isojet1CSV_#gammapLjetssPoPLFcP__192->GetXaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_#gammapLjetssPoPLFcP__192->GetXaxis()->SetTitleSize(0.05);
   h_isojet1CSV_#gammapLjetssPoPLFcP__192->GetXaxis()->SetTickLength(0.025);
   h_isojet1CSV_#gammapLjetssPoPLFcP__192->GetXaxis()->SetTitleFont(42);
   h_isojet1CSV_#gammapLjetssPoPLFcP__192->GetYaxis()->SetTitle("a.u.");
   h_isojet1CSV_#gammapLjetssPoPLFcP__192->GetYaxis()->SetLabelFont(42);
   h_isojet1CSV_#gammapLjetssPoPLFcP__192->GetYaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_#gammapLjetssPoPLFcP__192->GetYaxis()->SetTitleSize(0.05);
   h_isojet1CSV_#gammapLjetssPoPLFcP__192->GetYaxis()->SetTickLength(0.025);
   h_isojet1CSV_#gammapLjetssPoPLFcP__192->GetYaxis()->SetTitleFont(42);
   h_isojet1CSV_#gammapLjetssPoPLFcP__192->GetZaxis()->SetLabelFont(42);
   h_isojet1CSV_#gammapLjetssPoPLFcP__192->GetZaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_#gammapLjetssPoPLFcP__192->GetZaxis()->SetTitleSize(0.05);
   h_isojet1CSV_#gammapLjetssPoPLFcP__192->GetZaxis()->SetTickLength(0.025);
   h_isojet1CSV_#gammapLjetssPoPLFcP__192->GetZaxis()->SetTitleFont(42);
   h->Add(h_isojet1CSV_#gamma+jets (LF),"");
   h->Draw("hist");
   
   TH1D *hsum__193 = new TH1D("hsum__193","",10,0,1);
   hsum__193->SetBinContent(1,0.2471221);
   hsum__193->SetBinContent(2,0.3232138);
   hsum__193->SetBinContent(3,0.1310422);
   hsum__193->SetBinContent(4,0.07788958);
   hsum__193->SetBinContent(5,0.06155561);
   hsum__193->SetBinContent(6,0.04502789);
   hsum__193->SetBinContent(7,0.03734325);
   hsum__193->SetBinContent(8,0.02701992);
   hsum__193->SetBinContent(9,0.02569119);
   hsum__193->SetBinContent(10,0.02409438);
   hsum__193->SetBinContent(11,5.130884e-08);
   hsum__193->SetBinError(1,0.002503598);
   hsum__193->SetBinError(2,0.002687111);
   hsum__193->SetBinError(3,0.001686771);
   hsum__193->SetBinError(4,0.001266883);
   hsum__193->SetBinError(5,0.001156392);
   hsum__193->SetBinError(6,0.0009999184);
   hsum__193->SetBinError(7,0.0008952845);
   hsum__193->SetBinError(8,0.0007753184);
   hsum__193->SetBinError(9,0.0008170527);
   hsum__193->SetBinError(10,0.0006137994);
   hsum__193->SetBinError(11,5.130884e-08);
   hsum__193->SetEntries(668754);
   hsum__193->SetStats(0);

   ci = 1201;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   hsum__193->SetFillColor(ci);
   hsum__193->SetFillStyle(3003);
   hsum__193->SetLineWidth(0);
   hsum__193->GetXaxis()->SetTitle("isojet 1 CSV");
   hsum__193->GetXaxis()->SetLabelFont(42);
   hsum__193->GetXaxis()->SetLabelOffset(0.007);
   hsum__193->GetXaxis()->SetTitleSize(0.05);
   hsum__193->GetXaxis()->SetTickLength(0.025);
   hsum__193->GetXaxis()->SetTitleFont(42);
   hsum__193->GetYaxis()->SetTitle("a.u.");
   hsum__193->GetYaxis()->SetLabelFont(42);
   hsum__193->GetYaxis()->SetLabelOffset(0.007);
   hsum__193->GetYaxis()->SetTitleSize(0.05);
   hsum__193->GetYaxis()->SetTickLength(0.025);
   hsum__193->GetYaxis()->SetTitleFont(42);
   hsum__193->GetZaxis()->SetLabelFont(42);
   hsum__193->GetZaxis()->SetLabelOffset(0.007);
   hsum__193->GetZaxis()->SetTitleSize(0.05);
   hsum__193->GetZaxis()->SetTickLength(0.025);
   hsum__193->GetZaxis()->SetTitleFont(42);
   hsum__193->Draw("e2 same");
   
   TH1D *h_isojet1CSV_Data__194 = new TH1D("h_isojet1CSV_Data__194","",10,0,1);
   h_isojet1CSV_Data__194->SetBinContent(1,0.2015498);
   h_isojet1CSV_Data__194->SetBinContent(2,0.3102913);
   h_isojet1CSV_Data__194->SetBinContent(3,0.134372);
   h_isojet1CSV_Data__194->SetBinContent(4,0.0869809);
   h_isojet1CSV_Data__194->SetBinContent(5,0.07472489);
   h_isojet1CSV_Data__194->SetBinContent(6,0.0542683);
   h_isojet1CSV_Data__194->SetBinContent(7,0.04423739);
   h_isojet1CSV_Data__194->SetBinContent(8,0.03282925);
   h_isojet1CSV_Data__194->SetBinContent(9,0.0305204);
   h_isojet1CSV_Data__194->SetBinContent(10,0.03022582);
   h_isojet1CSV_Data__194->SetBinContent(11,1.495365e-06);
   h_isojet1CSV_Data__194->SetBinError(1,0.0005489905);
   h_isojet1CSV_Data__194->SetBinError(2,0.0006811745);
   h_isojet1CSV_Data__194->SetBinError(3,0.000448258);
   h_isojet1CSV_Data__194->SetBinError(4,0.0003606497);
   h_isojet1CSV_Data__194->SetBinError(5,0.0003342768);
   h_isojet1CSV_Data__194->SetBinError(6,0.00028487);
   h_isojet1CSV_Data__194->SetBinError(7,0.0002571985);
   h_isojet1CSV_Data__194->SetBinError(8,0.0002215665);
   h_isojet1CSV_Data__194->SetBinError(9,0.0002136332);
   h_isojet1CSV_Data__194->SetBinError(10,0.0002125997);
   h_isojet1CSV_Data__194->SetBinError(11,1.495365e-06);
   h_isojet1CSV_Data__194->SetEntries(668734);
   h_isojet1CSV_Data__194->SetStats(0);
   h_isojet1CSV_Data__194->SetLineWidth(3);
   h_isojet1CSV_Data__194->SetMarkerStyle(20);
   h_isojet1CSV_Data__194->SetMarkerSize(2);
   h_isojet1CSV_Data__194->GetXaxis()->SetTitle("isojet 1 CSV");
   h_isojet1CSV_Data__194->GetXaxis()->SetLabelFont(42);
   h_isojet1CSV_Data__194->GetXaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_Data__194->GetXaxis()->SetTitleSize(0.05);
   h_isojet1CSV_Data__194->GetXaxis()->SetTickLength(0.025);
   h_isojet1CSV_Data__194->GetXaxis()->SetTitleFont(42);
   h_isojet1CSV_Data__194->GetYaxis()->SetTitle("a.u.");
   h_isojet1CSV_Data__194->GetYaxis()->SetLabelFont(42);
   h_isojet1CSV_Data__194->GetYaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_Data__194->GetYaxis()->SetTitleSize(0.05);
   h_isojet1CSV_Data__194->GetYaxis()->SetTickLength(0.025);
   h_isojet1CSV_Data__194->GetYaxis()->SetTitleFont(42);
   h_isojet1CSV_Data__194->GetZaxis()->SetLabelFont(42);
   h_isojet1CSV_Data__194->GetZaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_Data__194->GetZaxis()->SetTitleSize(0.05);
   h_isojet1CSV_Data__194->GetZaxis()->SetTickLength(0.025);
   h_isojet1CSV_Data__194->GetZaxis()->SetTitleFont(42);
   h_isojet1CSV_Data__194->Draw("elp same");
   
   TLegend *leg = new TLegend(0.6,0.55,0.88,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("h_isojet1CSV_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_isojet1CSV_#gamma+jets (LF)","#gamma+jets (LF)","F");

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
   entry=leg->AddEntry("h_isojet1CSV_#gamma+jets (HF)","#gamma+jets (HF)","F");

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
   entry=leg->AddEntry("h_isojet1CSV_QCD","QCD","F");

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
   entry=leg->AddEntry("h_isojet1CSV_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_isojet1CSV_#gamma+jets (LF)","#gamma+jets (LF)","F");

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
   entry=leg->AddEntry("h_isojet1CSV_#gamma+jets (HF)","#gamma+jets (HF)","F");

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
   entry=leg->AddEntry("h_isojet1CSV_QCD","QCD","F");

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
   
   TH1D *ratio__195 = new TH1D("ratio__195","",10,0,1);
   ratio__195->SetBinContent(1,-0.1844121);
   ratio__195->SetBinContent(2,-0.03998154);
   ratio__195->SetBinContent(3,0.02541018);
   ratio__195->SetBinContent(4,0.1167206);
   ratio__195->SetBinContent(5,0.2139411);
   ratio__195->SetBinContent(6,0.2052153);
   ratio__195->SetBinContent(7,0.1846154);
   ratio__195->SetBinContent(8,0.2150015);
   ratio__195->SetBinContent(9,0.1879714);
   ratio__195->SetBinContent(10,0.254476);
   ratio__195->SetBinContent(11,1.495365e-06);
   ratio__195->SetBinError(1,0.0001);
   ratio__195->SetBinError(2,0.0001);
   ratio__195->SetBinError(3,0.0001);
   ratio__195->SetBinError(4,0.0001);
   ratio__195->SetBinError(5,0.0001);
   ratio__195->SetBinError(6,0.0001);
   ratio__195->SetBinError(7,0.0001);
   ratio__195->SetBinError(8,0.0001);
   ratio__195->SetBinError(9,0.0001);
   ratio__195->SetBinError(10,0.0001);
   ratio__195->SetBinError(11,1.495365e-06);
   ratio__195->SetMinimum(-0.48);
   ratio__195->SetMaximum(0.48);
   ratio__195->SetEntries(668744);
   ratio__195->SetStats(0);
   ratio__195->SetLineWidth(3);
   ratio__195->SetMarkerStyle(20);
   ratio__195->SetMarkerSize(2);
   ratio__195->GetXaxis()->SetTitle("isojet 1 CSV");
   ratio__195->GetXaxis()->SetLabelFont(43);
   ratio__195->GetXaxis()->SetLabelOffset(0.007);
   ratio__195->GetXaxis()->SetLabelSize(30);
   ratio__195->GetXaxis()->SetTitleSize(40);
   ratio__195->GetXaxis()->SetTickLength(0.025);
   ratio__195->GetXaxis()->SetTitleOffset(5);
   ratio__195->GetXaxis()->SetTitleFont(43);
   ratio__195->GetYaxis()->SetTitle("#frac{Data-Exp}{Exp}");
   ratio__195->GetYaxis()->SetNdivisions(5);
   ratio__195->GetYaxis()->SetLabelFont(43);
   ratio__195->GetYaxis()->SetLabelOffset(0.007);
   ratio__195->GetYaxis()->SetLabelSize(30);
   ratio__195->GetYaxis()->SetTitleSize(40);
   ratio__195->GetYaxis()->SetTickLength(0.025);
   ratio__195->GetYaxis()->SetTitleOffset(2.5);
   ratio__195->GetYaxis()->SetTitleFont(43);
   ratio__195->GetZaxis()->SetLabelFont(42);
   ratio__195->GetZaxis()->SetLabelOffset(0.007);
   ratio__195->GetZaxis()->SetTitleSize(0.05);
   ratio__195->GetZaxis()->SetTickLength(0.025);
   ratio__195->GetZaxis()->SetTitleFont(42);
   ratio__195->Draw("elp");
   
   TH1D *zero__196 = new TH1D("zero__196","",10,0,1);
   zero__196->SetBinContent(11,1.495365e-06);
   zero__196->SetBinError(1,0.0005489905);
   zero__196->SetBinError(2,0.0006811745);
   zero__196->SetBinError(3,0.000448258);
   zero__196->SetBinError(4,0.0003606497);
   zero__196->SetBinError(5,0.0003342768);
   zero__196->SetBinError(6,0.00028487);
   zero__196->SetBinError(7,0.0002571985);
   zero__196->SetBinError(8,0.0002215665);
   zero__196->SetBinError(9,0.0002136332);
   zero__196->SetBinError(10,0.0002125997);
   zero__196->SetBinError(11,1.495365e-06);
   zero__196->SetEntries(668744);
   zero__196->SetStats(0);
   zero__196->SetLineWidth(3);
   zero__196->SetMarkerStyle(20);
   zero__196->SetMarkerSize(2);
   zero__196->GetXaxis()->SetTitle("isojet 1 CSV");
   zero__196->GetXaxis()->SetLabelFont(42);
   zero__196->GetXaxis()->SetLabelOffset(0.007);
   zero__196->GetXaxis()->SetTitleSize(0.05);
   zero__196->GetXaxis()->SetTickLength(0.025);
   zero__196->GetXaxis()->SetTitleFont(42);
   zero__196->GetYaxis()->SetTitle("a.u.");
   zero__196->GetYaxis()->SetLabelFont(42);
   zero__196->GetYaxis()->SetLabelOffset(0.007);
   zero__196->GetYaxis()->SetTitleSize(0.05);
   zero__196->GetYaxis()->SetTickLength(0.025);
   zero__196->GetYaxis()->SetTitleFont(42);
   zero__196->GetZaxis()->SetLabelFont(42);
   zero__196->GetZaxis()->SetLabelOffset(0.007);
   zero__196->GetZaxis()->SetTitleSize(0.05);
   zero__196->GetZaxis()->SetTickLength(0.025);
   zero__196->GetZaxis()->SetTitleFont(42);
   zero__196->Draw("hist same");
   
   TH1D *sumratioup__197 = new TH1D("sumratioup__197","",10,0,1);
   sumratioup__197->SetBinContent(1,0.01013102);
   sumratioup__197->SetBinContent(2,0.008313726);
   sumratioup__197->SetBinContent(3,0.01287197);
   sumratioup__197->SetBinContent(4,0.01626511);
   sumratioup__197->SetBinContent(5,0.01878613);
   sumratioup__197->SetBinContent(6,0.02220665);
   sumratioup__197->SetBinContent(7,0.02397447);
   sumratioup__197->SetBinContent(8,0.02869432);
   sumratioup__197->SetBinContent(9,0.03180283);
   sumratioup__197->SetBinContent(10,0.0254748);
   sumratioup__197->SetBinContent(11,5.130884e-08);
   sumratioup__197->SetBinError(1,0.002503598);
   sumratioup__197->SetBinError(2,0.002687111);
   sumratioup__197->SetBinError(3,0.001686771);
   sumratioup__197->SetBinError(4,0.001266883);
   sumratioup__197->SetBinError(5,0.001156392);
   sumratioup__197->SetBinError(6,0.0009999184);
   sumratioup__197->SetBinError(7,0.0008952845);
   sumratioup__197->SetBinError(8,0.0007753184);
   sumratioup__197->SetBinError(9,0.0008170527);
   sumratioup__197->SetBinError(10,0.0006137994);
   sumratioup__197->SetBinError(11,5.130884e-08);
   sumratioup__197->SetEntries(668764);
   sumratioup__197->SetStats(0);

   ci = 1201;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratioup__197->SetFillColor(ci);
   sumratioup__197->SetFillStyle(3003);
   sumratioup__197->GetXaxis()->SetTitle("isojet 1 CSV");
   sumratioup__197->GetXaxis()->SetLabelFont(42);
   sumratioup__197->GetXaxis()->SetLabelOffset(0.007);
   sumratioup__197->GetXaxis()->SetTitleSize(0.05);
   sumratioup__197->GetXaxis()->SetTickLength(0.025);
   sumratioup__197->GetXaxis()->SetTitleFont(42);
   sumratioup__197->GetYaxis()->SetTitle("a.u.");
   sumratioup__197->GetYaxis()->SetLabelFont(42);
   sumratioup__197->GetYaxis()->SetLabelOffset(0.007);
   sumratioup__197->GetYaxis()->SetTitleSize(0.05);
   sumratioup__197->GetYaxis()->SetTickLength(0.025);
   sumratioup__197->GetYaxis()->SetTitleFont(42);
   sumratioup__197->GetZaxis()->SetLabelFont(42);
   sumratioup__197->GetZaxis()->SetLabelOffset(0.007);
   sumratioup__197->GetZaxis()->SetTitleSize(0.05);
   sumratioup__197->GetZaxis()->SetTickLength(0.025);
   sumratioup__197->GetZaxis()->SetTitleFont(42);
   sumratioup__197->Draw("hist same");
   
   TH1D *sumratiodown__198 = new TH1D("sumratiodown__198","",10,0,1);
   sumratiodown__198->SetBinContent(1,-0.01013102);
   sumratiodown__198->SetBinContent(2,-0.008313726);
   sumratiodown__198->SetBinContent(3,-0.01287197);
   sumratiodown__198->SetBinContent(4,-0.01626511);
   sumratiodown__198->SetBinContent(5,-0.01878613);
   sumratiodown__198->SetBinContent(6,-0.02220665);
   sumratiodown__198->SetBinContent(7,-0.02397447);
   sumratiodown__198->SetBinContent(8,-0.02869432);
   sumratiodown__198->SetBinContent(9,-0.03180283);
   sumratiodown__198->SetBinContent(10,-0.0254748);
   sumratiodown__198->SetBinContent(11,5.130884e-08);
   sumratiodown__198->SetBinError(1,0.002503598);
   sumratiodown__198->SetBinError(2,0.002687111);
   sumratiodown__198->SetBinError(3,0.001686771);
   sumratiodown__198->SetBinError(4,0.001266883);
   sumratiodown__198->SetBinError(5,0.001156392);
   sumratiodown__198->SetBinError(6,0.0009999184);
   sumratiodown__198->SetBinError(7,0.0008952845);
   sumratiodown__198->SetBinError(8,0.0007753184);
   sumratiodown__198->SetBinError(9,0.0008170527);
   sumratiodown__198->SetBinError(10,0.0006137994);
   sumratiodown__198->SetBinError(11,5.130884e-08);
   sumratiodown__198->SetEntries(668764);
   sumratiodown__198->SetStats(0);

   ci = 1201;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratiodown__198->SetFillColor(ci);
   sumratiodown__198->SetFillStyle(3003);
   sumratiodown__198->GetXaxis()->SetTitle("isojet 1 CSV");
   sumratiodown__198->GetXaxis()->SetLabelFont(42);
   sumratiodown__198->GetXaxis()->SetLabelOffset(0.007);
   sumratiodown__198->GetXaxis()->SetTitleSize(0.05);
   sumratiodown__198->GetXaxis()->SetTickLength(0.025);
   sumratiodown__198->GetXaxis()->SetTitleFont(42);
   sumratiodown__198->GetYaxis()->SetTitle("a.u.");
   sumratiodown__198->GetYaxis()->SetLabelFont(42);
   sumratiodown__198->GetYaxis()->SetLabelOffset(0.007);
   sumratiodown__198->GetYaxis()->SetTitleSize(0.05);
   sumratiodown__198->GetYaxis()->SetTickLength(0.025);
   sumratiodown__198->GetYaxis()->SetTitleFont(42);
   sumratiodown__198->GetZaxis()->SetLabelFont(42);
   sumratiodown__198->GetZaxis()->SetLabelOffset(0.007);
   sumratiodown__198->GetZaxis()->SetTitleSize(0.05);
   sumratiodown__198->GetZaxis()->SetTickLength(0.025);
   sumratiodown__198->GetZaxis()->SetTitleFont(42);
   sumratiodown__198->Draw("hist same");
   
   Double_t Graph0_fx1022[10] = {
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
   Double_t Graph0_fy1022[10] = {
   -0.1844121,
   -0.03998154,
   0.02541018,
   0.1167206,
   0.2139411,
   0.2052153,
   0.1846154,
   0.2150015,
   0.1879714,
   0.254476};
   Double_t Graph0_fex1022[10] = {
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
   Double_t Graph0_fey1022[10] = {
   0.002221535,
   0.002107504,
   0.003420714,
   0.004630269,
   0.005430485,
   0.006326524,
   0.006887415,
   0.008200116,
   0.008315425,
   0.008823623};
   TGraphErrors *gre = new TGraphErrors(10,Graph0_fx1022,Graph0_fy1022,Graph0_fex1022,Graph0_fey1022);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1022 = new TH1F("Graph_Graph1022","Graph",100,0,1.04);
   Graph_Graph1022->SetMinimum(-0.2316269);
   Graph_Graph1022->SetMaximum(0.3082929);
   Graph_Graph1022->SetDirectory(0);
   Graph_Graph1022->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1022->SetLineColor(ci);
   Graph_Graph1022->GetXaxis()->SetLabelFont(42);
   Graph_Graph1022->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1022->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1022->GetXaxis()->SetTickLength(0.025);
   Graph_Graph1022->GetXaxis()->SetTitleFont(42);
   Graph_Graph1022->GetYaxis()->SetLabelFont(42);
   Graph_Graph1022->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1022->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1022->GetYaxis()->SetTickLength(0.025);
   Graph_Graph1022->GetYaxis()->SetTitleFont(42);
   Graph_Graph1022->GetZaxis()->SetLabelFont(42);
   Graph_Graph1022->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1022->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph1022->GetZaxis()->SetTickLength(0.025);
   Graph_Graph1022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1022);
   
   gre->Draw("pe0");
   pad2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
