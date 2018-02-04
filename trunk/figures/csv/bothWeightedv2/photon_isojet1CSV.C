void photon_isojet1CSV()
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
   pad1->Range(-0.1875,0,1.0625,0.7298377);
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
   h->SetMaximum(0.6464277);
   
   TH1F *h_stack_21 = new TH1F("h_stack_21","",10,0,1);
   h_stack_21->SetMinimum(0);
   h_stack_21->SetMaximum(0.6787491);
   h_stack_21->SetDirectory(0);
   h_stack_21->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h_stack_21->SetLineColor(ci);
   h_stack_21->GetXaxis()->SetLabelFont(42);
   h_stack_21->GetXaxis()->SetLabelOffset(0.007);
   h_stack_21->GetXaxis()->SetTitleSize(0.05);
   h_stack_21->GetXaxis()->SetTickLength(0.025);
   h_stack_21->GetXaxis()->SetTitleFont(42);
   h_stack_21->GetYaxis()->SetTitle("a.u.");
   h_stack_21->GetYaxis()->SetLabelFont(42);
   h_stack_21->GetYaxis()->SetLabelOffset(0.007);
   h_stack_21->GetYaxis()->SetTitleSize(0.05);
   h_stack_21->GetYaxis()->SetTickLength(0.025);
   h_stack_21->GetYaxis()->SetTitleOffset(1.5);
   h_stack_21->GetYaxis()->SetTitleFont(42);
   h_stack_21->GetZaxis()->SetLabelFont(42);
   h_stack_21->GetZaxis()->SetLabelOffset(0.007);
   h_stack_21->GetZaxis()->SetTitleSize(0.05);
   h_stack_21->GetZaxis()->SetTickLength(0.025);
   h_stack_21->GetZaxis()->SetTitleFont(42);
   h->SetHistogram(h_stack_21);
   
   
   TH1D *h_isojet1CSV_QCD__181 = new TH1D("h_isojet1CSV_QCD__181","",10,0,1);
   h_isojet1CSV_QCD__181->SetBinContent(1,0.00683344);
   h_isojet1CSV_QCD__181->SetBinContent(2,0.01039186);
   h_isojet1CSV_QCD__181->SetBinContent(3,0.004456914);
   h_isojet1CSV_QCD__181->SetBinContent(4,0.002897553);
   h_isojet1CSV_QCD__181->SetBinContent(5,0.002478716);
   h_isojet1CSV_QCD__181->SetBinContent(6,0.001792993);
   h_isojet1CSV_QCD__181->SetBinContent(7,0.001468187);
   h_isojet1CSV_QCD__181->SetBinContent(8,0.001087928);
   h_isojet1CSV_QCD__181->SetBinContent(9,0.001015518);
   h_isojet1CSV_QCD__181->SetBinContent(10,0.001003391);
   h_isojet1CSV_QCD__181->SetBinContent(11,5.130884e-08);
   h_isojet1CSV_QCD__181->SetBinError(1,1.87832e-05);
   h_isojet1CSV_QCD__181->SetBinError(2,2.304555e-05);
   h_isojet1CSV_QCD__181->SetBinError(3,1.503263e-05);
   h_isojet1CSV_QCD__181->SetBinError(4,1.214088e-05);
   h_isojet1CSV_QCD__181->SetBinError(5,1.120835e-05);
   h_isojet1CSV_QCD__181->SetBinError(6,9.517027e-06);
   h_isojet1CSV_QCD__181->SetBinError(7,8.62789e-06);
   h_isojet1CSV_QCD__181->SetBinError(8,7.422376e-06);
   h_isojet1CSV_QCD__181->SetBinError(9,7.182405e-06);
   h_isojet1CSV_QCD__181->SetBinError(10,7.130861e-06);
   h_isojet1CSV_QCD__181->SetBinError(11,5.130884e-08);
   h_isojet1CSV_QCD__181->SetEntries(668734);
   h_isojet1CSV_QCD__181->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_isojet1CSV_QCD__181->SetFillColor(ci);
   h_isojet1CSV_QCD__181->GetXaxis()->SetTitle("isojet 1 CSV");
   h_isojet1CSV_QCD__181->GetXaxis()->SetLabelFont(42);
   h_isojet1CSV_QCD__181->GetXaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_QCD__181->GetXaxis()->SetTitleSize(0.05);
   h_isojet1CSV_QCD__181->GetXaxis()->SetTickLength(0.025);
   h_isojet1CSV_QCD__181->GetXaxis()->SetTitleFont(42);
   h_isojet1CSV_QCD__181->GetYaxis()->SetTitle("a.u.");
   h_isojet1CSV_QCD__181->GetYaxis()->SetLabelFont(42);
   h_isojet1CSV_QCD__181->GetYaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_QCD__181->GetYaxis()->SetTitleSize(0.05);
   h_isojet1CSV_QCD__181->GetYaxis()->SetTickLength(0.025);
   h_isojet1CSV_QCD__181->GetYaxis()->SetTitleFont(42);
   h_isojet1CSV_QCD__181->GetZaxis()->SetLabelFont(42);
   h_isojet1CSV_QCD__181->GetZaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_QCD__181->GetZaxis()->SetTitleSize(0.05);
   h_isojet1CSV_QCD__181->GetZaxis()->SetTickLength(0.025);
   h_isojet1CSV_QCD__181->GetZaxis()->SetTitleFont(42);
   h->Add(h_isojet1CSV_QCD,"");
   
   TH1D *h_isojet1CSV_#gammapLjetssPoPHFcP__182 = new TH1D("h_isojet1CSV_#gammapLjetssPoPHFcP__182","",10,0,1);
   h_isojet1CSV_#gammapLjetssPoPHFcP__182->SetBinContent(1,0.01200932);
   h_isojet1CSV_#gammapLjetssPoPHFcP__182->SetBinContent(2,0.02042333);
   h_isojet1CSV_#gammapLjetssPoPHFcP__182->SetBinContent(3,0.01146281);
   h_isojet1CSV_#gammapLjetssPoPHFcP__182->SetBinContent(4,0.009491634);
   h_isojet1CSV_#gammapLjetssPoPHFcP__182->SetBinContent(5,0.009892331);
   h_isojet1CSV_#gammapLjetssPoPHFcP__182->SetBinContent(6,0.008410006);
   h_isojet1CSV_#gammapLjetssPoPHFcP__182->SetBinContent(7,0.01015193);
   h_isojet1CSV_#gammapLjetssPoPHFcP__182->SetBinContent(8,0.01075883);
   h_isojet1CSV_#gammapLjetssPoPHFcP__182->SetBinContent(9,0.01511036);
   h_isojet1CSV_#gammapLjetssPoPHFcP__182->SetBinContent(10,0.01923331);
   h_isojet1CSV_#gammapLjetssPoPHFcP__182->SetBinError(1,0.0005967796);
   h_isojet1CSV_#gammapLjetssPoPHFcP__182->SetBinError(2,0.0006914462);
   h_isojet1CSV_#gammapLjetssPoPHFcP__182->SetBinError(3,0.0005160281);
   h_isojet1CSV_#gammapLjetssPoPHFcP__182->SetBinError(4,0.0004750233);
   h_isojet1CSV_#gammapLjetssPoPHFcP__182->SetBinError(5,0.0005034815);
   h_isojet1CSV_#gammapLjetssPoPHFcP__182->SetBinError(6,0.0004285871);
   h_isojet1CSV_#gammapLjetssPoPHFcP__182->SetBinError(7,0.000523919);
   h_isojet1CSV_#gammapLjetssPoPHFcP__182->SetBinError(8,0.0005080863);
   h_isojet1CSV_#gammapLjetssPoPHFcP__182->SetBinError(9,0.0006709355);
   h_isojet1CSV_#gammapLjetssPoPHFcP__182->SetBinError(10,0.0005753879);
   h_isojet1CSV_#gammapLjetssPoPHFcP__182->SetEntries(14151);
   h_isojet1CSV_#gammapLjetssPoPHFcP__182->SetStats(0);

   ci = TColor::GetColor("#ff6633");
   h_isojet1CSV_#gammapLjetssPoPHFcP__182->SetFillColor(ci);
   h_isojet1CSV_#gammapLjetssPoPHFcP__182->GetXaxis()->SetTitle("isojet 1 CSV");
   h_isojet1CSV_#gammapLjetssPoPHFcP__182->GetXaxis()->SetLabelFont(42);
   h_isojet1CSV_#gammapLjetssPoPHFcP__182->GetXaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_#gammapLjetssPoPHFcP__182->GetXaxis()->SetTitleSize(0.05);
   h_isojet1CSV_#gammapLjetssPoPHFcP__182->GetXaxis()->SetTickLength(0.025);
   h_isojet1CSV_#gammapLjetssPoPHFcP__182->GetXaxis()->SetTitleFont(42);
   h_isojet1CSV_#gammapLjetssPoPHFcP__182->GetYaxis()->SetTitle("a.u.");
   h_isojet1CSV_#gammapLjetssPoPHFcP__182->GetYaxis()->SetLabelFont(42);
   h_isojet1CSV_#gammapLjetssPoPHFcP__182->GetYaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_#gammapLjetssPoPHFcP__182->GetYaxis()->SetTitleSize(0.05);
   h_isojet1CSV_#gammapLjetssPoPHFcP__182->GetYaxis()->SetTickLength(0.025);
   h_isojet1CSV_#gammapLjetssPoPHFcP__182->GetYaxis()->SetTitleFont(42);
   h_isojet1CSV_#gammapLjetssPoPHFcP__182->GetZaxis()->SetLabelFont(42);
   h_isojet1CSV_#gammapLjetssPoPHFcP__182->GetZaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_#gammapLjetssPoPHFcP__182->GetZaxis()->SetTitleSize(0.05);
   h_isojet1CSV_#gammapLjetssPoPHFcP__182->GetZaxis()->SetTickLength(0.025);
   h_isojet1CSV_#gammapLjetssPoPHFcP__182->GetZaxis()->SetTitleFont(42);
   h->Add(h_isojet1CSV_#gamma+jets (HF),"");
   
   TH1D *h_isojet1CSV_#gammapLjetssPoPLFcP__183 = new TH1D("h_isojet1CSV_#gammapLjetssPoPLFcP__183","",10,0,1);
   h_isojet1CSV_#gammapLjetssPoPLFcP__183->SetBinContent(1,0.2282793);
   h_isojet1CSV_#gammapLjetssPoPLFcP__183->SetBinContent(2,0.2923987);
   h_isojet1CSV_#gammapLjetssPoPLFcP__183->SetBinContent(3,0.1151225);
   h_isojet1CSV_#gammapLjetssPoPLFcP__183->SetBinContent(4,0.0655004);
   h_isojet1CSV_#gammapLjetssPoPLFcP__183->SetBinContent(5,0.04918456);
   h_isojet1CSV_#gammapLjetssPoPLFcP__183->SetBinContent(6,0.03482489);
   h_isojet1CSV_#gammapLjetssPoPLFcP__183->SetBinContent(7,0.02572313);
   h_isojet1CSV_#gammapLjetssPoPLFcP__183->SetBinContent(8,0.01517316);
   h_isojet1CSV_#gammapLjetssPoPLFcP__183->SetBinContent(9,0.009565314);
   h_isojet1CSV_#gammapLjetssPoPLFcP__183->SetBinContent(10,0.003857676);
   h_isojet1CSV_#gammapLjetssPoPLFcP__183->SetBinError(1,0.002431359);
   h_isojet1CSV_#gammapLjetssPoPLFcP__183->SetBinError(2,0.002596524);
   h_isojet1CSV_#gammapLjetssPoPLFcP__183->SetBinError(3,0.001605829);
   h_isojet1CSV_#gammapLjetssPoPLFcP__183->SetBinError(4,0.001174393);
   h_isojet1CSV_#gammapLjetssPoPLFcP__183->SetBinError(5,0.001040972);
   h_isojet1CSV_#gammapLjetssPoPLFcP__183->SetBinError(6,0.0009033601);
   h_isojet1CSV_#gammapLjetssPoPLFcP__183->SetBinError(7,0.0007259261);
   h_isojet1CSV_#gammapLjetssPoPLFcP__183->SetBinError(8,0.0005855867);
   h_isojet1CSV_#gammapLjetssPoPLFcP__183->SetBinError(9,0.0004662286);
   h_isojet1CSV_#gammapLjetssPoPLFcP__183->SetBinError(10,0.0002136064);
   h_isojet1CSV_#gammapLjetssPoPLFcP__183->SetEntries(99281);
   h_isojet1CSV_#gammapLjetssPoPLFcP__183->SetStats(0);

   ci = TColor::GetColor("#339999");
   h_isojet1CSV_#gammapLjetssPoPLFcP__183->SetFillColor(ci);
   h_isojet1CSV_#gammapLjetssPoPLFcP__183->GetXaxis()->SetTitle("isojet 1 CSV");
   h_isojet1CSV_#gammapLjetssPoPLFcP__183->GetXaxis()->SetLabelFont(42);
   h_isojet1CSV_#gammapLjetssPoPLFcP__183->GetXaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_#gammapLjetssPoPLFcP__183->GetXaxis()->SetTitleSize(0.05);
   h_isojet1CSV_#gammapLjetssPoPLFcP__183->GetXaxis()->SetTickLength(0.025);
   h_isojet1CSV_#gammapLjetssPoPLFcP__183->GetXaxis()->SetTitleFont(42);
   h_isojet1CSV_#gammapLjetssPoPLFcP__183->GetYaxis()->SetTitle("a.u.");
   h_isojet1CSV_#gammapLjetssPoPLFcP__183->GetYaxis()->SetLabelFont(42);
   h_isojet1CSV_#gammapLjetssPoPLFcP__183->GetYaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_#gammapLjetssPoPLFcP__183->GetYaxis()->SetTitleSize(0.05);
   h_isojet1CSV_#gammapLjetssPoPLFcP__183->GetYaxis()->SetTickLength(0.025);
   h_isojet1CSV_#gammapLjetssPoPLFcP__183->GetYaxis()->SetTitleFont(42);
   h_isojet1CSV_#gammapLjetssPoPLFcP__183->GetZaxis()->SetLabelFont(42);
   h_isojet1CSV_#gammapLjetssPoPLFcP__183->GetZaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_#gammapLjetssPoPLFcP__183->GetZaxis()->SetTitleSize(0.05);
   h_isojet1CSV_#gammapLjetssPoPLFcP__183->GetZaxis()->SetTickLength(0.025);
   h_isojet1CSV_#gammapLjetssPoPLFcP__183->GetZaxis()->SetTitleFont(42);
   h->Add(h_isojet1CSV_#gamma+jets (LF),"");
   h->Draw("hist");
   
   TH1D *hsum__184 = new TH1D("hsum__184","",10,0,1);
   hsum__184->SetBinContent(1,0.2471221);
   hsum__184->SetBinContent(2,0.3232138);
   hsum__184->SetBinContent(3,0.1310422);
   hsum__184->SetBinContent(4,0.07788958);
   hsum__184->SetBinContent(5,0.06155561);
   hsum__184->SetBinContent(6,0.04502789);
   hsum__184->SetBinContent(7,0.03734325);
   hsum__184->SetBinContent(8,0.02701992);
   hsum__184->SetBinContent(9,0.02569119);
   hsum__184->SetBinContent(10,0.02409438);
   hsum__184->SetBinContent(11,5.130884e-08);
   hsum__184->SetBinError(1,0.002503598);
   hsum__184->SetBinError(2,0.002687111);
   hsum__184->SetBinError(3,0.001686771);
   hsum__184->SetBinError(4,0.001266883);
   hsum__184->SetBinError(5,0.001156392);
   hsum__184->SetBinError(6,0.0009999184);
   hsum__184->SetBinError(7,0.0008952845);
   hsum__184->SetBinError(8,0.0007753184);
   hsum__184->SetBinError(9,0.0008170527);
   hsum__184->SetBinError(10,0.0006137994);
   hsum__184->SetBinError(11,5.130884e-08);
   hsum__184->SetEntries(668754);
   hsum__184->SetStats(0);

   ci = 1200;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   hsum__184->SetFillColor(ci);
   hsum__184->SetFillStyle(3003);
   hsum__184->SetLineWidth(0);
   hsum__184->GetXaxis()->SetTitle("isojet 1 CSV");
   hsum__184->GetXaxis()->SetLabelFont(42);
   hsum__184->GetXaxis()->SetLabelOffset(0.007);
   hsum__184->GetXaxis()->SetTitleSize(0.05);
   hsum__184->GetXaxis()->SetTickLength(0.025);
   hsum__184->GetXaxis()->SetTitleFont(42);
   hsum__184->GetYaxis()->SetTitle("a.u.");
   hsum__184->GetYaxis()->SetLabelFont(42);
   hsum__184->GetYaxis()->SetLabelOffset(0.007);
   hsum__184->GetYaxis()->SetTitleSize(0.05);
   hsum__184->GetYaxis()->SetTickLength(0.025);
   hsum__184->GetYaxis()->SetTitleFont(42);
   hsum__184->GetZaxis()->SetLabelFont(42);
   hsum__184->GetZaxis()->SetLabelOffset(0.007);
   hsum__184->GetZaxis()->SetTitleSize(0.05);
   hsum__184->GetZaxis()->SetTickLength(0.025);
   hsum__184->GetZaxis()->SetTitleFont(42);
   hsum__184->Draw("e2 same");
   
   TH1D *h_isojet1CSV_Data__185 = new TH1D("h_isojet1CSV_Data__185","",10,0,1);
   h_isojet1CSV_Data__185->SetBinContent(1,0.2015498);
   h_isojet1CSV_Data__185->SetBinContent(2,0.3102913);
   h_isojet1CSV_Data__185->SetBinContent(3,0.134372);
   h_isojet1CSV_Data__185->SetBinContent(4,0.0869809);
   h_isojet1CSV_Data__185->SetBinContent(5,0.07472489);
   h_isojet1CSV_Data__185->SetBinContent(6,0.0542683);
   h_isojet1CSV_Data__185->SetBinContent(7,0.04423739);
   h_isojet1CSV_Data__185->SetBinContent(8,0.03282925);
   h_isojet1CSV_Data__185->SetBinContent(9,0.0305204);
   h_isojet1CSV_Data__185->SetBinContent(10,0.03022582);
   h_isojet1CSV_Data__185->SetBinContent(11,1.495365e-06);
   h_isojet1CSV_Data__185->SetBinError(1,0.0005489905);
   h_isojet1CSV_Data__185->SetBinError(2,0.0006811745);
   h_isojet1CSV_Data__185->SetBinError(3,0.000448258);
   h_isojet1CSV_Data__185->SetBinError(4,0.0003606497);
   h_isojet1CSV_Data__185->SetBinError(5,0.0003342768);
   h_isojet1CSV_Data__185->SetBinError(6,0.00028487);
   h_isojet1CSV_Data__185->SetBinError(7,0.0002571985);
   h_isojet1CSV_Data__185->SetBinError(8,0.0002215665);
   h_isojet1CSV_Data__185->SetBinError(9,0.0002136332);
   h_isojet1CSV_Data__185->SetBinError(10,0.0002125997);
   h_isojet1CSV_Data__185->SetBinError(11,1.495365e-06);
   h_isojet1CSV_Data__185->SetEntries(668734);
   h_isojet1CSV_Data__185->SetStats(0);
   h_isojet1CSV_Data__185->SetLineWidth(3);
   h_isojet1CSV_Data__185->SetMarkerStyle(20);
   h_isojet1CSV_Data__185->SetMarkerSize(2);
   h_isojet1CSV_Data__185->GetXaxis()->SetTitle("isojet 1 CSV");
   h_isojet1CSV_Data__185->GetXaxis()->SetLabelFont(42);
   h_isojet1CSV_Data__185->GetXaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_Data__185->GetXaxis()->SetTitleSize(0.05);
   h_isojet1CSV_Data__185->GetXaxis()->SetTickLength(0.025);
   h_isojet1CSV_Data__185->GetXaxis()->SetTitleFont(42);
   h_isojet1CSV_Data__185->GetYaxis()->SetTitle("a.u.");
   h_isojet1CSV_Data__185->GetYaxis()->SetLabelFont(42);
   h_isojet1CSV_Data__185->GetYaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_Data__185->GetYaxis()->SetTitleSize(0.05);
   h_isojet1CSV_Data__185->GetYaxis()->SetTickLength(0.025);
   h_isojet1CSV_Data__185->GetYaxis()->SetTitleFont(42);
   h_isojet1CSV_Data__185->GetZaxis()->SetLabelFont(42);
   h_isojet1CSV_Data__185->GetZaxis()->SetLabelOffset(0.007);
   h_isojet1CSV_Data__185->GetZaxis()->SetTitleSize(0.05);
   h_isojet1CSV_Data__185->GetZaxis()->SetTickLength(0.025);
   h_isojet1CSV_Data__185->GetZaxis()->SetTitleFont(42);
   h_isojet1CSV_Data__185->Draw("elp same");
   
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
   
   TH1D *ratio__186 = new TH1D("ratio__186","",10,0,1);
   ratio__186->SetBinContent(1,-0.1844121);
   ratio__186->SetBinContent(2,-0.03998154);
   ratio__186->SetBinContent(3,0.02541018);
   ratio__186->SetBinContent(4,0.1167206);
   ratio__186->SetBinContent(5,0.2139411);
   ratio__186->SetBinContent(6,0.2052153);
   ratio__186->SetBinContent(7,0.1846154);
   ratio__186->SetBinContent(8,0.2150015);
   ratio__186->SetBinContent(9,0.1879714);
   ratio__186->SetBinContent(10,0.254476);
   ratio__186->SetBinContent(11,1.495365e-06);
   ratio__186->SetBinError(1,0.0001);
   ratio__186->SetBinError(2,0.0001);
   ratio__186->SetBinError(3,0.0001);
   ratio__186->SetBinError(4,0.0001);
   ratio__186->SetBinError(5,0.0001);
   ratio__186->SetBinError(6,0.0001);
   ratio__186->SetBinError(7,0.0001);
   ratio__186->SetBinError(8,0.0001);
   ratio__186->SetBinError(9,0.0001);
   ratio__186->SetBinError(10,0.0001);
   ratio__186->SetBinError(11,1.495365e-06);
   ratio__186->SetMinimum(-0.48);
   ratio__186->SetMaximum(0.48);
   ratio__186->SetEntries(668744);
   ratio__186->SetStats(0);
   ratio__186->SetLineWidth(3);
   ratio__186->SetMarkerStyle(20);
   ratio__186->SetMarkerSize(2);
   ratio__186->GetXaxis()->SetTitle("isojet 1 CSV");
   ratio__186->GetXaxis()->SetLabelFont(43);
   ratio__186->GetXaxis()->SetLabelOffset(0.007);
   ratio__186->GetXaxis()->SetLabelSize(30);
   ratio__186->GetXaxis()->SetTitleSize(40);
   ratio__186->GetXaxis()->SetTickLength(0.025);
   ratio__186->GetXaxis()->SetTitleOffset(5);
   ratio__186->GetXaxis()->SetTitleFont(43);
   ratio__186->GetYaxis()->SetTitle("#frac{Data-Exp}{Exp}");
   ratio__186->GetYaxis()->SetNdivisions(5);
   ratio__186->GetYaxis()->SetLabelFont(43);
   ratio__186->GetYaxis()->SetLabelOffset(0.007);
   ratio__186->GetYaxis()->SetLabelSize(30);
   ratio__186->GetYaxis()->SetTitleSize(40);
   ratio__186->GetYaxis()->SetTickLength(0.025);
   ratio__186->GetYaxis()->SetTitleOffset(2.5);
   ratio__186->GetYaxis()->SetTitleFont(43);
   ratio__186->GetZaxis()->SetLabelFont(42);
   ratio__186->GetZaxis()->SetLabelOffset(0.007);
   ratio__186->GetZaxis()->SetTitleSize(0.05);
   ratio__186->GetZaxis()->SetTickLength(0.025);
   ratio__186->GetZaxis()->SetTitleFont(42);
   ratio__186->Draw("elp");
   
   TH1D *zero__187 = new TH1D("zero__187","",10,0,1);
   zero__187->SetBinContent(11,1.495365e-06);
   zero__187->SetBinError(1,0.0005489905);
   zero__187->SetBinError(2,0.0006811745);
   zero__187->SetBinError(3,0.000448258);
   zero__187->SetBinError(4,0.0003606497);
   zero__187->SetBinError(5,0.0003342768);
   zero__187->SetBinError(6,0.00028487);
   zero__187->SetBinError(7,0.0002571985);
   zero__187->SetBinError(8,0.0002215665);
   zero__187->SetBinError(9,0.0002136332);
   zero__187->SetBinError(10,0.0002125997);
   zero__187->SetBinError(11,1.495365e-06);
   zero__187->SetEntries(668744);
   zero__187->SetStats(0);
   zero__187->SetLineWidth(3);
   zero__187->SetMarkerStyle(20);
   zero__187->SetMarkerSize(2);
   zero__187->GetXaxis()->SetTitle("isojet 1 CSV");
   zero__187->GetXaxis()->SetLabelFont(42);
   zero__187->GetXaxis()->SetLabelOffset(0.007);
   zero__187->GetXaxis()->SetTitleSize(0.05);
   zero__187->GetXaxis()->SetTickLength(0.025);
   zero__187->GetXaxis()->SetTitleFont(42);
   zero__187->GetYaxis()->SetTitle("a.u.");
   zero__187->GetYaxis()->SetLabelFont(42);
   zero__187->GetYaxis()->SetLabelOffset(0.007);
   zero__187->GetYaxis()->SetTitleSize(0.05);
   zero__187->GetYaxis()->SetTickLength(0.025);
   zero__187->GetYaxis()->SetTitleFont(42);
   zero__187->GetZaxis()->SetLabelFont(42);
   zero__187->GetZaxis()->SetLabelOffset(0.007);
   zero__187->GetZaxis()->SetTitleSize(0.05);
   zero__187->GetZaxis()->SetTickLength(0.025);
   zero__187->GetZaxis()->SetTitleFont(42);
   zero__187->Draw("hist same");
   
   TH1D *sumratioup__188 = new TH1D("sumratioup__188","",10,0,1);
   sumratioup__188->SetBinContent(1,0.01013102);
   sumratioup__188->SetBinContent(2,0.008313726);
   sumratioup__188->SetBinContent(3,0.01287197);
   sumratioup__188->SetBinContent(4,0.01626511);
   sumratioup__188->SetBinContent(5,0.01878613);
   sumratioup__188->SetBinContent(6,0.02220665);
   sumratioup__188->SetBinContent(7,0.02397447);
   sumratioup__188->SetBinContent(8,0.02869432);
   sumratioup__188->SetBinContent(9,0.03180283);
   sumratioup__188->SetBinContent(10,0.0254748);
   sumratioup__188->SetBinContent(11,5.130884e-08);
   sumratioup__188->SetBinError(1,0.002503598);
   sumratioup__188->SetBinError(2,0.002687111);
   sumratioup__188->SetBinError(3,0.001686771);
   sumratioup__188->SetBinError(4,0.001266883);
   sumratioup__188->SetBinError(5,0.001156392);
   sumratioup__188->SetBinError(6,0.0009999184);
   sumratioup__188->SetBinError(7,0.0008952845);
   sumratioup__188->SetBinError(8,0.0007753184);
   sumratioup__188->SetBinError(9,0.0008170527);
   sumratioup__188->SetBinError(10,0.0006137994);
   sumratioup__188->SetBinError(11,5.130884e-08);
   sumratioup__188->SetEntries(668764);
   sumratioup__188->SetStats(0);

   ci = 1200;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratioup__188->SetFillColor(ci);
   sumratioup__188->SetFillStyle(3003);
   sumratioup__188->GetXaxis()->SetTitle("isojet 1 CSV");
   sumratioup__188->GetXaxis()->SetLabelFont(42);
   sumratioup__188->GetXaxis()->SetLabelOffset(0.007);
   sumratioup__188->GetXaxis()->SetTitleSize(0.05);
   sumratioup__188->GetXaxis()->SetTickLength(0.025);
   sumratioup__188->GetXaxis()->SetTitleFont(42);
   sumratioup__188->GetYaxis()->SetTitle("a.u.");
   sumratioup__188->GetYaxis()->SetLabelFont(42);
   sumratioup__188->GetYaxis()->SetLabelOffset(0.007);
   sumratioup__188->GetYaxis()->SetTitleSize(0.05);
   sumratioup__188->GetYaxis()->SetTickLength(0.025);
   sumratioup__188->GetYaxis()->SetTitleFont(42);
   sumratioup__188->GetZaxis()->SetLabelFont(42);
   sumratioup__188->GetZaxis()->SetLabelOffset(0.007);
   sumratioup__188->GetZaxis()->SetTitleSize(0.05);
   sumratioup__188->GetZaxis()->SetTickLength(0.025);
   sumratioup__188->GetZaxis()->SetTitleFont(42);
   sumratioup__188->Draw("hist same");
   
   TH1D *sumratiodown__189 = new TH1D("sumratiodown__189","",10,0,1);
   sumratiodown__189->SetBinContent(1,-0.01013102);
   sumratiodown__189->SetBinContent(2,-0.008313726);
   sumratiodown__189->SetBinContent(3,-0.01287197);
   sumratiodown__189->SetBinContent(4,-0.01626511);
   sumratiodown__189->SetBinContent(5,-0.01878613);
   sumratiodown__189->SetBinContent(6,-0.02220665);
   sumratiodown__189->SetBinContent(7,-0.02397447);
   sumratiodown__189->SetBinContent(8,-0.02869432);
   sumratiodown__189->SetBinContent(9,-0.03180283);
   sumratiodown__189->SetBinContent(10,-0.0254748);
   sumratiodown__189->SetBinContent(11,5.130884e-08);
   sumratiodown__189->SetBinError(1,0.002503598);
   sumratiodown__189->SetBinError(2,0.002687111);
   sumratiodown__189->SetBinError(3,0.001686771);
   sumratiodown__189->SetBinError(4,0.001266883);
   sumratiodown__189->SetBinError(5,0.001156392);
   sumratiodown__189->SetBinError(6,0.0009999184);
   sumratiodown__189->SetBinError(7,0.0008952845);
   sumratiodown__189->SetBinError(8,0.0007753184);
   sumratiodown__189->SetBinError(9,0.0008170527);
   sumratiodown__189->SetBinError(10,0.0006137994);
   sumratiodown__189->SetBinError(11,5.130884e-08);
   sumratiodown__189->SetEntries(668764);
   sumratiodown__189->SetStats(0);

   ci = 1200;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratiodown__189->SetFillColor(ci);
   sumratiodown__189->SetFillStyle(3003);
   sumratiodown__189->GetXaxis()->SetTitle("isojet 1 CSV");
   sumratiodown__189->GetXaxis()->SetLabelFont(42);
   sumratiodown__189->GetXaxis()->SetLabelOffset(0.007);
   sumratiodown__189->GetXaxis()->SetTitleSize(0.05);
   sumratiodown__189->GetXaxis()->SetTickLength(0.025);
   sumratiodown__189->GetXaxis()->SetTitleFont(42);
   sumratiodown__189->GetYaxis()->SetTitle("a.u.");
   sumratiodown__189->GetYaxis()->SetLabelFont(42);
   sumratiodown__189->GetYaxis()->SetLabelOffset(0.007);
   sumratiodown__189->GetYaxis()->SetTitleSize(0.05);
   sumratiodown__189->GetYaxis()->SetTickLength(0.025);
   sumratiodown__189->GetYaxis()->SetTitleFont(42);
   sumratiodown__189->GetZaxis()->SetLabelFont(42);
   sumratiodown__189->GetZaxis()->SetLabelOffset(0.007);
   sumratiodown__189->GetZaxis()->SetTitleSize(0.05);
   sumratiodown__189->GetZaxis()->SetTickLength(0.025);
   sumratiodown__189->GetZaxis()->SetTitleFont(42);
   sumratiodown__189->Draw("hist same");
   
   Double_t Graph0_fx1021[10] = {
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
   Double_t Graph0_fy1021[10] = {
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
   Double_t Graph0_fex1021[10] = {
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
   Double_t Graph0_fey1021[10] = {
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
   TGraphErrors *gre = new TGraphErrors(10,Graph0_fx1021,Graph0_fy1021,Graph0_fex1021,Graph0_fey1021);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1021 = new TH1F("Graph_Graph1021","Graph",100,0,1.04);
   Graph_Graph1021->SetMinimum(-0.2316269);
   Graph_Graph1021->SetMaximum(0.3082929);
   Graph_Graph1021->SetDirectory(0);
   Graph_Graph1021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1021->SetLineColor(ci);
   Graph_Graph1021->GetXaxis()->SetLabelFont(42);
   Graph_Graph1021->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1021->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1021->GetXaxis()->SetTickLength(0.025);
   Graph_Graph1021->GetXaxis()->SetTitleFont(42);
   Graph_Graph1021->GetYaxis()->SetLabelFont(42);
   Graph_Graph1021->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1021->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1021->GetYaxis()->SetTickLength(0.025);
   Graph_Graph1021->GetYaxis()->SetTitleFont(42);
   Graph_Graph1021->GetZaxis()->SetLabelFont(42);
   Graph_Graph1021->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1021->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph1021->GetZaxis()->SetTickLength(0.025);
   Graph_Graph1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1021);
   
   gre->Draw("pe0");
   pad2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
