void photon_isojet1Pt_logy()
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
   pad1->Range(-169.6875,-6.230946,1061.562,2.497334);
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
   h->SetMinimum(2.666762e-06);
   h->SetMaximum(31.86781);
   
   TH1F *h_stack_16 = new TH1F("h_stack_16","",20,15,1000);
   h_stack_16->SetMinimum(5.875629e-07);
   h_stack_16->SetMaximum(76.97584);
   h_stack_16->SetDirectory(0);
   h_stack_16->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   h_stack_16->SetLineColor(ci);
   h_stack_16->GetXaxis()->SetLabelFont(42);
   h_stack_16->GetXaxis()->SetLabelOffset(0.007);
   h_stack_16->GetXaxis()->SetTitleSize(0.05);
   h_stack_16->GetXaxis()->SetTickLength(0.025);
   h_stack_16->GetXaxis()->SetTitleFont(42);
   h_stack_16->GetYaxis()->SetTitle("a.u.");
   h_stack_16->GetYaxis()->SetLabelFont(42);
   h_stack_16->GetYaxis()->SetLabelOffset(0.007);
   h_stack_16->GetYaxis()->SetTitleSize(0.05);
   h_stack_16->GetYaxis()->SetTickLength(0.025);
   h_stack_16->GetYaxis()->SetTitleOffset(1.5);
   h_stack_16->GetYaxis()->SetTitleFont(42);
   h_stack_16->GetZaxis()->SetLabelFont(42);
   h_stack_16->GetZaxis()->SetLabelOffset(0.007);
   h_stack_16->GetZaxis()->SetTitleSize(0.05);
   h_stack_16->GetZaxis()->SetTickLength(0.025);
   h_stack_16->GetZaxis()->SetTitleFont(42);
   h->SetHistogram(h_stack_16);
   
   
   TH1D *h_isojet1Pt_QCD__136 = new TH1D("h_isojet1Pt_QCD__136","",20,15,1000);
   h_isojet1Pt_QCD__136->SetBinContent(1,0.00428234);
   h_isojet1Pt_QCD__136->SetBinContent(2,0.004077214);
   h_isojet1Pt_QCD__136->SetBinContent(3,0.008003225);
   h_isojet1Pt_QCD__136->SetBinContent(4,0.01119219);
   h_isojet1Pt_QCD__136->SetBinContent(5,0.004742569);
   h_isojet1Pt_QCD__136->SetBinContent(6,0.0005165717);
   h_isojet1Pt_QCD__136->SetBinContent(7,0.0002521042);
   h_isojet1Pt_QCD__136->SetBinContent(8,0.0001322652);
   h_isojet1Pt_QCD__136->SetBinContent(9,8.086797e-05);
   h_isojet1Pt_QCD__136->SetBinContent(10,4.992623e-05);
   h_isojet1Pt_QCD__136->SetBinContent(11,3.147578e-05);
   h_isojet1Pt_QCD__136->SetBinContent(12,2.050177e-05);
   h_isojet1Pt_QCD__136->SetBinContent(13,1.448543e-05);
   h_isojet1Pt_QCD__136->SetBinContent(14,9.985407e-06);
   h_isojet1Pt_QCD__136->SetBinContent(15,7.433079e-06);
   h_isojet1Pt_QCD__136->SetBinContent(16,4.471007e-06);
   h_isojet1Pt_QCD__136->SetBinContent(17,3.287794e-06);
   h_isojet1Pt_QCD__136->SetBinContent(18,2.061839e-06);
   h_isojet1Pt_QCD__136->SetBinContent(19,2.154645e-06);
   h_isojet1Pt_QCD__136->SetBinContent(20,1.420799e-06);
   h_isojet1Pt_QCD__136->SetBinError(1,1.419705e-05);
   h_isojet1Pt_QCD__136->SetBinError(2,1.415155e-05);
   h_isojet1Pt_QCD__136->SetBinError(3,2.042802e-05);
   h_isojet1Pt_QCD__136->SetBinError(4,2.431024e-05);
   h_isojet1Pt_QCD__136->SetBinError(5,1.559642e-05);
   h_isojet1Pt_QCD__136->SetBinError(6,4.936002e-06);
   h_isojet1Pt_QCD__136->SetBinError(7,3.406714e-06);
   h_isojet1Pt_QCD__136->SetBinError(8,2.447117e-06);
   h_isojet1Pt_QCD__136->SetBinError(9,1.9027e-06);
   h_isojet1Pt_QCD__136->SetBinError(10,1.49245e-06);
   h_isojet1Pt_QCD__136->SetBinError(11,1.183077e-06);
   h_isojet1Pt_QCD__136->SetBinError(12,9.547389e-07);
   h_isojet1Pt_QCD__136->SetBinError(13,8.008598e-07);
   h_isojet1Pt_QCD__136->SetBinError(14,6.594085e-07);
   h_isojet1Pt_QCD__136->SetBinError(15,5.720678e-07);
   h_isojet1Pt_QCD__136->SetBinError(16,4.40491e-07);
   h_isojet1Pt_QCD__136->SetBinError(17,3.762604e-07);
   h_isojet1Pt_QCD__136->SetBinError(18,2.957981e-07);
   h_isojet1Pt_QCD__136->SetBinError(19,3.065346e-07);
   h_isojet1Pt_QCD__136->SetBinError(20,2.428673e-07);
   h_isojet1Pt_QCD__136->SetEntries(668734);
   h_isojet1Pt_QCD__136->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   h_isojet1Pt_QCD__136->SetFillColor(ci);
   h_isojet1Pt_QCD__136->GetXaxis()->SetTitle("leading isojet p_{T} [GeV]");
   h_isojet1Pt_QCD__136->GetXaxis()->SetLabelFont(42);
   h_isojet1Pt_QCD__136->GetXaxis()->SetLabelOffset(0.007);
   h_isojet1Pt_QCD__136->GetXaxis()->SetTitleSize(0.05);
   h_isojet1Pt_QCD__136->GetXaxis()->SetTickLength(0.025);
   h_isojet1Pt_QCD__136->GetXaxis()->SetTitleFont(42);
   h_isojet1Pt_QCD__136->GetYaxis()->SetTitle("a.u.");
   h_isojet1Pt_QCD__136->GetYaxis()->SetLabelFont(42);
   h_isojet1Pt_QCD__136->GetYaxis()->SetLabelOffset(0.007);
   h_isojet1Pt_QCD__136->GetYaxis()->SetTitleSize(0.05);
   h_isojet1Pt_QCD__136->GetYaxis()->SetTickLength(0.025);
   h_isojet1Pt_QCD__136->GetYaxis()->SetTitleFont(42);
   h_isojet1Pt_QCD__136->GetZaxis()->SetLabelFont(42);
   h_isojet1Pt_QCD__136->GetZaxis()->SetLabelOffset(0.007);
   h_isojet1Pt_QCD__136->GetZaxis()->SetTitleSize(0.05);
   h_isojet1Pt_QCD__136->GetZaxis()->SetTickLength(0.025);
   h_isojet1Pt_QCD__136->GetZaxis()->SetTitleFont(42);
   h->Add(h_isojet1Pt_QCD,"");
   
   TH1D *h_isojet1Pt_#gammapLjetssPoPHFcP__137 = new TH1D("h_isojet1Pt_#gammapLjetssPoPHFcP__137","",20,15,1000);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetBinContent(1,0.01339745);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetBinContent(2,0.01573446);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetBinContent(3,0.02985477);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetBinContent(4,0.0426299);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetBinContent(5,0.02003966);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetBinContent(6,0.00238156);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetBinContent(7,0.0009594957);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetBinContent(8,0.0006717592);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetBinContent(9,0.000436959);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetBinContent(10,0.0002798424);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetBinContent(11,0.0001446528);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetBinContent(12,0.0001498269);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetBinContent(13,9.385353e-05);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetBinContent(14,5.863042e-05);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetBinContent(15,3.664369e-05);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetBinContent(16,3.074048e-05);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetBinContent(17,1.797097e-05);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetBinContent(18,1.222179e-05);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetBinContent(19,9.065994e-06);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetBinContent(20,4.401102e-06);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetBinError(1,0.000417122);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetBinError(2,0.0005077957);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetBinError(3,0.0008554693);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetBinError(4,0.001236355);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetBinError(5,0.0006007652);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetBinError(6,0.0001232669);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetBinError(7,5.53499e-05);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetBinError(8,4.766103e-05);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetBinError(9,3.563607e-05);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetBinError(10,2.806046e-05);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetBinError(11,1.959259e-05);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetBinError(12,2.004219e-05);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetBinError(13,1.555977e-05);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetBinError(14,1.211167e-05);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetBinError(15,9.993511e-06);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetBinError(16,9.309194e-06);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetBinError(17,6.599033e-06);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetBinError(18,5.547007e-06);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetBinError(19,4.749317e-06);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetBinError(20,3.430551e-06);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetEntries(14151);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetStats(0);

   ci = TColor::GetColor("#ff6633");
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->SetFillColor(ci);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->GetXaxis()->SetTitle("leading isojet p_{T} [GeV]");
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->GetXaxis()->SetLabelFont(42);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->GetXaxis()->SetLabelOffset(0.007);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->GetXaxis()->SetTitleSize(0.05);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->GetXaxis()->SetTickLength(0.025);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->GetXaxis()->SetTitleFont(42);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->GetYaxis()->SetTitle("a.u.");
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->GetYaxis()->SetLabelFont(42);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->GetYaxis()->SetLabelOffset(0.007);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->GetYaxis()->SetTitleSize(0.05);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->GetYaxis()->SetTickLength(0.025);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->GetYaxis()->SetTitleFont(42);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->GetZaxis()->SetLabelFont(42);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->GetZaxis()->SetLabelOffset(0.007);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->GetZaxis()->SetTitleSize(0.05);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->GetZaxis()->SetTickLength(0.025);
   h_isojet1Pt_#gammapLjetssPoPHFcP__137->GetZaxis()->SetTitleFont(42);
   h->Add(h_isojet1Pt_#gamma+jets (HF),"");
   
   TH1D *h_isojet1Pt_#gammapLjetssPoPLFcP__138 = new TH1D("h_isojet1Pt_#gammapLjetssPoPLFcP__138","",20,15,1000);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetBinContent(1,0.1179218);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetBinContent(2,0.1095842);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetBinContent(3,0.184983);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetBinContent(4,0.264856);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetBinContent(5,0.1249541);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetBinContent(6,0.01559138);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetBinContent(7,0.007891101);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetBinContent(8,0.004856511);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetBinContent(9,0.002981639);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetBinContent(10,0.001883511);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetBinContent(11,0.001331505);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetBinContent(12,0.0009023722);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetBinContent(13,0.0005378712);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetBinContent(14,0.0004365658);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetBinContent(15,0.0002778172);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetBinContent(16,0.0002539967);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetBinContent(17,0.0001598167);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetBinContent(18,9.425434e-05);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetBinContent(19,8.454476e-05);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetBinContent(20,4.751335e-05);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetBinError(1,0.001215583);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetBinError(2,0.001274208);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetBinError(3,0.002126874);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetBinError(4,0.003077412);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetBinError(5,0.001545568);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetBinError(6,0.0002994378);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetBinError(7,0.0001739568);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetBinError(8,0.000126266);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetBinError(9,9.15465e-05);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetBinError(10,7.112387e-05);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetBinError(11,5.939198e-05);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetBinError(12,4.810319e-05);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetBinError(13,3.654656e-05);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetBinError(14,3.256564e-05);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetBinError(15,2.624984e-05);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetBinError(16,2.527227e-05);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetBinError(17,1.973323e-05);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetBinError(18,1.475519e-05);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetBinError(19,1.402679e-05);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetBinError(20,1.076976e-05);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetEntries(99281);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetStats(0);

   ci = TColor::GetColor("#339999");
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->SetFillColor(ci);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->GetXaxis()->SetTitle("leading isojet p_{T} [GeV]");
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->GetXaxis()->SetLabelFont(42);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->GetXaxis()->SetLabelOffset(0.007);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->GetXaxis()->SetTitleSize(0.05);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->GetXaxis()->SetTickLength(0.025);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->GetXaxis()->SetTitleFont(42);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->GetYaxis()->SetTitle("a.u.");
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->GetYaxis()->SetLabelFont(42);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->GetYaxis()->SetLabelOffset(0.007);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->GetYaxis()->SetTitleSize(0.05);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->GetYaxis()->SetTickLength(0.025);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->GetYaxis()->SetTitleFont(42);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->GetZaxis()->SetLabelFont(42);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->GetZaxis()->SetLabelOffset(0.007);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->GetZaxis()->SetTitleSize(0.05);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->GetZaxis()->SetTickLength(0.025);
   h_isojet1Pt_#gammapLjetssPoPLFcP__138->GetZaxis()->SetTitleFont(42);
   h->Add(h_isojet1Pt_#gamma+jets (LF),"");
   h->Draw("hist");
   
   TH1D *hsum__139 = new TH1D("hsum__139","",20,15,1000);
   hsum__139->SetBinContent(1,0.1356016);
   hsum__139->SetBinContent(2,0.1293959);
   hsum__139->SetBinContent(3,0.222841);
   hsum__139->SetBinContent(4,0.3186781);
   hsum__139->SetBinContent(5,0.1497363);
   hsum__139->SetBinContent(6,0.01848952);
   hsum__139->SetBinContent(7,0.009102701);
   hsum__139->SetBinContent(8,0.005660535);
   hsum__139->SetBinContent(9,0.003499466);
   hsum__139->SetBinContent(10,0.002213279);
   hsum__139->SetBinContent(11,0.001507634);
   hsum__139->SetBinContent(12,0.001072701);
   hsum__139->SetBinContent(13,0.0006462102);
   hsum__139->SetBinContent(14,0.0005051816);
   hsum__139->SetBinContent(15,0.000321894);
   hsum__139->SetBinContent(16,0.0002892082);
   hsum__139->SetBinContent(17,0.0001810754);
   hsum__139->SetBinContent(18,0.000108538);
   hsum__139->SetBinContent(19,9.57654e-05);
   hsum__139->SetBinContent(20,5.333525e-05);
   hsum__139->SetBinError(1,0.001285237);
   hsum__139->SetBinError(2,0.001371737);
   hsum__139->SetBinError(3,0.002292562);
   hsum__139->SetBinError(4,0.003316569);
   hsum__139->SetBinError(5,0.001658296);
   hsum__139->SetBinError(6,0.000323855);
   hsum__139->SetBinError(7,0.000182582);
   hsum__139->SetBinError(8,0.0001349839);
   hsum__139->SetBinError(9,9.825635e-05);
   hsum__139->SetBinError(10,7.647366e-05);
   hsum__139->SetBinError(11,6.255139e-05);
   hsum__139->SetBinError(12,5.212022e-05);
   hsum__139->SetBinError(13,3.972906e-05);
   hsum__139->SetBinError(14,3.475123e-05);
   hsum__139->SetBinError(15,2.809362e-05);
   hsum__139->SetBinError(16,2.69359e-05);
   hsum__139->SetBinError(17,2.08108e-05);
   hsum__139->SetBinError(18,1.576618e-05);
   hsum__139->SetBinError(19,1.481219e-05);
   hsum__139->SetBinError(20,1.130555e-05);
   hsum__139->SetEntries(668774);
   hsum__139->SetStats(0);

   ci = 1195;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   hsum__139->SetFillColor(ci);
   hsum__139->SetFillStyle(3003);
   hsum__139->SetLineWidth(0);
   hsum__139->GetXaxis()->SetTitle("leading isojet p_{T} [GeV]");
   hsum__139->GetXaxis()->SetLabelFont(42);
   hsum__139->GetXaxis()->SetLabelOffset(0.007);
   hsum__139->GetXaxis()->SetTitleSize(0.05);
   hsum__139->GetXaxis()->SetTickLength(0.025);
   hsum__139->GetXaxis()->SetTitleFont(42);
   hsum__139->GetYaxis()->SetTitle("a.u.");
   hsum__139->GetYaxis()->SetLabelFont(42);
   hsum__139->GetYaxis()->SetLabelOffset(0.007);
   hsum__139->GetYaxis()->SetTitleSize(0.05);
   hsum__139->GetYaxis()->SetTickLength(0.025);
   hsum__139->GetYaxis()->SetTitleFont(42);
   hsum__139->GetZaxis()->SetLabelFont(42);
   hsum__139->GetZaxis()->SetLabelOffset(0.007);
   hsum__139->GetZaxis()->SetTitleSize(0.05);
   hsum__139->GetZaxis()->SetTickLength(0.025);
   hsum__139->GetZaxis()->SetTitleFont(42);
   hsum__139->Draw("e2 same");
   
   TH1D *h_isojet1Pt_Data__140 = new TH1D("h_isojet1Pt_Data__140","",20,15,1000);
   h_isojet1Pt_Data__140->SetBinContent(1,0.1400871);
   h_isojet1Pt_Data__140->SetBinContent(2,0.12771);
   h_isojet1Pt_Data__140->SetBinContent(3,0.2332048);
   h_isojet1Pt_Data__140->SetBinContent(4,0.3208002);
   h_isojet1Pt_Data__140->SetBinContent(5,0.1401663);
   h_isojet1Pt_Data__140->SetBinContent(6,0.0168976);
   h_isojet1Pt_Data__140->SetBinContent(7,0.008514596);
   h_isojet1Pt_Data__140->SetBinContent(8,0.004566838);
   h_isojet1Pt_Data__140->SetBinContent(9,0.002833713);
   h_isojet1Pt_Data__140->SetBinContent(10,0.001754061);
   h_isojet1Pt_Data__140->SetBinContent(11,0.001109559);
   h_isojet1Pt_Data__140->SetBinContent(12,0.0007237556);
   h_isojet1Pt_Data__140->SetBinContent(13,0.0005129095);
   h_isojet1Pt_Data__140->SetBinContent(14,0.0003603825);
   h_isojet1Pt_Data__140->SetBinContent(15,0.0002661746);
   h_isojet1Pt_Data__140->SetBinContent(16,0.0001629946);
   h_isojet1Pt_Data__140->SetBinContent(17,0.000119629);
   h_isojet1Pt_Data__140->SetBinContent(18,7.775887e-05);
   h_isojet1Pt_Data__140->SetBinContent(19,7.775887e-05);
   h_isojet1Pt_Data__140->SetBinContent(20,5.383306e-05);
   h_isojet1Pt_Data__140->SetBinError(1,0.000457691);
   h_isojet1Pt_Data__140->SetBinError(2,0.0004370043);
   h_isojet1Pt_Data__140->SetBinError(3,0.0005905301);
   h_isojet1Pt_Data__140->SetBinError(4,0.000692613);
   h_isojet1Pt_Data__140->SetBinError(5,0.0004578204);
   h_isojet1Pt_Data__140->SetBinError(6,0.0001589593);
   h_isojet1Pt_Data__140->SetBinError(7,0.000112838);
   h_isojet1Pt_Data__140->SetBinError(8,8.263825e-05);
   h_isojet1Pt_Data__140->SetBinError(9,6.509554e-05);
   h_isojet1Pt_Data__140->SetBinError(10,5.121481e-05);
   h_isojet1Pt_Data__140->SetBinError(11,4.07332e-05);
   h_isojet1Pt_Data__140->SetBinError(12,3.289798e-05);
   h_isojet1Pt_Data__140->SetBinError(13,2.769451e-05);
   h_isojet1Pt_Data__140->SetBinError(14,2.321427e-05);
   h_isojet1Pt_Data__140->SetBinError(15,1.995063e-05);
   h_isojet1Pt_Data__140->SetBinError(16,1.561205e-05);
   h_isojet1Pt_Data__140->SetBinError(17,1.337493e-05);
   h_isojet1Pt_Data__140->SetBinError(18,1.078322e-05);
   h_isojet1Pt_Data__140->SetBinError(19,1.078322e-05);
   h_isojet1Pt_Data__140->SetBinError(20,8.972177e-06);
   h_isojet1Pt_Data__140->SetEntries(668734);
   h_isojet1Pt_Data__140->SetStats(0);
   h_isojet1Pt_Data__140->SetLineWidth(3);
   h_isojet1Pt_Data__140->SetMarkerStyle(20);
   h_isojet1Pt_Data__140->SetMarkerSize(2);
   h_isojet1Pt_Data__140->GetXaxis()->SetTitle("leading isojet p_{T} [GeV]");
   h_isojet1Pt_Data__140->GetXaxis()->SetLabelFont(42);
   h_isojet1Pt_Data__140->GetXaxis()->SetLabelOffset(0.007);
   h_isojet1Pt_Data__140->GetXaxis()->SetTitleSize(0.05);
   h_isojet1Pt_Data__140->GetXaxis()->SetTickLength(0.025);
   h_isojet1Pt_Data__140->GetXaxis()->SetTitleFont(42);
   h_isojet1Pt_Data__140->GetYaxis()->SetTitle("a.u.");
   h_isojet1Pt_Data__140->GetYaxis()->SetLabelFont(42);
   h_isojet1Pt_Data__140->GetYaxis()->SetLabelOffset(0.007);
   h_isojet1Pt_Data__140->GetYaxis()->SetTitleSize(0.05);
   h_isojet1Pt_Data__140->GetYaxis()->SetTickLength(0.025);
   h_isojet1Pt_Data__140->GetYaxis()->SetTitleFont(42);
   h_isojet1Pt_Data__140->GetZaxis()->SetLabelFont(42);
   h_isojet1Pt_Data__140->GetZaxis()->SetLabelOffset(0.007);
   h_isojet1Pt_Data__140->GetZaxis()->SetTitleSize(0.05);
   h_isojet1Pt_Data__140->GetZaxis()->SetTickLength(0.025);
   h_isojet1Pt_Data__140->GetZaxis()->SetTitleFont(42);
   h_isojet1Pt_Data__140->Draw("elp same");
   
   TLegend *leg = new TLegend(0.6,0.55,0.88,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("h_isojet1Pt_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_isojet1Pt_#gamma+jets (LF)","#gamma+jets (LF)","F");

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
   entry=leg->AddEntry("h_isojet1Pt_#gamma+jets (HF)","#gamma+jets (HF)","F");

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
   entry=leg->AddEntry("h_isojet1Pt_QCD","QCD","F");

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
   entry=leg->AddEntry("h_isojet1Pt_Data","Data","ELP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_isojet1Pt_#gamma+jets (LF)","#gamma+jets (LF)","F");

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
   entry=leg->AddEntry("h_isojet1Pt_#gamma+jets (HF)","#gamma+jets (HF)","F");

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
   entry=leg->AddEntry("h_isojet1Pt_QCD","QCD","F");

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
   pad2->Range(-169.6875,-0.8914286,1061.562,0.48);
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
   
   TH1D *ratio__141 = new TH1D("ratio__141","",20,15,1000);
   ratio__141->SetBinContent(1,0.03307831);
   ratio__141->SetBinContent(2,-0.01302904);
   ratio__141->SetBinContent(3,0.04650748);
   ratio__141->SetBinContent(4,0.00665915);
   ratio__141->SetBinContent(5,-0.06391233);
   ratio__141->SetBinContent(6,-0.08609825);
   ratio__141->SetBinContent(7,-0.06460774);
   ratio__141->SetBinContent(8,-0.1932145);
   ratio__141->SetBinContent(9,-0.1902442);
   ratio__141->SetBinContent(10,-0.2074835);
   ratio__141->SetBinContent(11,-0.2640393);
   ratio__141->SetBinContent(12,-0.3252959);
   ratio__141->SetBinContent(13,-0.2062806);
   ratio__141->SetBinContent(14,-0.2866279);
   ratio__141->SetBinContent(15,-0.1730985);
   ratio__141->SetBinContent(16,-0.436411);
   ratio__141->SetBinContent(17,-0.3393415);
   ratio__141->SetBinContent(18,-0.2835791);
   ratio__141->SetBinContent(19,-0.1880274);
   ratio__141->SetBinContent(20,0.00933373);
   ratio__141->SetBinError(1,0.0001);
   ratio__141->SetBinError(2,0.0001);
   ratio__141->SetBinError(3,0.0001);
   ratio__141->SetBinError(4,0.0001);
   ratio__141->SetBinError(5,0.0001);
   ratio__141->SetBinError(6,0.0001);
   ratio__141->SetBinError(7,0.0001);
   ratio__141->SetBinError(8,0.0001);
   ratio__141->SetBinError(9,0.0001);
   ratio__141->SetBinError(10,0.0001);
   ratio__141->SetBinError(11,0.0001);
   ratio__141->SetBinError(12,0.0001);
   ratio__141->SetBinError(13,0.0001);
   ratio__141->SetBinError(14,0.0001);
   ratio__141->SetBinError(15,0.0001);
   ratio__141->SetBinError(16,0.0001);
   ratio__141->SetBinError(17,0.0001);
   ratio__141->SetBinError(18,0.0001);
   ratio__141->SetBinError(19,0.0001);
   ratio__141->SetBinError(20,0.0001);
   ratio__141->SetMinimum(-0.48);
   ratio__141->SetMaximum(0.48);
   ratio__141->SetEntries(668754);
   ratio__141->SetStats(0);
   ratio__141->SetLineWidth(3);
   ratio__141->SetMarkerStyle(20);
   ratio__141->SetMarkerSize(2);
   ratio__141->GetXaxis()->SetTitle("leading isojet p_{T} [GeV]");
   ratio__141->GetXaxis()->SetLabelFont(43);
   ratio__141->GetXaxis()->SetLabelOffset(0.007);
   ratio__141->GetXaxis()->SetLabelSize(30);
   ratio__141->GetXaxis()->SetTitleSize(40);
   ratio__141->GetXaxis()->SetTickLength(0.025);
   ratio__141->GetXaxis()->SetTitleOffset(5);
   ratio__141->GetXaxis()->SetTitleFont(43);
   ratio__141->GetYaxis()->SetTitle("#frac{Data-Exp}{Exp}");
   ratio__141->GetYaxis()->SetNdivisions(5);
   ratio__141->GetYaxis()->SetLabelFont(43);
   ratio__141->GetYaxis()->SetLabelOffset(0.007);
   ratio__141->GetYaxis()->SetLabelSize(30);
   ratio__141->GetYaxis()->SetTitleSize(40);
   ratio__141->GetYaxis()->SetTickLength(0.025);
   ratio__141->GetYaxis()->SetTitleOffset(2.5);
   ratio__141->GetYaxis()->SetTitleFont(43);
   ratio__141->GetZaxis()->SetLabelFont(42);
   ratio__141->GetZaxis()->SetLabelOffset(0.007);
   ratio__141->GetZaxis()->SetTitleSize(0.05);
   ratio__141->GetZaxis()->SetTickLength(0.025);
   ratio__141->GetZaxis()->SetTitleFont(42);
   ratio__141->Draw("elp");
   
   TH1D *zero__142 = new TH1D("zero__142","",20,15,1000);
   zero__142->SetBinError(1,0.000457691);
   zero__142->SetBinError(2,0.0004370043);
   zero__142->SetBinError(3,0.0005905301);
   zero__142->SetBinError(4,0.000692613);
   zero__142->SetBinError(5,0.0004578204);
   zero__142->SetBinError(6,0.0001589593);
   zero__142->SetBinError(7,0.000112838);
   zero__142->SetBinError(8,8.263825e-05);
   zero__142->SetBinError(9,6.509554e-05);
   zero__142->SetBinError(10,5.121481e-05);
   zero__142->SetBinError(11,4.07332e-05);
   zero__142->SetBinError(12,3.289798e-05);
   zero__142->SetBinError(13,2.769451e-05);
   zero__142->SetBinError(14,2.321427e-05);
   zero__142->SetBinError(15,1.995063e-05);
   zero__142->SetBinError(16,1.561205e-05);
   zero__142->SetBinError(17,1.337493e-05);
   zero__142->SetBinError(18,1.078322e-05);
   zero__142->SetBinError(19,1.078322e-05);
   zero__142->SetBinError(20,8.972177e-06);
   zero__142->SetEntries(668754);
   zero__142->SetStats(0);
   zero__142->SetLineWidth(3);
   zero__142->SetMarkerStyle(20);
   zero__142->SetMarkerSize(2);
   zero__142->GetXaxis()->SetTitle("leading isojet p_{T} [GeV]");
   zero__142->GetXaxis()->SetLabelFont(42);
   zero__142->GetXaxis()->SetLabelOffset(0.007);
   zero__142->GetXaxis()->SetTitleSize(0.05);
   zero__142->GetXaxis()->SetTickLength(0.025);
   zero__142->GetXaxis()->SetTitleFont(42);
   zero__142->GetYaxis()->SetTitle("a.u.");
   zero__142->GetYaxis()->SetLabelFont(42);
   zero__142->GetYaxis()->SetLabelOffset(0.007);
   zero__142->GetYaxis()->SetTitleSize(0.05);
   zero__142->GetYaxis()->SetTickLength(0.025);
   zero__142->GetYaxis()->SetTitleFont(42);
   zero__142->GetZaxis()->SetLabelFont(42);
   zero__142->GetZaxis()->SetLabelOffset(0.007);
   zero__142->GetZaxis()->SetTitleSize(0.05);
   zero__142->GetZaxis()->SetTickLength(0.025);
   zero__142->GetZaxis()->SetTitleFont(42);
   zero__142->Draw("hist same");
   
   TH1D *sumratioup__143 = new TH1D("sumratioup__143","",20,15,1000);
   sumratioup__143->SetBinContent(1,0.009478037);
   sumratioup__143->SetBinContent(2,0.01060109);
   sumratioup__143->SetBinContent(3,0.01028788);
   sumratioup__143->SetBinContent(4,0.01040727);
   sumratioup__143->SetBinContent(5,0.01107477);
   sumratioup__143->SetBinContent(6,0.0175156);
   sumratioup__143->SetBinContent(7,0.020058);
   sumratioup__143->SetBinContent(8,0.0238465);
   sumratioup__143->SetBinContent(9,0.02807753);
   sumratioup__143->SetBinContent(10,0.03455219);
   sumratioup__143->SetBinContent(11,0.04148978);
   sumratioup__143->SetBinContent(12,0.04858784);
   sumratioup__143->SetBinContent(13,0.0614801);
   sumratioup__143->SetBinContent(14,0.06878958);
   sumratioup__143->SetBinContent(15,0.08727601);
   sumratioup__143->SetBinContent(16,0.0931367);
   sumratioup__143->SetBinContent(17,0.1149289);
   sumratioup__143->SetBinContent(18,0.1452596);
   sumratioup__143->SetBinContent(19,0.1546716);
   sumratioup__143->SetBinContent(20,0.2119714);
   sumratioup__143->SetBinError(1,0.001285237);
   sumratioup__143->SetBinError(2,0.001371737);
   sumratioup__143->SetBinError(3,0.002292562);
   sumratioup__143->SetBinError(4,0.003316569);
   sumratioup__143->SetBinError(5,0.001658296);
   sumratioup__143->SetBinError(6,0.000323855);
   sumratioup__143->SetBinError(7,0.000182582);
   sumratioup__143->SetBinError(8,0.0001349839);
   sumratioup__143->SetBinError(9,9.825635e-05);
   sumratioup__143->SetBinError(10,7.647366e-05);
   sumratioup__143->SetBinError(11,6.255139e-05);
   sumratioup__143->SetBinError(12,5.212022e-05);
   sumratioup__143->SetBinError(13,3.972906e-05);
   sumratioup__143->SetBinError(14,3.475123e-05);
   sumratioup__143->SetBinError(15,2.809362e-05);
   sumratioup__143->SetBinError(16,2.69359e-05);
   sumratioup__143->SetBinError(17,2.08108e-05);
   sumratioup__143->SetBinError(18,1.576618e-05);
   sumratioup__143->SetBinError(19,1.481219e-05);
   sumratioup__143->SetBinError(20,1.130555e-05);
   sumratioup__143->SetEntries(668794);
   sumratioup__143->SetStats(0);

   ci = 1195;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratioup__143->SetFillColor(ci);
   sumratioup__143->SetFillStyle(3003);
   sumratioup__143->GetXaxis()->SetTitle("leading isojet p_{T} [GeV]");
   sumratioup__143->GetXaxis()->SetLabelFont(42);
   sumratioup__143->GetXaxis()->SetLabelOffset(0.007);
   sumratioup__143->GetXaxis()->SetTitleSize(0.05);
   sumratioup__143->GetXaxis()->SetTickLength(0.025);
   sumratioup__143->GetXaxis()->SetTitleFont(42);
   sumratioup__143->GetYaxis()->SetTitle("a.u.");
   sumratioup__143->GetYaxis()->SetLabelFont(42);
   sumratioup__143->GetYaxis()->SetLabelOffset(0.007);
   sumratioup__143->GetYaxis()->SetTitleSize(0.05);
   sumratioup__143->GetYaxis()->SetTickLength(0.025);
   sumratioup__143->GetYaxis()->SetTitleFont(42);
   sumratioup__143->GetZaxis()->SetLabelFont(42);
   sumratioup__143->GetZaxis()->SetLabelOffset(0.007);
   sumratioup__143->GetZaxis()->SetTitleSize(0.05);
   sumratioup__143->GetZaxis()->SetTickLength(0.025);
   sumratioup__143->GetZaxis()->SetTitleFont(42);
   sumratioup__143->Draw("hist same");
   
   TH1D *sumratiodown__144 = new TH1D("sumratiodown__144","",20,15,1000);
   sumratiodown__144->SetBinContent(1,-0.009478037);
   sumratiodown__144->SetBinContent(2,-0.01060109);
   sumratiodown__144->SetBinContent(3,-0.01028788);
   sumratiodown__144->SetBinContent(4,-0.01040727);
   sumratiodown__144->SetBinContent(5,-0.01107477);
   sumratiodown__144->SetBinContent(6,-0.0175156);
   sumratiodown__144->SetBinContent(7,-0.020058);
   sumratiodown__144->SetBinContent(8,-0.0238465);
   sumratiodown__144->SetBinContent(9,-0.02807753);
   sumratiodown__144->SetBinContent(10,-0.03455219);
   sumratiodown__144->SetBinContent(11,-0.04148978);
   sumratiodown__144->SetBinContent(12,-0.04858784);
   sumratiodown__144->SetBinContent(13,-0.0614801);
   sumratiodown__144->SetBinContent(14,-0.06878958);
   sumratiodown__144->SetBinContent(15,-0.08727601);
   sumratiodown__144->SetBinContent(16,-0.0931367);
   sumratiodown__144->SetBinContent(17,-0.1149289);
   sumratiodown__144->SetBinContent(18,-0.1452596);
   sumratiodown__144->SetBinContent(19,-0.1546716);
   sumratiodown__144->SetBinContent(20,-0.2119714);
   sumratiodown__144->SetBinError(1,0.001285237);
   sumratiodown__144->SetBinError(2,0.001371737);
   sumratiodown__144->SetBinError(3,0.002292562);
   sumratiodown__144->SetBinError(4,0.003316569);
   sumratiodown__144->SetBinError(5,0.001658296);
   sumratiodown__144->SetBinError(6,0.000323855);
   sumratiodown__144->SetBinError(7,0.000182582);
   sumratiodown__144->SetBinError(8,0.0001349839);
   sumratiodown__144->SetBinError(9,9.825635e-05);
   sumratiodown__144->SetBinError(10,7.647366e-05);
   sumratiodown__144->SetBinError(11,6.255139e-05);
   sumratiodown__144->SetBinError(12,5.212022e-05);
   sumratiodown__144->SetBinError(13,3.972906e-05);
   sumratiodown__144->SetBinError(14,3.475123e-05);
   sumratiodown__144->SetBinError(15,2.809362e-05);
   sumratiodown__144->SetBinError(16,2.69359e-05);
   sumratiodown__144->SetBinError(17,2.08108e-05);
   sumratiodown__144->SetBinError(18,1.576618e-05);
   sumratiodown__144->SetBinError(19,1.481219e-05);
   sumratiodown__144->SetBinError(20,1.130555e-05);
   sumratiodown__144->SetEntries(668794);
   sumratiodown__144->SetStats(0);

   ci = 1195;
   color = new TColor(ci, 0, 0, 0, " ", 0.99);
   sumratiodown__144->SetFillColor(ci);
   sumratiodown__144->SetFillStyle(3003);
   sumratiodown__144->GetXaxis()->SetTitle("leading isojet p_{T} [GeV]");
   sumratiodown__144->GetXaxis()->SetLabelFont(42);
   sumratiodown__144->GetXaxis()->SetLabelOffset(0.007);
   sumratiodown__144->GetXaxis()->SetTitleSize(0.05);
   sumratiodown__144->GetXaxis()->SetTickLength(0.025);
   sumratiodown__144->GetXaxis()->SetTitleFont(42);
   sumratiodown__144->GetYaxis()->SetTitle("a.u.");
   sumratiodown__144->GetYaxis()->SetLabelFont(42);
   sumratiodown__144->GetYaxis()->SetLabelOffset(0.007);
   sumratiodown__144->GetYaxis()->SetTitleSize(0.05);
   sumratiodown__144->GetYaxis()->SetTickLength(0.025);
   sumratiodown__144->GetYaxis()->SetTitleFont(42);
   sumratiodown__144->GetZaxis()->SetLabelFont(42);
   sumratiodown__144->GetZaxis()->SetLabelOffset(0.007);
   sumratiodown__144->GetZaxis()->SetTitleSize(0.05);
   sumratiodown__144->GetZaxis()->SetTickLength(0.025);
   sumratiodown__144->GetZaxis()->SetTitleFont(42);
   sumratiodown__144->Draw("hist same");
   
   Double_t Graph0_fx1016[20] = {
   39.625,
   88.875,
   138.125,
   187.375,
   236.625,
   285.875,
   335.125,
   384.375,
   433.625,
   482.875,
   532.125,
   581.375,
   630.625,
   679.875,
   729.125,
   778.375,
   827.625,
   876.875,
   926.125,
   975.375};
   Double_t Graph0_fy1016[20] = {
   0.03307831,
   -0.01302904,
   0.04650748,
   0.00665915,
   -0.06391233,
   -0.08609825,
   -0.06460774,
   -0.1932145,
   -0.1902442,
   -0.2074835,
   -0.2640393,
   -0.3252959,
   -0.2062806,
   -0.2866279,
   -0.1730985,
   -0.436411,
   -0.3393415,
   -0.2835791,
   -0.1880274,
   0.00933373};
   Double_t Graph0_fex1016[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
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
   Double_t Graph0_fey1016[20] = {
   0.003375262,
   0.003377266,
   0.002650006,
   0.002173394,
   0.00305751,
   0.008597265,
   0.0123961,
   0.01459902,
   0.01860156,
   0.02313979,
   0.02701797,
   0.03066837,
   0.04285681,
   0.04595234,
   0.06197888,
   0.05398203,
   0.07386386,
   0.09934971,
   0.1126003,
   0.1682223};
   TGraphErrors *gre = new TGraphErrors(20,Graph0_fx1016,Graph0_fy1016,Graph0_fex1016,Graph0_fey1016);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph1016 = new TH1F("Graph_Graph1016","Graph",100,0,1068.95);
   Graph_Graph1016->SetMinimum(-0.557188);
   Graph_Graph1016->SetMaximum(0.2443509);
   Graph_Graph1016->SetDirectory(0);
   Graph_Graph1016->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1016->SetLineColor(ci);
   Graph_Graph1016->GetXaxis()->SetLabelFont(42);
   Graph_Graph1016->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1016->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1016->GetXaxis()->SetTickLength(0.025);
   Graph_Graph1016->GetXaxis()->SetTitleFont(42);
   Graph_Graph1016->GetYaxis()->SetLabelFont(42);
   Graph_Graph1016->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1016->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph1016->GetYaxis()->SetTickLength(0.025);
   Graph_Graph1016->GetYaxis()->SetTitleFont(42);
   Graph_Graph1016->GetZaxis()->SetLabelFont(42);
   Graph_Graph1016->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1016->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph1016->GetZaxis()->SetTickLength(0.025);
   Graph_Graph1016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1016);
   
   gre->Draw("pe0");
   pad2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
