#ifndef VISCOUS_H
#define VISCOUS_H

#include "Constants.H"
#include "IndexDefines.H"
#include "LiDryer.H"

static const Real visccoeff[NSPECS][5] = {{-1.85174759e-04,  3.89197447e-04, -6.98160471e-05,  6.36454790e-06, -2.11216442e-07},
                                            {-5.80149070e-03,  3.39295201e-03, -6.36767978e-04,  5.43779133e-05, -1.73237416e-06},
                                            { 1.49332282e-02, -8.19367041e-03,  1.68282727e-03, -1.45738528e-04,  4.60116686e-06},
                                            {-5.03440195e-03,  2.77694310e-03, -5.05779281e-04,  4.17970313e-05, -1.28989348e-06},
                                            {-4.25439228e-03,  2.69409815e-03, -5.12461257e-04,  4.46919118e-05, -1.45052986e-06},
                                            {-4.31987570e-03,  2.73556559e-03, -5.20349037e-04,  4.53798077e-05, -1.47285635e-06},
                                            {-5.84665026e-03,  3.41936319e-03, -6.41724663e-04,  5.48011981e-05, -1.74585918e-06},
                                            {-5.89078698e-03,  3.44517618e-03, -6.46569083e-04,  5.52148957e-05, -1.75903878e-06},
                                            {-4.86883676e-03,  2.91081563e-03, -5.49840279e-04,  4.73395563e-05, -1.51957597e-06}};


static const Real conuctcoeff[NSPECS][5] = {{-5.28463600e-01,  3.15473947e-01, -6.87861093e-02,  6.58583530e-03, -2.30878456e-04},
                                              { 3.45755008e-02, -2.10056875e-02,  4.78193956e-03, -4.69828968e-04,  1.73609698e-05},
                                              {-2.42370932e-01,  1.55066730e-01, -3.67910197e-02,  3.82882196e-03, -1.45626051e-04},
                                              {-2.05169993e-01,  1.03579992e-01, -1.83028199e-02,  1.47068561e-03, -4.35660111e-05},
                                              { 5.22190001e-02, -3.07414624e-02,  7.02757543e-03, -7.03400778e-04,  2.64083229e-05},
                                              {-1.41026759e-01,  8.85651492e-02, -2.02651378e-02,  2.03706447e-03, -7.50266004e-05},
                                              {-7.12040025e-02,  4.31981643e-02, -9.82859052e-03,  1.00407694e-03, -3.78442817e-05},
                                              {-1.18157269e-02,  9.27318610e-03, -2.71924641e-03,  3.59761794e-04, -1.62746865e-05},
                                              { 4.77081884e-02, -2.51859514e-02,  4.94733498e-03, -4.15782937e-04,  1.29219096e-05}};

                                            
static const Real diffcoeff[45][5] = {{-0.006098424587788583,0.004074726320140367,-0.0007655079217743792,7.01945414920243e-05,-2.283978048241683e-06},
                                        {-0.007361772345996411,0.0042187108652972285,-0.0007832424157195558,6.805076239783791e-05,-2.1468141590124147e-06},
                                        {-0.012714368881604958,0.005800464307529211,-0.0008628173792959883,5.797865818973548e-05,-1.3148664989894858e-06},
                                        {-0.02331895278393948,0.012988306044054893,-0.0023909974764966175,0.00020481645048811995,-6.393432695483336e-06},
                                        {-0.008203316666546017,0.004854681011212246,-0.0009069544030339767,7.98972126021157e-05,-2.5440602562722086e-06},
                                        {-0.008176066416389936,0.004838554451993892,-0.0009039416296196897,7.963180543591231e-05,-2.535609250271386e-06},
                                        {-0.007355106588534061,0.004214891010226138,-0.000782533224544873,6.798914545886926e-05,-2.144870314265137e-06},
                                        {-0.00734883038938788,0.0042112943940458315,-0.0007818654797209853,6.793112951970908e-05,-2.143040071146875e-06},
                                        {-0.006631024777860074,0.0038397370846872426,-0.0007137696048348218,6.226499117199988e-05,-1.968810850179303e-06},
                                        {-0.003165622529780972,0.0016565295961648823,-0.0002955102867456441,2.4323268960998937e-05,-7.332687938295335e-07},
                                        {0.0017962300955720687,-0.0016252040565658543,0.00047039226523034656,-5.1041731991760684e-05,1.9707403545544835e-06},
                                        {-0.02065558573348347,0.01049932817565325,-0.0018228205967741945,0.00014586133392843038,-4.265266434634806e-06},
                                        {-0.004477615809775433,0.002401743913536847,-0.00043555046112257176,3.6523201605646507e-05,-1.1207561496132533e-06},
                                        {-0.004388261916818509,0.002353815467310766,-0.00042685875309455987,3.579435608041233e-05,-1.0983906923530078e-06},
                                        {-0.003141360101617588,0.0016438333792438298,-0.0002932453934942289,2.4136846998057358e-05,-7.276487676670712e-07},
                                        {-0.0031183633828342915,0.001631799491779716,-0.00029109865398359785,2.3960150196485035e-05,-7.223219240282344e-07},
                                        {-0.0030766151054801255,0.001623930137648841,-0.0002916902121621802,2.4185952795909278e-05,-7.345781692660118e-07},
                                        {0.015418678757875483,-0.008276025270343653,0.0016022988850484384,-0.0001292488075144311,3.7780416116707573e-06},
                                        {0.015491646067634311,-0.012297762819716031,0.0033220236270480115,-0.00034981378874120536,1.3233960398093872e-05},
                                        {-0.0031409034359764906,0.000964215499007546,-1.5256977763517157e-05,-1.0009613901179592e-05,6.865263141553794e-07},
                                        {-0.00309121182555696,0.0009489608368058763,-1.501560014564807e-05,-9.851253784321545e-06,6.756649174673959e-07},
                                        {-9.806367280891379e-05,-0.0005259982739909082,0.00023777270488750687,-2.9610758656448636e-05,1.2409556192468912e-06},
                                        {-9.754926582674518e-05,-0.0005232390750052945,0.00023652543424357053,-2.945543119768198e-05,1.2344460095131642e-06},
                                        {0.0009009636432407803,-0.0010975268417085945,0.0003568805024623778,-4.047906132942509e-05,1.6078992712041145e-06},
                                        {-0.049547371639744826,0.02420786673131437,-0.0040039853524907396,0.0003046592732139884,-8.373772281551857e-06},
                                        {-0.027018754679375097,0.014131423473429378,-0.0025198932193017465,0.00020732039220446453,-6.247265305088386e-06},
                                        {-0.026971255852400414,0.01410658050614936,-0.002515463260429814,0.00020695592405809058,-6.236282645924077e-06},
                                        {-0.020645950902716106,0.01049443074735431,-0.0018219703392133265,0.00014579329667774188,-4.2632768943398505e-06},
                                        {-0.02063688301930936,0.010489821500976207,-0.0018211701137997654,0.00014572926297830028,-4.261404425595428e-06},
                                        {-0.019430526862365516,0.00997359743800644,-0.0017481642351558765,0.00014128443680858248,-4.177030598880565e-06},
                                        {-0.0059382904901673595,0.0032649962117391896,-0.0005991311922260038,5.1014036740744293e-05,-1.5859623241784843e-06},
                                        {-0.00584963856139101,0.0032162535286223044,-0.0005901868443753459,5.02524551442533e-05,-1.5622857089560921e-06},
                                        {-0.0044547665185479274,0.0023894878048250404,-0.00043332784539284135,3.633682356306633e-05,-1.1150369265388267e-06},
                                        {-0.004433163993709295,0.0023779004479025216,-0.00043122650618556915,3.616061519603177e-05,-1.109629771571358e-06},
                                        {-0.00419972224671333,0.0022703026942310655,-0.0004131673665395828,3.48089622951453e-05,-1.0723125190961097e-06},
                                        {-0.005759622266467147,0.003166760688484433,-0.0005811048417034481,4.947915269564291e-05,-1.538244707164061e-06},
                                        {-0.004364944907483492,0.002341308479746039,-0.0004245906410903713,3.5604162935439344e-05,-1.0925543985047233e-06},
                                        {-0.004342895613050795,0.0023294814805234227,-0.0004224458433307047,3.542431033976762e-05,-1.0870354162206174e-06},
                                        {-0.004119743857368838,0.0022270676557828092,-0.0004052991175070151,3.414606970952483e-05,-1.05189168573903e-06},
                                        {-0.003116908817255142,0.0016310383363007772,-0.00029096287055129454,2.3948973946122656e-05,-7.219849958113728e-07},
                                        {-0.0030937303493271603,0.0016189093418438713,-0.00028879916479071873,2.37708806629901e-05,-7.166160527175076e-07},
                                        {-0.0030546059172749706,0.0016123130250736487,-0.00028960354725398777,2.40129336925455e-05,-7.293232158117316e-07},
                                        {-0.003070376910660832,0.001606688787447522,-0.00028661912554336986,2.35914429806519e-05,-7.112065802854437e-07},
                                        {-0.0030337554543677816,0.0016013075226178426,-0.00028762673971045356,2.3849023585380798e-05,-7.243449216977582e-07},
                                        {-0.0029800170761932095,0.0015859694924580709,-0.000286608674495536,2.3921390316404743e-05,-7.312450753144484e-07}};

AMREX_GPU_DEVICE
AMREX_FORCE_INLINE
Real dot5(const Real (&x)[5], const Real (&y)[5]) noexcept
{
    return x[0]*y[0] + x[1]*y[1] + x[2]*y[2] + x[3]*y[3] +
           x[4]*y[4];
}

/* viscosity: Pa-s
   conductivity: W/m/K */
AMREX_GPU_DEVICE
AMREX_FORCE_INLINE
void mixtureProperties(Real T, const Real* X, Real &mu, Real &lambda) {
    Real mui[NSPECS], sqmui[NSPECS], lambdai[NSPECS];
    Real phi[NSPECS][NSPECS] = {{0.0}};
    Real sqT = sqrt(T), logT = log(T);
    Real sqsqT = sqrt(sqT);
    Real polytempvec[5] = {1.0, logT, logT*logT, logT*logT*logT, logT*logT*logT*logT};

    for (size_t k = 0; k < NSPECS; k++) {
        // the polynomial fit is done for sqrt(visc/sqrt(T))
        sqmui[k] = sqsqT * dot5(polytempvec, visccoeff[k]);
        lambdai[k] = sqT * dot5(polytempvec, conuctcoeff[k]);
        mui[k] = (sqmui[k] * sqmui[k]);
    }

    Real sum1 = 0.0, sum2 = 0.0;
    for (size_t k = 0; k < NSPECS; k++) {
            sum1 += X[k] * lambdai[k];
            sum2 += X[k] / lambdai[k];
    }
    lambda = 0.5*(sum1 + 1.0/sum2);

    // Wilke fit, see Eq. (9-5.14) of Poling et al. (2001)
    for (size_t k = 0; k < NSPECS; k++) {
        for (size_t j = 0; j < k; j++) {
            Real wratiojk = mw[j]/mw[k];
            Real vratiokj = mui[k]/mui[j];

            Real factor1 = 1.0 + (sqmui[k]/sqmui[j]) * sqrt(sqrt(wratiojk));
            Real tmp = factor1*factor1 / sqrt(8.0+8.0*mw[k]/mw[j]);
            phi[k][j] = tmp;
            phi[j][k] = tmp / (vratiokj * wratiojk);
        }
        phi[k][k] = 1.0;
    }

    mu = 0;
    for (size_t k = 0; k < NSPECS; k++) {
        Real tmp = 0;
        for (size_t j = 0; j < NSPECS; j++) {
            tmp += X[j] * phi[k][j];
        }
        mu += X[k]*mui[k]/tmp;
    }
}

/* Returns the mixture-averaged diffusion coefficients [m^2/s].
   computed according to Eq. 12.178 in "Chemically Reacting Flow"*/
AMREX_GPU_DEVICE
AMREX_FORCE_INLINE
void getMixDiffCoeffsMass(Real T, Real p, const Real* X, Real* d) noexcept
{
    Real logT = log(T);
    Real polytempvec[5] = {1.0, logT, logT*logT, logT*logT*logT, logT*logT*logT*logT};
    Real bdiff[NSPECS][NSPECS];

    size_t ic = 0;
    for (size_t i = 0; i < NSPECS; i++) {
        for (size_t j = i; j < NSPECS; j++) {
            bdiff[i][j] = T * sqrt(T) *dot5(polytempvec,diffcoeff[ic]);
            bdiff[j][i] = bdiff[i][j];
            ic++;
        }
    }

    Real mmw = 0;
    for (int n=0;n<NSPECS; ++n) {
        mmw += X[n]*mw[n];
    }
 
    for (size_t k=0; k<NSPECS; k++) {
        Real sum1 = 0.0;
        Real sum2 = 0.0;
        for (size_t i=0; i<NSPECS; i++) {
            if (i==k) {
                continue;
            }
            sum1 += X[i] / bdiff[k][i];
            sum2 += X[i] * mw[i] / bdiff[k][i];
        }
        sum1 *= p;
        sum2 *= p * X[k] / (mmw - mw[k]*X[k]);
        d[k] = 1.0 / (sum1 + sum2);
    }
}

AMREX_GPU_DEVICE
AMREX_FORCE_INLINE
void
diffusion_x (int i, int j, int k,
             amrex::Array4<amrex::Real const> const& q,
             amrex::Array4<amrex::Real const> const& rhoi,
             amrex::Array4<amrex::Real> const& fx,
             amrex::GpuArray<amrex::Real,AMREX_SPACEDIM> const& dxinv,
             Parm const& parm) noexcept
{
    using amrex::Real;
    Real rhor = q(i,j,k,QRHO);
    Real rhol = q(i-1,j,k,QRHO);
    Real Tr = q(i,j,k,QT);
    Real Tl = q(i-1,j,k,QT);
    Real pr = q(i,j,k,QPRES);
    Real pl = q(i-1,j,k,QPRES);
    Real di[NSPECS], Ytr[NSPECS], Ytl[NSPECS], Yt[NSPECS], Xt[NSPECS];

    for (int n=0; n<NSPECS; ++n) {
        Ytr[n] = rhoi(i,j,k,n) / rhor;
        Ytl[n] = rhoi(i-1,j,k,n) / rhol;
        Yt[n] = 0.5 * (Ytr[n] + Ytl[n]);
    }
    CKYTX(Yt, Xt);
    Real T = 0.5*(Tr + Tl);
    Real p = 0.5*(pr + pl);
    Real rho = 0.5*(rhor + rhol);
    getMixDiffCoeffsMass(T, p, Xt, di);

    for (int n=0; n<NSPECS; ++n) {
        fx(i,j,k,n) += rho * di[n] * (Ytl[n] - Ytr[n]) * dxinv[0];
    }
}

AMREX_GPU_DEVICE
AMREX_FORCE_INLINE
void
diffusion_y (int i, int j, int k,
             amrex::Array4<amrex::Real const> const& q,
             amrex::Array4<amrex::Real const> const& rhoi,
             amrex::Array4<amrex::Real> const& fy,
             amrex::GpuArray<amrex::Real,AMREX_SPACEDIM> const& dxinv,
             Parm const& parm) noexcept
{
    using amrex::Real;
    Real rhor = q(i,j,k,QRHO);
    Real rhol = q(i,j-1,k,QRHO);
    Real Tr = q(i,j,k,QT);
    Real Tl = q(i,j-1,k,QT);
    Real pr = q(i,j,k,QPRES);
    Real pl = q(i,j-1,k,QPRES);
    Real di[NSPECS], Ytr[NSPECS], Ytl[NSPECS], Yt[NSPECS], Xt[NSPECS];

    for (int n=0; n<NSPECS; ++n) {
        Ytr[n] = rhoi(i,j,k,n) / rhor;
        Ytl[n] = rhoi(i,j-1,k,n) / rhol;
        Yt[n] = 0.5 * (Ytr[n] + Ytl[n]);
    }
    CKYTX(Yt, Xt);
    Real T = 0.5*(Tr + Tl);
    Real p = 0.5*(pr + pl);
    Real rho = 0.5*(rhor + rhol);
    getMixDiffCoeffsMass(T, p, Xt, di);

    for (int n=0; n<NSPECS; ++n) {
        fy(i,j,k,n) += rho * di[n] * (Ytl[n] - Ytr[n]) * dxinv[1];
    }
}

AMREX_GPU_DEVICE
AMREX_FORCE_INLINE
void
diffusion_z (int i, int j, int k,
             amrex::Array4<amrex::Real const> const& q,
             amrex::Array4<amrex::Real const> const& rhoi,
             amrex::Array4<amrex::Real> const& fz,
             amrex::GpuArray<amrex::Real,AMREX_SPACEDIM> const& dxinv,
             Parm const& parm) noexcept
{
    using amrex::Real;
    Real rhor = q(i,j,k,QRHO);
    Real rhol = q(i,j,k-1,QRHO);
    Real Tr = q(i,j,k,QT);
    Real Tl = q(i,j,k-1,QT);
    Real pr = q(i,j,k,QPRES);
    Real pl = q(i,j,k-1,QPRES);
    Real di[NSPECS], Ytr[NSPECS], Ytl[NSPECS], Yt[NSPECS], Xt[NSPECS];

    for (int n=0; n<NSPECS; ++n) {
        Ytr[n] = rhoi(i,j,k,n) / rhor;
        Ytl[n] = rhoi(i,j,k-1,n) / rhol;
        Yt[n] = 0.5 * (Ytr[n] + Ytl[n]);
    }
    CKYTX(Yt, Xt);
    Real T = 0.5*(Tr + Tl);
    Real p = 0.5*(pr + pl);
    Real rho = 0.5*(rhor + rhol);
    getMixDiffCoeffsMass(T, p, Xt, di);

    for (int n=0; n<NSPECS; ++n) {
        fz(i,j,k,n) += rho * di[n] * (Ytl[n] - Ytr[n]) * dxinv[2];
    }
}

AMREX_GPU_DEVICE
AMREX_FORCE_INLINE
void
compute_visc_x_multi(int i, int j, int k,
             amrex::Array4<amrex::Real const> const& q,
             amrex::Array4<amrex::Real const> const& rhoi,
             amrex::Array4<amrex::Real> const& fx,
             amrex::GpuArray<amrex::Real,AMREX_SPACEDIM> const& dxinv,
             Parm const& parm) noexcept
{
    using amrex::Real;
    // first compute temperature
    Real Tl = q(i,j,k,QT);
    Real Tr = q(i-1,j,k,QT);
    Real T = 0.5*(Tl + Tr);
    // derive mu and k
    Real mu, lambda;
    Real rhor = q(i,j,k,QRHO);
    Real rhol = q(i-1,j,k,QRHO);
    Real p = 0.5*(q(i,j,k,QPRES) + q(i-1,j,k,QPRES));
    Real di[NSPECS], Ytr[NSPECS], Ytl[NSPECS], Yt[NSPECS], Xt[NSPECS], hi[NSPECS];
    for (int n=0; n<NSPECS; ++n) {
        Ytr[n] = rhoi(i,j,k,n) / rhor;
        Ytl[n] = rhoi(i-1,j,k,n) / rhol;
        Yt[n] = 0.5 * (Ytr[n] + Ytl[n]);
    }
    CKYTX(Yt, Xt);
    mixtureProperties(T, Xt, mu, lambda);
    speciesEnthalpy(T, hi);
    Real tmp = 0;
    getMixDiffCoeffsMass(T, p, Xt, di);
    for (int n=0; n<NSPECS; ++n) {
        tmp += di[n] * (Ytl[n] - Ytr[n]) * dxinv[0] * hi[n];
    }
    tmp *= 0.5*(rhol + rhor);

    Real dTdx = (Tl-Tr)*dxinv[0];
    Real dudx = (q(i,j,k,QU)-q(i-1,j,k,QU))*dxinv[0];
    Real dvdx = (q(i,j,k,QV)-q(i-1,j,k,QV))*dxinv[0];
    Real dwdx = (q(i,j,k,QW)-q(i-1,j,k,QW))*dxinv[0];
    Real dudy = (q(i,j+1,k,QU)+q(i-1,j+1,k,QU)-q(i,j-1,k,QU)-q(i-1,j-1,k,QU))*(Real(0.25)*dxinv[1]);
    Real dvdy = (q(i,j+1,k,QV)+q(i-1,j+1,k,QV)-q(i,j-1,k,QV)-q(i-1,j-1,k,QV))*(Real(0.25)*dxinv[1]);
    Real dudz = (q(i,j,k+1,QU)+q(i-1,j,k+1,QU)-q(i,j,k-1,QU)-q(i-1,j,k-1,QU))*(Real(0.25)*dxinv[2]);
    Real dwdz = (q(i,j,k+1,QW)+q(i-1,j,k+1,QW)-q(i,j,k-1,QW)-q(i-1,j,k-1,QW))*(Real(0.25)*dxinv[2]);
    Real divu = dudx + dvdy + dwdz;
    Real tauxx = mu*(Real(2.0)*dudx-parm.twoThirds*divu);
    Real tauxy = mu*(dudy+dvdx);
    Real tauxz = mu*(dudz+dwdx);
    fx(i,j,k,UMX)   += -tauxx;
    fx(i,j,k,UMY)   += -tauxy;
    fx(i,j,k,UMZ)   += -tauxz;
    fx(i,j,k,UEDEN) += -Real(0.5)*((q(i,j,k,QU)+q(i-1,j,k,QU))*tauxx \
                                  +(q(i,j,k,QV)+q(i-1,j,k,QV))*tauxy \
                                  +(q(i,j,k,QW)+q(i-1,j,k,QW))*tauxz)
                                  - lambda*dTdx - tmp;
}

AMREX_GPU_DEVICE
AMREX_FORCE_INLINE
void
compute_visc_y_multi(int i, int j, int k,
             amrex::Array4<amrex::Real const> const& q,
             amrex::Array4<amrex::Real const> const& rhoi,
             amrex::Array4<amrex::Real> const& fy,
             amrex::GpuArray<amrex::Real,AMREX_SPACEDIM> const& dxinv,
             Parm const& parm) noexcept
{
    using amrex::Real;
    // first compute temperature
    Real Tl = q(i,j,k,QT);
    Real Tr = q(i,j-1,k,QT);
    Real T = 0.5*(Tl + Tr);
    // derive mu and k
    Real mu, lambda;
    Real rhor = q(i,j,k,QRHO);
    Real rhol = q(i,j-1,k,QRHO);
    Real p = 0.5*(q(i,j,k,QPRES) + q(i,j-1,k,QPRES));
    Real di[NSPECS], Ytr[NSPECS], Ytl[NSPECS], Yt[NSPECS], Xt[NSPECS], hi[NSPECS];
    for (int n=0; n<NSPECS; ++n) {
        Ytr[n] = rhoi(i,j,k,n) / rhor;
        Ytl[n] = rhoi(i,j-1,k,n) / rhol;
        Yt[n] = 0.5 * (Ytr[n] + Ytl[n]);
    }
    CKYTX(Yt, Xt);
    mixtureProperties(T, Xt, mu, lambda);
    speciesEnthalpy(T, hi);
    Real tmp = 0;
    getMixDiffCoeffsMass(T, p, Xt, di);
    for (int n=0; n<NSPECS; ++n) {
        tmp += di[n] * (Ytl[n] - Ytr[n]) * dxinv[1] * hi[n];
    }
    tmp *= 0.5*(rhol + rhor);

    Real dTdy = (Tl-Tr)*dxinv[1];
    Real dudy = (q(i,j,k,QU)-q(i,j-1,k,QU))*dxinv[1];
    Real dvdy = (q(i,j,k,QV)-q(i,j-1,k,QV))*dxinv[1];
    Real dwdy = (q(i,j,k,QW)-q(i,j-1,k,QW))*dxinv[1];
    Real dudx = (q(i+1,j,k,QU)+q(i+1,j-1,k,QU)-q(i-1,j,k,QU)-q(i-1,j-1,k,QU))*(Real(0.25)*dxinv[0]);
    Real dvdx = (q(i+1,j,k,QV)+q(i+1,j-1,k,QV)-q(i-1,j,k,QV)-q(i-1,j-1,k,QV))*(Real(0.25)*dxinv[0]);
    Real dvdz = (q(i,j,k+1,QV)+q(i,j-1,k+1,QV)-q(i,j,k-1,QV)-q(i,j-1,k-1,QV))*(Real(0.25)*dxinv[2]);
    Real dwdz = (q(i,j,k+1,QW)+q(i,j-1,k+1,QW)-q(i,j,k-1,QW)-q(i,j-1,k-1,QW))*(Real(0.25)*dxinv[2]);
    Real divu = dudx + dvdy + dwdz;
    Real tauyy = mu*(Real(2.0)*dvdy-parm.twoThirds*divu);
    Real tauxy = mu*(dudy+dvdx);
    Real tauyz = mu*(dwdy+dvdz);
    fy(i,j,k,UMX)   += -tauxy;
    fy(i,j,k,UMY)   += -tauyy;
    fy(i,j,k,UMZ)   += -tauyz;
    fy(i,j,k,UEDEN) += -Real(0.5)*((q(i,j,k,QU)+q(i,j-1,k,QU))*tauxy \
                                  +(q(i,j,k,QV)+q(i,j-1,k,QV))*tauyy \
                                  +(q(i,j,k,QW)+q(i,j-1,k,QW))*tauyz)
                                  - lambda*dTdy - tmp;
}

AMREX_GPU_DEVICE
AMREX_FORCE_INLINE
void
compute_visc_z_multi(int i, int j, int k,
             amrex::Array4<amrex::Real const> const& q,
             amrex::Array4<amrex::Real const> const& rhoi,
             amrex::Array4<amrex::Real> const& fz,
             amrex::GpuArray<amrex::Real,AMREX_SPACEDIM> const& dxinv,
             Parm const& parm) noexcept
{
    using amrex::Real;
    // first compute temperature
    Real Tl = q(i,j,k,QT);
    Real Tr = q(i,j,k-1,QT);
    Real T = 0.5*(Tl + Tr);
    // derive mu and k
    Real mu, lambda;
    Real rhor = q(i,j,k,QRHO);
    Real rhol = q(i,j,k-1,QRHO);
    Real p = 0.5*(q(i,j,k,QPRES) + q(i,j,k-1,QPRES));
    Real di[NSPECS], Ytr[NSPECS], Ytl[NSPECS], Yt[NSPECS], Xt[NSPECS], hi[NSPECS];
    for (int n=0; n<NSPECS; ++n) {
        Ytr[n] = rhoi(i,j,k,n) / rhor;
        Ytl[n] = rhoi(i,j,k-1,n) / rhol;
        Yt[n] = 0.5 * (Ytr[n] + Ytl[n]);
    }
    CKYTX(Yt, Xt);
    mixtureProperties(T, Xt, mu, lambda);
    speciesEnthalpy(T, hi);
    Real tmp = 0;
    getMixDiffCoeffsMass(T, p, Xt, di);
    for (int n=0; n<NSPECS; ++n) {
        tmp += di[n] * (Ytl[n] - Ytr[n]) * dxinv[2] * hi[n];
    }
    tmp *= 0.5*(rhol + rhor);

    Real dTdz = (Tl-Tr)*dxinv[2];
    Real dudz = (q(i,j,k,QU)-q(i,j,k-1,QU))*dxinv[2];
    Real dvdz = (q(i,j,k,QV)-q(i,j,k-1,QV))*dxinv[2];
    Real dwdz = (q(i,j,k,QW)-q(i,j,k-1,QW))*dxinv[2];
    Real dudx = (q(i+1,j,k,QU)+q(i+1,j,k-1,QU)-q(i-1,j,k,QU)-q(i-1,j,k-1,QU))*(Real(0.25)*dxinv[0]);
    Real dwdx = (q(i+1,j,k,QW)+q(i+1,j,k-1,QW)-q(i-1,j,k,QW)-q(i-1,j,k-1,QW))*(Real(0.25)*dxinv[0]);
    Real dvdy = (q(i,j+1,k,QV)+q(i,j+1,k-1,QV)-q(i,j-1,k,QV)-q(i,j-1,k-1,QV))*(Real(0.25)*dxinv[1]);
    Real dwdy = (q(i,j+1,k,QW)+q(i,j+1,k-1,QW)-q(i,j-1,k,QW)-q(i,j-1,k-1,QW))*(Real(0.25)*dxinv[1]);
    Real divu = dudx + dvdy + dwdz;
    Real tauxz = mu*(dudz+dwdx);
    Real tauyz = mu*(dvdz+dwdy);
    Real tauzz = mu*(Real(2.0)*dwdz-parm.twoThirds*divu);
    fz(i,j,k,UMX)   += -tauxz;
    fz(i,j,k,UMY)   += -tauyz;
    fz(i,j,k,UMZ)   += -tauzz;
    fz(i,j,k,UEDEN) += -Real(0.5)*((q(i,j,k,QU)+q(i,j,k-1,QU))*tauxz \
                                  +(q(i,j,k,QV)+q(i,j,k-1,QV))*tauyz \
                                  +(q(i,j,k,QW)+q(i,j,k-1,QW))*tauzz)
                                  - lambda*dTdz - tmp;
}
#endif